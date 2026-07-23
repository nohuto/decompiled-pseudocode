/*
 * XREFs of PopEtAppIdIntern @ 0x14069FFF0
 * Callers:
 *     PopEtGetProcessAppId @ 0x14069FEA8 (PopEtGetProcessAppId.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlInternTableIntern @ 0x1406A011C (RtlInternTableIntern.c)
 */

__int64 __fastcall PopEtAppIdIntern(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD v9[4]; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v10[20]; // [rsp+40h] [rbp-59h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = 80LL;
  v9[1] = v10;
  memset(v10, 0, sizeof(v10));
  v10[0] = *(_QWORD *)(a1 + 32);
  v10[6] = *(unsigned __int16 *)(a1 + 78);
  v10[4] = *(_QWORD *)(a1 + 64);
  v4 = 2LL * *(unsigned __int16 *)(a1 + 72);
  v10[3] = 4LL;
  v10[10] = v4;
  v10[8] = *(_QWORD *)(a1 + 40);
  v5 = 2LL * *(unsigned __int16 *)(a1 + 74);
  v10[7] = 4LL;
  v10[14] = v5;
  v10[12] = *(_QWORD *)(a1 + 48);
  v6 = 2LL * *(unsigned __int16 *)(a1 + 76);
  v10[11] = 2LL;
  v10[15] = 2LL;
  v10[19] = 2LL;
  v10[18] = v6;
  v10[16] = *(_QWORD *)(a1 + 56);
  v10[2] = 8LL;
  v9[2] = 5LL;
  v7 = RtlInternTableIntern(PopEtGlobals + 56, v9);
  result = 0LL;
  if ( !v7 )
    return 3221225626LL;
  *a2 = v7;
  return result;
}
