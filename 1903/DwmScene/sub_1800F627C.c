/*
 * XREFs of sub_1800F627C @ 0x1800F627C
 * Callers:
 *     sub_180091120 @ 0x180091120 (sub_180091120.c)
 *     sub_1800A51B0 @ 0x1800A51B0 (sub_1800A51B0.c)
 *     sub_1800C58F8 @ 0x1800C58F8 (sub_1800C58F8.c)
 *     sub_1800C6AE0 @ 0x1800C6AE0 (sub_1800C6AE0.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 * Callees:
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 */

__int64 __fastcall sub_1800F627C(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2CAC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F413C(a1, v5, a3);
}
