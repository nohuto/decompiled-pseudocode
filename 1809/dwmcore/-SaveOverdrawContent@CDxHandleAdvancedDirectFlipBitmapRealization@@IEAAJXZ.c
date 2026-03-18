/*
 * XREFs of ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180227A5C
 * Callers:
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x180227DD0 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800A396C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800AB504 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd @ 0x18016CF94 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180227268 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18022786C (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180227B7C (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent(
        const struct CRegion **this,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  LONG **v10; // rcx
  int **v11; // r9
  int RectangleCount; // eax
  int v13; // r10^4
  unsigned int v14; // r10d
  __int64 v15; // rcx
  struct tagRECT v17; // [rsp+40h] [rbp-18h] BYREF

  LOBYTE(a2) = 1;
  v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
         (CDxHandleAdvancedDirectFlipBitmapRealization *)this,
         a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xD8u);
  }
  else
  {
    (*(void (__fastcall **)(const struct CRegion *))(*(_QWORD *)this[55] + 80LL))(this[55]);
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
           (CDxHandleAdvancedDirectFlipBitmapRealization *)this,
           this[68],
           0);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xDDu);
    }
    else
    {
      v8 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer((CDxHandleAdvancedDirectFlipBitmapRealization *)this);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xDFu);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v10 = (LONG **)this[68];
        *(_QWORD *)&v17.left = 0LL;
        *(_QWORD *)&v17.right = 0LL;
        FastRegion::CRegion::GetBoundingRect(v10, &v17);
        RectangleCount = FastRegion::CRegion::GetRectangleCount(v11);
        McTemplateU0xddddd(
          v15,
          &EVTDESC_ADVANCED_DIRECTFLIP_SAVECONTENT,
          v14 | (unsigned __int64)((__int64)v13 << 32),
          RectangleCount,
          v17.left,
          v17.top,
          v17.right,
          v17.bottom);
      }
    }
  }
  return v5;
}
