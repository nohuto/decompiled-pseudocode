/*
 * XREFs of EtwpSavePersistedLoggersWorker @ 0x1408CBB70
 * Callers:
 *     EtwInitialize @ 0x1407444D0 (EtwInitialize.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpSavePersistedLogger @ 0x1408CB79C (EtwpSavePersistedLogger.c)
 */

void __fastcall EtwpSavePersistedLoggersWorker(void *a1)
{
  char *PoolWithTag; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  int v4; // esi
  __int64 i; // rdi
  int v6; // eax
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
    ExFreePoolWithTag(a1, 0);
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          PagedPool,
                          8LL * *(unsigned int *)(EtwpHostSiloState + 16) + 4112,
                          0x4B777445u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  *(_DWORD *)PoolWithTag = 0;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 4112;
  v4 = KsrEnumeratePersistedMemory(EtwpKsrGuid, EtwpKsrMemoryEnumCallback, PoolWithTag);
  if ( v4 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v3; i = (unsigned int)(i + 1) )
    {
      v6 = KsrQueryMetadata(EtwpKsrGuid, *(_QWORD *)(v3[1] + 8 * i), v3 + 2, 4096LL, &v8);
      if ( v6 >= 0 )
        EtwpSavePersistedLogger((_DWORD *)v3 + 4, *(_QWORD *)(v3[1] + 8 * i));
      else
        v4 = v6;
    }
  }
  ExFreePoolWithTag(v3, 0);
  if ( v4 < 0 )
  {
LABEL_11:
    LOBYTE(v2) = 1;
    KsrFreePersistedMemory(EtwpKsrGuid, v2);
  }
  EtwpLoggerSaveInProgress = 0;
  _InterlockedOr(v7, 0);
  if ( EtwpLoggerSaveEvent )
    ExfUnblockPushLock(&EtwpLoggerSaveEvent, 0LL);
}
