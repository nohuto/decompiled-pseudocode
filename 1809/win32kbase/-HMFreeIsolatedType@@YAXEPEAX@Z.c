/*
 * XREFs of ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C002E78C
 * Callers:
 *     HMFreeObject @ 0x1C002DB60 (HMFreeObject.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C002E75C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 * Callees:
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C002E830 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C006E118 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0070C6C (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C007E970 (--$FreeIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall HMFreeIsolatedType(__int64 a1, void *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx

  v3 = HMTagToIsolatedType() - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v5 = *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + 3);
        if ( v5 )
          NSInstrumentation::CTypeIsolation<81920,160>::Free(v5, a2);
      }
    }
    else
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(a2);
    }
  }
  else
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>(a2);
  }
}
