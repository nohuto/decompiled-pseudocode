/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A5348
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x180091978 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009327C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180097B18 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800A36C8 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x1800A9970 (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A5298 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN hrgn, unsigned int *a3)
{
  void *v3; // rdi
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  int appended; // eax
  unsigned int v9; // ecx
  _DWORD *v10; // rdx
  LPVOID lpMem; // [rsp+30h] [rbp-78h] BYREF
  int *v12; // [rsp+40h] [rbp-68h] BYREF
  int v13; // [rsp+48h] [rbp-60h] BYREF

  v3 = 0LL;
  lpMem = 0LL;
  if ( hrgn )
  {
    if ( hrgn == (HRGN)1 )
    {
LABEL_13:
      v10 = *(_DWORD **)this;
      *v10 = 2;
      v10[1] = 0x80000000;
      v10[2] = 0x7FFFFFFF;
      v10[3] = 0x80000000;
      v10[4] = 16;
      v10[7] = 0x80000000;
      v10[8] = 0x7FFFFFFF;
      v10[5] = 0x7FFFFFFF;
      v10[6] = 16;
      return;
    }
    v12 = &v13;
    v13 = 0;
    v5 = HrgnToRgnData(hrgn, (struct _RGNDATA **)&lpMem, a3);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Au);
      FastRegion::CRegion::FreeMemory((void **)&v12);
      v3 = lpMem;
    }
    else
    {
      v3 = lpMem;
      **(_DWORD **)this = 0;
      appended = CRegion::AppendRects<tagRECT>(this);
      v7 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, appended, 0x21u);
      FastRegion::CRegion::FreeMemory((void **)&v12);
    }
  }
  else
  {
    **(_DWORD **)this = 0;
    v7 = 0;
  }
  if ( v3 )
    HeapFree(WPF::g_processHeap, 0, v3);
  if ( v7 < 0 )
    goto LABEL_13;
}
