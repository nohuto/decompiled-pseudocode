/*
 * XREFs of PnpiBiosVendorToNtIoDescriptor @ 0x1C00B398C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C0096428 (PnpiUpdateResourceList.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AEB4C (AcpiExternalTranslateBiosToNtResources.c)
 */

__int64 __fastcall PnpiBiosVendorToNtIoDescriptor(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        _OWORD *a7)
{
  _BYTE *v7; // r14
  unsigned int v8; // ebx
  unsigned int v10; // esi
  unsigned int v13; // esi
  __int64 result; // rax

  v7 = a7;
  v8 = 0;
  v10 = *(unsigned __int16 *)(a2 + 1) + 3;
  *(_BYTE *)a7 = 0;
  if ( v10 >= 0x15 )
  {
    if ( (GUID *)(a2 + 4) != &GUID_MSFT_VENDOR_TYPE
      && RtlCompareMemory((const void *)(a2 + 4), &GUID_MSFT_VENDOR_TYPE, 0x10uLL) != 16
      || *(_BYTE *)(a2 + 3) )
    {
      return v8;
    }
    v13 = v10 - 20;
    if ( v13 >= 0x12 )
    {
      *v7 = 1;
      result = PnpiUpdateResourceList((const void **)(a4 + 8LL * a5), &a7, a3);
      if ( (int)result < 0 )
        return result;
      return (unsigned int)AcpiExternalTranslateBiosToNtResources(a1, a2 + 20, v13, a6, a7);
    }
  }
  return 3221225485LL;
}
