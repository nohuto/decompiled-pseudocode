/*
 * XREFs of ?SkipRestartHeuristic@@YA_NXZ @ 0x1800021E8
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x180002648 (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

bool SkipRestartHeuristic(void)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"DisableSessionTermination",
    0x20000010u,
    0LL,
    &v1,
    &v2);
  return v1 == 1;
}
