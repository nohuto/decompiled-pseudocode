/*
 * XREFs of EtwpCancelMemoryPreservation @ 0x1408C9E0C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406C08A0 (EtwpFreeLoggerContext.c)
 *     EtwpKsrCallback @ 0x1408C9F80 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CA9E4 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCancelMemoryPreservation(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 1072);
  if ( *(_BYTE *)(v1 + 33) )
  {
    KsrFreePersistedMemoryBlock(EtwpKsrGuid, *(_QWORD *)v1, 0LL);
    v2 = *(void **)(v1 + 8);
    *(_QWORD *)v1 = 0LL;
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    *(_BYTE *)(v1 + 33) = 0;
  }
}
