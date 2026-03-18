/*
 * XREFs of ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x18008B5A0
 * Callers:
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x18008B310 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18004EC34 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18008B654 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Create(
        __int64 (__fastcall ***a1)(struct IRenderTargetBitmap *, GUID *, __int64 *),
        struct CRenderTargetBitmap **a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  CRenderTargetBitmap *v7; // rax
  unsigned int v8; // ecx
  CRenderTargetBitmap *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*a1)[15]((struct IRenderTargetBitmap *)a1, (GUID *)&v13, 0LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x16u);
  }
  else
  {
    v7 = (CRenderTargetBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0xB8uLL);
    if ( v7 )
      v9 = CRenderTargetBitmap::CRenderTargetBitmap(v7, 0);
    else
      v9 = 0LL;
    if ( v9 )
    {
      (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = CRenderTargetBitmap::Initialize(v9, a1);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Du);
        (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      else
      {
        *a2 = v9;
      }
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Bu);
    }
  }
  return v6;
}
