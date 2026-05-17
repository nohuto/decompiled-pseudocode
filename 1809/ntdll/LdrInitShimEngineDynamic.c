/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800D2560
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     LdrFindEntryForAddress @ 0x180034C60 (LdrFindEntryForAddress.c)
 *     LdrpPinModule @ 0x180047C80 (LdrpPinModule.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x1800707C8 (LdrpGetShimEngineInterface.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(__int64 a1, __int64 a2)
{
  __int16 v4; // di
  int EntryForAddress; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int8 ShimEngine; // bl
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
  if ( !v4 )
    LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = a1;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, &v12);
  if ( EntryForAddress >= 0 )
  {
    LdrpPinModule(v12, v6, v7, v8);
    ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    v9 = (unsigned int)LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2699,
        "LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v9 = (unsigned int)LdrpDebugFlags;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    ShimEngine = 0;
  }
  LOBYTE(v9) = -ShimEngine;
  LdrpReleaseLoaderLock(v9, 2, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
