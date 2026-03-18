/*
 * XREFs of HvlSetupPhysicalFaultNotificationQueue @ 0x14028539C
 * Callers:
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1400F4E90 (MmFreeContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x140124C70 (MmGetPhysicalAddress.c)
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     HvlpAllocateOverlayPages @ 0x14028D59C (HvlpAllocateOverlayPages.c)
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
  _QWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
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
