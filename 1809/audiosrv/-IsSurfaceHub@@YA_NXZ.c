/*
 * XREFs of ?IsSurfaceHub@@YA_NXZ @ 0x18005F750
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18004C3B0 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool IsSurfaceHub(void)
{
  char v0; // bl
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 4;
  v2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy",
          L"IsSurfaceHub",
          0x10u,
          0LL,
          &v2,
          &v3) )
    return v2 != 0;
  return v0;
}
