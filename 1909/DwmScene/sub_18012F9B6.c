/*
 * XREFs of sub_18012F9B6 @ 0x18012F9B6
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5D2C @ 0x1800A5D2C (sub_1800A5D2C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F9B6(__int64 a1, __int64 a2)
{
  sub_1800A5D2C(*(_QWORD ***)(a2 + 64));
  throw;
}
