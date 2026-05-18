/*
 * XREFs of sub_180063288 @ 0x180063288
 * Callers:
 *     sub_1800153F0 @ 0x1800153F0 (sub_1800153F0.c)
 *     sub_1800155E4 @ 0x1800155E4 (sub_1800155E4.c)
 *     sub_180021C80 @ 0x180021C80 (sub_180021C80.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_18006DD70 @ 0x18006DD70 (sub_18006DD70.c)
 *     sub_180075610 @ 0x180075610 (sub_180075610.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_18007732C @ 0x18007732C (sub_18007732C.c)
 *     sub_1800783C0 @ 0x1800783C0 (sub_1800783C0.c)
 *     sub_18007C15C @ 0x18007C15C (sub_18007C15C.c)
 *     sub_180089F84 @ 0x180089F84 (sub_180089F84.c)
 *     sub_18008A074 @ 0x18008A074 (sub_18008A074.c)
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 * Callees:
 *     sub_180062CD8 @ 0x180062CD8 (sub_180062CD8.c)
 *     _Thrd_id @ 0x1801275DC (_Thrd_id.c)
 */

__int64 *__fastcall sub_180063288(__int64 a1, __int64 *a2)
{
  a2[1] = 0LL;
  *a2 = a1;
  *((_BYTE *)a2 + 8) = 0;
  sub_180062CD8(a1, 1);
  *((_BYTE *)a2 + 8) = 1;
  _InterlockedExchange((volatile __int32 *)(a1 + 28), Thrd_id());
  return a2;
}
