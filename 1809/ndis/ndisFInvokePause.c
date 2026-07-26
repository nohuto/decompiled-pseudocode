/*
 * XREFs of ndisFInvokePause @ 0x1C00BA3B4
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C010AEB8 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokePause(__int64 a1, _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  __int64 v2; // rsi
  int v6; // eax
  unsigned int v7; // edi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x72u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && *(_QWORD *)(a1 + 792) )
    v6 = ndisVerifierNdisDispatch->NdisFilterPauseHandler(
           *(void **)(a1 + 24),
           a2,
           *(void **)(a1 + 792),
           *(int (__fastcall **)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200));
  else
    v6 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200))(*(_QWORD *)(a1 + 24), a2);
  v7 = v6;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x73u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v6);
  return v7;
}
