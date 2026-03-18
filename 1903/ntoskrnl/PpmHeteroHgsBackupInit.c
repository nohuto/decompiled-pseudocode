/*
 * XREFs of PpmHeteroHgsBackupInit @ 0x14019CA08
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1400B9068 (PopExecuteOnTargetProcessors.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmHeteroInitializeHgsSupport @ 0x14019CA48 (PpmHeteroInitializeHgsSupport.c)
 *     PpmReinitializeHeteroEngine @ 0x140772AA8 (PpmReinitializeHeteroEngine.c)
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
