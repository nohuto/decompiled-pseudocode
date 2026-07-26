/*
 * XREFs of ndisFInvokeSetFilterModuleOptions @ 0x1C00D04E8
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BA2C0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ndisQueryFilterInstanceHandlers @ 0x1C00D0488 (ndisQueryFilterInstanceHandlers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeSetFilterModuleOptions(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 (__fastcall *v4)(_QWORD); // rax
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v4 = *(__int64 (__fastcall **)(_QWORD))(v1 + 168);
  if ( v4 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_q(0x69u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 168))(*(_QWORD *)(a1 + 24));
    }
    else
    {
      v5 = v4(*(_QWORD *)(a1 + 24));
    }
    v2 = v5;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x6Au, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v5);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x6Bu, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  }
  return v2;
}
