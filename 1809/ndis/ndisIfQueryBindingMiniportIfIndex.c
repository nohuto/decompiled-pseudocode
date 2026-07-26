/*
 * XREFs of ndisIfQueryBindingMiniportIfIndex @ 0x1C00BF3E8
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0017504 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisIfQueryBindingIfIndex @ 0x1C00D13E0 (NdisIfQueryBindingIfIndex.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0016670 (ndisReferenceMiniportByHandle.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisIfQueryBindingMiniportIfIndex(__int64 a1, _DWORD *a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _NDIS_MINIPORT_BLOCK *v13; // rcx

  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x2Au, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  *a2 = 0;
  *a3 = 0LL;
  *a4 = 0;
  *a5 = 0LL;
  v9 = *(_QWORD *)(a1 + 2064);
  if ( v9 && (v10 = *(_QWORD *)(v9 + 704)) != 0 )
  {
    *a2 = *(_DWORD *)(v10 + 4);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2064) + 704LL) + 1312LL);
  }
  else
  {
    *a2 = *(_DWORD *)(a1 + 4088);
    v11 = *(_QWORD *)(a1 + 4056);
  }
  *a3 = v11;
  if ( (*(_DWORD *)(a1 + 124) & 0x8000000) != 0
    && (v13 = *(_NDIS_MINIPORT_BLOCK **)(a1 + 16)) != 0LL
    && ndisReferenceMiniportByHandle(v13, 0) )
  {
    *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4088LL);
    *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 4056LL);
    ndisDereferenceMiniport(*(_QWORD *)(a1 + 16), 0x3Eu);
  }
  else
  {
    *a4 = *(_DWORD *)(a1 + 4088);
    *a5 = *(_QWORD *)(a1 + 4056);
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  return 0LL;
}
