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

void __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2, char a3)
{
  _RTL_SRWLOCK *v3; // rdi
  int v6; // esi
  unsigned __int64 Metadata; // rbx

  v3 = (_RTL_SRWLOCK *)(a1 + 64);
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(v3);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
  if ( !v6 )
    RtlReleaseSRWLockShared(v3);
  *(_QWORD *)(Metadata + 32) |= 1uLL;
}
