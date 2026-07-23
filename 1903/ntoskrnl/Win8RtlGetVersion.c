/*
 * XREFs of Win8RtlGetVersion @ 0x140884D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x1406D9B80 (RtlGetVersion.c)
 */

NTSTATUS __fastcall Win8RtlGetVersion(_OSVERSIONINFOW *a1)
{
  NTSTATUS result; // eax

  result = RtlGetVersion(a1);
  if ( result >= 0 )
  {
    a1->dwMajorVersion = 6;
    a1->dwMinorVersion = 2;
    a1->dwBuildNumber = 9200;
    a1->szCSDVersion[0] = 0;
    if ( ((a1->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
      a1[1].dwOSVersionInfoSize = 0;
  }
  return result;
}
