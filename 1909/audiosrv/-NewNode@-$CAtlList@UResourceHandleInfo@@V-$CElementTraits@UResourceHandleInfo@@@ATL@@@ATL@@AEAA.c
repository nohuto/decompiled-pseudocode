/*
 * XREFs of ?NewNode@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBUResourceHandleInfo@@PEAV312@1@Z @ 0x1801006C4
 * Callers:
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800FF430 (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18004F2A0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::NewNode(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4)
{
  struct ATL::CAtlPlex *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _OWORD *v13; // rcx
  __int128 v14; // xmm1

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x4E0uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v7 + 1248 * (unsigned int)(v8 - 1) + 8); --v8 >= 0; i -= 156 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  result = *(_QWORD **)(a1 + 32);
  v11 = 9LL;
  v12 = *result;
  v13 = result + 2;
  do
  {
    *v13 = *a2;
    v13[1] = a2[1];
    v13[2] = a2[2];
    v13[3] = a2[3];
    v13[4] = a2[4];
    v13[5] = a2[5];
    v13[6] = a2[6];
    v13 += 8;
    v14 = a2[7];
    a2 += 8;
    *(v13 - 1) = v14;
    --v11;
  }
  while ( v11 );
  *v13 = *a2;
  v13[1] = a2[1];
  v13[2] = a2[2];
  v13[3] = a2[3];
  v13[4] = a2[4];
  *(_QWORD *)(a1 + 32) = v12;
  result[1] = 0LL;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
