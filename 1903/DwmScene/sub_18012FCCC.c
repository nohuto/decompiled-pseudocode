/*
 * XREFs of sub_18012FCCC @ 0x18012FCCC
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B2A10 @ 0x1800B2A10 (sub_1800B2A10.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FCCC(__int64 a1, __int64 a2)
{
  sub_1800B2A10(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
