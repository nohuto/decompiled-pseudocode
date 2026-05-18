/*
 * XREFs of sub_1800DE700 @ 0x1800DE700
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180089A38 @ 0x180089A38 (sub_180089A38.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800DE700(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *result; // rax
  __int64 v8[4]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v8[2] = 0LL;
  v8[3] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  sub_18001110C(v8, (__int64)&unk_1802587C8);
  sub_180089A38(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL), (__int64)&v9, -1LL, v8);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 328);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = *(_QWORD *)(v4 + 328);
  }
  v6 = *(_QWORD *)(v4 + 320);
  *a2 = v9;
  a2[1] = v10;
  a2[3] = v5;
  result = a2;
  a2[2] = v6;
  return result;
}
