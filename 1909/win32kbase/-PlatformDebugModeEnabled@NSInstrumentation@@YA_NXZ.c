/*
 * XREFs of ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C00BD318
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008E76C (-Initialize@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008E93C (-Initialize@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008EB0C (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008EE24 (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008EFF4 (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008F1C4 (-Initialize@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008F394 (-Initialize@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008F564 (-Initialize@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008F6B0 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008F880 (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ @ 0x1C008FADC (-Initialize@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::PlatformDebugModeEnabled(NSInstrumentation *this)
{
  return MmIsDriverVerifyingByAddress(&unk_1C01D9EBC) != 0;
}
