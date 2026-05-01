/*
 * XREFs of ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180043D38
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180043C70 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18001D560 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpSystemInvokeExternalResourceRegistrar@@YAXPEAUIExternalResourceRegister@ExecutionModel@@PEAG@Z @ 0x1800442D0 (-RmpSystemInvokeExternalResourceRegistrar@@YAXPEAUIExternalResourceRegister@ExecutionModel@@PEAG.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180044328 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004903C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(
        ExecutionModel::ResourceManager *this)
{
  unsigned int v1; // edi
  DWORD v3; // r14d
  ExecutionModel::BaseResourceSet *v4; // rax
  __int64 v5; // rbx
  DWORD v6; // edx
  DWORD cbData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD Type; // [rsp+44h] [rbp-BCh] BYREF
  DWORD cchValueName; // [rsp+48h] [rbp-B8h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR ValueName[264]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 Data[1024]; // [rsp+270h] [rbp+170h] BYREF

  v1 = 0;
  cchValueName = 259;
  phkResult = 0LL;
  hKey = 0LL;
  Type = 0;
  cbData = 2046;
  v3 = 0;
  memset_0(ValueName, 0, 0x208uLL);
  memset_0(Data, 0, sizeof(Data));
  v4 = (ExecutionModel::BaseResourceSet *)operator new(0x588uLL);
  if ( v4 )
    v4 = ExecutionModel::BaseResourceSet::BaseResourceSet(v4);
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach((char *)this + 40, v4);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    phkResult = 0LL;
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (hKey = 0LL, RegOpenKeyW(phkResult, L"Registrars\\", &hKey)) )
    {
      v1 = -2147467259;
    }
    else
    {
      *(_DWORD *)(v5 + 16) = 0;
      v6 = 0;
      *(_DWORD *)(v5 + 1400) = 2;
      *(_QWORD *)(v5 + 24) = this;
      while ( !RegEnumValueW(hKey, v6, ValueName, &cchValueName, 0LL, &Type, (LPBYTE)Data, &cbData) )
      {
        ++v3;
        if ( Type == 1 && cbData > 2 )
          RmpSystemInvokeExternalResourceRegistrar(this, Data);
        memset_0(ValueName, 0, 0x208uLL);
        memset_0(Data, 0, sizeof(Data));
        v6 = v3;
        cchValueName = 259;
        cbData = 2046;
      }
    }
  }
  else
  {
    v1 = -2147024882;
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return v1;
}
