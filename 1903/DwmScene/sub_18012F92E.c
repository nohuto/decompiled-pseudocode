/*
 * XREFs of sub_18012F92E @ 0x18012F92E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B79C @ 0x18002B79C (sub_18002B79C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F92E(__int64 a1, __int64 a2)
{
  sub_18002B79C(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 112));
  throw;
}
