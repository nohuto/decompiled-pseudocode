/*
 * XREFs of ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18009E2DC
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009898C (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18009E390 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180038464 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180039AE4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x180098828 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::PlaceVisuals(CPenBarrelKeyVisual *this)
{
  unsigned int v2; // r8d
  CContactManager *v3; // rcx
  unsigned int v4; // edx
  struct tagPOINT v6; // [rsp+40h] [rbp+8h] BYREF

  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 40), *((_DWORD *)this + 75) - *((_DWORD *)this + 82) / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 40), *((_DWORD *)this + 76) - *((_DWORD *)this + 83) / 2);
  v2 = *((_DWORD *)this + 77);
  v6.x = *((_DWORD *)this + 75);
  v3 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v4 = *((_DWORD *)this + 74);
  v6.y = *((_DWORD *)this + 76) + *((_DWORD *)this + 84) + *((_DWORD *)this + 83) / 2;
  CContactManager::PostKeystateFeedbackUpdate(v3, v4, v2, &v6, (v2 & 0x1F) != 0);
  return 0LL;
}
