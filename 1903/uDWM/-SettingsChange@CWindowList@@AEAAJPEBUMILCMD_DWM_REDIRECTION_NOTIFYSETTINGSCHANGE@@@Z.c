/*
 * XREFs of ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014060
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180013790 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18000CB08 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800105B4 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180012958 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022BF4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180028F30 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002C664 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x18008239C (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x1800829E4 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B4F54 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x1800B58AC (-UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ.c)
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
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  char *v11; // r14
  char *v12; // rbx
  CProjectedShadowScene *v13; // rbx
  CGlobalLightSet *v14; // rbx
  __int64 v15; // rcx
  MagnifierExperienceHelper *v16; // rcx
  CTopLevelWindow *v17; // rcx
  __int64 v18; // rbp
  int v20; // eax
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v21; // rbp
  unsigned int v22; // edx
  void *v23; // [rsp+28h] [rbp-40h]
  PVOID RestartKey; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *IconicResourceNoRef; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+88h] [rbp+20h] BYREF

  RestartKey = 0LL;
  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CDesktopManager::UpdateSettings(CDesktopManager::s_pDesktopManagerInstance, *((_DWORD *)a2 + 1));
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x17F2u, v23);
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
      v10 = v8;
      if ( !v8 )
        break;
      v11 = (char *)(v8 + 10);
      v12 = (char *)v8[10];
      if ( v12 != (char *)(v8 + 10) )
      {
        do
        {
          v17 = (CTopLevelWindow *)*((_QWORD *)v12 + 50);
          if ( v17 )
            CTopLevelWindow::OnSettingsUpdated(v17, *((_DWORD *)a2 + 1));
          v18 = *((_QWORD *)v12 + 55);
          if ( v18 )
          {
            CTopLevelWindow::OnSettingsUpdated(*(CTopLevelWindow **)(v18 + 88), *((_DWORD *)a2 + 1));
            v20 = CVisual::RenderRecursive(*(CVisual **)(v18 + 88));
            if ( v20 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x28Cu, v23);
          }
          if ( CWindowData::IsImmersiveWindow((CWindowData *)v12) )
          {
            if ( *((_DWORD *)v12 + 118) )
            {
              IconicResourceNoRef = (struct _RTL_CRITICAL_SECTION *)CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                                                                      v7,
                                                                      *((HWND *)v12 + 5));
              v21 = (CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)IconicResourceNoRef;
              DynArray<CBitmapSource *,0>::Remove((char *)v7 + 16, &IconicResourceNoRef);
              if ( v21 )
                CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v21, v22);
            }
          }
          v12 = *(char **)v12;
        }
        while ( v12 != v11 );
      }
      v13 = (CProjectedShadowScene *)v10[6];
      if ( v13 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        IconicResourceNoRef = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CProjectedShadowScene::PositionProjectedShadowReceiverVisual(v13);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&IconicResourceNoRef);
      }
      v14 = (CGlobalLightSet *)v10[7];
      if ( v14 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        IconicResourceNoRef = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CGlobalLightSet::PositionCoordinateSpaceVisual(v14);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&IconicResourceNoRef);
      }
      wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService(v9);
      v15 = v10[2];
      if ( v15 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        v16 = *(MagnifierExperienceHelper **)(v15 + 176);
        if ( v16 )
          MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(v16);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return v5;
}
