/*
 * XREFs of KiConvertDynamicHeteroPolicy @ 0x1402AF260
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1400119D8 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x140042260 (KiSelectReadyThread.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF588 (KiHeteroChooseTargetProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiGetHeteroThreadQos @ 0x1402AF3E8 (KiGetHeteroThreadQos.c)
 */

__int64 __fastcall KiConvertDynamicHeteroPolicy(__int64 a1, int a2, __int64 a3)
{
  int HeteroThreadQos; // eax
  signed __int32 v5; // ett
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  HeteroThreadQos = KiGetHeteroThreadQos(a1, a3, &v7);
  if ( HeteroThreadQos != (*(_DWORD *)(a1 + 120) & 3) )
  {
    do
      v5 = *(_DWORD *)(a1 + 120);
    while ( v5 != _InterlockedCompareExchange(
                    (volatile signed __int32 *)(a1 + 120),
                    HeteroThreadQos | v5 & 0xFFFFFFFC,
                    v5) );
  }
  return *((unsigned int *)&KiDynamicHeteroCpuPolicy + 2 * HeteroThreadQos + v7);
}
