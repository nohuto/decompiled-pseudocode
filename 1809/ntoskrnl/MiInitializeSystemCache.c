/*
 * XREFs of MiInitializeSystemCache @ 0x14072A6BC
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400AD200 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x14013BA9C (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x14017004C (InitializeListHeadPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x140715B68 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x1409B6DDC (MiInitializeDynamicRegion.c)
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
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 928), 2, v3);
  qword_14043A558 = 0LL;
  byte_14043B138 = byte_14043B138 & 0xF8 | 2;
  SystemBase = MiQuerySystemBase(2);
  if ( (unsigned int)MiInitializeDynamicRegion(8LL, SystemBase, 0x100000000000LL) )
  {
    v3 = 0x100000000LL;
    return MiInitializeSystemWorkingSetList(a1, (__int64)(a1 + 928), 2, v3);
  }
  return 0LL;
}
