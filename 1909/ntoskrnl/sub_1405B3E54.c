/*
 * XREFs of sub_1405B3E54 @ 0x1405B3E54
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405B3808 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405B3CE8 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405B4074 @ 0x1405B4074 (sub_1405B4074.c)
 *     sub_1405CB1F4 @ 0x1405CB1F4 (sub_1405CB1F4.c)
 */

__int64 __fastcall sub_1405B3E54(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1405CB1F4(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1405B4074(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
