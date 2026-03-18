/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00764E8
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0076464 (UmfdTrueTypeFreeGlyphset.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00F0380 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00F0600 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00F0774 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     UmfdDrvFree @ 0x1C012C360 (UmfdDrvFree.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00765A0 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1)
{
  PVOID v1; // rbx
  char *v2; // rdi
  const void *v4; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = UmfdAllocation::s_allocationLookupLock;
  v2 = a1 - 28;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  if ( (*(_DWORD *)v2)-- == 1 )
  {
    if ( UmfdAllocation::s_allocationLookup )
    {
      v4 = (const void *)*((_QWORD *)v2 + 2);
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
