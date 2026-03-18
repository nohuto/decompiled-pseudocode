/*
 * XREFs of _CmGetInstallerClassRegProp @ 0x1406F1254
 * Callers:
 *     PiCMGetRegistryProperty @ 0x140594FA0 (PiCMGetRegistryProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C6B1C (_CmGetDeviceRegPropWorker.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E7A98 (PnpCallDriverQueryServiceHelper.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE51C (PpForEachDeviceInstanceDriver.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F0344 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x1406F08EC (PipGetRegistryDwordWithFallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F110C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmServiceFilterCallback @ 0x1408FAA80 (_CmServiceFilterCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1406F13C8 (_CmGetInstallerClassRegPropWorker.c)
 */

__int64 __fastcall CmGetInstallerClassRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, _QWORD *); // r12
  int v11; // eax
  unsigned int InstallerClassRegPropWorker; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  _QWORD v19[12]; // [rsp+50h] [rbp-71h] BYREF

  memset(v19, 0, 0x58uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  LODWORD(v19[7]) = 0;
  LODWORD(v19[3]) = a4;
  v19[2] = a3;
  v19[5] = a6;
  v19[6] = a7;
  v19[4] = a5;
  if ( v10 )
  {
    v11 = v10(a1, a2, 2LL, 9LL, 1, v19);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v19[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  InstallerClassRegPropWorker = CmGetInstallerClassRegPropWorker(a1, a2, v19[2], v19[3], v19[4], v19[5], v19[6], v19[7]);
  v13 = InstallerClassRegPropWorker;
  if ( !v10 )
    return v13;
  LODWORD(v19[0]) = InstallerClassRegPropWorker;
  v14 = v10(a1, a2, 2LL, 9LL, 2, v19);
  v15 = v14;
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return LODWORD(v19[0]);
  v16 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
