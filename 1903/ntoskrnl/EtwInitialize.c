/*
 * XREFs of EtwInitialize @ 0x14076B184
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpBuffersFlushRequired @ 0x1401358A0 (EtwpBuffersFlushRequired.c)
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx

  if ( a1 >= 2 )
  {
    if ( a1 == 2 )
    {
      v1 = EtwpHostSiloState;
      v2 = 0LL;
      for ( EtwpFileSystemReady = 1; (unsigned int)v2 < *(_DWORD *)(EtwpHostSiloState + 16); v2 = (unsigned int)(v2 + 1) )
      {
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v2),
               1u) )
        {
          if ( (unsigned int)v2 >= *(_DWORD *)(EtwpHostSiloState + 16) )
            v3 = 1LL;
          else
            v3 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8 * v2);
          if ( (v3 & 1) == 0 && (*(_DWORD *)(v3 + 12) & 0x400) == 0 && EtwpBuffersFlushRequired(v3) )
          {
            if ( KeGetEffectiveIrql() > 2u )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)(v3 + 836), 8u) )
                KeInsertQueueDpc((PRKDPC)(v3 + 584), 0LL, 0LL);
            }
            else
            {
              KeSetEvent((PRKEVENT)(v3 + 496), 0, 0);
            }
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(EtwpHostSiloState + 448) + 8 * v2),
            1u);
        }
        v1 = EtwpHostSiloState;
      }
    }
  }
  else
  {
    EtwpInitialize();
  }
}
