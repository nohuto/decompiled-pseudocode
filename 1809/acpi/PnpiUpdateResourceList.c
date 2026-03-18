/*
 * XREFs of PnpiUpdateResourceList @ 0x1C009A060
 * Callers:
 *     PnpiBiosIrqToIoDescriptor @ 0x1C009868C (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C00995E8 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C00997F0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C0099FD0 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009A0DC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C009F444 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C009FE9C (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00AF5C0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00AF9C0 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00AFD7C (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00AFDE0 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00AFF3C (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C00AFF98 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B0014 (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C00310C0 (memset.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0099920 (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(const void **a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  void *v9; // rcx
  __int64 result; // rax

  v3 = 0;
  if ( *a1 && (*((_DWORD *)*a1 + 1) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, (__int64)a2, a3), v3 = result, (int)result >= 0) )
  {
    v6 = (__int64)*a1 + 8;
    v7 = 32LL * *((unsigned int *)*a1 + 1);
    v8 = v7 + v6 == 0;
    v9 = (void *)(v7 + v6);
    *a2 = v9;
    if ( v8 )
    {
      return 3221225473LL;
    }
    else
    {
      memset(v9, 0, 0x20uLL);
      ++*((_DWORD *)*a1 + 1);
      return v3;
    }
  }
  return result;
}
