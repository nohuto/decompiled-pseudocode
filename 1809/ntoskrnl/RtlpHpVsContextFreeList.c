/*
 * XREFs of RtlpHpVsContextFreeList @ 0x1401B6D18
 * Callers:
 *     RtlpHpVsContextFree @ 0x1400079BC (RtlpHpVsContextFree.c)
 *     RtlpHpHeapCompact @ 0x1401B63AC (RtlpHpHeapCompact.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1401B646C (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x1401B6B84 (RtlpHpVsContextFreeInternal.c)
 */

void __fastcall RtlpHpVsContextFreeList(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebp
  int v6; // esi
  __int64 v7; // r8
  struct _KLOCK_QUEUE_HANDLE v8; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlpHpAcquireQueuedLockExclusive((KSPIN_LOCK *)a1, *(unsigned int *)(a1 + 8), (__int64)&v8);
  while ( a3 )
  {
    v7 = (__int64)(a3 - 2);
    a3 = (_QWORD *)*a3;
    RtlpHpVsContextFreeInternal(a1, a2, v7, v4, &v8);
  }
  if ( !v6 )
    RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), &v8);
}
