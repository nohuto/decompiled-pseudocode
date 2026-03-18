/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1405C6E94
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x14059A7F8 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14059EE90 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C6B1C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1406F13C8 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F163C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 520);
  if ( !v2 )
    v2 = (__int64 (__fastcall *)(__int64, __int64))&PnpRegQueryValueIndirect;
  return v2(a1, a2);
}
