/*
 * XREFs of PsUpdateComponentPower @ 0x1400E59F0
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140693F78 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessEnergyTrackingStateCallback @ 0x1406EDD60 (PspSetProcessEnergyTrackingStateCallback.c)
 * Callees:
 *     RtlInterlockedTimelineBitmapUpdate @ 0x1400E5A80 (RtlInterlockedTimelineBitmapUpdate.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140694094 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PsUpdateComponentPower(PEPROCESS a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  signed __int64 v6; // r8
  unsigned __int64 v7; // rcx

  if ( !a1 || a1 == PsIdleProcess )
    a1 = PsInitialSystemProcess;
  v3 = a1[2].ActiveProcessors.Bitmap[18];
  if ( v3 )
  {
    if ( a2 == 1 )
    {
      if ( !a3 )
        return;
      v4 = 280LL;
      v5 = 64LL;
      goto LABEL_7;
    }
    if ( a2 == 2 )
    {
      if ( !a3 )
        return;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 72), HIDWORD(a3));
      a3 = (unsigned int)a3;
      v5 = 88LL;
      v4 = 288LL;
      goto LABEL_7;
    }
    if ( a2 != 3 )
    {
      PoEnergyContextUpdateComponentPower();
      return;
    }
    if ( a3 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 80), HIDWORD(a3));
      a3 = (unsigned int)a3;
      v4 = 296LL;
      v5 = 96LL;
LABEL_7:
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + v3), a3);
      v7 = v3 + v4;
      if ( v7 )
        RtlInterlockedTimelineBitmapUpdate(v7, (unsigned int)KiTimelineBitmapTime, v6);
    }
  }
}
