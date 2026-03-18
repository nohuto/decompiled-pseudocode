/*
 * XREFs of ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800BEE78
 * Callers:
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800BEBE8 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x1800BF198 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x1800BF3A8 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Create(struct IRenderTargetBitmap *a1, struct CRenderTargetBitmap **a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  CRenderTargetBitmap *v7; // rax
  __int64 v8; // rcx
  CRenderTargetBitmap *v9; // rbx
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)a1 + 120LL))(
         a1,
         &v13,
         0LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x13u, 0LL);
  }
  else
  {
    v7 = (CRenderTargetBitmap *)DefaultHeap::Alloc(0xB8uLL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Au, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x18u, 0LL);
    }
  }
  return v6;
}
