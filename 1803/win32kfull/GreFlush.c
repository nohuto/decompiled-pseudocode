/*
 * XREFs of GreFlush @ 0x1C00A60A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C00A645C (-vSynchronizeDriver@@YAXK@Z.c)
 */

void GreFlush()
{
  vSynchronizeDriver(0x40u);
}
