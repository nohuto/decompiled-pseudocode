/*
 * XREFs of CmpAcceptBoot @ 0x140746430
 * Callers:
 *     NtInitializeRegistry @ 0x1407463C0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x140180D1C (KvfCommitFeatureStates.c)
 *     KeCommitSmtState @ 0x14019C39C (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x140785908 (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v4; // di

  KvfCommitFeatureStates();
  v2 = 0;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( _InterlockedExchange(&CmBootAcceptFirstTime, 0) )
    {
      v4 = a1 - 4096;
      if ( v4 )
      {
        KeCommitSmtState();
        if ( CmpLKGEnabled )
          v2 = CmpSaveBootControlSet(v4);
        off_140426828[0]();
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
