/*
 * XREFs of sub_1405B3A78 @ 0x1405B3A78
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405B342C (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B390C (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405B3C98 @ 0x1405B3C98 (sub_1405B3C98.c)
 *     sub_1405CACF4 @ 0x1405CACF4 (sub_1405CACF4.c)
 */

__int64 __fastcall sub_1405B3A78(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1405CACF4(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1405B3C98(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
