/*
 * XREFs of ndisFInvokeCancelOidRequest @ 0x1C005B748
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C0044178 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeCancelOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x79u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD, __int64))(v2 + 264))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x7Au, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
}
