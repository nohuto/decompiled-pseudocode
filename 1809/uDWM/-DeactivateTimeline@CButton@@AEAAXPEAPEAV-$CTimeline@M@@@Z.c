/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180025314
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x180025D44 (--1CButton@@MEAA@XZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800781EC (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037974 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 */

void __fastcall CButton::DeactivateTimeline(struct CVisual *this, __int64 *a2)
{
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al

  if ( *a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(this, &UdwmAnimation_Stop, 7LL);
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v4 = *a2;
    if ( *a2 )
    {
      v5 = (*(_DWORD *)(v4 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v5 )
        v6 = 1;
      *a2 = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
}
