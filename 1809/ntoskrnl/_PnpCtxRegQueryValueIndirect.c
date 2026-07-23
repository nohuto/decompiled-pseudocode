/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1405C7E94
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x14059B7F8 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14059FE90 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C7B1C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1406F2648 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F28BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 520);
  if ( !v2 )
    v2 = (__int64 (__fastcall *)(__int64, __int64))&PnpRegQueryValueIndirect;
  return v2(a1, a2);
}
