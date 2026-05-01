/*
 * XREFs of ?IsStartMenuSuppressedByShellLauncher@@YA_NXZ @ 0x180091920
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18029C470 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     _lambda_225738291f9c2c2e8f83b87c89cafee0_::operator() @ 0x180091798 (_lambda_225738291f9c2c2e8f83b87c89cafee0_--operator().c)
 */

char __fastcall IsStartMenuSuppressedByShellLauncher(__int64 a1)
{
  char v1; // bl
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)lambda_225738291f9c2c2e8f83b87c89cafee0_::operator()(a1, &v3) >= 0 )
    return v3;
  return v1;
}
