/*
 * XREFs of ?MKHideMouseCursor@@YAXXZ @ 0x1C0075F50
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0074A20 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C015E880 (-TurnOffMouseKeys@@YAXXZ.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C00A45F0 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void MKHideMouseCursor(void)
{
  if ( (gdwPUDFlags & 0x1000) != 0 )
  {
    gdwGTERMFlags &= ~1u;
    gdwPUDFlags &= ~0x1000u;
    *((_DWORD *)gpsi + 493) = 0;
    *((_DWORD *)gpsi + 517) = 0;
    SetGlobalCursorLevel(-1);
  }
}
