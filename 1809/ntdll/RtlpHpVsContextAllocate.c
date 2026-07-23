/*
 * XREFs of RtlpHpVsContextAllocate @ 0x18001E414
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x18001491C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x18009F7A8 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x18009F81C (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rcx
  __int64 Internal; // rdi
  int v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  memset(v9, 0, 24);
  Internal = RtlpHpVsContextAllocateInternal(a1, (__int64)v9, (__int64)&v8);
  if ( v8 && (a4 & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(v5, v9);
  return Internal;
}
