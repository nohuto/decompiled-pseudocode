/*
 * XREFs of KiSetVpThreadSystemWork @ 0x1402B04D0
 * Callers:
 *     KiHvEnlightenedGuestPriorityKick @ 0x140010278 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiStartThreadCycleAccumulation @ 0x140012EE0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x1400427C0 (KiEndThreadAccountingPeriod.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiChooseTargetProcessor @ 0x1400691D0 (KiChooseTargetProcessor.c)
 *     KiDirectSwitchThread @ 0x14006BC80 (KiDirectSwitchThread.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     KiRetireDpcList @ 0x1400A1C50 (KiRetireDpcList.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
