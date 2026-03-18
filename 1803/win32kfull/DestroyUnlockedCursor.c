/*
 * XREFs of DestroyUnlockedCursor @ 0x1C0108880
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1)
{
  return DestroyCursor(a1, 2);
}
