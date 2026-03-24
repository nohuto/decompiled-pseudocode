/*
 * XREFs of AslFileNotFound @ 0x1407228B0
 * Callers:
 *     AslFileMappingCreate @ 0x14067E47C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x140721450 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E65E4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
