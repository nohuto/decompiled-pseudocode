/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C005F94C
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C002E7E4 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C005F744 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0074B5C (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>()
{
  if ( *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + 1) )
    return NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  else
    return 0LL;
}
