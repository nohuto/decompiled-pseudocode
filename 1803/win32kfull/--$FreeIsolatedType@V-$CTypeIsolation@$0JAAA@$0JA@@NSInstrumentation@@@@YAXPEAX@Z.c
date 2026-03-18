/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00F111C
 * Callers:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C001C134 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00F10AC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00DF54C (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(__int64 a1)
{
  if ( *gpUserTypeIsolation )
    NSInstrumentation::CTypeIsolation<36864,144>::Free(*gpUserTypeIsolation, a1);
}
