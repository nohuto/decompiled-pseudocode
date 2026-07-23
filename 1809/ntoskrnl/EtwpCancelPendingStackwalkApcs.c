/*
 * XREFs of EtwpCancelPendingStackwalkApcs @ 0x140132A60
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeRemoveQueueApc @ 0x14012F428 (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     EtwpFinalizePendingApc @ 0x14030F3BC (EtwpFinalizePendingApc.c)
 */

void __fastcall EtwpCancelPendingStackwalkApcs(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  _BYTE *v5; // rcx

  for ( i = 0LL; (unsigned int)i < a1[238]; i = (unsigned int)(i + 1) )
  {
    v5 = (_BYTE *)(96 * i + *((_QWORD *)a1 + 118));
    if ( *v5 == 18 && KeRemoveQueueApc((__int64)v5, a2, a3) )
      EtwpFinalizePendingApc(a1, 96 * i + *((_QWORD *)a1 + 118));
  }
  if ( (unsigned __int8)KeRemoveQueueDpcEx(a1 + 216, 0LL) )
  {
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
      1u);
    _interlockedbittestandreset((volatile signed __int32 *)a1 + 239, 1u);
  }
}
