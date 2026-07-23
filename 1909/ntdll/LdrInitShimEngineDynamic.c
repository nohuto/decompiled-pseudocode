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

__int64 __fastcall LdrInitShimEngineDynamic(PVOID DllHandle, __int64 a2)
{
  __int16 v4; // di
  NTSTATUS EntryForAddress; // eax
  __int64 v6; // rcx
  unsigned __int8 ShimEngine; // bl
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+50h] [rbp+18h] BYREF

  Entry = 0LL;
  v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
  if ( !v4 )
    LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = DllHandle;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
  if ( EntryForAddress >= 0 )
  {
    LdrpPinModule((__int64)Entry);
    ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    v6 = (unsigned int)LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2693,
        "LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v6 = (unsigned int)LdrpDebugFlags;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    ShimEngine = 0;
  }
  LOBYTE(v6) = -ShimEngine;
  LdrpReleaseLoaderLock(v6, 2, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
