/*
 * XREFs of sub_180131E30 @ 0x180131E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038CDC @ 0x180038CDC (sub_180038CDC.c)
 *     sub_18007DF9C @ 0x18007DF9C (sub_18007DF9C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180131E30(__int64 a1, __int64 a2)
{
  sub_18007DF9C(*(_QWORD *)(a2 + 144), *(_QWORD **)(a2 + 32), *(_QWORD **)(a2 + 56));
  sub_180038CDC(*(_QWORD *)(a2 + 144), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 40));
  throw;
}
