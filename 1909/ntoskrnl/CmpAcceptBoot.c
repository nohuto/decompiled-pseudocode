/*
 * XREFs of CmpAcceptBoot @ 0x140748330
 * Callers:
 *     NtInitializeRegistry @ 0x1407482C0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x14018140C (KvfCommitFeatureStates.c)
 *     KeCommitSmtState @ 0x14019CB1C (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x140787C68 (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
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
