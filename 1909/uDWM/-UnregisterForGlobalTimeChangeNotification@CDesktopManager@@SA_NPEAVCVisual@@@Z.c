/*
 * XREFs of ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800380E8
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020FF0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800214B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180023A3C (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18003B344 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18003B488 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18004DD10 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x18007AAD0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x18007BC3C (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18007BCB4 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800943F8 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x180094D44 (-Stop@CRippleEffect@@QEAAJXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800A50A8 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CDesktopManager::UnregisterForGlobalTimeChangeNotification(struct CVisual *this)
{
  CDesktopManager *v1; // r9
  __int64 v2; // r8
  unsigned int v4; // edx
  char v5; // bl
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0LL;
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 150);
  v5 = 1;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 72);
  if ( v4 )
  {
    do
    {
      if ( this == *(struct CVisual **)(v6 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 >= v4 )
    return 0;
  while ( (unsigned int)v2 < v4 - 1 )
  {
    v7 = (unsigned int)v2;
    v8 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v2 + 1));
    LODWORD(v2) = v2 + 1;
    *(_QWORD *)(v6 + 8 * v7) = v8;
    v4 = *((_DWORD *)v1 + 150);
  }
  *((_DWORD *)v1 + 150) = v4 - 1;
  CBaseObject::Release(this);
  return v5;
}
