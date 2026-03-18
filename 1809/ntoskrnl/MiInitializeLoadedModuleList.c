/*
 * XREFs of MiInitializeLoadedModuleList @ 0x1409CF350
 * Callers:
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC4D0 (ExInitializeResourceLite.c)
 *     MiConstructLoaderEntry @ 0x140682490 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140682C04 (MiLockdownSections.c)
 *     NtSetDebugFilterState @ 0x140740A30 (NtSetDebugFilterState.c)
 *     MiBuildImportsForBootDrivers @ 0x1409CF458 (MiBuildImportsForBootDrivers.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1409CF77C (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     MiLocateKernelSections @ 0x1409CF80C (MiLocateKernelSections.c)
 */

__int64 __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  qword_140438E88 = (__int64)&qword_140438E80;
  qword_140438E80 = (__int64)&qword_140438E80;
  ExInitializeResourceLite(&PsLoadedModuleResource);
  ExpCovPushLock = 0LL;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  qword_1404067A8 = (__int64)&ExpCovUnloadedModuleList;
  ExpCovUnloadedModuleList = (__int64)&ExpCovUnloadedModuleList;
  NtSetDebugFilterState(0x7Eu, 0, 1u);
  v2 = (__int64 *)(a1 + 16);
  v3 = *v2;
  MiLocateKernelSections(*v2);
  while ( 1 )
  {
    if ( (__int64 *)v3 == v2 )
    {
      MiBuildImportsForBootDrivers();
      return 1LL;
    }
    if ( (int)MiConstructLoaderEntry(v3, (const void **)(v3 + 88), (const void **)(v3 + 72), 0, 1, &v7) < 0 )
      break;
    v4 = v7;
    v5 = *(_QWORD *)(v7 + 48);
    if ( v5 == PsNtosImageBase && (MiFlags & 0x80000) == 0 )
      RtlCreateInvertedFunctionTableCacheEntry(v5, *(unsigned int *)(v7 + 64));
    MiLockdownSections(v4);
    v3 = *(_QWORD *)v3;
  }
  return 0LL;
}
