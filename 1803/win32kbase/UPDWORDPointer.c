/*
 * XREFs of UPDWORDPointer @ 0x1C0064D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall UPDWORDPointer(int a1)
{
  return &gpviCPUserPreferences[4 * ((unsigned int)(a1 - 0x2000) >> 1) + 4];
}
