/*
 * XREFs of _CreatePopupMenu @ 0x1C00F56B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00F56E8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

struct tagMENU *CreatePopupMenu()
{
  return InternalCreateMenu(1);
}
