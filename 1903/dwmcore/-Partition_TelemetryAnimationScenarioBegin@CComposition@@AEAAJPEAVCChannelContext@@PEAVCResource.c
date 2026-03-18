/*
 * XREFs of ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x1800A6C00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x1800A6C7C (-VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801774BC (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN *a4,
        void *a5,
        unsigned int a6)
{
  __int64 v7; // r10
  __int64 v8; // r11

  if ( a6 - 48 > 0xC0 || !DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo(a5, a6) )
    CComposition::FailFastOnMalformedPacket(this, 528974075LL, 0LL);
  if ( *(_WORD *)(v7 + 32) && v7 + *(unsigned __int16 *)(v7 + 32) || *(_QWORD *)(v8 + 48) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 69) + 40LL))(
      *((_QWORD *)this + 69),
      *(unsigned int *)(v8 + 16),
      v7,
      *(_QWORD *)(v8 + 48));
  return 0LL;
}
