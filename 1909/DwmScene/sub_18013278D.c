/*
 * XREFs of sub_18013278D @ 0x18013278D
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DEC @ 0x180038DEC (sub_180038DEC.c)
 *     sub_1800F3BAC @ 0x1800F3BAC (sub_1800F3BAC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013278D(__int64 a1, __int64 a2)
{
  sub_1800F3BAC(*(_QWORD *)(a2 + 144), *(__int64 **)(a2 + 168), *(__int64 **)(a2 + 48));
  sub_180038DEC(*(_QWORD *)(a2 + 144), *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 32));
  throw;
}
