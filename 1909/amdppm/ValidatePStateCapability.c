/*
 * XREFs of ValidatePStateCapability @ 0x1C0001B40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000DF80 (GetCpuIdInfo.c)
 */

__int64 __fastcall ValidatePStateCapability(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v7[0] = 0LL;
  v7[1] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = -1073741637;
  GetCpuIdInfo(0x80000000LL, v7);
  if ( LODWORD(v7[0]) >= 7 )
  {
    GetCpuIdInfo(2147483655LL, &v8);
    if ( (v9 & 0x8000000000LL) != 0 && (*a1 == 1 || *a1 == 127) )
      return 0;
  }
  if ( *a1 == 1 )
    return 0;
  else
    *a3 |= 0x20u;
  return v5;
}
