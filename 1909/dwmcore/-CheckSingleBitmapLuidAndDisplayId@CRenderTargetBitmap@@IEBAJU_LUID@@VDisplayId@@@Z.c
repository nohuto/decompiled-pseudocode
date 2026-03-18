/*
 * XREFs of ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180057324
 * Callers:
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180051170 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180054760 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801AB640 (-GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // ecx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h]
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a2;
  v3 = *(_QWORD *)(a1 + 152);
  v11 = 0;
  v5 = a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v3 + 120LL))(v3, &v13, &v11);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1AEu, 0LL);
  }
  else
  {
    v9 = v11;
    if ( v11 == (_DWORD)DisplayId::All )
      v9 = (unsigned int)DisplayId::None;
    v11 = v9;
    if ( __PAIR64__(HIDWORD(v12), v5) != v13
      || v9 != a3 && v9 != (_DWORD)DisplayId::None && a3 != (_DWORD)DisplayId::All )
    {
      v8 = -2003304287;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003304287, 0x1BAu, 0LL);
    }
  }
  return v8;
}
