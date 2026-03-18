/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800B46D4
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B44D0 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A4F80 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABDAC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DCF2C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800DCFF0 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x18018CF88 (-Restore@CCursorVisualReference@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  CCursorVisualReference *v4; // rsi
  unsigned int v5; // edx

  v1 = *((_DWORD *)this + 234);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 912);
    do
    {
      v3 = (unsigned int)(v1 - 1);
      v4 = *(CCursorVisualReference **)(*v2 + 8 * v3);
      CCursorVisualReference::Restore(v4);
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL) )
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(v2, (unsigned int)v3);
        CCursorVisualReference::`scalar deleting destructor'(v4, v5);
      }
      --v1;
    }
    while ( v1 > 0 );
  }
}
