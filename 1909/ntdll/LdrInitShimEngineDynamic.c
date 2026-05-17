/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800D0D30
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18002D75C (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     LdrpPinModule @ 0x18002EB1C (LdrpPinModule.c)
 *     LdrFindEntryForAddress @ 0x180054DE0 (LdrFindEntryForAddress.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x180069660 (LdrpGetShimEngineInterface.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int16 v5; // di
  int EntryForAddress; // eax
  __int64 v7; // rcx
  unsigned __int8 ShimEngine; // bl
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = 4096LL;
  v5 = NtCurrentTeb()->SameTebFlags & 0x1000;
  if ( !v5 )
    LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock(v3);
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = a1;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, &v10);
  if ( EntryForAddress >= 0 )
  {
    LdrpPinModule(v10);
    ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    v7 = (unsigned int)LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2693,
        "LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v7 = (unsigned int)LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    ShimEngine = 0;
  }
  LOBYTE(v7) = -ShimEngine;
  LdrpReleaseLoaderLock(v7, 2, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v5 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
