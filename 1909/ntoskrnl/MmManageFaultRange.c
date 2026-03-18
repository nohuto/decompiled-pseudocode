/*
 * XREFs of MmManageFaultRange @ 0x14017A414
 * Callers:
 *     RtlpEnvRegisterFaultRange @ 0x14017A3C8 (RtlpEnvRegisterFaultRange.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManageFaultRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3, char a4)
{
  ULONG_PTR v8; // rbp
  int v9; // r12d
  unsigned int v10; // edx
  volatile signed __int64 *v11; // rcx
  volatile signed __int64 *v12; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 *v16; // r14
  KIRQL v17; // al
  unsigned __int64 *v18; // rbx
  KIRQL v19; // r15
  bool v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v24[6]; // [rsp+30h] [rbp-58h] BYREF

  memset(v24, 0, 0x28uLL);
  v8 = BugCheckParameter3 + BugCheckParameter4 - 1;
  v9 = a4 & 1;
  if ( v9 )
  {
    v10 = 0;
    v11 = (volatile signed __int64 *)&unk_140464218;
    while ( 1 )
    {
      v12 = v11 - 3;
      if ( !*v11 && !_InterlockedCompareExchange64(v11, BugCheckParameter3, 0LL) )
        break;
      ++v10;
      v11 += 5;
      if ( v10 >= 2 )
        goto LABEL_5;
    }
    *((_QWORD *)v12 + 4) = v8;
LABEL_5:
    if ( v10 == 2 )
    {
      result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7641694Du);
      v12 = (volatile signed __int64 *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = BugCheckParameter3;
      *(_QWORD *)(result + 32) = v8;
    }
  }
  else
  {
    v24[3] = BugCheckParameter3;
    v12 = v24;
    v24[4] = BugCheckParameter3 + BugCheckParameter4 - 1;
  }
  if ( (a3 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      KeBugCheckEx(0x1Au, 0x5230uLL, (ULONG_PTR)CurrentThread->ApcState.Process, BugCheckParameter3, BugCheckParameter4);
    v16 = (unsigned __int64 *)(Process[1].ActiveProcessors.Bitmap[1] + 1288);
  }
  else
  {
    v16 = (unsigned __int64 *)&unk_1404641F8;
  }
  v17 = ExAcquireSpinLockExclusive(&dword_1404641F0);
  v18 = (unsigned __int64 *)*v16;
  v19 = v17;
  if ( !v9 )
  {
    while ( v18 )
    {
      if ( *((_QWORD *)v12 + 3) > v18[4] )
      {
        v18 = (unsigned __int64 *)v18[1];
      }
      else
      {
        if ( *((_QWORD *)v12 + 4) >= v18[3] )
          break;
        v18 = (unsigned __int64 *)*v18;
      }
    }
    if ( v18[3] != BugCheckParameter3 || v18[4] != v8 )
      KeBugCheckEx(0x1Au, 0x5231uLL, (ULONG_PTR)v18, BugCheckParameter3, BugCheckParameter4);
    RtlAvlRemoveNode(v16, v18);
    goto LABEL_21;
  }
  v20 = 0;
  if ( !v18 )
    goto LABEL_20;
  while ( *((_QWORD *)v12 + 3) > v18[4] || *((_QWORD *)v12 + 4) >= v18[3] )
  {
    v21 = v18[1];
    if ( !v21 )
    {
      v20 = 1;
      goto LABEL_20;
    }
LABEL_18:
    v18 = (unsigned __int64 *)v21;
  }
  v21 = *v18;
  if ( *v18 )
    goto LABEL_18;
  v20 = 0;
LABEL_20:
  RtlAvlInsertNodeEx(v16, (unsigned __int64)v18, v20, v12);
  v18 = 0LL;
LABEL_21:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1404641F0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v19);
  if ( v18 )
  {
    v22 = 0LL;
    while ( v18 != (unsigned __int64 *)((char *)&unk_140464200 + 40 * v22) )
    {
      v22 = (unsigned int)(v22 + 1);
      if ( (unsigned int)v22 >= 2 )
        goto LABEL_27;
    }
    v18 = 0LL;
LABEL_27:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  return 1LL;
}
