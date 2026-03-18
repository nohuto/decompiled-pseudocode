/*
 * XREFs of PsGetProcessExitStatus @ 0x1408C62C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsGetProcessExitStatus(PEPROCESS Process)
{
  return HIDWORD(Process[2].Affinity.Bitmap[7]);
}
