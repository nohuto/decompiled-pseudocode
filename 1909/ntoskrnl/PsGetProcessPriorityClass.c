/*
 * XREFs of PsGetProcessPriorityClass @ 0x140306B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessPriorityClass(__int64 a1)
{
  return *(_BYTE *)(a1 + 1119);
}
