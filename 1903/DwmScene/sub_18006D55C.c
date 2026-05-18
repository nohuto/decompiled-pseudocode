/*
 * XREFs of sub_18006D55C @ 0x18006D55C
 * Callers:
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 *     sub_18001C9A0 @ 0x18001C9A0 (sub_18001C9A0.c)
 *     sub_18001CBF4 @ 0x18001CBF4 (sub_18001CBF4.c)
 *     sub_18001CE48 @ 0x18001CE48 (sub_18001CE48.c)
 *     sub_18001D09C @ 0x18001D09C (sub_18001D09C.c)
 *     sub_18001D2F0 @ 0x18001D2F0 (sub_18001D2F0.c)
 *     sub_18006CB20 @ 0x18006CB20 (sub_18006CB20.c)
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180078038 @ 0x180078038 (sub_180078038.c)
 */

__int64 *__fastcall sub_18006D55C(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax

  v3 = sub_180078038(*(_QWORD *)(a1 + 3984));
  sub_1800631C0(v3, a2);
  return a2;
}
