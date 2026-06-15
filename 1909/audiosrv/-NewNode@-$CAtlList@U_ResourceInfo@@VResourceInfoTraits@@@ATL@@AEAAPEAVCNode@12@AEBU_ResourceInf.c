/*
 * XREFs of ?NewNode@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@AEAAPEAVCNode@12@AEBU_ResourceInfo@@PEAV312@1@Z @ 0x1801429A0
 * Callers:
 *     ?AddTail@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_ResourceInfo@@@Z @ 0x180141CC4 (-AddTail@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_Resource.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18004F2A0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::NewNode(__int64 a1, __int64 a2, __int64 a3)
{
  struct ATL::CAtlPlex *v6; // r8
  int v7; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  __int128 v13; // xmm1

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v6 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x220uLL);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v6 + 544 * (unsigned int)(v7 - 1) + 8); --v7 >= 0; i -= 68 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v10 = 4LL;
  v11 = *result;
  v12 = result + 2;
  do
  {
    *(_OWORD *)v12 = *(_OWORD *)a2;
    *((_OWORD *)v12 + 1) = *(_OWORD *)(a2 + 16);
    *((_OWORD *)v12 + 2) = *(_OWORD *)(a2 + 32);
    *((_OWORD *)v12 + 3) = *(_OWORD *)(a2 + 48);
    *((_OWORD *)v12 + 4) = *(_OWORD *)(a2 + 64);
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a2 + 80);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a2 + 96);
    v12 += 16;
    v13 = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    *((_OWORD *)v12 - 1) = v13;
    --v10;
  }
  while ( v10 );
  *v12 = *(_QWORD *)a2;
  *((_DWORD *)v12 + 2) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = v11;
  *result = 0LL;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
