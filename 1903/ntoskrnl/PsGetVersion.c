/*
 * XREFs of PsGetVersion @ 0x14015C030
 * Callers:
 *     Win7PsGetVersion @ 0x140884AB0 (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x140884B90 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x140884C70 (Win8PsGetVersion.c)
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
    *BuildNumber = 18363 - (KernelVersionBump != 1);
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return 0;
}
