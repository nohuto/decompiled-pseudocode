/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C006E118
 * Callers:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C002E78C (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C002E870 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C006DFE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0069F40 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(void *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + 2);
  if ( v2 )
    NSInstrumentation::CTypeIsolation<81920,320>::Free(v2, a1);
}
