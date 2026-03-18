/*
 * XREFs of DestroyUnlockedCursor @ 0x1C01386B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002EA8C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

char __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1)
{
  return _DestroyCursor(a1, 2u);
}
