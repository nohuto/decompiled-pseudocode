/*
 * XREFs of ndisFInvokeSynchronousOidRequest @ 0x1C005B994
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C0048DF4 (ndisSynchronousOidRequest_ea_1C0048DF4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 */

__int64 __fastcall ndisFInvokeSynchronousOidRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v7; // eax
  unsigned int v8; // edi

  v3 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qLq(0x88u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, *(_DWORD *)(a2 + 32));
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v3 + 320))(*(_QWORD *)(a1 + 24), a2, a3);
  v8 = v7;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x89u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v7);
  return v8;
}
