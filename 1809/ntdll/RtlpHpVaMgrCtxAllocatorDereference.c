/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x180065274
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180064418 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbx

  v3 = a1 + 48LL * *a2;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 96));
  if ( (*(_WORD *)(v3 + 154))-- == 1 )
  {
    memset((void *)(v3 + 112), 0, 0x30uLL);
    *(_QWORD *)(v3 + 120) = 0LL;
    *(_QWORD *)(v3 + 128) = 0LL;
    --*(_DWORD *)(a1 + 104);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 96));
}
