/*
 * XREFs of sub_18012E69F @ 0x18012E69F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D338 @ 0x18008D338 (sub_18008D338.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E69F(__int64 a1, __int64 a2)
{
  sub_18008D338(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
