/*
 * XREFs of SmpInitializeManagedPagefileSupport @ 0x140010644
 * Callers:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x14001085C (SmpMakeSystemManagedPagingFileDescriptor.c)
 * Callees:
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000FF34 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpComputeDesiredPfSizeForApps @ 0x1400101C4 (SmpComputeDesiredPfSizeForApps.c)
 *     SmpComputeDesiredPfSizeForCrashDump @ 0x14001022C (SmpComputeDesiredPfSizeForCrashDump.c)
 */

void SmpInitializeManagedPagefileSupport()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( SmpManagedPfInitialized != 1 )
  {
    v0 = 0x40000000LL;
    if ( (unsigned __int64)SmpMemorySize > 0x40000000 )
    {
      v0 = ((unsigned __int64)(SmpMemorySize - 0x40000000) >> 3) + 0x40000000;
      if ( v0 > 0x800000000LL )
        v0 = 0x800000000LL;
    }
    SmpDesiredPfSizeBasedOnRAM = v0;
    SmpDesiredPfSizeForCrashDump = SmpComputeDesiredPfSizeForCrashDump();
    SmpDesiredPfSizeBasedOnHistory = SmpComputeDesiredPfSizeBasedOnHistory();
    SmpDesiredPfSizeForApps = SmpComputeDesiredPfSizeForApps();
    if ( (int)TpAllocTimer(&v2, SmpUpdatePagefileUsageCallback, 0LL, &SmpCallbackEnviron) >= 0 )
    {
      v1 = -36000000000LL;
      TpSetTimer(v2, &v1, 3600000LL, 300000LL);
    }
    SmpManagedPfInitialized = 1;
  }
}
