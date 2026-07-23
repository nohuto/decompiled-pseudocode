/*
 * XREFs of SepAdtDetermineInsertQueue @ 0x140190CE0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     SepAdtGenerateDiscardAudit @ 0x14089F420 (SepAdtGenerateDiscardAudit.c)
 */

char __fastcall SepAdtDetermineInsertQueue(__int64 a1)
{
  char v1; // bl
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rcx
  int v5; // eax
  _BYTE P[32]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  char v8; // [rsp+44h] [rbp-14h]

  v1 = 0;
  if ( !SepCrashOnAuditFail && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) != 4612 )
  {
    if ( SepAdtDiscardingAudits )
    {
      if ( dword_140441370 >= (unsigned int)SepAdtMinListLength )
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
        v7 = SepAdtCountEventsDiscarded;
        v8 = 0;
        SepAdtGenerateDiscardAudit(P);
      }
      SepAdtCountEventsDiscarded = 0;
    }
    if ( dword_140441370 >= (unsigned int)SepAdtMaxListLength )
    {
      SepAdtDiscardingAudits = 1;
      SepAdtCountEventsDiscarded = 1;
      return v1;
    }
  }
  return 1;
}
