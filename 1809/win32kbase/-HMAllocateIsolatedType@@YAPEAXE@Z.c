/*
 * XREFs of ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C002E7E4
 * Callers:
 *     HMAllocObject @ 0x1C002DDE0 (HMAllocObject.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C002E62C (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 * Callees:
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C002E830 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C002E940 (--$AllocateIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C005F94C (--$AllocateIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0070EA0 (-Allocate@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
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
  if ( !v1 )
    return (void *)AllocateIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>();
  if ( v1 != 1 )
    return 0LL;
  result = 0LL;
  if ( *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + 3) )
    return (void *)NSInstrumentation::CTypeIsolation<81920,160>::Allocate();
  return result;
}
