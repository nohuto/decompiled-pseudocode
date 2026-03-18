/*
 * XREFs of TR_Enable_Internal @ 0x1C0028BA8
 * Callers:
 *     Endpoint_Enable @ 0x1C00182F0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001CCD0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CFA0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     TR_InitializeTransferRing @ 0x1C00292D8 (TR_InitializeTransferRing.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0029D1C (WPP_RECORDER_SF_DDqd.c)
 */

__int64 __fastcall TR_Enable_Internal(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // rdx

  TR_InitializeTransferRing(a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(a1[4] + 32LL))(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a1[7];
    v4 = *(_QWORD *)(v3 + 24);
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_DDqd(
      *(_QWORD *)(a1[5] + 72LL),
      v4,
      v3,
      18,
      (__int64)&WPP_36bc79e2af6f37d6aa20da6265b51b29_Traceguids,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(v3 + 144),
      *(_QWORD *)(v3 + 24),
      v2);
  }
  return v2;
}
