/*
 * XREFs of sub_180132992 @ 0x180132992
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E6B8 @ 0x18000E6B8 (sub_18000E6B8.c)
 *     sub_18001153C @ 0x18001153C (sub_18001153C.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132992(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = sub_18001153C(*(_QWORD *)(a2 + 32) + 16LL);
  sub_1800F2BD4(v3);
  sub_18000E6B8(a2 + 64, *(_QWORD *)(a2 + 48));
  throw (Spectre::Utils::SpectreException *)(a2 + 64);
}
