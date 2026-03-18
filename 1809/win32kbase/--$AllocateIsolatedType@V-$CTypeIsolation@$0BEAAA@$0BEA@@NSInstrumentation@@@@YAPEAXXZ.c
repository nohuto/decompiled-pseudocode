/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C002E940
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C002E7E4 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C002E870 (--0PATHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00679DC (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>()
{
  if ( *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + 2) )
    return NSInstrumentation::CTypeIsolation<81920,320>::Allocate();
  else
    return 0LL;
}
