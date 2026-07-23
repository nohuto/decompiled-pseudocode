/*
 * XREFs of sub_140585268 @ 0x140585268
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140584C40 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14058510C (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_140585490 @ 0x140585490 (sub_140585490.c)
 *     sub_1406262B8 @ 0x1406262B8 (sub_1406262B8.c)
 */

__int64 __fastcall sub_140585268(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1406262B8(a1 + 136, a2, 16, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_140585490(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
