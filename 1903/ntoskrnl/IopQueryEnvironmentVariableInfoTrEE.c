/*
 * XREFs of IopQueryEnvironmentVariableInfoTrEE @ 0x14085C5F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopIssueTrEERequest @ 0x14029BF00 (IopIssueTrEERequest.c)
 *     IopEfiStatusToNTSTATUS @ 0x14085B820 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopQueryEnvironmentVariableInfoTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v10; // edx
  int v12; // [rsp+50h] [rbp-58h] BYREF
  int v13; // [rsp+54h] [rbp-54h] BYREF
  unsigned __int64 v14[4]; // [rsp+58h] [rbp-50h] BYREF

  memset(v14, 0, sizeof(v14));
  v12 = a3;
  v10 = IopIssueTrEERequest(2, a1, a2, (__int64)&v12, 4u, (__int64)v14, 0x20u, 0x20u, &v13);
  if ( v10 >= 0 )
  {
    if ( v14[0] )
    {
      return (unsigned int)IopEfiStatusToNTSTATUS(v14[0]);
    }
    else
    {
      *a4 = v14[1];
      *a5 = v14[2];
      *a6 = v14[3];
    }
  }
  return (unsigned int)v10;
}
