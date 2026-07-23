/*
 * XREFs of MmManageFaultRange @ 0x1401706A4
 * Callers:
 *     RtlpEnvRegisterFaultRange @ 0x140170658 (RtlpEnvRegisterFaultRange.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManageFaultRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3, char a4)
{
  ULONG_PTR v4; // rbp
  int v8; // r15d
  unsigned int v9; // ecx
  volatile signed __int64 *v10; // r9
  volatile signed __int64 *v11; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 *v15; // r14
  KIRQL v16; // al
  unsigned __int64 *v17; // rbx
  KIRQL v18; // r12
  bool v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v23; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v24; // [rsp+48h] [rbp-40h]
  ULONG_PTR v25; // [rsp+50h] [rbp-38h]

  v4 = BugCheckParameter4 + BugCheckParameter3 - 1;
  v8 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v9 = 0;
    v10 = (volatile signed __int64 *)&unk_140439C00;
    while ( 1 )
    {
      v11 = v10 - 3;
      if ( !*v10 && !_InterlockedCompareExchange64(v10, BugCheckParameter3, 0LL) )
        break;
      ++v9;
      v10 += 5;
      if ( v9 >= 2 )
        goto LABEL_5;
    }
    *((_QWORD *)v11 + 4) = v4;
LABEL_5:
    if ( v9 == 2 )
    {
      result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7641694Du);
      v11 = (volatile signed __int64 *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = BugCheckParameter3;
      *(_QWORD *)(result + 32) = v4;
    }
  }
  else
  {
    v24 = BugCheckParameter3;
    v11 = (volatile signed __int64 *)&v23;
    v25 = BugCheckParameter4 + BugCheckParameter3 - 1;
  }
  if ( (a3 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      KeBugCheckEx(0x1Au, 0x5230uLL, (ULONG_PTR)CurrentThread->ApcState.Process, BugCheckParameter3, BugCheckParameter4);
    v15 = (unsigned __int64 *)(Process[1].ActiveProcessors.Bitmap[2] + 8264);
  }
  else
  {
    v15 = (unsigned __int64 *)&unk_140439BE0;
  }
  v16 = ExAcquireSpinLockExclusive(&dword_140439BD8);
  v17 = (unsigned __int64 *)*v15;
  v18 = v16;
  if ( !v8 )
  {
    while ( v17 )
    {
      if ( *((_QWORD *)v11 + 3) > v17[4] )
      {
        v17 = (unsigned __int64 *)v17[1];
      }
      else
      {
        if ( *((_QWORD *)v11 + 4) >= v17[3] )
          break;
        v17 = (unsigned __int64 *)*v17;
      }
    }
    if ( v17[3] != BugCheckParameter3 || v17[4] != v4 )
      KeBugCheckEx(0x1Au, 0x5231uLL, (ULONG_PTR)v17, BugCheckParameter3, BugCheckParameter4);
    RtlAvlRemoveNode(v15, v17);
    goto LABEL_20;
  }
  v19 = 0;
  if ( !v17 )
    goto LABEL_19;
  while ( *((_QWORD *)v11 + 3) > v17[4] || *((_QWORD *)v11 + 4) >= v17[3] )
  {
    v20 = v17[1];
    if ( !v20 )
    {
      v19 = 1;
      goto LABEL_19;
    }
LABEL_42:
    v17 = (unsigned __int64 *)v20;
  }
  v20 = *v17;
  if ( *v17 )
    goto LABEL_42;
  v19 = 0;
LABEL_19:
  RtlAvlInsertNodeEx(v15, (unsigned __int64)v17, v19, v11);
  v17 = 0LL;
LABEL_20:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439BD8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v18);
  if ( v17 )
  {
    v21 = 0LL;
    while ( v17 != (unsigned __int64 *)((char *)&unk_140439BE8 + 40 * v21) )
    {
      v21 = (unsigned int)(v21 + 1);
      if ( (unsigned int)v21 >= 2 )
        goto LABEL_26;
    }
    v17 = 0LL;
LABEL_26:
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  return 1LL;
}
