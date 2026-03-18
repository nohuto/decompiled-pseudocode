/*
 * XREFs of EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408F8378
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     KiGetCpuVendor @ 0x14059DB24 (KiGetCpuVendor.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408F7758 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F80EC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 */

__int64 __fastcall EtwpRemoveMicroarchitecturalPmcFromRegistry(wchar_t *Str1, size_t MaxCount, __int64 a3)
{
  unsigned int v4; // esi
  int CpuVendor; // eax
  __int64 v7; // r9
  int v8; // r15d
  unsigned int v9; // edi
  wchar_t *PoolWithTag; // rax
  __int64 v11; // rcx
  WCHAR *v12; // rbx
  int MatchingPmcRegistryGroup; // edi

  v4 = MaxCount;
  CpuVendor = KiGetCpuVendor();
  v7 = -1LL;
  v8 = CpuVendor;
  do
    ++v7;
  while ( aRegistryMachin_23[v7] );
  v9 = 2 * v7 + 514;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  MatchingPmcRegistryGroup = EtwpFindMatchingPmcRegistryGroup(v11, v8, a3, v9, PoolWithTag);
  if ( MatchingPmcRegistryGroup >= 0 )
    MatchingPmcRegistryGroup = EtwpRemoveMicroarchitecturalPmcFromPmcGroup(v12, Str1, v4);
  ExFreePoolWithTag(v12, 0x50777445u);
  return (unsigned int)MatchingPmcRegistryGroup;
}
