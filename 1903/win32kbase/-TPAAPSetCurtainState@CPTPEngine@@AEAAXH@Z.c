/*
 * XREFs of ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0199554
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01949C4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01956A0 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1C0197660 (-ProcessInitialization@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197AA8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0199DA8 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0198A6C (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 */

void __fastcall CPTPEngine::TPAAPSetCurtainState(CPTPEngine *this, int a2)
{
  int v2; // r9d
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+24h] [rbp-24h]

  v2 = *((_DWORD *)this + 814);
  if ( (v2 & 0x20000u) >> 17 != (a2 != 0) )
  {
    v3 = a2;
    v4 = 0LL;
    *((_DWORD *)this + 814) = v2 ^ (v2 ^ (a2 << 17)) & 0x20000;
    HIDWORD(v4) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    CBasePTPEngine::SendEtwOutput((__int64)this, 1, (__int64)&v3);
  }
}
