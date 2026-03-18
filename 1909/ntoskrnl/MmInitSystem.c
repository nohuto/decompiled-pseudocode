/*
 * XREFs of MmInitSystem @ 0x1409F0CD4
 * Callers:
 *     KiInitializeBootStructures @ 0x14059FFA0 (KiInitializeBootStructures.c)
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14018C9D0 (VslGetNestedPageProtectionFlags.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiInitializeSystemVa @ 0x1409EFD10 (MiInitializeSystemVa.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 *     KeQueryNumaGraph @ 0x140A3B8E8 (KeQueryNumaGraph.c)
 */

char __fastcall MmInitSystem(int a1, ULONG_PTR a2)
{
  int NestedPageProtectionFlags; // eax
  int v5; // ecx
  unsigned __int16 *NumaGraph; // r10
  unsigned int v7; // r8d
  unsigned int i; // r9d
  unsigned int j; // esi
  __int64 v10; // rax

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
        NumaGraph = (unsigned __int16 *)KeQueryNumaGraph();
        if ( NumaGraph )
        {
          v7 = (unsigned __int16)KeNumberNodes;
          for ( i = 0; i < v7; ++i )
          {
            for ( j = 0; j < v7; *(_DWORD *)(qword_140465750 + 4LL * (unsigned int)v10) = NumaGraph[v10] )
              v10 = i * v7 + j++;
          }
          ExFreePoolWithTag(NumaGraph, 0);
        }
      }
      MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, a2) )
      {
        byte_140466654 = 1;
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
  else if ( (unsigned __int8)MiInitNucleus(a2) )
  {
    return ((__int64 (*)(void))MiInitSystem)();
  }
  return 0;
}
