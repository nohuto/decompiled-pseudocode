/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C001C1C8
 * Callers:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C001C134 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DF5E8 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>()
{
  if ( *gpUserTypeIsolation )
    return NSInstrumentation::CTypeIsolation<36864,144>::Allocate();
  else
    return 0LL;
}
