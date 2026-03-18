/*
 * XREFs of ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0010AFC
 * Callers:
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0010A54 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     HMAllocObject @ 0x1C0028410 (HMAllocObject.c)
 * Callees:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C000F470 (--$AllocateIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C0010B5C (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0102234 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0102354 (-Allocate@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

void *__fastcall HMAllocateIsolatedType()
{
  int v0; // eax
  int v1; // eax
  void *result; // rax

  v0 = HMTagToIsolatedType() - 1;
  if ( !v0 )
    return (void *)AllocateIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>();
  v1 = v0 - 1;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      result = 0LL;
      if ( *((_QWORD *)gpUserTypeIsolation + 3) )
        return (void *)NSInstrumentation::CTypeIsolation<81920,160>::Allocate();
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    result = 0LL;
    if ( *((_QWORD *)gpUserTypeIsolation + 2) )
      return (void *)NSInstrumentation::CTypeIsolation<86016,336>::Allocate();
  }
  return result;
}
