/*
 * XREFs of ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0053DE0
 * Callers:
 *     HMFreeObject @ 0x1C00283C0 (HMFreeObject.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0053D70 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 * Callees:
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C0053EA8 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0053F10 (--$FreeIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0104FE4 (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C010518C (-Free@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall HMFreeIsolatedType(__int64 a1, void *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = HMTagToIsolatedType() - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v6 = *((_QWORD *)gpUserTypeIsolation + 3);
        if ( v6 )
          NSInstrumentation::CTypeIsolation<81920,160>::Free(v6, a2);
      }
    }
    else
    {
      v5 = *((_QWORD *)gpUserTypeIsolation + 2);
      if ( v5 )
        NSInstrumentation::CTypeIsolation<86016,336>::Free(v5, a2);
    }
  }
  else
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>(a2);
  }
}
