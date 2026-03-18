/*
 * XREFs of ?CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ @ 0x1800D7ADC
 * Callers:
 *     ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800D74F0 (-CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char CurrentProcessHasIncreasedPriorityPrivileges(void)
{
  HANDLE CurrentProcess; // rax
  char v1; // di
  bool v2; // bl
  WINBOOL pfResult; // [rsp+20h] [rbp-40h] BYREF
  void *TokenHandle; // [rsp+28h] [rbp-38h] BYREF
  _LUID Luid; // [rsp+30h] [rbp-30h] BYREF
  DWORD v7; // [rsp+38h] [rbp-28h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+40h] [rbp-20h] BYREF

  v7 = 2;
  Luid = 0LL;
  if ( !LookupPrivilegeValueW(0LL, L"SeIncreaseBasePriorityPrivilege", &Luid) )
    return 0;
  TokenHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( !OpenProcessToken(CurrentProcess, 8u, &TokenHandle) )
    return 0;
  v1 = 1;
  pfResult = 0;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = Luid;
  RequiredPrivileges.Privilege[0].Attributes = v7;
  v2 = PrivilegeCheck(TokenHandle, &RequiredPrivileges, &pfResult);
  CloseHandle(TokenHandle);
  if ( !v2 || !pfResult )
    return 0;
  return v1;
}
