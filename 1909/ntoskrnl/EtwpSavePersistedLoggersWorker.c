/*
 * XREFs of EtwpSavePersistedLoggersWorker @ 0x140907A24
 * Callers:
 *     EtwpSavePersistedLoggers @ 0x1409079F4 (EtwpSavePersistedLoggers.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpSavePersistedLogger @ 0x140907458 (EtwpSavePersistedLogger.c)
 */

__int64 EtwpSavePersistedLoggersWorker()
{
  char *PoolWithTag; // rax
  __int64 v1; // rdx
  char *v2; // rbx
  int v3; // esi
  __int64 i; // rdi
  int v5; // eax
  char v7; // [rsp+50h] [rbp+8h] BYREF

  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          PagedPool,
                          8LL * *(unsigned int *)(EtwpHostSiloState + 16) + 4112,
                          0x4B777445u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_9;
  *(_DWORD *)PoolWithTag = 0;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 4112;
  v3 = KsrEnumeratePersistedMemory(EtwpKsrGuid, EtwpKsrMemoryEnumCallback, PoolWithTag);
  if ( v3 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v2; i = (unsigned int)(i + 1) )
    {
      v5 = KsrQueryMetadata(EtwpKsrGuid, *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * i), v2 + 16, 4096LL, &v7);
      if ( v5 >= 0 )
        EtwpSavePersistedLogger((unsigned int *)v2 + 4, *(_QWORD *)(*((_QWORD *)v2 + 1) + 8 * i));
      else
        v3 = v5;
    }
  }
  ExFreePoolWithTag(v2, 0);
  if ( v3 < 0 )
  {
LABEL_9:
    LOBYTE(v1) = 1;
    KsrFreePersistedMemory(EtwpKsrGuid, v1);
  }
  return (unsigned int)_InterlockedExchange(&EtwpLoggerSaveState, 2);
}
