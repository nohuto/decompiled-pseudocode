/*
 * XREFs of SepAdtDetermineInsertQueue @ 0x14013D570
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     SepAdtGenerateDiscardAudit @ 0x1408DC530 (SepAdtGenerateDiscardAudit.c)
 */

char __fastcall SepAdtDetermineInsertQueue(__int64 a1)
{
  char v1; // bl
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rcx
  int v5; // eax
  _DWORD P[14]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  if ( !SepCrashOnAuditFail && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) != 4612 )
  {
    if ( SepAdtDiscardingAudits )
    {
      if ( dword_14046BDF0 >= (unsigned int)SepAdtMinListLength )
      {
        ++SepAdtCountEventsDiscarded;
        return v1;
      }
      SepAdtDiscardingAudits = 0;
      if ( KeGetCurrentIrql() >= 2u )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x20206553u);
        v4 = PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[3] = PoolWithTag;
          PoolWithTag[2] = SepAdtGenerateDiscardAudit;
          v5 = SepAdtCountEventsDiscarded;
          *v4 = 0LL;
          *((_DWORD *)v4 + 8) = v5;
          *((_BYTE *)v4 + 36) = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v4, DelayedWorkQueue);
        }
      }
      else
      {
        memset(P, 0, 0x28uLL);
        P[8] = SepAdtCountEventsDiscarded;
        SepAdtGenerateDiscardAudit(P);
      }
      SepAdtCountEventsDiscarded = 0;
    }
    if ( dword_14046BDF0 >= (unsigned int)SepAdtMaxListLength )
    {
      SepAdtDiscardingAudits = 1;
      SepAdtCountEventsDiscarded = 1;
      return v1;
    }
  }
  return 1;
}
