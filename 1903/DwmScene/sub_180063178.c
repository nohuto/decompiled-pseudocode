/*
 * XREFs of sub_180063178 @ 0x180063178
 * Callers:
 *     sub_180015380 @ 0x180015380 (sub_180015380.c)
 *     sub_180015574 @ 0x180015574 (sub_180015574.c)
 *     sub_180021B70 @ 0x180021B70 (sub_180021B70.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_18006DC60 @ 0x18006DC60 (sub_18006DC60.c)
 *     sub_180075500 @ 0x180075500 (sub_180075500.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_18007721C @ 0x18007721C (sub_18007721C.c)
 *     sub_1800782B0 @ 0x1800782B0 (sub_1800782B0.c)
 *     sub_18007C04C @ 0x18007C04C (sub_18007C04C.c)
 *     sub_180089E74 @ 0x180089E74 (sub_180089E74.c)
 *     sub_180089F64 @ 0x180089F64 (sub_180089F64.c)
 *     sub_1800A3068 @ 0x1800A3068 (sub_1800A3068.c)
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 * Callees:
 *     sub_180062BC8 @ 0x180062BC8 (sub_180062BC8.c)
 *     _Thrd_id @ 0x1801274CC (_Thrd_id.c)
 */

__int64 *__fastcall sub_180063178(__int64 a1, __int64 *a2)
{
  a2[1] = 0LL;
  *a2 = a1;
  *((_BYTE *)a2 + 8) = 0;
  sub_180062BC8(a1, 1);
  *((_BYTE *)a2 + 8) = 1;
  _InterlockedExchange((volatile __int32 *)(a1 + 28), Thrd_id());
  return a2;
}
