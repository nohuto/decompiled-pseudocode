/*
 * XREFs of MmInitSystem @ 0x1409BD4E4
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018DE90 (VslGetNestedPageProtectionFlags.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 *     MiInitializeSystemVa @ 0x1409D33A8 (MiInitializeSystemVa.c)
 *     KeQueryNumaGraph @ 0x1409F7414 (KeQueryNumaGraph.c)
 */

char __fastcall MmInitSystem(int a1, ULONG_PTR a2)
{
  int NestedPageProtectionFlags; // eax
  int v5; // ecx
  void *NumaGraph; // rax
  void *v7; // rsi

  if ( a1 == -1 )
  {
    NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
    if ( !NestedPageProtectionFlags )
    {
LABEL_12:
      MiInitializeSystemVa(a2);
      return 1;
    }
    v5 = MiFlags | 0x2000;
    MiFlags |= 0x2000u;
    if ( (NestedPageProtectionFlags & 4) != 0 )
    {
      v5 |= 0xC000u;
      MiFlags = v5;
    }
    if ( (NestedPageProtectionFlags & 1) != 0 )
    {
      v5 |= 0x50000u;
    }
    else
    {
      if ( (NestedPageProtectionFlags & 2) == 0 )
      {
LABEL_22:
        if ( (NestedPageProtectionFlags & 0x10) == 0 )
        {
          v5 |= 0x20000u;
          MiFlags = v5;
        }
        if ( (NestedPageProtectionFlags & 0x40) != 0 )
        {
          v5 |= 0x100000u;
          MiFlags = v5;
        }
        if ( (NestedPageProtectionFlags & 0x80u) != 0 )
          MiFlags = v5 | 0x80000;
        goto LABEL_12;
      }
      v5 |= 0x10000u;
    }
    MiFlags = v5;
    goto LABEL_22;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        NumaGraph = (void *)KeQueryNumaGraph();
        v7 = NumaGraph;
        if ( NumaGraph )
        {
          memmove(qword_14043B110, NumaGraph, 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes);
          ExFreePoolWithTag(v7, 0);
        }
      }
      MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, a2) )
      {
        byte_14043BF94 = 1;
        return 1;
      }
      return 0;
    }
    if ( a1 == 2 )
    {
      MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
      return ((__int64 (*)(void))MiInitSystem)();
    }
  }
  else if ( MiInitNucleus(a2) )
  {
    return ((__int64 (*)(void))MiInitSystem)();
  }
  return 0;
}
