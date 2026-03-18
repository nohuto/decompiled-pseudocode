/*
 * XREFs of RtlpHpVsContextMultiAlloc @ 0x14005F744
 * Callers:
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1400616F0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061BE0 (RtlpHpVsContextAllocateInternal.c)
 */

__int64 __fastcall RtlpHpVsContextMultiAlloc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  _QWORD *Internal; // rax
  __int64 result; // rax
  __int64 v14[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF

  LODWORD(v15) = 0;
  v6 = 0LL;
  memset(v14, 0, 24);
  v7 = 0LL;
  v8 = 0;
  if ( a3 )
  {
    do
    {
      Internal = (_QWORD *)RtlpHpVsContextAllocateInternal(BugCheckParameter2, (__int64)v14, (__int64)&v15);
      if ( !Internal )
        break;
      *Internal = v6;
      v6 = Internal;
      if ( !v7 )
        v7 = Internal;
      ++v8;
    }
    while ( v8 < a3 );
    if ( (_DWORD)v15 && (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(BugCheckParameter2 + 8), v14);
  }
  result = v8;
  *a5 = v6;
  *a6 = v7;
  return result;
}
