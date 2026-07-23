/*
 * XREFs of RtlStdReleaseStackTrace @ 0x1402ED300
 * Callers:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x14016BDB0 (ExpInitializeResource.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v5; // ebp
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *i; // rax
  unsigned __int8 v13; // di
  struct _KPRCB *CurrentPrcb; // rcx
  PSLIST_ENTRY result; // rax

  LOWORD(v2) = *(_WORD *)(a2 + 14);
  v5 = 0;
  v6 = 0;
  if ( (_WORD)v2 )
  {
    v7 = (_DWORD *)(a2 + 16);
    v2 = (unsigned __int16)v2;
    do
    {
      v6 += *v7;
      v7 += 2;
      --v2;
    }
    while ( v2 );
  }
  v8 = (_QWORD *)(a1 + 8 * (v6 % *(_DWORD *)(a1 + 720) + 2LL * (v6 % *(_DWORD *)(a1 + 720)) + 91));
  v9 = v8 + 1;
  *((_BYTE *)v8 + 16) = KeAcquireSpinLockRaiseToDpc(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      for ( i = (_QWORD *)*v8; ; i = (_QWORD *)*i )
      {
        if ( !i )
        {
          __debugbreak();
          goto LABEL_11;
        }
        if ( i == (_QWORD *)a2 )
          break;
        v8 = i;
      }
      *v8 = *(_QWORD *)a2;
LABEL_11:
      v5 = 1;
    }
  }
  v13 = *((_BYTE *)v9 + 8);
  KxReleaseSpinLock(v9);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = (PSLIST_ENTRY)v13;
  __writecr8(v13);
  if ( v5 )
  {
    result = RtlpInterlockedPushEntrySList(
               (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
               (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
