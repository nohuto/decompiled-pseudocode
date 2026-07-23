/*
 * XREFs of IopIssueTrEERequest @ 0x140286D50
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140822C00 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableTrEE @ 0x1408231D0 (IopGetEnvironmentVariableTrEE.c)
 *     IopQueryEnvironmentVariableInfoTrEE @ 0x140823700 (IopQueryEnvironmentVariableInfoTrEE.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140823910 (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140823374 (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopIssueTrEERequest(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        int *a9)
{
  signed int v9; // ecx
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned int v13; // [rsp+50h] [rbp-58h] BYREF
  _DWORD InputBuffer[4]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h]
  __int64 v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h]
  __int64 v18; // [rsp+80h] [rbp-28h]
  __int64 v19; // [rsp+88h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp-18h]

  InputBuffer[3] = a1;
  v16 = a5;
  v18 = a7;
  v17 = a6;
  v15 = a4;
  v9 = IopIssueSystemEnvironmentRequest(0x568004u, InputBuffer, 0x30u, &v19, 0x10u, (__int64)&v13);
  if ( v9 >= 0 )
  {
    if ( v13 < 0x10 )
      return (unsigned int)-1073741434;
    v10 = v20;
    if ( a9 )
    {
      v11 = -1;
      if ( v20 <= 0xFFFFFFFF )
        v11 = v20;
      *a9 = v11;
      v9 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
    }
    if ( v10 < a8 )
      return (unsigned int)-1073741434;
  }
  return (unsigned int)v9;
}
