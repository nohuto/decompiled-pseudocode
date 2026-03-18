/*
 * XREFs of _CreatePopupMenu @ 0x1C01134A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C005E3D8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

struct tagMENU *__fastcall CreatePopupMenu(__int64 a1, __int64 a2, __int64 a3)
{
  return InternalCreateMenu(1, a2, a3);
}
