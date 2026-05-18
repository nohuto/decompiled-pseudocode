/*
 * XREFs of sub_18012FACE @ 0x18012FACE
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A9F4C @ 0x1800A9F4C (sub_1800A9F4C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FACE(__int64 a1, __int64 a2)
{
  sub_1800A9F4C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
