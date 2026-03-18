/*
 * XREFs of Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0017D78
 * Callers:
 *     ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted @ 0x1C00405A0 (ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Endpoint_AreTransfersPending @ 0x1C0014D44 (Endpoint_AreTransfersPending.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001A380 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x1C001A978 (WPP_RECORDER_SF_ddqqD.c)
 */

__int64 __fastcall Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  _QWORD v9[5]; // [rsp+50h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 272);
  memset(v9, 0, sizeof(v9));
  LOWORD(v9[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v1,
    v9);
  v3 = v9[1];
  WPP_RECORDER_SF_ddqqD(*(_QWORD *)(a1 + 80), v4, v5, v6);
  if ( (*(_DWORD *)(v3 + 32) & 1) != 0 || (*(_BYTE *)(a1 + 99) & 3u) < 2 )
    goto LABEL_7;
  if ( Endpoint_AreTransfersPending(a1) )
  {
    if ( *(_BYTE *)(a1 + 37) )
    {
      *(_DWORD *)(a1 + 280) = -1073741823;
      return 21LL;
    }
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(a1 + 80),
      v7,
      13,
      117,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
      *(_DWORD *)(a1 + 144),
      *(_QWORD *)(a1 + 88));
LABEL_7:
    *(_DWORD *)(a1 + 280) = 0;
    return 21LL;
  }
  return 33LL;
}
