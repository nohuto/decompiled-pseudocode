/*
 * XREFs of RtlpHpVsContextMultiAlloc @ 0x1401B6DA8
 * Callers:
 *     ExHeapLookasideReplenish @ 0x1401B7674 (ExHeapLookasideReplenish.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1401B6824 (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextMultiAlloc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char **a5,
        char **a6)
{
  char *v6; // rsi
  char *v7; // rbx
  unsigned int v8; // edi
  char *v12; // rax
  __int64 result; // rax
  int v14; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+38h] [rbp-60h] BYREF

  v14 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  memset(&v15, 0, sizeof(v15));
  if ( a3 )
  {
    do
    {
      v12 = RtlpHpVsContextAllocateInternal(a1, a2, a2, 0, &v15, &v14);
      if ( !v12 )
        break;
      *(_QWORD *)v12 = v6;
      v6 = v12;
      if ( !v7 )
        v7 = v12;
      ++v8;
    }
    while ( v8 < a3 );
    if ( v14 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), &v15);
  }
  *a5 = v6;
  result = v8;
  *a6 = v7;
  return result;
}
