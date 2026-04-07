/*
 * XREFs of ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800943F8
 * Callers:
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x1800936EC (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x1800942F4 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800380E8 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UnRegisterGlobalTimer(CAnimatedGlassSheet *this)
{
  if ( *((_BYTE *)this + 488) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 488) = 0;
  }
  return 0LL;
}
