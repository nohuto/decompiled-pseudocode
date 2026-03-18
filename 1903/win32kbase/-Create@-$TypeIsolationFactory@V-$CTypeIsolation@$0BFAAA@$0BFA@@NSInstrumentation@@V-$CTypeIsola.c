/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C005DCA4
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C005DC08 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 * Callees:
 *     ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005DD04 (-Create@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005DED4 (-Create@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005E0A4 (-Create@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005E274 (-Create@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(
        _QWORD *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = NSInstrumentation::CTypeIsolation<86016,336>::Create();
  v3 = 0;
  if ( v2 )
  {
    a1[2] = v2;
    v4 = NSInstrumentation::CTypeIsolation<81920,160>::Create();
    if ( v4 )
    {
      a1[3] = v4;
      v5 = NSInstrumentation::CTypeIsolation<24576,96>::Create();
      if ( v5 )
      {
        a1[4] = v5;
        v6 = NSInstrumentation::CTypeIsolation<28672,112>::Create();
        if ( v6 )
        {
          a1[5] = v6;
          v3 = 1;
        }
      }
    }
    LOBYTE(v2) = v3;
  }
  return v2;
}
