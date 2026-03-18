/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C000F470
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C000F054 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0010AFC (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0102474 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>()
{
  if ( *((_QWORD *)gpUserTypeIsolation + 1) )
    return NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  else
    return 0LL;
}
