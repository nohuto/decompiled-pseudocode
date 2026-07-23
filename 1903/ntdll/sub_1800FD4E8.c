/*
 * XREFs of sub_1800FD4E8 @ 0x1800FD4E8
 * Callers:
 *     sub_1800FFEAC @ 0x1800FFEAC (sub_1800FFEAC.c)
 * Callees:
 *     sub_18000EF6C @ 0x18000EF6C (sub_18000EF6C.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800FD330 @ 0x1800FD330 (sub_1800FD330.c)
 *     sub_1800FE350 @ 0x1800FE350 (sub_1800FE350.c)
 *     sub_1800FFA38 @ 0x1800FFA38 (sub_1800FFA38.c)
 *     sub_1800FFB04 @ 0x1800FFB04 (sub_1800FFB04.c)
 *     sub_1800FFD50 @ 0x1800FFD50 (sub_1800FFD50.c)
 */

__int64 __fastcall sub_1800FD4E8(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  _WORD v11[16]; // [rsp+20h] [rbp-48h] BYREF

  result = sub_1800FFA38(a1, v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11[0];
  if ( (v11[0] & 4) != 0 )
  {
    result = sub_1800FFB04(a1, a2, v11);
  }
  else
  {
    if ( (v11[0] & 2) == 0 )
      goto LABEL_7;
    result = sub_1800FFD50(a1, a2, v11);
  }
  v10 = v11[0];
LABEL_7:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = sub_18000EF6C((__int64)a1, a3);
    else
      result = sub_18001292C(a1, a3);
    if ( (int)result >= 0 )
    {
      v11[0] |= 0x820u;
      sub_1800FD330((__int64)v11, a2);
      return sub_1800FE350(a1 + 3, v11, a6);
    }
  }
  return result;
}
