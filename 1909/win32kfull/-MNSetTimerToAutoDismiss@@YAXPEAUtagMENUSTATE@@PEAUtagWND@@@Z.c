/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0221720
 * Callers:
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C004C470 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 2) & 0x1800) == 0x800 )
  {
    if ( InternalSetTimer(
           (unsigned __int64)a2,
           65529LL,
           (unsigned int)(16 * LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1)),
           0LL,
           0,
           16) )
    {
      *((_DWORD *)a1 + 2) |= 0x1000u;
    }
  }
}
