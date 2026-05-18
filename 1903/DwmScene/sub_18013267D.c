/*
 * XREFs of sub_18013267D @ 0x18013267D
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038CDC @ 0x180038CDC (sub_180038CDC.c)
 *     sub_1800F3A9C @ 0x1800F3A9C (sub_1800F3A9C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013267D(__int64 a1, __int64 a2)
{
  sub_1800F3A9C(*(_QWORD *)(a2 + 144), *(__int64 **)(a2 + 168), *(__int64 **)(a2 + 48));
  sub_180038CDC(*(_QWORD *)(a2 + 144), *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 32));
  throw;
}
