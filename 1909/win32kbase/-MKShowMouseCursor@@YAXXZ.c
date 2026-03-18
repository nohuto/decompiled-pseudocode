/*
 * XREFs of ?MKShowMouseCursor@@YAXXZ @ 0x1C015C260
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00604F0 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C00A3590 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void MKShowMouseCursor(void)
{
  if ( (gdwGTERMFlags & 1) == 0 )
  {
    gdwPUDFlags |= 0x1000u;
    gdwGTERMFlags |= 1u;
    *((_DWORD *)gpsi + 493) = 1;
    *((_DWORD *)gpsi + 517) = 2;
    SetGlobalCursorLevel(0);
  }
}
