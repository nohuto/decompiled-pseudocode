/*
 * XREFs of HvTrimHive @ 0x1406BEFC0
 * Callers:
 *     CmpTrimHive @ 0x1405B1000 (CmpTrimHive.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 */

void __fastcall HvTrimHive(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 CellMap; // rax
  __int64 v7; // r10
  char *AnyMultiplexedVm; // rax
  __int64 v9; // r11
  __int64 v10; // r10

  if ( a2 < a3 )
  {
    v4 = a2;
    do
    {
      CellMap = HvpGetCellMap(a1, v4);
      v7 = *(_QWORD *)(CellMap + 8);
      if ( (v7 & 2) == 0 )
      {
        *(_QWORD *)(CellMap + 8) = v7 | 4;
        if ( (v7 & 1) != 0 && (v7 & 8) != 0 )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
          MiDeprioritizeVirtualAddresses(
            v10 & 0xFFFFFFFFFFFFFFF0uLL,
            (unsigned __int64)*(unsigned int *)(v9 + 16) >> 12,
            (__int64)AnyMultiplexedVm,
            24);
        }
      }
      v4 += 4096;
    }
    while ( v4 < a3 );
  }
}
