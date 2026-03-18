/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C007E970
 * Callers:
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C002E78C (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C007E92C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0074E3C (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>(void *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + 1);
  if ( v2 )
    NSInstrumentation::CTypeIsolation<40960,160>::Free(v2, a1);
}
