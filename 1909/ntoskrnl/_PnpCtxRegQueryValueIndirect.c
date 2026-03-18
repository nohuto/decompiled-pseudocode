/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1405C2C0C
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x1405BCC04 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C2894 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406274D0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140700574 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1407030E4 (_CmGetInstallerClassRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(size_t, void *, __int64, unsigned int *, const wchar_t *, __int64, bool *); // rax

  v2 = *(__int64 (__fastcall **)(size_t, void *, __int64, unsigned int *, const wchar_t *, __int64, bool *))(a1 + 520);
  if ( !v2 )
    v2 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64))v2)(a1, a2);
}
