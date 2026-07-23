/*
 * XREFs of PspGetFreezeState @ 0x1402E9E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PspGetFreezeState(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) & 8) != 0;
}
