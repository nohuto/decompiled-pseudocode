/*
 * XREFs of PsGetVersion @ 0x14013AF70
 * Callers:
 *     Win7PsGetVersion @ 0x14084A810 (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x14084A8F0 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x14084A9D0 (Win8PsGetVersion.c)
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
