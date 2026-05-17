/*
 * XREFs of RtlpTpIoDllLoaded @ 0x18008BAA8
 * Callers:
 *     RtlpTpIoDllNotification @ 0x18008BA90 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     TpDereferenceGlobalPool @ 0x18003135C (TpDereferenceGlobalPool.c)
 *     RtlDelete @ 0x18006C830 (RtlDelete.c)
 */

signed __int64 __fastcall RtlpTpIoDllLoaded(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 *v6; // rcx
  unsigned __int64 *v7; // r14
  unsigned __int64 *v8; // rdi
  unsigned __int64 v9; // rdx
  signed __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // [rsp+20h] [rbp-18h]

  v5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoTreeLock, a2, a3, a4);
  v6 = (unsigned __int64 *)RtlpTpIoTree;
  while ( 1 )
  {
    v7 = v6;
    if ( !v6 )
      break;
    v8 = v6 - 12;
    v9 = *(v6 - 12);
    if ( v9 < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( v9 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v6 = RtlDelete(v6);
      RtlpTpIoTree = (__int64)v6;
      *v7 = v5;
      v5 = (unsigned __int64)v8;
    }
    else if ( v9 < *(_QWORD *)(a1 + 24) )
    {
LABEL_7:
      v6 = (unsigned __int64 *)v6[2];
    }
    else
    {
      v6 = (unsigned __int64 *)v6[1];
    }
  }
  result = RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v5 )
  {
    v14 = *(_QWORD *)(v5 + 96);
    TpDereferenceGlobalPool(*(_QWORD *)(v5 + 80), v11, v12, v13);
    RtlFreeAnsiString((PUNICODE_STRING)(v5 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    v5 = v14;
  }
  return result;
}
