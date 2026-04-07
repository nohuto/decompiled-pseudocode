/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180092CD0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800166DC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180027FDC (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18002F9A8 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033B00 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x1800902B0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800AF7B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  struct CThumbnailData *ThumbnailData; // r14
  _QWORD *ViewBase; // rbx
  __int64 v10; // r12
  HWND v11; // rbx
  int SyncedWindowDataByHwnd; // eax
  int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  int v17; // r12d
  HWND v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // r9d
  int v22; // eax
  CDesktopThumbnailBase *v23; // rcx
  int v24; // eax
  RECT v25; // xmm0
  int v26; // eax
  CVisual *v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-59h]
  struct CWindowData *v30; // [rsp+30h] [rbp-49h] BYREF
  _QWORD *v31; // [rsp+38h] [rbp-41h]
  CWindowList *v32[2]; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+50h] [rbp-29h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v34; // [rsp+58h] [rbp-21h] BYREF

  v32[0] = this;
  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset_0(&v34, 0, sizeof(v34));
  if ( !ThumbnailData
    || a2 != *((_DWORD *)a3 + 2)
    || *(double *)((char *)a3 + 36) == 0.0
    || *(double *)((char *)a3 + 44) == 0.0
    || !*((_BYTE *)ThumbnailData + 42)
    || *((_DWORD *)ThumbnailData + 30) != 2 )
  {
    v29 = 4085;
    goto LABEL_52;
  }
  if ( a4->ViewSize < 8 * (unsigned __int64)(unsigned int)(*((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 3)) )
  {
    v29 = 4090;
LABEL_52:
    v21 = -2147024809;
    v13 = -2147024809;
    goto LABEL_53;
  }
  ViewBase = a4->ViewBase;
  *((_DWORD *)ThumbnailData + 40) = 0;
  v31 = ViewBase;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 136, 8u);
  v10 = 0LL;
  if ( !*((_DWORD *)a3 + 3) )
  {
LABEL_20:
    *((_DWORD *)ThumbnailData + 48) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 168, 8u);
    v17 = 0;
    if ( *((_DWORD *)a3 + 4) )
    {
      while ( 1 )
      {
        v18 = (HWND)ViewBase[v17 + *((_DWORD *)a3 + 3)];
        if ( (unsigned int)DwmValidateWindow(v18, a2) )
        {
          SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v32[0], v18, &v30);
          v13 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v29 = 4118;
            goto LABEL_31;
          }
          if ( v30 )
          {
            v19 = *((_DWORD *)ThumbnailData + 48);
            v20 = v19 + 1;
            if ( v19 + 1 < v19 )
            {
              v13 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_38:
              v29 = 4121;
              goto LABEL_29;
            }
            if ( v20 > *((_DWORD *)ThumbnailData + 47) )
            {
              v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)ThumbnailData + 168, 8, 1, &v30);
              v13 = v22;
              if ( v22 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xC0u);
              if ( v13 < 0 )
                goto LABEL_38;
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)ThumbnailData + 21) + 8LL * v19) = v30;
              *((_DWORD *)ThumbnailData + 48) = v20;
            }
          }
        }
        if ( (unsigned int)++v17 >= *((_DWORD *)a3 + 4) )
          break;
        ViewBase = v31;
      }
    }
    v23 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 16);
    if ( v23
      && (SyncedWindowDataByHwnd = CDesktopThumbnailBase::UpdateWindowClones(v23),
          v13 = SyncedWindowDataByHwnd,
          SyncedWindowDataByHwnd < 0) )
    {
      v29 = 4130;
    }
    else
    {
      v24 = (int)*(double *)((char *)a3 + 36);
      v32[0] = 0LL;
      v34.dwFlags = 3;
      v25 = *(RECT *)((char *)a3 + 20);
      LODWORD(v32[1]) = v24;
      v26 = (int)*(double *)((char *)a3 + 44);
      v34.rcSource = v25;
      HIDWORD(v32[1]) = v26;
      v34.rcDestination = *(RECT *)v32;
      SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties(ThumbnailData, &v34);
      v13 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd >= 0 )
      {
        SyncedWindowDataByHwnd = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
        v13 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd >= 0 )
        {
          SyncedWindowDataByHwnd = VisualCollection::InsertRelative(
                                     (VisualCollection *)(*((_QWORD *)ThumbnailData + 13) + 32LL),
                                     *((struct CVisual **)ThumbnailData + 14),
                                     0LL,
                                     0,
                                     1);
          v13 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd >= 0 )
          {
            v27 = *(CVisual **)(*((_QWORD *)ThumbnailData + 2) + 400LL);
            if ( v27 )
              CVisual::SetDirtyFlags(v27, 0x8000000);
            goto LABEL_54;
          }
          v29 = 4140;
        }
        else
        {
          v29 = 4139;
        }
      }
      else
      {
        v29 = 4138;
      }
    }
LABEL_31:
    v21 = SyncedWindowDataByHwnd;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v11 = (HWND)ViewBase[v10];
    if ( !(unsigned int)DwmValidateWindow(v11, a2) )
      goto LABEL_19;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v32[0], v11, &v30);
    v13 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v29 = 4103;
      goto LABEL_31;
    }
    if ( !v30 )
      goto LABEL_19;
    v14 = *((_DWORD *)ThumbnailData + 40);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
      break;
    if ( v15 > *((_DWORD *)ThumbnailData + 39) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)ThumbnailData + 136, 8, 1, &v30);
      v13 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xC0u);
      if ( v13 < 0 )
        goto LABEL_28;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)ThumbnailData + 17) + 8LL * v14) = v30;
      *((_DWORD *)ThumbnailData + 40) = v15;
    }
LABEL_19:
    ViewBase = v31;
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((_DWORD *)a3 + 3) )
      goto LABEL_20;
  }
  v13 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_28:
  v29 = 4106;
LABEL_29:
  v21 = v13;
LABEL_53:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, v29);
LABEL_54:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return (unsigned int)v13;
}
