/*
 * XREFs of PsUpdateComponentPower @ 0x14008F830
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140604EB0 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessEnergyTrackingStateCallback @ 0x1406D0100 (PspSetProcessEnergyTrackingStateCallback.c)
 * Callees:
 *     RtlInterlockedTimelineBitmapUpdate @ 0x14008F8D0 (RtlInterlockedTimelineBitmapUpdate.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140604FCC (PoEnergyContextUpdateComponentPower.c)
 */

__int64 __fastcall PsUpdateComponentPower(PVOID a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  signed __int64 v6; // r8

  result = (__int64)a1;
  if ( !a1 || a1 == PsIdleProcess )
    result = (__int64)PsInitialSystemProcess;
  v4 = *(_QWORD *)(result + 1848);
  if ( v4 )
  {
    if ( a2 == 1 )
    {
      if ( !a3 )
        return result;
      v5 = 280LL;
      result = 64LL;
      goto LABEL_7;
    }
    if ( a2 == 2 )
    {
      if ( !a3 )
        return result;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 72), HIDWORD(a3));
      a3 = (unsigned int)a3;
      v5 = 288LL;
      result = 88LL;
      goto LABEL_7;
    }
    if ( a2 != 3 )
      return PoEnergyContextUpdateComponentPower(result);
    if ( a3 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 80), HIDWORD(a3));
      a3 = (unsigned int)a3;
      v5 = 296LL;
      result = 96LL;
LABEL_7:
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(result + v4), a3);
      if ( v5 + v4 )
        return RtlInterlockedTimelineBitmapUpdate(v5 + v4, (unsigned int)KiTimelineBitmapTime, v6);
    }
  }
  return result;
}
