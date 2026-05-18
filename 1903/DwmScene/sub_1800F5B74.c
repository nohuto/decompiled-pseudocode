/*
 * XREFs of sub_1800F5B74 @ 0x1800F5B74
 * Callers:
 *     sub_1800909EC @ 0x1800909EC (sub_1800909EC.c)
 *     sub_1800A5104 @ 0x1800A5104 (sub_1800A5104.c)
 *     sub_1800C6978 @ 0x1800C6978 (sub_1800C6978.c)
 * Callees:
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 */

__int64 __fastcall sub_1800F5B74(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2CAC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F4084(a1, v5, a3);
}
