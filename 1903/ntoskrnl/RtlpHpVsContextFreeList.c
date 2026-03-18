/*
 * XREFs of RtlpHpVsContextFreeList @ 0x14010B3A0
 * Callers:
 *     RtlpHpHeapCompact @ 0x14010AF94 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14005FB90 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1400616F0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x14010B42C (RtlpHpVsContextFreeInternal.c)
 */

void __fastcall RtlpHpVsContextFreeList(__int64 a1, int a2, _QWORD *a3)
{
  int v6; // esi
  int v7; // r8d
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v8, 0, 24);
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), v8);
  while ( a3 )
  {
    v7 = (_DWORD)a3 - 16;
    a3 = (_QWORD *)*a3;
    RtlpHpVsContextFreeInternal(a1, a2, v7, a2, (__int64)v8);
  }
  if ( !v6 )
    RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)v8);
}
