/*
 * XREFs of ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18022796C
 * Callers:
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1802277E0 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800A396C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800AB504 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0xddddd @ 0x18016CF94 (McTemplateU0xddddd.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z @ 0x180227268 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJ_N@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180227B7C (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization(
        const struct CRegion **this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  LONG **v7; // rcx
  int **v8; // r9
  int RectangleCount; // eax
  int v10; // r10^4
  unsigned int v11; // r10d
  __int64 v12; // rcx
  struct tagRECT v14; // [rsp+40h] [rbp-18h] BYREF

  v2 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoreBufferState(
         (CDxHandleAdvancedDirectFlipBitmapRealization *)this,
         0LL);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x12Eu);
  }
  else
  {
    v5 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
           (CDxHandleAdvancedDirectFlipBitmapRealization *)this,
           this[68],
           1);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x131u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v7 = (LONG **)this[68];
      *(_QWORD *)&v14.left = 0LL;
      *(_QWORD *)&v14.right = 0LL;
      FastRegion::CRegion::GetBoundingRect(v7, &v14);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v8);
      McTemplateU0xddddd(
        v12,
        &EVTDESC_ADVANCED_DIRECTFLIP_RESTORECONTENTBACKTOREALIZATION,
        v11 | (unsigned __int64)((__int64)v10 << 32),
        RectangleCount,
        v14.left,
        v14.top,
        v14.right,
        v14.bottom);
    }
  }
  return v4;
}
