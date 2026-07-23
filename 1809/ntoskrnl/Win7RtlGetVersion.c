/*
 * XREFs of Win7RtlGetVersion @ 0x14084A8A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x1406B59D0 (RtlGetVersion.c)
 */

NTSTATUS __fastcall Win7RtlGetVersion(_OSVERSIONINFOW *a1)
{
  NTSTATUS result; // eax

  result = RtlGetVersion(a1);
  if ( result >= 0 )
  {
    a1->dwMajorVersion = 6;
    a1->dwMinorVersion = 1;
    a1->dwBuildNumber = 7600;
    a1->szCSDVersion[0] = 0;
    if ( ((a1->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
      a1[1].dwOSVersionInfoSize = 0;
  }
  return result;
}
