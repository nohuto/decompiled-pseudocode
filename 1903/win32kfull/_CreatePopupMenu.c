/*
 * XREFs of _CreatePopupMenu @ 0x1C011B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C011B6F8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

struct tagMENU *CreatePopupMenu()
{
  return InternalCreateMenu(1);
}
