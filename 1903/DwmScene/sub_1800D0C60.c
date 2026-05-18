/*
 * XREFs of sub_1800D0C60 @ 0x1800D0C60
 * Callers:
 *     sub_1800354E0 @ 0x1800354E0 (sub_1800354E0.c)
 *     sub_180036F30 @ 0x180036F30 (sub_180036F30.c)
 *     sub_180037360 @ 0x180037360 (sub_180037360.c)
 *     sub_180037510 @ 0x180037510 (sub_180037510.c)
 *     sub_180063DD8 @ 0x180063DD8 (sub_180063DD8.c)
 *     sub_180063EE8 @ 0x180063EE8 (sub_180063EE8.c)
 *     sub_180063F2C @ 0x180063F2C (sub_180063F2C.c)
 *     sub_180064000 @ 0x180064000 (sub_180064000.c)
 *     sub_18006445C @ 0x18006445C (sub_18006445C.c)
 *     sub_1800965E0 @ 0x1800965E0 (sub_1800965E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D0C60(__int64 a1, int a2, int a3, unsigned __int64 a4)
{
  __int64 result; // rax

  result = a3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(32 * (a3 + 5LL * a2) + a1), a4);
  return result;
}
