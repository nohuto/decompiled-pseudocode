/*
 * XREFs of ?HasExistingSplashScreen@CImmersiveWindowFactoryBase@@UEAAJPEAH@Z @ 0x1803BEC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::HasExistingSplashScreen(CImmersiveWindowFactoryBase *this, int *a2)
{
  *a2 = *((_QWORD *)this + 11) != 0LL;
  return 0LL;
}
