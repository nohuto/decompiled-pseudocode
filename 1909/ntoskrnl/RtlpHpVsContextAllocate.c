/*
 * XREFs of RtlpHpVsContextAllocate @ 0x140110A60
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1401102DC (RtlpHpAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x1401109E4 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140061790 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061C80 (RtlpHpVsContextAllocateInternal.c)
 */

char *__fastcall RtlpHpVsContextAllocate(ULONG_PTR a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // bl
  char *v6; // rsi
  int v8; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a4;
  v8 = 0;
  memset(v9, 0, 24);
  v6 = RtlpHpVsContextAllocateInternal(a1, a2, a3, a4, v9, &v8);
  if ( v8 && (v4 & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)v9);
  return v6;
}
