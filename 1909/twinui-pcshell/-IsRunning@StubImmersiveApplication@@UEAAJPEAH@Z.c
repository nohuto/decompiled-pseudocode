/*
 * XREFs of ?IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z @ 0x180087250
 * Callers:
 *     ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800D7470 (-GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800D8640 (-GetTrustLevel@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StubImmersiveApplication::IsRunning(StubImmersiveApplication *this, int *a2)
{
  *a2 = 1;
  return 0LL;
}
