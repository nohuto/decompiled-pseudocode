/*
 * XREFs of PpmCheckReInit @ 0x14074F134
 * Callers:
 *     PopIntSteerSetMode @ 0x140189470 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x1402E7EF0 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14074F044 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACF60 (PoEnergyEstimationEnabled.c)
 *     PpmCheckArmPeriod @ 0x140189D3C (PpmCheckArmPeriod.c)
 *     PpmPerfClearResponsivenessHints @ 0x140189DD8 (PpmPerfClearResponsivenessHints.c)
 *     PopInterruptSteeringEnabled @ 0x140189E34 (PopInterruptSteeringEnabled.c)
 *     PpmPerfCheckRequired @ 0x1401B59F0 (PpmPerfCheckRequired.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14074F280 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x14074F33C (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x140750164 (PpmPerfResetHistoryAll.c)
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
  v3 = &PpmCurrentProfile[341 * dword_14041810C];
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
