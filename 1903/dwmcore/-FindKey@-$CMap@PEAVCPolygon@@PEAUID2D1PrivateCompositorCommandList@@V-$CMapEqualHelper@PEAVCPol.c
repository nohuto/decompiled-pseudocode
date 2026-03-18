/*
 * XREFs of ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x18016B144
 * Callers:
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18016B174 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z @ 0x1801C6A80 (-RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r9
  _QWORD *i; // rcx

  result = 0LL;
  if ( *(int *)(a1 + 16) <= 0 )
    return 0xFFFFFFFFLL;
  v3 = *a2;
  v4 = 0LL;
  v5 = *(int *)(a1 + 16);
  for ( i = *(_QWORD **)a1; *i != v3; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( ++v4 >= v5 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
