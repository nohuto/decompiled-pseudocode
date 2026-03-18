/*
 * XREFs of MiCombiningInProgress @ 0x140143D14
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406F6DC4 (MiCombineIdenticalPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400B8B90 (MiFlushEntireTbDueToAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiCombiningInProgress(__int64 *a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // r14
  KIRQL v7; // bp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 **v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 **v15; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_1404660C0);
  if ( a3 != 1 )
  {
    v14 = *a2;
    v15 = (unsigned __int64 **)a2[1];
    if ( *(unsigned __int64 **)(*a2 + 8) == a2 && *v15 == a2 )
    {
      *v15 = (unsigned __int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      RtlAvlRemoveNode((unsigned __int64 *)&qword_1404660C8, a2 + 2);
      --*((_DWORD *)a1 + 16);
      if ( dword_1404660C4 == 1 )
        MiFlushEntireTbDueToAttributeChange();
      --dword_1404660C4;
      goto LABEL_17;
    }
LABEL_24:
    __fastfail(3u);
  }
  ++*((_DWORD *)a1 + 16);
  ++dword_1404660C4;
  if ( !dword_1404660D8 )
  {
    dword_1404660D8 = 1;
    qword_1404660D0 = _InterlockedIncrement64(&PsNextSecurityDomain);
  }
  CurrentThread = KeGetCurrentThread();
  memset(a2, 0, 0x50uLL);
  v9 = (unsigned __int64 **)(v3 + 7408);
  a2[5] = (unsigned __int64)CurrentThread;
  v10 = *(_QWORD *)(v3 + 7408);
  if ( *(_QWORD *)(v10 + 8) != v3 + 7408 )
    goto LABEL_24;
  *a2 = v10;
  v11 = 0;
  a2[1] = (unsigned __int64)v9;
  *(_QWORD *)(v10 + 8) = a2;
  *v9 = a2;
  v12 = (_QWORD *)qword_1404660C8;
  if ( !qword_1404660C8 )
    goto LABEL_11;
  while ( (unsigned __int64)CurrentThread < v12[3] )
  {
    v13 = (_QWORD *)*v12;
    if ( !*v12 )
    {
      v11 = 0;
      goto LABEL_11;
    }
LABEL_8:
    v12 = v13;
  }
  v13 = (_QWORD *)v12[1];
  if ( v13 )
    goto LABEL_8;
  v11 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1404660C8, (unsigned __int64)v12, v11, a2 + 2);
LABEL_17:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1404660C0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
