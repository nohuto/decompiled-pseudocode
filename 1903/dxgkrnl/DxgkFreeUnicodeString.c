/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C029D240
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C004C510 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C004D780 (DpiMiracastTargetDeviceChange.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167A7C (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167BDC (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C0167E78 (DpiGetAdapterInfo.c)
 *     DpiFreeAdapterInfo @ 0x1C029C68C (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C02A247C (DpiFdoResetFdo.c)
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
