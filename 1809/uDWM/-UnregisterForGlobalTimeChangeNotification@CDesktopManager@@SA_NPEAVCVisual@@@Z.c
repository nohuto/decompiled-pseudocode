/*
 * XREFs of ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037974
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180014A70 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180025314 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180039D18 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180039D38 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18004BB90 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180074500 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x18007560C (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180075684 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18008FAD8 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x180090444 (-Stop@CRippleEffect@@QEAAJXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800A0C44 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CDesktopManager::UnregisterForGlobalTimeChangeNotification(struct CVisual *this)
{
  CDesktopManager *v1; // r9
  char v2; // bl
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int64 v6; // r10
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v4 = 0;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 150);
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 72);
  if ( v5 )
  {
    do
    {
      if ( this == *(struct CVisual **)(v6 + 8LL * v4) )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  if ( v4 < v5 )
  {
    while ( v4 < v5 - 1 )
    {
      v8 = v4;
      v9 = *(_QWORD *)(v6 + 8LL * ++v4);
      *(_QWORD *)(v6 + 8 * v8) = v9;
      v5 = *((_DWORD *)v1 + 150);
    }
    *((_DWORD *)v1 + 150) = v5 - 1;
    v2 = 1;
    CBaseObject::Release(this);
  }
  return v2;
}
