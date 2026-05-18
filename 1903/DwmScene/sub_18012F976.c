/*
 * XREFs of sub_18012F976 @ 0x18012F976
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5BBC @ 0x1800A5BBC (sub_1800A5BBC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F976(__int64 a1, __int64 a2)
{
  sub_1800A5BBC(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
