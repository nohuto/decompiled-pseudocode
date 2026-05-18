/*
 * XREFs of sub_18012D50A @ 0x18012D50A
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007DFD0 @ 0x18007DFD0 (sub_18007DFD0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D50A(__int64 a1, __int64 a2)
{
  sub_18007DFD0(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
