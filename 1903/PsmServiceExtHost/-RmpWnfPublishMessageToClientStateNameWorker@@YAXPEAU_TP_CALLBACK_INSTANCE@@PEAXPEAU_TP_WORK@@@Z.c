/*
 * XREFs of ?RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003DDB0
 * Callers:
 *     <none>
 * Callees:
 *     CempListRemoveHeadAndClear @ 0x18003DE88 (CempListRemoveHeadAndClear.c)
 */

void __fastcall RmpWnfPublishMessageToClientStateNameWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        _BYTE *a2,
        struct _TP_WORK *a3)
{
  char *v4; // rsi
  __int64 v5; // rbx
  char v6; // bl
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2 + 24;
LABEL_2:
  RtlAcquireSRWLockExclusive(v4);
  if ( *(_BYTE **)a2 != a2 )
  {
    v5 = CempListRemoveHeadAndClear(a2);
    RtlReleaseSRWLockExclusive(v4);
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)RtlWaitForWnfMetaNotification(*(_QWORD *)(v5 + 16), 8LL, 15000LL, 1000LL, &v7) != 258 )
      {
        RtlPublishWnfStateData(*(_QWORD *)(v5 + 16), 0LL, v5 + 28, *(unsigned int *)(v5 + 24), 0LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v5);
        goto LABEL_2;
      }
      RtlAcquireSRWLockExclusive(v4);
      if ( a2[33] )
        break;
      RtlReleaseSRWLockExclusive(v4);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v5);
  }
  v6 = a2[33];
  a2[32] = 0;
  RtlReleaseSRWLockExclusive(v4);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}
