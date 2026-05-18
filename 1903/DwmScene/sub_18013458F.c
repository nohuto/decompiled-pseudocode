/*
 * XREFs of sub_18013458F @ 0x18013458F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002571C @ 0x18002571C (sub_18002571C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013458F(__int64 a1, __int64 a2)
{
  sub_18002571C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
