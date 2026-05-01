/*
 * XREFs of ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x1800A8968
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180313860 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     _lambda_e1483284b6acbe1b036a585cf9e368ca_::operator() @ 0x1800A87D4 (_lambda_e1483284b6acbe1b036a585cf9e368ca_--operator().c)
 */

char __fastcall IsStartMenuSuppressedByShellLauncher(__int64 a1)
{
  char v1; // bl
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)lambda_e1483284b6acbe1b036a585cf9e368ca_::operator()(a1, &v3) >= 0 )
    return v3;
  return v1;
}
