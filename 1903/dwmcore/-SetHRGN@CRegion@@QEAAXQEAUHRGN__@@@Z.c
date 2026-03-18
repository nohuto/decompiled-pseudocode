/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18003CFD0
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18003C250 (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18003CBD0 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18003D8C4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18008D894 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800D3A94 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18003D0C0 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18003D270 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN hrgn, unsigned int *a3)
{
  void *v3; // rdi
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  int appended; // eax
  unsigned int v9; // ecx
  HANDLE ProcessHeap; // rax
  _DWORD *v11; // rdx
  LPVOID lpMem; // [rsp+30h] [rbp-78h] BYREF
  void *v13; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v14[18]; // [rsp+48h] [rbp-60h] BYREF

  v3 = 0LL;
  lpMem = 0LL;
  if ( hrgn )
  {
    if ( hrgn == (HRGN)1 )
    {
LABEL_14:
      v11 = *(_DWORD **)this;
      *v11 = 2;
      v11[1] = 0x80000000;
      v11[2] = 0x7FFFFFFF;
      v11[3] = 0x80000000;
      v11[4] = 16;
      v11[7] = 0x80000000;
      v11[8] = 0x7FFFFFFF;
      v11[5] = 0x7FFFFFFF;
      v11[6] = 16;
      return;
    }
    v13 = v14;
    v14[0] = 0;
    v5 = HrgnToRgnData(hrgn, (struct _RGNDATA **)&lpMem, a3);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Au, 0LL);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v13);
      v3 = lpMem;
    }
    else
    {
      v3 = lpMem;
      **(_DWORD **)this = 0;
      appended = CRegion::AppendRects<tagRECT>(this);
      v7 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, appended, 0x21u, 0LL);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v13);
      }
      else if ( v14 != v13 )
      {
        operator delete(v13);
      }
    }
  }
  else
  {
    **(_DWORD **)this = 0;
    v7 = 0;
  }
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  if ( v7 < 0 )
    goto LABEL_14;
}
