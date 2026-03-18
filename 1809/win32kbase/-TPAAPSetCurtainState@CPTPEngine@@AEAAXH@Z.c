/*
 * XREFs of ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C015F298
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C015A680 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C015B380 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1C015D3B0 (-ProcessInitialization@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C015FBA8 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C015E7F8 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 */

void __fastcall CPTPEngine::TPAAPSetCurtainState(CPTPEngine *this, int a2)
{
  int v2; // r9d
  __int128 v3; // [rsp+20h] [rbp-48h]
  int v4; // [rsp+30h] [rbp-38h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v2 = *((_DWORD *)this + 824);
  if ( (v2 & 0x20000u) >> 17 != (a2 != 0) )
  {
    LODWORD(v3) = a2;
    v5 = v3;
    *((_DWORD *)this + 824) = v2 ^ (v2 ^ (a2 << 17)) & 0x20000;
    v6 = v4;
    CBasePTPEngine::SendEtwOutput((__int64)this, 1, (__int64)&v5);
  }
}
