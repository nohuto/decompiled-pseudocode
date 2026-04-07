/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008D1F0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180008478 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18000A4BC (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180020FE0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033EA0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18008A1E0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800AB7D8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  struct CThumbnailData *ThumbnailData; // rsi
  _QWORD *ViewBase; // r13
  __int64 i; // r14
  HWND v11; // rbx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v13; // ebx
  unsigned int j; // r14d
  HWND v15; // rbx
  CDesktopThumbnailBase *v16; // rcx
  int v17; // r9d
  int v18; // eax
  RECT v19; // xmm0
  int v20; // eax
  CVisual *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-59h]
  struct CWindowData *v24; // [rsp+30h] [rbp-49h] BYREF
  CWindowList *v25[2]; // [rsp+38h] [rbp-41h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+48h] [rbp-31h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v27; // [rsp+50h] [rbp-29h] BYREF

  v25[0] = this;
  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset_0(&v27, 0, sizeof(v27));
  if ( !ThumbnailData
    || a2 != *((_DWORD *)a3 + 2)
    || *(double *)((char *)a3 + 36) == 0.0
    || *(double *)((char *)a3 + 44) == 0.0
    || !*((_BYTE *)ThumbnailData + 42)
    || *((_DWORD *)ThumbnailData + 30) != 2 )
  {
    v23 = 4006;
    goto LABEL_38;
  }
  if ( a4->ViewSize < 8 * (unsigned __int64)(unsigned int)(*((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 3)) )
  {
    v23 = 4011;
LABEL_38:
    v17 = -2147024809;
    v13 = -2147024809;
    goto LABEL_39;
  }
  ViewBase = a4->ViewBase;
  *((_DWORD *)ThumbnailData + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 136, 8u);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 3); i = (unsigned int)(i + 1) )
  {
    v11 = (HWND)ViewBase[i];
    if ( (unsigned int)DwmValidateWindow(v11, a2) )
    {
      SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v25[0], v11, &v24);
      v13 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v23 = 4024;
        goto LABEL_25;
      }
      if ( v24 )
      {
        SyncedWindowDataByHwnd = DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)ThumbnailData + 136, &v24);
        v13 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v23 = 4027;
          goto LABEL_25;
        }
      }
    }
  }
  *((_DWORD *)ThumbnailData + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 168, 8u);
  for ( j = 0; j < *((_DWORD *)a3 + 4); ++j )
  {
    v15 = (HWND)ViewBase[j + *((_DWORD *)a3 + 3)];
    if ( (unsigned int)DwmValidateWindow(v15, a2) )
    {
      SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v25[0], v15, &v24);
      v13 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v23 = 4039;
        goto LABEL_25;
      }
      if ( v24 )
      {
        SyncedWindowDataByHwnd = DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)ThumbnailData + 168, &v24);
        v13 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v23 = 4042;
          goto LABEL_25;
        }
      }
    }
  }
  v16 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 16);
  if ( v16 )
  {
    SyncedWindowDataByHwnd = CDesktopThumbnailBase::UpdateWindowClones(v16);
    v13 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v23 = 4051;
      goto LABEL_25;
    }
  }
  v18 = (int)*(double *)((char *)a3 + 36);
  v25[0] = 0LL;
  v27.dwFlags = 3;
  v19 = *(RECT *)((char *)a3 + 20);
  LODWORD(v25[1]) = v18;
  v20 = (int)*(double *)((char *)a3 + 44);
  v27.rcSource = v19;
  HIDWORD(v25[1]) = v20;
  v27.rcDestination = *(RECT *)v25;
  SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties(ThumbnailData, &v27);
  v13 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v23 = 4059;
LABEL_25:
    v17 = SyncedWindowDataByHwnd;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, v23);
    goto LABEL_40;
  }
  SyncedWindowDataByHwnd = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
  v13 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v23 = 4060;
    goto LABEL_25;
  }
  SyncedWindowDataByHwnd = VisualCollection::InsertRelative(
                             (VisualCollection *)(*((_QWORD *)ThumbnailData + 13) + 32LL),
                             *((struct CVisual **)ThumbnailData + 14),
                             0LL,
                             0,
                             1);
  v13 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v23 = 4061;
    goto LABEL_25;
  }
  v21 = *(CVisual **)(*((_QWORD *)ThumbnailData + 2) + 392LL);
  if ( v21 )
    CVisual::SetDirtyFlags(v21, 0x8000000);
LABEL_40:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return v13;
}
