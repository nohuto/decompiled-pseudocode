/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C029D650
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C004C550 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C004D7C0 (DpiMiracastTargetDeviceChange.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C016B864 (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C016B9C4 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C016BC68 (DpiGetAdapterInfo.c)
 *     DpiFreeAdapterInfo @ 0x1C029CA9C (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C02A288C (DpiFdoResetFdo.c)
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
