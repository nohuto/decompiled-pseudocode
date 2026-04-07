/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18002407C
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x180010CE8 (--1CButton@@MEAA@XZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180021ACC (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18007E81C (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180038D48 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     McTemplateU0qp @ 0x18007E89C (McTemplateU0qp.c)
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
