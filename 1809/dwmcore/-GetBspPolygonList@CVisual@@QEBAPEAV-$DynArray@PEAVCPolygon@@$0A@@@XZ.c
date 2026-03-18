/*
 * XREFs of ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x1801B6834
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18002D790 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180162558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801B5F58 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801B6890 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801B70D8 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1801B7DB0 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetBspPolygonList(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  char *v5; // rcx
  unsigned int i; // eax

  v1 = *(_DWORD **)(a1 + 224);
  if ( (*v1 & 0x10000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 4 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (char *)v1 + v3 + 8LL * i - (((_BYTE)v3 + 15) & 7) + 15;
  return *(_QWORD *)v5;
}
