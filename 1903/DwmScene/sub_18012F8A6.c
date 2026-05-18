/*
 * XREFs of sub_18012F8A6 @ 0x18012F8A6
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5C1C @ 0x1800A5C1C (sub_1800A5C1C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F8A6(__int64 a1, __int64 a2)
{
  sub_1800A5C1C(*(_QWORD ***)(a2 + 64));
  throw;
}
