/*
 * XREFs of RtlpHpVsContextAllocate @ 0x1400BC2F0
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14000981C (RtlpHpAllocateHeapInternal.c)
 *     ExAllocateHeapPool @ 0x1400BA170 (ExAllocateHeapPool.c)
 *     RtlpAllocateHeapInternal @ 0x14011EFB4 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B636C (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1401B66BC (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(__int64 a1, int a2, int a3, int a4)
{
  char v4; // di
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[24]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a4;
  memset(v9, 0, sizeof(v9));
  v8 = 0;
  result = RtlpHpVsContextAllocateInternal(a1, a2, a3, a4, (__int64)v9, (__int64)&v8);
  v7 = result;
  if ( v8 )
  {
    if ( (v4 & 1) == 0 )
    {
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), v9);
      return v7;
    }
  }
  return result;
}
