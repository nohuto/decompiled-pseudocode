/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C02634C8
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0045A40 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0046CD0 (DpiMiracastTargetDeviceChange.c)
 *     DpiGetAdapterInfo @ 0x1C014D78C (DpiGetAdapterInfo.c)
 *     ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150524 (-CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150620 (-CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C0262BA0 (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C0266BAC (DpiFdoResetFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkFreeUnicodeString(_QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return result;
}
