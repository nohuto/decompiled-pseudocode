/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0211038
 * Callers:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C020ED4C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoDispatchIoctl @ 0x1C029F6C0 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02A3AF0 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02A3F3C (DpiSriovAttach.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C023AA40 (DxgkpIsDrtEnabled.c)
 */

bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  return (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v1) >= 0 && v1
      || (unsigned __int8)DxgkpIsDrtEnabled()
      && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v1) >= 0
      && v1;
}
