/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00CAB6C
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C007DB40 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C007E6B0 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     UmfdDrvFree @ 0x1C00CAAC0 (UmfdDrvFree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00CAAE8 (UmfdTrueTypeFreeGlyphset.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00F1200 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C007E07C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1)
{
  PVOID v1; // rbx
  char *v2; // rdi
  unsigned __int64 v4; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = UmfdAllocation::s_allocationLookupLock;
  v2 = a1 - 28;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  if ( (*(_DWORD *)v2)-- == 1 )
  {
    if ( UmfdAllocation::s_allocationLookup )
    {
      v4 = *((_QWORD *)v2 + 2);
      if ( v4 )
      {
        v5 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(
          (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup,
          v4,
          &v5);
      }
    }
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
    EngFreeMem(v2);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
