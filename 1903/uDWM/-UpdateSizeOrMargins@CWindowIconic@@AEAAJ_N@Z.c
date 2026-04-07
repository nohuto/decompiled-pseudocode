/*
 * XREFs of ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F1F8
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18000C780 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010478 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EF5C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003FB40 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003FD94 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x180012F5C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180023B9C (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180028F30 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180039CDC (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003F450 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18003F780 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003F7EC (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18009374C (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateSizeOrMargins(CWindowIconic *this, char a2)
{
  unsigned int v4; // ebx
  struct tagRECT v5; // xmm0
  __int64 v6; // rax
  DWORD v7; // edx
  int v8; // esi
  LONG right; // r15d
  int v10; // r14d
  LONG bottom; // r12d
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  char v15; // si
  bool v16; // r14
  bool v17; // r15
  int v18; // eax
  int updated; // eax
  int v20; // eax
  int v21; // eax
  __int64 v23; // rax
  int WindowRectForLivePreview; // eax
  int v25; // ecx
  int v26; // eax
  void *v27; // [rsp+30h] [rbp-31h]
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
  v8 = -Rect.left;
  right = Rect.right;
  v10 = -Rect.top;
  bottom = Rect.bottom;
  LODWORD(v29) = -Rect.left;
  DWORD1(v29) = Rect.right;
  DWORD2(v29) = -Rect.top;
  HIDWORD(v29) = Rect.bottom;
  if ( *((_BYTE *)this + 20) )
  {
    WindowRectForLivePreview = CWindowIconic::GetWindowRectForLivePreview(this, &v31);
    v4 = WindowRectForLivePreview;
    if ( WindowRectForLivePreview < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowRectForLivePreview, 0x169u, v27);
      return v4;
    }
  }
  else
  {
    DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)&Rect);
    if ( *((_DWORD *)this + 4) == 2 && (v23 = *((_QWORD *)this + 3)) != 0 )
      v12 = *(_QWORD *)(v23 + 24);
    else
      v12 = *(_QWORD *)&Rect.left;
    v31.right = right + v31.left + v8 + v12;
    v31.bottom = bottom + v31.top + v10 + HIDWORD(v12);
  }
  *(_OWORD *)(*((_QWORD *)this + 10) + 64LL) = v29;
  *(_OWORD *)(*((_QWORD *)this + 10) + 244LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 64LL);
  *(struct tagRECT *)(*((_QWORD *)this + 10) + 48LL) = v31;
  *(_OWORD *)(*((_QWORD *)this + 10) + 180LL) = *(_OWORD *)(*((_QWORD *)this + 10) + 48LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 304LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 172LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 10) + 176LL) = 1065353216;
  *(_QWORD *)(*((_QWORD *)this + 10) + 312LL) = 0x3FF0000000000000LL;
  v13 = 0;
  if ( v31.right - v31.left >= 0 )
    v13 = v31.right - v31.left;
  v14 = 0;
  if ( DWORD2(v28) - (int)v28 >= 0 )
    v14 = DWORD2(v28) - v28;
  if ( v14 != v13 )
    goto LABEL_10;
  v25 = 0;
  if ( v31.bottom - v31.top >= 0 )
    v25 = v31.bottom - v31.top;
  v26 = 0;
  if ( HIDWORD(v28) - DWORD1(v28) >= 0 )
    v26 = HIDWORD(v28) - DWORD1(v28);
  if ( v26 == v25 )
    v15 = 0;
  else
LABEL_10:
    v15 = 1;
  v16 = (_QWORD)v28 != *(_QWORD *)&v31.left;
  v17 = operator==(&v29, &v30);
  if ( v15 && (v18 = CTopLevelWindow::OnWindowSizeUpdated(*((CTopLevelWindow **)this + 11)), v4 = v18, v18 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x176u, v27);
  }
  else
  {
    if ( !v17 )
      CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x2000);
    if ( v16 )
      CTopLevelWindow::OnOffsetUpdated(*((CTopLevelWindow **)this + 11));
    if ( v15 || !v17 )
    {
      updated = CWindowIconic::UpdateClientArea(this);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x185u, v27);
      }
      else
      {
        v20 = CVisual::RenderRecursive(*((CVisual **)this + 11));
        v4 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x186u, v27);
        }
        else
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
          v4 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x187u, v27);
          }
          else if ( a2 )
          {
            CWindowData::NotifySWROfMarginOrSizeChange(*((CWindowData **)this + 9), 1, 1);
          }
        }
      }
    }
  }
  return v4;
}
