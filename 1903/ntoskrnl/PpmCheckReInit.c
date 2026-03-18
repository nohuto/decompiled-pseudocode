/*
 * XREFs of PpmCheckReInit @ 0x14077387C
 * Callers:
 *     PopIntSteerSetMode @ 0x140193750 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x1402F8BB4 (PpmParkSetLpiCap.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x14077378C (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x14000E310 (PoEnergyEstimationEnabled.c)
 *     KeIsEmptyAffinityEx @ 0x1400BE2F0 (KeIsEmptyAffinityEx.c)
 *     PpmCheckArmPeriod @ 0x140194054 (PpmCheckArmPeriod.c)
 *     PpmPerfClearResponsivenessHints @ 0x1401940F0 (PpmPerfClearResponsivenessHints.c)
 *     PopInterruptSteeringEnabled @ 0x14019414C (PopInterruptSteeringEnabled.c)
 *     PpmPerfCheckRequired @ 0x1401BEC18 (PpmPerfCheckRequired.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1407739C8 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x140773AA0 (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x140774928 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  char v0; // bl
  bool v1; // di
  char v2; // si
  __int64 *v3; // rbp
  _DWORD *v4; // rcx
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = &PpmCurrentProfile[341 * dword_140443ACC];
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfStatesRegistered) )
  {
    v1 = PpmPerfCheckRequired((__int64)(v3 + 5)) != 0;
    v0 = v1;
    if ( PpmCheckPollForFeedback )
      v0 = 1;
    v5 = PoEnergyEstimationEnabled();
    v4 = (_DWORD *)v3 + 31;
    if ( v5 )
      v0 = 1;
    v6 = 2LL;
    do
    {
      if ( *v4 != v4[2] )
      {
        v0 = 1;
        v2 = 1;
      }
      ++v4;
      --v6;
    }
    while ( v6 );
  }
  if ( (unsigned __int8)PpmParkParkingAvailable(v4) )
  {
    v0 = 1;
    v1 = 1;
  }
  if ( PopInterruptSteeringEnabled() )
    v0 = 1;
  if ( v0 && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  if ( !v2 )
    PpmPerfClearResponsivenessHints();
  LOBYTE(v7) = v1;
  PpmParkUpdateConcurrencyTracking(v7);
  if ( v0 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PpmCheckArmed )
  {
    _InterlockedExchange64(&PpmCheckLastExecutionTime, 0LL);
    PpmCheckArmed = 0;
  }
  result = PpmCheckHomogeneousPipelines;
  PpmCheckPipelines = (__int64)PpmCheckHomogeneousPipelines;
  if ( PpmHeteroPolicy )
  {
    if ( v1 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
