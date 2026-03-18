/*
 * XREFs of SetUserPTPEnabledPreference @ 0x1C01BBE60
 * Callers:
 *     <none>
 * Callees:
 *     AccessPTPEnabledStatus @ 0x1C0128920 (AccessPTPEnabledStatus.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetUserPTPEnabledPreference(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v7; // eax
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = 1;
  v10 = 0LL;
  v9 = 1;
  if ( grpWinStaList )
  {
    v7 = AccessPTPEnabledStatus(0, 1, &v9);
    v3 = v9;
    if ( v7 )
      gPTPEnabled = v9;
  }
  result = RIMFindConfigDeviceForInput(a3, a2, a1, &v10);
  if ( (_DWORD)result )
  {
    if ( v3 )
      return RIMUnRevokeConfigurationChange(v10, 87LL);
    else
      return RIMRevokeConfigurationChange(v10, 87LL);
  }
  return result;
}
