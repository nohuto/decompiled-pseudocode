/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18008B948
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18002682C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // esi
  struct CWindowData *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  CBaseObject *v11; // rbx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rcx
  CBaseObject *v25; // [rsp+68h] [rbp+10h] BYREF
  struct CWindowData *v26; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+78h] [rbp+20h] BYREF

  v27 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v25 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v26);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1051u);
    goto LABEL_50;
  }
  v7 = v26;
  if ( !v26 )
  {
    v6 = -2147024809;
    goto LABEL_50;
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   24LL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v8[2] = 0LL;
    *((_DWORD *)v8 + 4) = 1;
    *v8 = &CapturedWindowSWRVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    v8[1] = &CSWRListener::`vftable'{for `CBaseObject'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x105Au);
    goto LABEL_50;
  }
  v10 = CSecondaryWindowRepresentation::Create(*((_DWORD *)a2 + 3) != 0 ? 6 : 2, v9, (__int64)v7, 0, 100, &v25);
  v11 = v25;
  v6 = v10;
  if ( v10 >= 0 )
  {
    v12 = 0;
    if ( *((_DWORD *)v25 + 20) - *((_DWORD *)v25 + 23) - *((_DWORD *)v25 + 22) >= 0 )
      v12 = *((_DWORD *)v25 + 20) - *((_DWORD *)v25 + 23) - *((_DWORD *)v25 + 22);
    v13 = *((_DWORD *)v25 + 21) - *((_DWORD *)v25 + 25) - *((_DWORD *)v25 + 24);
    *((_DWORD *)a2 + 4) = v12;
    v14 = 0;
    if ( v13 >= 0 )
      v14 = v13;
    *((_DWORD *)a2 + 5) = v14;
    if ( (*((_BYTE *)v7 + 600) & 4) == 0 || *((_DWORD *)a2 + 3) || *((_DWORD *)v11 + 18) != 2 )
      goto LABEL_47;
    v15 = 0LL;
    v16 = *((_QWORD *)v11 + 8);
    if ( *((_DWORD *)v11 + 18) != 1 )
    {
      if ( *((_DWORD *)v11 + 18) == 2 )
      {
        v17 = *(_QWORD *)(v16 + 424);
        if ( v17 )
        {
          v15 = *(_QWORD *)(v17 + 32);
          goto LABEL_28;
        }
      }
      else
      {
        if ( *((_DWORD *)v11 + 18) != 3 )
          goto LABEL_28;
        if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v11 + 8)) )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(v16 + 432) + 80LL);
          goto LABEL_28;
        }
      }
    }
    v15 = v16;
LABEL_28:
    if ( (*(_DWORD *)(v15 + 100) & 0x1000000) != 0 )
      goto LABEL_38;
    v18 = 0LL;
    v19 = *((_QWORD *)v11 + 8);
    if ( *((_DWORD *)v11 + 18) != 1 )
    {
      if ( *((_DWORD *)v11 + 18) == 2 )
      {
        v20 = *(_QWORD *)(v19 + 424);
        if ( v20 )
        {
          v18 = *(_QWORD *)(v20 + 32);
          goto LABEL_37;
        }
      }
      else
      {
        if ( *((_DWORD *)v11 + 18) != 3 )
          goto LABEL_37;
        if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v11 + 8)) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v19 + 432) + 80LL);
          goto LABEL_37;
        }
      }
    }
    v18 = v19;
LABEL_37:
    if ( *(char *)(v18 + 600) >= 0 )
      goto LABEL_47;
LABEL_38:
    v21 = 0LL;
    v22 = *((_QWORD *)v11 + 8);
    if ( *((_DWORD *)v11 + 18) != 1 )
    {
      if ( *((_DWORD *)v11 + 18) == 2 )
      {
        v23 = *(_QWORD *)(v22 + 424);
        if ( v23 )
        {
          v21 = *(_DWORD **)(v23 + 32);
          goto LABEL_46;
        }
      }
      else
      {
        if ( *((_DWORD *)v11 + 18) != 3 )
        {
LABEL_46:
          *((_DWORD *)a2 + 4) -= v21[70] + v21[71];
          *((_DWORD *)a2 + 5) -= v21[72] + v21[73];
          goto LABEL_47;
        }
        if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v11 + 8)) )
        {
          v21 = *(_DWORD **)(*(_QWORD *)(v22 + 432) + 80LL);
          goto LABEL_46;
        }
      }
    }
    v21 = (_DWORD *)v22;
    goto LABEL_46;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1061u);
LABEL_47:
  if ( v11 )
    CBaseObject::Release(v11);
  CBaseObject::Release((CBaseObject *)(v9 + 8));
LABEL_50:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
  return v6;
}
