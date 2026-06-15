/*
 * XREFs of ?NewNode@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@AEAAPEAVCNode@12@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAV312@1@Z @ 0x180146DC4
 * Callers:
 *     ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x180145D8C (-GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18001FBEC (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::NewNode(
        __int64 a1,
        _OWORD *a2,
        __int64 a3)
{
  struct ATL::CAtlPlex *v6; // r8
  int v7; // edx
  _QWORD *i; // rcx
  _QWORD *result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _OWORD *v12; // rdx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v6 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x428uLL);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v6 + 1064 * (unsigned int)(v7 - 1) + 8); --v7 >= 0; i -= 133 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(_QWORD **)(a1 + 32);
  v10 = 8LL;
  v11 = *result;
  v12 = result + 2;
  do
  {
    v13 = a2[1];
    *v12 = *a2;
    v14 = a2[2];
    v12[1] = v13;
    v15 = a2[3];
    v12[2] = v14;
    v16 = a2[4];
    v12[3] = v15;
    v17 = a2[5];
    v12[4] = v16;
    v18 = a2[6];
    v12[5] = v17;
    v19 = a2[7];
    a2 += 8;
    v12[6] = v18;
    v12 += 8;
    *(v12 - 1) = v19;
    --v10;
  }
  while ( v10 );
  v20 = *((_QWORD *)a2 + 2);
  *v12 = *a2;
  *((_QWORD *)v12 + 2) = v20;
  *(_QWORD *)(a1 + 32) = v11;
  *result = 0LL;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
