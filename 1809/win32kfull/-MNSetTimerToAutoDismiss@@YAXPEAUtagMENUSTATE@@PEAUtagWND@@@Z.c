/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C020A1C0
 * Callers:
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0017750 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 2) & 0x1800) == 0x800 )
  {
    if ( InternalSetTimer((unsigned __int64)a2, 65529LL, 16 * gdtMNDropDown, 0LL, 0, 16) )
      *((_DWORD *)a1 + 2) |= 0x1000u;
  }
}
