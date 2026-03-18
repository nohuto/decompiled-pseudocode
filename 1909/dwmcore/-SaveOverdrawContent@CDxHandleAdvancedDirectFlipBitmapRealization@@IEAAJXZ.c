/*
 * XREFs of ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180261378
 * Callers:
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@AEBV?$shared_ptr@VCRegion@@@std@@@Z @ 0x180261710 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800622F8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18006C668 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xddddd @ 0x180186D40 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180260AFC (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180261174 (-ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1802614A8 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        __int64 a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  LONG **v10; // rcx
  int **v11; // r9
  int RectangleCount; // eax
  unsigned int v13; // r10d
  __int64 v14; // rcx
  struct tagRECT v16; // [rsp+40h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h]

  LOBYTE(a2) = 1;
  v3 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xD6u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 55) + 80LL))(*((_QWORD *)this + 55));
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, *((const struct CRegion **)this + 68), 0);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xDBu, 0LL);
    }
    else
    {
      v8 = CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(this);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xDDu, 0LL);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v10 = (LONG **)*((_QWORD *)this + 68);
        *(_QWORD *)&v16.left = 0LL;
        *(_QWORD *)&v16.right = 0LL;
        FastRegion::CRegion::GetBoundingRect(v10, &v16);
        v17 = *(_QWORD *)((char *)this + 564);
        RectangleCount = FastRegion::CRegion::GetRectangleCount(v11);
        McTemplateU0xddddd(
          v14,
          &EVTDESC_ADVANCED_DIRECTFLIP_SAVECONTENT,
          v13 | (unsigned __int64)((__int64)SHIDWORD(v17) << 32),
          RectangleCount,
          v16.left,
          v16.top,
          v16.right,
          v16.bottom);
      }
    }
  }
  return v5;
}
