/*
 * XREFs of CmpAcceptBoot @ 0x14071DDA8
 * Callers:
 *     NtInitializeRegistry @ 0x14071DCF0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x14017741C (KvfCommitFeatureStates.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x14075E7E0 (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // di

  KvfCommitFeatureStates();
  v2 = 0;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( _InterlockedExchange(&CmBootAcceptFirstTime, 0) )
    {
      v3 = a1 - 4096;
      if ( v3 )
      {
        if ( CmpLKGEnabled )
          v2 = CmpSaveBootControlSet(v3);
        off_1404004E8[0]();
        CmpUpdatePhaseAccessBit();
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return v2;
}
