/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0035268
 * Callers:
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00351E8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0036C80 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00E1764 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(__int64 a1)
{
  unsigned __int8 **result; // rax

  result = gpUserTypeIsolation;
  if ( *gpUserTypeIsolation )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<36864,144>::Free(*gpUserTypeIsolation, a1);
  return result;
}
