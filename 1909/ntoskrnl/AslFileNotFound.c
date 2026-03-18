/*
 * XREFs of AslFileNotFound @ 0x140783824
 * Callers:
 *     AslFileMappingCreate @ 0x14070C4A4 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x14074C3F0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140922724 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
