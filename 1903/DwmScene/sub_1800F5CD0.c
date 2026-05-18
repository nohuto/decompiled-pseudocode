/*
 * XREFs of sub_1800F5CD0 @ 0x1800F5CD0
 * Callers:
 *     sub_1800EB6E0 @ 0x1800EB6E0 (sub_1800EB6E0.c)
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 * Callees:
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 */

int __fastcall sub_1800F5CD0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2CAC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F4184(a1, v5, *(const void **)a3, (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 6);
}
