/*
 * XREFs of PpmHeteroHgsBackupInit @ 0x140192A20
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5EA8 (PopExecuteOnTargetProcessors.c)
 *     PpmHeteroInitializeHgsSupport @ 0x140192A60 (PpmHeteroInitializeHgsSupport.c)
 *     PpmReinitializeHeteroEngine @ 0x14074E4A8 (PpmReinitializeHeteroEngine.c)
 */

void PpmHeteroHgsBackupInit()
{
  __int64 v0; // rcx

  if ( !PpmHeteroHgsEnabled )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( (int)PpmHeteroInitializeHgsSupport() >= 0 )
    {
      PopExecuteOnTargetProcessors((__int64)PpmCheckRegistered, (__int64)PpmHeteroHgsBackupProcessorInit, 0LL, 0LL);
      LOBYTE(v0) = 1;
      PpmReinitializeHeteroEngine(v0);
    }
    else
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
  }
}
