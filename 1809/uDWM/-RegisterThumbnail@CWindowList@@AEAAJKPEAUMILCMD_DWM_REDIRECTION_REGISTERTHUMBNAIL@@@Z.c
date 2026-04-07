/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18008C00C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18000A124 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180087C6C (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  HWND v6; // rdx
  int SyncedWindowDataByHwnd; // eax
  int v8; // ebx
  int v9; // r9d
  struct CWindowData *v10; // rsi
  struct CWindowData *v11; // r13
  char IsBaseThumbnailDestinationReachable; // al
  __int64 v13; // rax
  struct CWindowData *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-20h]
  struct CWindowData *v27; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+90h] [rbp+50h] BYREF
  struct CWindowData *v30; // [rsp+98h] [rbp+58h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(HWND *)((char *)a3 + 12);
  v30 = 0LL;
  v27 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v6, &v30);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v26 = 3685;
LABEL_3:
    v9 = SyncedWindowDataByHwnd;
    goto LABEL_4;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v27);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v26 = 3686;
    goto LABEL_3;
  }
  v10 = v30;
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId(*((HWND *)v30 + 5), &dwProcessId)
    || (v11 = v27) == 0LL
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 48) = v10,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                (struct CWindowData **)this,
                                                v11),
        *((_QWORD *)this + 48) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v8 = -2147024809;
    goto LABEL_50;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          104LL);
  v14 = (struct CWindowData *)v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = &CThumbnailData::`vftable';
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_DWORD *)(v13 + 40) = 0;
    memset_0((void *)(v13 + 44), 0, 0x2DuLL);
    *((_QWORD *)v14 + 12) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  v30 = v14;
  if ( !v14 )
  {
    v8 = -2147024882;
    v26 = 3723;
    v9 = -2147024882;
    goto LABEL_4;
  }
  *((_QWORD *)v14 + 1) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v30 + 2) = v10;
  *((_QWORD *)v30 + 3) = v11;
  *((_BYTE *)v30 + 40) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v30 + 41) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v30 + 42) = 0;
  v15 = *((_DWORD *)this + 94);
  v16 = v15 + 1;
  v8 = v15 + 1 < v15 ? 0x80070216 : 0;
  if ( v15 + 1 >= v15 )
  {
    if ( v16 > *((_DWORD *)this + 93) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 352, 8u, 1, &v30);
      v8 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 44) + 8LL * *((unsigned int *)this + 94)) = v30;
      *((_DWORD *)this + 94) = v16;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xB5u);
  }
  if ( v8 < 0 )
  {
    v26 = 3732;
LABEL_26:
    v9 = v8;
    goto LABEL_4;
  }
  v18 = *((_DWORD *)v10 + 126);
  v19 = v18 + 1;
  v8 = v18 + 1 < v18 ? 0x80070216 : 0;
  if ( v18 + 1 >= v18 )
  {
    if ( v19 > *((_DWORD *)v10 + 125) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 480, 8u, 1, &v30);
      v8 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v10 + 60) + 8LL * *((unsigned int *)v10 + 126)) = v30;
      *((_DWORD *)v10 + 126) = v19;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xB5u);
  }
  if ( v8 < 0 )
  {
    v26 = 3739;
    goto LABEL_26;
  }
  v21 = *((_DWORD *)v11 + 134);
  v22 = v21 + 1;
  v8 = v21 + 1 < v21 ? 0x80070216 : 0;
  if ( v21 + 1 >= v21 )
  {
    if ( v22 > *((_DWORD *)v11 + 133) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 512, 8u, 1, &v30);
      v8 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v11 + 64) + 8LL * *((unsigned int *)v11 + 134)) = v30;
      *((_DWORD *)v11 + 134) = v22;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xB5u);
  }
  if ( v8 < 0 )
  {
    v26 = 3740;
    goto LABEL_26;
  }
  if ( !*((_QWORD *)v10 + 49) )
    goto LABEL_50;
  v24 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v30 + 8LL))(v30);
  v8 = v24;
  if ( v24 >= 0 )
  {
    v24 = CTopLevelWindow::OnThumbnailAdded(*((CTopLevelWindow **)v10 + 49), *((struct CVisual **)v30 + 12));
    v8 = v24;
    if ( v24 >= 0 )
      goto LABEL_50;
    v26 = 3750;
  }
  else
  {
    v26 = 3748;
  }
  v9 = v24;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v26);
LABEL_50:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return (unsigned int)v8;
}
