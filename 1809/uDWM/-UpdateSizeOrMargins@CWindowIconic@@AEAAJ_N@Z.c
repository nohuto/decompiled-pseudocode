/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18008EA40
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180014580 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800245E8 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008E588 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008E688 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x18002016C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x1800384A4 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180087BFC (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180087D2C (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18008DA78 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18008E80C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x1800B3804 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  unsigned int v4; // ebx
  struct tagRECT v5; // xmm0
  __int64 v6; // rax
  DWORD v7; // edx
  __int64 v8; // r8
  int v9; // esi
  LONG right; // r15d
  int v11; // r14d
  LONG bottom; // r12d
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  char v19; // si
  int WindowRectForLivePreview; // eax
  bool v21; // r14
  bool v22; // r15
  int v23; // eax
  int updated; // eax
  int v25; // eax
  int v26; // eax
  __int128 v28; // [rsp+38h] [rbp-29h]
  __int128 v29; // [rsp+48h] [rbp-19h] BYREF
  __int128 v30; // [rsp+58h] [rbp-9h] BYREF
  struct tagRECT v31; // [rsp+68h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+78h] [rbp+17h] BYREF

  v4 = 0;
  v5 = *(struct tagRECT *)(*((_QWORD *)this + 9) + 48LL);
  v6 = *((_QWORD *)this + 10);
  *(_QWORD *)&Rect.left = 0LL;
  v31 = v5;
  *(_QWORD *)&Rect.right = 0LL;
  v7 = *(_DWORD *)(v6 + 100);
  v28 = *(_OWORD *)(v6 + 48);
  v30 = *(_OWORD *)(v6 + 64);
  AdjustWindowRectEx(&Rect, v7, 0, 0);
  v9 = -Rect.left;
  right = Rect.right;
  v11 = -Rect.top;
  bottom = Rect.bottom;
  LODWORD(v29) = -Rect.left;
  DWORD1(v29) = Rect.right;
  DWORD2(v29) = -Rect.top;
  HIDWORD(v29) = Rect.bottom;
  if ( *((_BYTE *)this + 20) )
  {
    WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v31, v8);
    v4 = WindowRectForLivePreview;
    if ( WindowRectForLivePreview < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, WindowRectForLivePreview, 0x169u);
      return v4;
    }
  }
  else
  {
    DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)&Rect);
    if ( *((_DWORD *)this + 4) == 2 && (v13 = *((_QWORD *)this + 3)) != 0 )
      v14 = *(_QWORD *)(v13 + 24);
    else
      v14 = *(_QWORD *)&Rect.left;
    v31.right = right + v31.left + v9 + v14;
    v31.bottom = bottom + v31.top + v11 + HIDWORD(v14);
  }
  *(_OWORD *)(*((_QWORD *)this + 10) + 64LL) = v29;
  *(_OWORD *)(*((_QWORD *)this + 10) + 244LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = v31;
  *(_OWORD *)(*((_QWORD *)this + 10) + 180LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 304LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 172LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 176LL) = 1065353216;
  *(_QWORD *)(*((_QWORD *)this + 10) + 312LL) = 0x3FF0000000000000LL;
  v15 = 0;
  if ( v31.right - v31.left >= 0 )
    v15 = v31.right - v31.left;
  v16 = 0;
  if ( DWORD2(v28) - (int)v28 >= 0 )
    v16 = DWORD2(v28) - v28;
  if ( v16 != v15 )
    goto LABEL_20;
  v17 = 0;
  if ( v31.bottom - v31.top >= 0 )
    v17 = v31.bottom - v31.top;
  v18 = 0;
  if ( HIDWORD(v28) - DWORD1(v28) >= 0 )
    v18 = HIDWORD(v28) - DWORD1(v28);
  if ( v18 == v17 )
    v19 = 0;
  else
LABEL_20:
    v19 = 1;
  v21 = (_QWORD)v28 != *(_QWORD *)&v31.left;
  v22 = operator==(&v29, &v30);
  if ( v19 && (v23 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v4 = v23, v23 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x176u);
  }
  else
  {
    if ( !v22 )
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x2000);
    if ( v21 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v19 || !v22 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v4 = updated;
      if ( updated >= 0 )
      {
        v25 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v4 = v25;
        if ( v25 >= 0 )
        {
          v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
          v4 = v26;
          if ( v26 >= 0 )
          {
            if ( a2 )
              CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x187u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x186u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x185u);
      }
    }
  }
  return v4;
}
