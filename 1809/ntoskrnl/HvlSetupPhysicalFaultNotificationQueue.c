/*
 * XREFs of HvlSetupPhysicalFaultNotificationQueue @ 0x140271924
 * Callers:
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     MmFreeContiguousMemory @ 0x140123090 (MmFreeContiguousMemory.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpAllocateOverlayPages @ 0x1402796E4 (HvlpAllocateOverlayPages.c)
 */

__int64 __fastcall HvlSetupPhysicalFaultNotificationQueue(_QWORD *a1, _DWORD *a2)
{
  void *OverlayPages; // rax
  void *v5; // rbp
  unsigned int v6; // ebx
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  int *v10; // rsi
  __int16 v11; // ax
  int v12; // edi
  _BYTE v14[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[24]; // [rsp+40h] [rbp-38h] BYREF

  OverlayPages = (void *)HvlpAllocateOverlayPages();
  v5 = OverlayPages;
  if ( OverlayPages )
  {
    memset(OverlayPages, 0, 0x1000uLL);
    PhysicalAddress = MmGetPhysicalAddress(v5);
    v8 = HvlpAcquireHypercallPage(v15, 1LL, 0LL, 24LL);
    v9 = HvlpAcquireHypercallPage(v14, 2LL, 0LL, 8LL);
    *(_DWORD *)(v8 + 4) = 0;
    v10 = (int *)v9;
    *(_DWORD *)v8 = 1;
    *(_QWORD *)(v8 + 8) = PhysicalAddress.QuadPart / 4096;
    *(_QWORD *)(v8 + 16) = 1LL;
    v11 = HvcallCodeVa();
    v12 = *v10;
    LOWORD(PhysicalAddress.LowPart) = v11;
    HvlpReleaseHypercallPage(v14);
    HvlpReleaseHypercallPage(v15);
    if ( LOWORD(PhysicalAddress.LowPart) )
    {
      v6 = -1073741823;
    }
    else
    {
      v6 = 0;
      *a1 = v5;
      v5 = 0LL;
      *a2 = v12 << 12;
    }
    if ( v5 )
      MmFreeContiguousMemory(v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
