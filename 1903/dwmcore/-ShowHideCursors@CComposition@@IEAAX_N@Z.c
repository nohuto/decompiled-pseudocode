/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D896C
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B44D0 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A4F80 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABDAC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DCF2C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800DCFF0 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ?Show@CCursorVisualReference@@QEAAXXZ @ 0x18018D000 (-Show@CCursorVisualReference@@QEAAXXZ.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  int v2; // ebx
  _QWORD *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // edx

  v2 = *((_DWORD *)this + 234);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 912);
    do
    {
      v5 = (unsigned int)(v2 - 1);
      v6 = *(_QWORD *)(*v4 + 8 * v5);
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL);
      if ( v7 )
      {
        if ( a2 )
        {
          CCursorVisualReference::Show(*(CCursorVisualReference **)(*v4 + 8 * v5));
        }
        else
        {
          v8 = *(_BYTE *)(v7 + 94);
          *(_BYTE *)(v7 + 94) = v8 | 8;
          *(_BYTE *)(v6 + 24) = (v8 & 8) != 0;
          *(_DWORD *)(v6 + 28) = 2;
        }
      }
      else
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(v4, (unsigned int)v5);
        CCursorVisualReference::`scalar deleting destructor'((CCursorVisualReference *)v6, v9);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
