/*
 * XREFs of CmpReportNotifyHelper @ 0x1405DCEE0
 * Callers:
 *     CmpReportNotifyForKcbStack @ 0x1405DD11C (CmpReportNotifyForKcbStack.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpTransIsTransActive @ 0x14026C75C (CmpTransIsTransActive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpDelayedDerefKeys @ 0x1405DD0C4 (CmpDelayedDerefKeys.c)
 *     CmpNotifyTriggerCheck @ 0x1405DD1A8 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 */

__int64 __fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int16 v6; // dx
  volatile signed __int64 *v10; // r14
  __int64 KcbAtLayerHeight; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 *i; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // edx
  int v20; // edx
  int v21; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v23[2]; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(_WORD *)(a1 + 2);
  v23[1] = v23;
  v23[0] = v23;
  v10 = (volatile signed __int64 *)(a2 + 1672);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v6);
  ExAcquirePushLockExclusiveEx(a2 + 1672, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  for ( i = *(__int64 **)(a2 + 1584); i; i = (__int64 *)*i )
  {
    v15 = i[4];
    if ( (*(_DWORD *)(v15 + 4) & 0x7FE00000u) > (*(_DWORD *)(KcbAtLayerHeight + 4) & 0x7FE00000u) )
      break;
    if ( (a4 & (_DWORD)i[6] & 0x3FFFFFFF) != 0 && ((i[6] & 0x40000000) != 0 || v15 == KcbAtLayerHeight) )
    {
      v16 = *(_QWORD *)(i[5] + 56);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v16) && (!v16 || (unsigned int)CmpTransIsTransActive(v16)) )
      {
        v17 = i[4];
        v18 = KcbAtLayerHeight;
        v19 = (*(_DWORD *)(v17 + 4) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(KcbAtLayerHeight + 4) >> 21) & 0x3FFu) > v19 )
        {
          do
            v18 = *(_QWORD *)(v18 + 64);
          while ( ((*(_DWORD *)(v18 + 4) >> 21) & 0x3FFu) > v19 );
        }
        if ( v18 == v17 && (unsigned __int8)CmpNotifyTriggerCheck(i, a1, a3) )
          CmpPostNotify((_DWORD)i, v20, v21, 268, 0, (__int64)v23, a5);
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  return CmpDelayedDerefKeys(v23);
}
