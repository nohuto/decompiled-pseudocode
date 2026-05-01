/*
 * XREFs of ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180043AA4
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800439DC (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000731C (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpSystemInvokeExternalResourceRegistrar@@YAXPEAUIExternalResourceRegister@ExecutionModel@@PEAG@Z @ 0x180043F24 (-RmpSystemInvokeExternalResourceRegistrar@@YAXPEAUIExternalResourceRegister@ExecutionModel@@PEAG.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180043F7C (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180048E58 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(
        ExecutionModel::ResourceManager *this)
{
  DWORD v2; // esi
  ExecutionModel::BaseResourceSet *v3; // rax
  __int64 v4; // rax
  LSTATUS v5; // eax
  signed int v6; // ebx
  LSTATUS v7; // eax
  LSTATUS i; // eax
  unsigned int v9; // ebx
  DWORD cbData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD Type; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD cchValueName[2]; // [rsp+50h] [rbp-B8h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR ValueName[264]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 Data[1024]; // [rsp+278h] [rbp+170h] BYREF

  hKey = 0LL;
  phkResult = 0LL;
  v2 = 0;
  cchValueName[0] = 259;
  Type = 0;
  cbData = 2046;
  memset_0(ValueName, 0, 0x208uLL);
  memset_0(Data, 0, sizeof(Data));
  v3 = (ExecutionModel::BaseResourceSet *)operator new(0x510uLL);
  if ( v3 )
    v3 = ExecutionModel::BaseResourceSet::BaseResourceSet(v3);
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach((char *)this + 24, v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 1280) = 2;
    *(_QWORD *)(v4 + 24) = this;
    if ( hKey )
      RegCloseKey(hKey);
    v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0, 0x20019u, &hKey);
    v6 = v5;
    if ( v5 > 0 )
      v6 = (unsigned __int16)v5 | 0xC0070000;
    if ( v6 >= 0 )
    {
      if ( phkResult )
        RegCloseKey(phkResult);
      v7 = RegOpenKeyExW(hKey, L"Registrars\\", 0, 0x20019u, &phkResult);
      v6 = v7;
      if ( v7 > 0 )
        v6 = (unsigned __int16)v7 | 0xC0070000;
      if ( v6 >= 0 )
      {
        for ( i = RegEnumValueW(phkResult, 0, ValueName, cchValueName, 0LL, &Type, (LPBYTE)Data, &cbData);
              !i;
              i = RegEnumValueW(phkResult, v2, ValueName, cchValueName, 0LL, &Type, (LPBYTE)Data, &cbData) )
        {
          ++v2;
          if ( Type == 1 && cbData > 2 )
            RmpSystemInvokeExternalResourceRegistrar(this, Data);
          memset_0(ValueName, 0, 0x208uLL);
          memset_0(Data, 0, sizeof(Data));
          cchValueName[0] = 259;
          cbData = 2046;
        }
        goto LABEL_20;
      }
    }
    if ( v6 == -1073283070 )
    {
LABEL_20:
      v9 = 0;
      goto LABEL_21;
    }
    v9 = v6 | 0x10000000;
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_21:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return v9;
}
