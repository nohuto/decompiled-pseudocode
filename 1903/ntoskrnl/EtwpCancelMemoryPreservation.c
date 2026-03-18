/*
 * XREFs of EtwpCancelMemoryPreservation @ 0x1409072E0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 *     EtwpKsrCallback @ 0x1409074E0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140908100 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCancelMemoryPreservation(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(a1 + 1104);
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
