/*
 * XREFs of sub_1800F5C34 @ 0x1800F5C34
 * Callers:
 *     sub_1800909F8 @ 0x1800909F8 (sub_1800909F8.c)
 *     sub_1800C58F8 @ 0x1800C58F8 (sub_1800C58F8.c)
 * Callees:
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 */

__int64 __fastcall sub_1800F5C34(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2CAC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F5C68(a1, v5, a3);
}
