/*
 * XREFs of sub_18012FBFA @ 0x18012FBFA
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B2A38 @ 0x1800B2A38 (sub_1800B2A38.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FBFA(__int64 a1, __int64 a2)
{
  sub_1800B2A38(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
