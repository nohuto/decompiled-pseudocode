/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x140136AF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     CcFindNextWorkQueueEntry @ 0x14007E3BC (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x14007E468 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x14007E4D4 (CcDereferencePartition.c)
 *     CcCompleteAsyncRead @ 0x140080CAC (CcCompleteAsyncRead.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // bp
  __int64 v3; // rdi
  __int64 v4; // rsi
  _SLIST_ENTRY *NextWorkQueueEntry; // r15
  _QWORD *v6; // rdx

  v1 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    v3 = P[7];
    v4 = *((unsigned int *)P + 9);
    NextWorkQueueEntry = (_SLIST_ENTRY *)P[6];
    do
    {
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx(v3 + 832, 0LL);
      v6 = (_QWORD *)(16 * v4 + *(_QWORD *)(v3 + 808));
      if ( (_QWORD *)*v6 == v6 )
      {
        v1 = 1;
        --*(_DWORD *)(*(_QWORD *)(v3 + 792) + 4 * v4);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v3, v6);
      }
      ExReleasePushLockEx(v3 + 832, 0LL);
    }
    while ( !v1 );
    CcDereferencePartition(v3);
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
