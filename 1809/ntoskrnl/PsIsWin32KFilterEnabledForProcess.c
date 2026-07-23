/*
 * XREFs of PsIsWin32KFilterEnabledForProcess @ 0x140121180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsWin32KFilterEnabledForProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2080) & 0x4000) != 0;
}
