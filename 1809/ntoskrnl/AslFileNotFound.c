/*
 * XREFs of AslFileNotFound @ 0x140723B50
 * Callers:
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x1407226F0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E78A4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
