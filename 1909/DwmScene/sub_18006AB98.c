/*
 * XREFs of sub_18006AB98 @ 0x18006AB98
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 *     sub_1800DDB68 @ 0x1800DDB68 (sub_1800DDB68.c)
 * Callees:
 *     sub_1800DFAEC @ 0x1800DFAEC (sub_1800DFAEC.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006AB98(__int64 a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_1800DFAEC(*(_QWORD *)(a1 + 96) + 9256LL, a2, 0LL);
  return sub_1800DFAE0(*(_QWORD *)(a1 + 96) + 9256LL, a3);
}
