/*
 * XREFs of sub_1800F5B0C @ 0x1800F5B0C
 * Callers:
 *     sub_1800909E0 @ 0x1800909E0 (sub_1800909E0.c)
 *     sub_1800C58F8 @ 0x1800C58F8 (sub_1800C58F8.c)
 * Callees:
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 */

__int64 __fastcall sub_1800F5B0C(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_1800F2CAC(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_1800F5B40(a1, v5, v6);
}
