/*
 * XREFs of ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000FA8C (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010AC8 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180010C04 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180010D4C (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001AB14 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001F8F0 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002319C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180033174 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18003B6B4 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FACA (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pddddd @ 0x180093264 (McTemplateU0pddddd.c)
 */

__int64 __fastcall CWindowList::DPIChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // esi
  struct CWindowData *v5; // rbx
  int v6; // ebp
  struct CWindowData *v7; // rdi
  int v8; // edi
  __int64 v9; // rax
  bool v10; // r9
  int v11; // r8d
  BOOL v12; // ebp
  CTopLevelWindow *v13; // rcx
  int v14; // r14d
  float v15; // xmm7_4
  CWindowList *v16; // rcx
  int v18; // eax
  CWindowList *v19; // rcx
  CTopLevelWindow *v20; // rcx
  HWND v21; // rdx
  CWindowData *v22; // rax
  CWindowData *v23; // rax
  int v24; // eax
  void *v25; // [rsp+28h] [rbp-50h]
  bool v26; // [rsp+88h] [rbp+10h] BYREF
  struct tagPOINT v27; // [rsp+90h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v22 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         752LL);
  if ( !v22 || (v23 = CWindowData::CWindowData(v22), (v7 = v23) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v25);
    v8 = -2147024882;
    goto LABEL_46;
  }
  *((_QWORD *)v23 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v23);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v24 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v24;
  if ( v24 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x895u, v25);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x14EAu, v25);
    goto LABEL_30;
  }
  if ( v5 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
    v10 = *((double *)v5 + 39) != *(double *)v9
       || *((_DWORD *)v5 + 80) != *(_DWORD *)(v9 + 8)
       || *((_DWORD *)v5 + 81) != *(_DWORD *)(v9 + 12);
    v12 = 1;
    if ( *((_DWORD *)v5 + 82) == *(_DWORD *)(v9 + 16)
      && *((_DWORD *)v5 + 83) == *(_DWORD *)(v9 + 20)
      && *((_DWORD *)v5 + 84) == *(_DWORD *)(v9 + 24)
      && *((_DWORD *)v5 + 85) == *(_DWORD *)(v9 + 28) )
    {
      v11 = *((_DWORD *)v5 + 87);
      if ( (((unsigned __int8)v11 ^ *(_BYTE *)(v9 + 36)) & 1) == 0
        && (((unsigned __int8)v11 ^ (unsigned __int8)*(_DWORD *)(v9 + 36)) & 2) == 0
        && *((_DWORD *)v5 + 86) == *(_DWORD *)(v9 + 32) )
      {
        v12 = 0;
      }
    }
    v13 = (CTopLevelWindow *)*((_QWORD *)v5 + 50);
    *(_OWORD *)((char *)v5 + 312) = *(_OWORD *)v9;
    *(_OWORD *)((char *)v5 + 328) = *(_OWORD *)(v9 + 16);
    *((_QWORD *)v5 + 43) = *(_QWORD *)(v9 + 32);
    *((_QWORD *)v5 + 37) = *(_QWORD *)v9;
    if ( v13 && v10 )
      CTopLevelWindow::OnSettingsUpdated(v13, 1);
    v8 = 0;
    CWindowData::EstablishPixelAlignedScale(v5, &v26);
    v14 = *((_DWORD *)v5 + 47) - *((_DWORD *)v5 + 45);
    if ( v14 < 0 )
      v14 = 0;
    if ( *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46) >= 0 )
      v4 = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
    v15 = *((float *)v5 + 76);
    if ( v15 != 1.0 )
    {
      v14 = (int)floor_0((float)((float)v14 * v15) + 0.5);
      v4 = (int)floor_0((float)((float)v4 * v15) + 0.5);
    }
    *((_DWORD *)v5 + 14) = v14 + *((_DWORD *)v5 + 12);
    v16 = (CWindowList *)(unsigned int)(v4 + *((_DWORD *)v5 + 13));
    *((_DWORD *)v5 + 15) = (_DWORD)v16;
    if ( *((_QWORD *)v5 + 50) && (v18 = CWindowData::OnWindowSizeUpdated(v5), v8 = v18, v18 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xD54u, v25);
    }
    else if ( v26 || v12 )
    {
      CWindowList::OnClientMarginsChange(v16, v5);
      CWindowList::OnClientGlassChange(v19, v5);
      v20 = (CTopLevelWindow *)*((_QWORD *)v5 + 50);
      if ( v20 )
        CTopLevelWindow::OnWindowScaleUpdated(v20);
      v21 = (HWND)*((_QWORD *)v5 + 5);
      v27 = (struct tagPOINT)*((_QWORD *)v5 + 6);
      v26 = 0;
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
        v21,
        &v27);
      CAnimationScheduler::OnWindowPositionChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
        v5,
        v27,
        &v26);
      if ( !v26 )
        CWindowList::OnPositionChange(this, v5, 1);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1507u, v25);
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0pddddd(
        (_DWORD)v16,
        *((_DWORD *)v5 + 82),
        *((_QWORD *)v5 + 5),
        *((_DWORD *)v5 + 80),
        *((_DWORD *)v5 + 82),
        *((_DWORD *)v5 + 83),
        *((_DWORD *)v5 + 84),
        *((_DWORD *)v5 + 85));
    }
  }
LABEL_30:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v8;
}
