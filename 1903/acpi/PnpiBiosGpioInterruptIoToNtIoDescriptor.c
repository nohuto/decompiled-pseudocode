/*
 * XREFs of PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B38B4
 * Callers:
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E218 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C0096428 (PnpiUpdateResourceList.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AEB4C (AcpiExternalTranslateBiosToNtResources.c)
 */

__int64 __fastcall PnpiBiosGpioInterruptIoToNtIoDescriptor(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 result; // rax
  _OWORD *v9; // [rsp+58h] [rbp+20h] BYREF

  result = PnpiUpdateResourceList((const void **)(a4 + 8LL * a5), &v9, a3);
  if ( (int)result >= 0 )
    return AcpiExternalTranslateBiosToNtResources(a1, a2, (unsigned int)*(unsigned __int16 *)(a2 + 1) + 3, a6, v9);
  return result;
}
