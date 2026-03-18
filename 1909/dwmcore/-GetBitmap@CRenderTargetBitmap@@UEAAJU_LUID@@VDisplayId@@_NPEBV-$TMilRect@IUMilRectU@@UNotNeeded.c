/*
 * XREFs of ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180051170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180020CA0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?Validate@CRenderTargetBitmap@@IEBAJXZ @ 0x18005487C (-Validate@CRenderTargetBitmap@@IEBAJXZ.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180057324 (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBitmap(
        __int64 a1,
        struct _LUID a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  int Bitmap; // eax
  unsigned int v12; // ecx
  __int64 v13; // r9
  unsigned int v14; // esi
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-38h]

  *a7 = 0LL;
  Bitmap = CRenderTargetBitmap::Validate((CRenderTargetBitmap *)(a1 - 16));
  v14 = Bitmap;
  if ( Bitmap < 0 )
  {
    v17 = 174;
    goto LABEL_18;
  }
  if ( !*(_BYTE *)(a1 + 160) )
  {
    LOBYTE(v13) = a4;
    Bitmap = CD2DBitmapCache::GetBitmap(a1, a2, a3, v13, a5, a6, a7);
    v14 = Bitmap;
    if ( Bitmap >= 0 )
      return v14;
    v17 = 183;
LABEL_18:
    v16 = Bitmap;
    goto LABEL_19;
  }
  if ( a5 || a6 )
  {
    v14 = -2003292287;
    v17 = 189;
    goto LABEL_14;
  }
  Bitmap = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId)(
             a1 - 16,
             a2,
             a3);
  v14 = Bitmap;
  if ( Bitmap < 0 )
  {
    v17 = 192;
    goto LABEL_18;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 144LL))(*(_QWORD *)(a1 + 136)) && !a4 )
  {
    v14 = -2147024891;
    v17 = 196;
LABEL_14:
    v16 = v14;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v16, v17, 0LL);
    return v14;
  }
  Bitmap = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 136) + 72LL))(*(_QWORD *)(a1 + 136), a7);
  v14 = Bitmap;
  if ( Bitmap < 0 )
  {
    v17 = 199;
    goto LABEL_18;
  }
  return v14;
}
