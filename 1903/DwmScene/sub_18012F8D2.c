/*
 * XREFs of sub_18012F8D2 @ 0x18012F8D2
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A9F98 @ 0x1800A9F98 (sub_1800A9F98.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F8D2(__int64 a1, __int64 a2)
{
  sub_1800A9F98(*(_QWORD ***)(a2 + 64));
  throw;
}
