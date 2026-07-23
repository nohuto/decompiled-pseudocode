/*
 * XREFs of MiAdvanceFaultList @ 0x14002B6E0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x14002B4B8 (MiComputeFaultCluster.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiResolveSharedZeroFault @ 0x1400429B0 (MiResolveSharedZeroFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MiCreateSharedZeroPages @ 0x140109240 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = a1[3];
  result = 2 * v2;
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 16 * v2 + 8);
  v6 = *(_DWORD *)(v4 + 16 * v2) & 0xFFF;
  if ( ++a1[4] == (unsigned __int64)(v6 + v5 + 4095) >> 12 )
  {
    a1[4] = 0LL;
    v7 = v2 + 1;
    v8 = a1[2];
    a1[3] = v7;
    if ( v7 < v8 )
    {
      result = 2 * v7;
      if ( !*(_QWORD *)(v4 + 16 * v7 + 8) )
        v7 = v8;
      a1[3] = v7;
    }
  }
  return result;
}
