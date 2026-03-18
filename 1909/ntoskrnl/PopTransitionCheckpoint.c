/*
 * XREFs of PopTransitionCheckpoint @ 0x140727ABC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PoUserShutdownInitiated @ 0x140727960 (PoUserShutdownInitiated.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  unsigned __int64 CurrentServerSilo; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
    if ( PopTransitionCheckpoints != &PopTransitionCheckpoints || a1 == 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x50434B50u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_DWORD *)PoolWithTag + 4) = PopTransitionCheckpointsSequenceNumber;
        *((_DWORD *)PoolWithTag + 5) = a1;
        *((_DWORD *)PoolWithTag + 6) = a2;
        PoolWithTag[4] = MEMORY[0xFFFFF78000000008];
        v7 = (_QWORD *)qword_140444DE8;
        if ( *(PVOID **)qword_140444DE8 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v6 = &PopTransitionCheckpoints;
        v6[1] = v7;
        *v7 = v6;
        qword_140444DE8 = (__int64)v6;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
  }
}
