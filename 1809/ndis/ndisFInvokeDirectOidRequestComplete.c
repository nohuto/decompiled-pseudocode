/*
 * XREFs of ndisFInvokeDirectOidRequestComplete @ 0x1C005B8E4
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qDqL @ 0x1C0041FBC (WPP_SF_qDqL.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 */

void __fastcall ndisFInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  int v5; // esi

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qDqL(0x84u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v5);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 304))(*(_QWORD *)(a1 + 24), a2, a3);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qLq(0x85u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v5);
}
