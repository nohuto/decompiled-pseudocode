/*
 * XREFs of MiInitializeSystemCache @ 0x14074F094
 * Callers:
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x14013DC78 (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x14018779C (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x140741FC8 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x1409EE7CC (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSystemCache(ULONG_PTR *a1)
{
  __int64 PteAddress; // rax
  __int64 v3; // rbx
  __int64 SystemBase; // rax

  PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
  InitializeListHeadPte((unsigned __int64)(a1 + 215), PteAddress);
  v3 = 0LL;
  if ( a1 != &MiSystemPartition )
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 1024), 2, v3);
  qword_140465C20[0] = 0LL;
  byte_140466838 = byte_140466838 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v3 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 1024), 2, v3);
  }
  return 0LL;
}
