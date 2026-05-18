/*
 * XREFs of sub_18006AA88 @ 0x18006AA88
 * Callers:
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 *     sub_1800DDA58 @ 0x1800DDA58 (sub_1800DDA58.c)
 * Callees:
 *     sub_1800DF9DC @ 0x1800DF9DC (sub_1800DF9DC.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006AA88(__int64 a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_1800DF9DC(*(_QWORD *)(a1 + 96) + 9256LL, a2, 0LL);
  return sub_1800DF9D0(*(_QWORD *)(a1 + 96) + 9256LL, a3);
}
