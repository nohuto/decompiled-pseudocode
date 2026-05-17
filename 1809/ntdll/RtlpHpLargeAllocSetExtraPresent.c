/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x1800669A4
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18005B340 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006651C (RtlpHpLargeAllocGetMetadata.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rdi
  int v7; // esi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbx

  v4 = (volatile signed __int64 *)(a1 + 64);
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(v4, a2, a3, a4);
  result = RtlpHpLargeAllocGetMetadata(a1, (unsigned __int64)a2);
  v9 = result;
  if ( !v7 )
    result = RtlReleaseSRWLockShared(v4);
  *(_QWORD *)(v9 + 32) |= 1uLL;
  return result;
}
