/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180040080
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800061C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800108E8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001606C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // edi
  struct CWindowData *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  CBaseObject *v11; // rbx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rcx
  void *v25; // [rsp+20h] [rbp-38h]
  void *v26; // [rsp+28h] [rbp-30h]
  void *v27; // [rsp+28h] [rbp-30h]
  CBaseObject *v28; // [rsp+68h] [rbp+10h] BYREF
  struct CWindowData *v29; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+78h] [rbp+20h] BYREF

  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v28 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v29);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x10A0u, v26);
    goto LABEL_15;
  }
  v7 = v29;
  if ( !v29 )
  {
    v6 = -2147024809;
    goto LABEL_15;
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   24LL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v8[2] = 0LL;
    *((_DWORD *)v8 + 4) = 1;
    *v8 = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    v8[1] = &CSWRListener::`vftable'{for `CBaseObject'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x10A9u, v26);
    goto LABEL_15;
  }
  LODWORD(v25) = 100;
  v10 = CSecondaryWindowRepresentation::Create(*((_DWORD *)a2 + 3) != 0 ? 6 : 2, v9, (__int64)v7, 0, v25, &v28);
  v11 = v28;
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x10B0u, v27);
    goto LABEL_12;
  }
  v12 = 0;
  if ( *((_DWORD *)v28 + 20) - *((_DWORD *)v28 + 23) - *((_DWORD *)v28 + 22) >= 0 )
    v12 = *((_DWORD *)v28 + 20) - *((_DWORD *)v28 + 23) - *((_DWORD *)v28 + 22);
  v13 = *((_DWORD *)v28 + 21) - *((_DWORD *)v28 + 25) - *((_DWORD *)v28 + 24);
  *((_DWORD *)a2 + 4) = v12;
  v14 = 0;
  if ( v13 >= 0 )
    v14 = v13;
  *((_DWORD *)a2 + 5) = v14;
  if ( (*((_BYTE *)v7 + 608) & 4) == 0 || *((_DWORD *)a2 + 3) || *((_DWORD *)v11 + 18) != 2 )
    goto LABEL_12;
  v16 = 0LL;
  v17 = *((_QWORD *)v11 + 8);
  if ( *((_DWORD *)v11 + 18) != 1 )
  {
    if ( *((_DWORD *)v11 + 18) == 2 )
    {
      v18 = *(_QWORD *)(v17 + 432);
      if ( v18 )
      {
        v16 = *(_QWORD *)(v18 + 32);
        goto LABEL_32;
      }
    }
    else
    {
      if ( *((_DWORD *)v11 + 18) != 3 )
        goto LABEL_32;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v11 + 8)) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v17 + 440) + 80LL);
        goto LABEL_32;
      }
    }
  }
  v16 = v17;
LABEL_32:
  if ( (*(_DWORD *)(v16 + 100) & 0x1000000) != 0 )
    goto LABEL_42;
  v19 = 0LL;
  v20 = *((_QWORD *)v11 + 8);
  if ( *((_DWORD *)v11 + 18) != 1 )
  {
    if ( *((_DWORD *)v11 + 18) == 2 )
    {
      v21 = *(_QWORD *)(v20 + 432);
      if ( v21 )
      {
        v19 = *(_QWORD *)(v21 + 32);
        goto LABEL_41;
      }
    }
    else
    {
      if ( *((_DWORD *)v11 + 18) != 3 )
        goto LABEL_41;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v11 + 8)) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v20 + 440) + 80LL);
        goto LABEL_41;
      }
    }
  }
  v19 = v20;
LABEL_41:
  if ( *(char *)(v19 + 608) < 0 )
  {
LABEL_42:
    v22 = 0LL;
    v23 = *((_QWORD *)v11 + 8);
    if ( *((_DWORD *)v11 + 18) != 1 )
    {
      if ( *((_DWORD *)v11 + 18) == 2 )
      {
        v24 = *(_QWORD *)(v23 + 432);
        if ( v24 )
        {
          v22 = *(_DWORD **)(v24 + 32);
          goto LABEL_50;
        }
      }
      else
      {
        if ( *((_DWORD *)v11 + 18) != 3 )
        {
LABEL_50:
          *((_DWORD *)a2 + 4) -= v22[70] + v22[71];
          *((_DWORD *)a2 + 5) -= v22[72] + v22[73];
          goto LABEL_12;
        }
        if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v11 + 8)) )
        {
          v22 = *(_DWORD **)(*(_QWORD *)(v23 + 440) + 80LL);
          goto LABEL_50;
        }
      }
    }
    v22 = (_DWORD *)v23;
    goto LABEL_50;
  }
LABEL_12:
  if ( v11 )
    CBaseObject::Release(v11);
  CBaseObject::Release((CBaseObject *)(v9 + 8));
LABEL_15:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return v6;
}
