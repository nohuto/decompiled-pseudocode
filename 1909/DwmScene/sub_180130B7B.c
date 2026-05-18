/*
 * XREFs of sub_180130B7B @ 0x180130B7B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E338 @ 0x18007E338 (sub_18007E338.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130B7B(__int64 a1, __int64 a2)
{
  sub_18007E338(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
