/*
 * XREFs of RtlpHpVsContextAllocate @ 0x18001E414
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x18001491C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x18009F788 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x18009F7FC (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(int a1, int a2, int a3, int a4)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 Internal; // rdi
  int v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a4;
  v8 = 0;
  memset(v9, 0, 24);
  Internal = RtlpHpVsContextAllocateInternal(a1, a2, a3, a4, (__int64)v9, (__int64)&v8);
  if ( v8 && (v4 & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(v5, v9);
  return Internal;
}
