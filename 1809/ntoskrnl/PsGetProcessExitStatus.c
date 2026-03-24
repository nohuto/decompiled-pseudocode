/*
 * XREFs of PsGetProcessExitStatus @ 0x140888370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsGetProcessExitStatus(PEPROCESS Process)
{
  return HIDWORD(Process[2].Affinity.Bitmap[3]);
}
