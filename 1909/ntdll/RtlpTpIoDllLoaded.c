/*
 * XREFs of RtlpTpIoDllLoaded @ 0x180089228
 * Callers:
 *     RtlpTpIoDllNotification @ 0x180089210 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlDelete @ 0x180064C00 (RtlDelete.c)
 *     TpDereferenceGlobalPool @ 0x180080A64 (TpDereferenceGlobalPool.c)
 */

signed __int64 __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // r14
  __int64 *v5; // rdi
  unsigned __int64 v6; // rdx
  signed __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v3 = (__int64 *)RtlpTpIoTree;
  while ( 1 )
  {
    v4 = v3;
    if ( !v3 )
      break;
    v5 = v3 - 12;
    v6 = *(v3 - 12);
    if ( v6 < *(_QWORD *)(a1 + 24) )
      goto LABEL_8;
    if ( v6 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v3 = RtlDelete(v3);
      RtlpTpIoTree = (__int64)v3;
      *v4 = v2;
      v2 = (__int64)v5;
    }
    else if ( v6 < *(_QWORD *)(a1 + 24) )
    {
LABEL_8:
      v3 = (__int64 *)v3[2];
    }
    else
    {
      v3 = (__int64 *)v3[1];
    }
  }
  result = RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v2 )
  {
    v11 = *(_QWORD *)(v2 + 96);
    TpDereferenceGlobalPool(*(_QWORD *)(v2 + 80), v8, v9, v10);
    RtlFreeAnsiString((PUNICODE_STRING)(v2 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v11;
  }
  return result;
}
