/*
 * XREFs of RtlDoesFileExists_U @ 0x18005D950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesFileExists_U(PCWSTR FileName)
{
  return RtlDoesFileExists_UEx(FileName, 1);
}
