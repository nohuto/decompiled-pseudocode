/*
 * XREFs of LdrpQueueDeferredTlsData @ 0x180056704
 * Callers:
 *     LdrpHandleTlsData @ 0x180055984 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpQueueDeferredTlsData(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 v2; // rdi
  volatile signed __int64 *v3; // rsi

  v2 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v3 = (volatile signed __int64 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 1);
  *(_QWORD *)(v2 + 8) = *v3;
  *v3 = v2;
  return RtlReleaseSRWLockExclusive(v3 + 1);
}
