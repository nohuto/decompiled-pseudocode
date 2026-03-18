/*
 * XREFs of ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262B3C
 * Callers:
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1802629A0 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18003CF9C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18008EBF8 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xddddd @ 0x180188420 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x1802623BC (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180262D68 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  LONG **v7; // rcx
  int **v8; // r9
  int RectangleCount; // eax
  unsigned int v10; // r10d
  __int64 v11; // rcx
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]

  v2 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(this, 0LL);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x12Cu, 0LL);
  }
  else
  {
    v5 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(this, *((const struct CRegion **)this + 68), 1);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x12Fu, 0LL);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v7 = (LONG **)*((_QWORD *)this + 68);
      *(_QWORD *)&v13.left = 0LL;
      *(_QWORD *)&v13.right = 0LL;
      FastRegion::CRegion::GetBoundingRect(v7, &v13);
      v14 = *(_QWORD *)((char *)this + 564);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v8);
      McTemplateU0xddddd(
        v11,
        &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENTBACKTOREALIZATION,
        v10 | (unsigned __int64)((__int64)SHIDWORD(v14) << 32),
        RectangleCount,
        v13.left,
        v13.top,
        v13.right,
        v13.bottom);
    }
  }
  return v4;
}
