/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x140120F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
