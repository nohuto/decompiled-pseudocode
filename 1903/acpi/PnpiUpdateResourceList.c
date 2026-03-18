/*
 * XREFs of PnpiUpdateResourceList @ 0x1C0096428
 * Callers:
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C009592C (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0095AA0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C0096398 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00964A4 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A172C (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C00A1E70 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C00A2B88 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2E88 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B32E0 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00B36F4 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00B3758 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B38B4 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C00B3910 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B398C (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0095BD0 (PnpiGrowResourceDescriptor.c)
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
