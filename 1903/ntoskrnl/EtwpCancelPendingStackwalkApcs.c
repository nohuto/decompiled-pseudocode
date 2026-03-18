/*
 * XREFs of EtwpCancelPendingStackwalkApcs @ 0x140108DC8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeRemoveQueueDpcEx @ 0x140108E40 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x1401317E4 (KeRemoveQueueApc.c)
 *     EtwpFinalizePendingApc @ 0x14032CE6C (EtwpFinalizePendingApc.c)
 */

void __fastcall EtwpCancelPendingStackwalkApcs(unsigned int *a1)
{
  __int64 i; // rdi
  _BYTE *v3; // rcx

  for ( i = 0LL; (unsigned int)i < a1[238]; i = (unsigned int)(i + 1) )
  {
    v3 = (_BYTE *)(96 * i + *((_QWORD *)a1 + 118));
    if ( *v3 == 18 && (unsigned __int8)KeRemoveQueueApc(v3) )
      EtwpFinalizePendingApc(a1, 96 * i + *((_QWORD *)a1 + 118));
  }
  if ( (unsigned __int8)KeRemoveQueueDpcEx(a1 + 216, 0LL) )
  {
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 448LL) + 8LL * *a1),
      1u);
    _interlockedbittestandreset((volatile signed __int32 *)a1 + 239, 1u);
  }
}
