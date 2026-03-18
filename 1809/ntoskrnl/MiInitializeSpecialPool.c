/*
 * XREFs of MiInitializeSpecialPool @ 0x1407155E8
 * Callers:
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 *     MiQuerySystemBase @ 0x14013BA9C (MiQuerySystemBase.c)
 *     InitializeListHeadPte @ 0x14017004C (InitializeListHeadPte.c)
 *     MiInitializeDynamicRegion @ 0x1409B6DDC (MiInitializeDynamicRegion.c)
 */

__int64 __fastcall MiInitializeSpecialPool(char a1)
{
  unsigned __int64 v1; // rbx
  __int64 PteAddress; // rax
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // r9
  __int64 SystemBase; // rax
  __int64 v9; // rax

  v1 = 0xFFFF800000000000uLL;
  if ( (a1 & 0x20) != 0 )
  {
    v1 = qword_140439FB8;
LABEL_3:
    PteAddress = MiGetPteAddress(v1);
    InitializeListHeadPte(v3 + 8, PteAddress);
    InitializeListHeadPte(v4 + 32, v5);
    *v6 = 0LL;
    return 1LL;
  }
  SystemBase = MiQuerySystemBase(10);
  if ( (unsigned int)MiInitializeDynamicRegion(7LL, SystemBase, 0x8000000000LL) )
  {
    v9 = MiQuerySystemBase(11);
    if ( (unsigned int)MiInitializeDynamicRegion(13LL, v9, 0x8000000000LL) )
    {
      dword_140438B14 = 0x4000;
      goto LABEL_3;
    }
  }
  return 0LL;
}
