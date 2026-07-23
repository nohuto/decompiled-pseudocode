/*
 * XREFs of KiSetVpThreadSystemWork @ 0x140299950
 * Callers:
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiChooseTargetProcessor @ 0x1400C4310 (KiChooseTargetProcessor.c)
 *     KiDirectSwitchThread @ 0x1400C5170 (KiDirectSwitchThread.c)
 *     KiRetireDpcList @ 0x1400C6400 (KiRetireDpcList.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400CFE18 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1EF0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
