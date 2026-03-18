/*
 * XREFs of KiSetVpThreadSystemWork @ 0x1402B0770
 * Callers:
 *     KiHvEnlightenedGuestPriorityKick @ 0x140010048 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiStartThreadCycleAccumulation @ 0x140012CB0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x140042A80 (KiEndThreadAccountingPeriod.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiChooseTargetProcessor @ 0x140068F60 (KiChooseTargetProcessor.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KiRetireDpcList @ 0x1400C1DD0 (KiRetireDpcList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall KiSetVpThreadSystemWork(__int64 a1, char a2)
{
  signed __int32 *v2; // r8
  bool v3; // bl
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // ett

  v2 = *(signed __int32 **)(a1 + 25016);
  v3 = 0;
  _m_prefetchw(v2);
  v4 = *v2;
  if ( a2 )
  {
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(v2, v4 | 0x100000, v4);
    }
    while ( v5 != v4 );
    v3 = (v4 & 0x100000) == 0;
  }
  else
  {
    do
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange(v2, v4 & 0xFFEFFFFF, v4);
    }
    while ( v6 != v4 );
    if ( (v4 & 0x100000) == 0 )
      goto LABEL_8;
    v3 = 1;
  }
  if ( !a2 )
LABEL_8:
    KiRemoveSystemWorkPriorityKick(a1);
  return v3;
}
