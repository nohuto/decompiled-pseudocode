/*
 * XREFs of VslpConnectedStandbyWnfCallback @ 0x140853310
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExQueryWnfStateData @ 0x1406E8D40 (ExQueryWnfStateData.c)
 */

NTSTATUS __fastcall VslpConnectedStandbyWnfCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  char v4; // al
  unsigned int v5; // [rsp+20h] [rbp-69h] BYREF
  int v6; // [rsp+28h] [rbp-61h] BYREF
  __int64 v7; // [rsp+30h] [rbp-59h] BYREF
  __int64 v8; // [rsp+38h] [rbp-51h]
  int v9; // [rsp+40h] [rbp-49h]
  _DWORD v10[28]; // [rsp+50h] [rbp-39h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  memset(v10, 0, 0x68uLL);
  v5 = 20;
  result = ExQueryWnfStateData(a1, &v6, &v7, &v5);
  if ( result >= 0 )
  {
    v3 = v7 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v7 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v3 = v8 - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    v4 = v10[2];
    if ( !v3 )
      v4 = 1;
    v10[3] = 0;
    LOBYTE(v10[2]) = v4;
    BYTE1(v10[2]) = v9;
    return VslpEnterIumSecureMode(2, 59LL, 0LL, (__int64)v10);
  }
  return result;
}
