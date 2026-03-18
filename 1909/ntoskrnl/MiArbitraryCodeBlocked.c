/*
 * XREFs of MiArbitraryCodeBlocked @ 0x14067DCBC
 * Callers:
 *     MiAllowProtectionChange @ 0x1400E53B0 (MiAllowProtectionChange.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfSection @ 0x14060A890 (MiMapViewOfSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1400E5500 (EtwTraceMemoryAcg.c)
 *     EtwTimLogProhibitDynamicCode @ 0x1406E0F14 (EtwTimLogProhibitDynamicCode.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v3; // edx

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 2128);
  if ( (v3 & 0x100) == 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) != 0 )
  {
    if ( (v3 & 0x800) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      EtwTimLogProhibitDynamicCode(1LL, a1);
    EtwTraceMemoryAcg(0);
    return 0LL;
  }
  else
  {
    EtwTraceMemoryAcg(0x80000000);
    EtwTimLogProhibitDynamicCode(2LL, a1);
    return 3221227012LL;
  }
}
