/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000ED5C
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000E704 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000EB90 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022FA0 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18000E610 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType@1@@Z @ 0x18000E69C (-IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000EE64 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007C68C (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(__int64 a1, int a2)
{
  char v4; // r8
  __int64 v5; // rdx
  char v6; // bl
  CLivePreview *v8; // rcx
  bool v9; // al
  __int64 v10; // rax

  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 328) + 604LL);
  if ( (v4 & 0x10) != 0 )
    return 0;
  if ( (v4 & 0x20) != 0 )
    return 0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    return 0;
  v5 = *(_QWORD *)(a1 + 328);
  if ( (*(_DWORD *)(v5 + 100) & 0xC00000) != 0xC00000 && (*(_BYTE *)(v5 + 608) & 0x20) == 0 )
    return 0;
  if ( *(char *)(v5 + 104) < 0 )
    return 0;
  v6 = 1;
  if ( (*(_BYTE *)(v5 + 604) & 1) == 0 )
    return 0;
  if ( *(char *)(v5 + 607) < 0 )
    return 0;
  if ( !*(_BYTE *)(v5 + 352) )
    return 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    return 0;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) >= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 181) )
  {
    v10 = *(_QWORD *)(a1 + 360);
    if ( !v10 || *(_BYTE *)(v10 + 72) )
      return 0;
  }
  v8 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
  v9 = *((_BYTE *)v8 + 280) && v5 && CLivePreview::_IsInLivePreview(v8, (const struct CWindowData *)v5);
  if ( v9
    || !CDesktopManager::IsFeatureEnabled(1)
    || !CTopLevelWindow3D::IsTransitionEnabledForWindowGroup(*(const struct CWindowData **)(a1 + 328), a2) )
  {
    return 0;
  }
  return v6;
}
