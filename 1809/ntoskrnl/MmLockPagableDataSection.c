/*
 * XREFs of MmLockPagableDataSection @ 0x140652820
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409275A0 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x140951680 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1409BDE2C (MiLockPagableSections.c)
 *     HeadlessInit @ 0x1409E05DC (HeadlessInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v4 = (_BYTE *)MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0)[6];
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
