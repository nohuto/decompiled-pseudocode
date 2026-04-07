/*
 * XREFs of ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180020C10
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180012790 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180020D8C (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180026F08 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002CDC4 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x18007C014 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18007C678 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18007C9A4 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B0A9C (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowList::SettingsChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *a2)
{
  int updated; // eax
  unsigned int v5; // r15d
  struct _RTL_GENERIC_TABLE *v6; // r12
  CImmersiveIconicBitmapRegistry *v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  char *v10; // r14
  char *v11; // rbx
  CProjectedShadowScene *v12; // rbx
  CGlobalLightSet *v13; // rbx
  CTopLevelWindow *v14; // rcx
  __int64 v15; // rbp
  int v17; // eax
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v18; // rbp
  unsigned int v19; // edx
  PVOID RestartKey; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *IconicResourceNoRef; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+88h] [rbp+20h] BYREF

  RestartKey = 0LL;
  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CDesktopManager::UpdateSettings(CDesktopManager::s_pDesktopManagerInstance, *((_DWORD *)a2 + 1));
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1782u);
  }
  else
  {
    if ( (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 80LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65));
    v6 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    v7 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 38);
    while ( 1 )
    {
      v8 = RtlEnumerateGenericTableWithoutSplaying(v6, &RestartKey);
      v9 = v8;
      if ( !v8 )
        break;
      v10 = (char *)(v8 + 10);
      v11 = (char *)v8[10];
      if ( v11 != (char *)(v8 + 10) )
      {
        do
        {
          v14 = (CTopLevelWindow *)*((_QWORD *)v11 + 49);
          if ( v14 )
            CTopLevelWindow::OnSettingsUpdated(v14, *((_DWORD *)a2 + 1));
          v15 = *((_QWORD *)v11 + 54);
          if ( v15 )
          {
            CTopLevelWindow::OnSettingsUpdated(*(CTopLevelWindow **)(v15 + 88), *((_DWORD *)a2 + 1));
            v17 = CVisual::RenderRecursive(*(CVisual **)(v15 + 88));
            if ( v17 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x28Cu);
          }
          if ( *((int *)v11 + 28) >= 8 && *((int *)v11 + 28) <= 11 || CWindowData::IsShellManaged((CWindowData *)v11) )
          {
            if ( *((_DWORD *)v11 + 116) )
            {
              IconicResourceNoRef = (struct _RTL_CRITICAL_SECTION *)CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                                                                      v7,
                                                                      *((HWND *)v11 + 5));
              v18 = (CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)IconicResourceNoRef;
              DynArray<CBitmapSource *,0>::Remove((char *)v7 + 16, &IconicResourceNoRef);
              if ( v18 )
                CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v18, v19);
            }
          }
          v11 = *(char **)v11;
        }
        while ( v11 != v10 );
      }
      v12 = (CProjectedShadowScene *)v9[6];
      if ( v12 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        IconicResourceNoRef = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CProjectedShadowScene::PositionProjectedShadowReceiverVisual(v12);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&IconicResourceNoRef);
      }
      v13 = (CGlobalLightSet *)v9[7];
      if ( v13 )
      {
        if ( (*((_BYTE *)a2 + 4) & 0x20) != 0 )
        {
          IconicResourceNoRef = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          CGlobalLightSet::PositionCoordinateSpaceVisual(v13);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&IconicResourceNoRef);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v5;
}
