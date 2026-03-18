/*
 * XREFs of ?RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z @ 0x1801C6A80
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x18016B144 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 *     ?RemoveRange@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHHH@Z @ 0x18016B3F4 (-RemoveRange@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAV.c)
 */

void __fastcall CPrimitiveGroup::RemoveClippedD2D1CommandListForAllContexts(CPrimitiveGroup *this, struct CPolygon *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  int Key; // eax
  __int64 v6; // r10
  int v7; // esi
  struct CPolygon *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( *((_DWORD *)this + 34) )
  {
    v8 = a2;
    do
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v2) + 104LL;
      Key = CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
              v4,
              (__int64 *)&v8);
      v7 = Key;
      if ( Key != -1 )
      {
        ReleaseInterface<IBitmapLock>((__int64 *)(*(_QWORD *)(v6 + 112) + 8LL * Key));
        CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveRange(
          v4,
          v7);
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 34) );
  }
}
