/*
 * XREFs of sub_180077BF4 @ 0x180077BF4
 * Callers:
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 *     sub_1800A88B0 @ 0x1800A88B0 (sub_1800A88B0.c)
 *     sub_1800CE3A8 @ 0x1800CE3A8 (sub_1800CE3A8.c)
 * Callees:
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180077BF4(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]

  v10 = 0LL;
  v11 = 0LL;
  sub_180063358(a1 + 112, &v10);
  v6 = *(__int64 **)(a1 + 88);
  v7 = *(__int64 **)(a1 + 96);
  while ( 1 )
  {
    if ( v6 == v7 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      if ( (_BYTE)v11 )
        sub_180063670(v10);
      return a2;
    }
    if ( (unsigned int)sub_18006CDB8(*v6) == a3 )
      break;
    v6 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v9 = v6[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *a2 = *v6;
  a2[1] = v6[1];
  if ( (_BYTE)v11 )
    sub_180063670(v10);
  return a2;
}
