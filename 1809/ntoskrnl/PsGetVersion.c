/*
 * XREFs of PsGetVersion @ 0x14013AE70
 * Callers:
 *     Win7PsGetVersion @ 0x1408495B0 (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x140849690 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x140849770 (Win8PsGetVersion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsGetVersion(
        PULONG MajorVersion,
        PULONG MinorVersion,
        PULONG BuildNumber,
        PUNICODE_STRING CSDVersion)
{
  if ( MajorVersion )
    *MajorVersion = 10;
  if ( MinorVersion )
    *MinorVersion = 0;
  if ( BuildNumber )
    *BuildNumber = 17763;
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return 0;
}
