/*
 * XREFs of sub_180132882 @ 0x180132882
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E668 @ 0x18000E668 (sub_18000E668.c)
 *     sub_1800114EC @ 0x1800114EC (sub_1800114EC.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132882(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = sub_1800114EC(*(_QWORD *)(a2 + 32) + 16LL);
  sub_1800F2AC4(v3);
  sub_18000E668(a2 + 64, *(_QWORD *)(a2 + 48));
  throw (Spectre::Utils::SpectreException *)(a2 + 64);
}
