/*
 * XREFs of MmLockPagableDataSection @ 0x1406A5EC0
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140964AD4 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x1409906D0 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1409F15C8 (MiLockPagableSections.c)
 *     HeadlessInit @ 0x140A22ECC (HeadlessInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rbx
  _BYTE *v4; // rcx
  char *v5; // rsi
  PIMAGE_NT_HEADERS v6; // rax
  unsigned int NumberOfSections; // r10d
  _DWORD *v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // eax

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)AddressWithinSection) )
    return (PVOID)1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v4 = *(_BYTE **)(MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0LL) + 48);
  v5 = (char *)((_BYTE *)AddressWithinSection - v4);
  v6 = RtlImageNtHeader(v4);
  NumberOfSections = v6->FileHeader.NumberOfSections;
  v8 = (_DWORD *)((char *)&v6->OptionalHeader.Magic + v6->FileHeader.SizeOfOptionalHeader);
  v9 = 0;
  if ( v6->FileHeader.NumberOfSections )
  {
    while ( 1 )
    {
      v10 = (unsigned int)v8[3];
      v11 = v8[4];
      if ( (unsigned __int64)v5 >= v10 )
      {
        if ( v11 < v8[2] )
          v11 = v8[2];
        if ( (unsigned __int64)v5 < (unsigned int)v10 + v11 )
          break;
      }
      v8 += 10;
      if ( ++v9 >= NumberOfSections )
        goto LABEL_10;
    }
    v3 = v8;
  }
LABEL_10:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1uLL);
  return v3;
}
