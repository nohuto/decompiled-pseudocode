/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x140139810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 780) & 4) != 0;
}
