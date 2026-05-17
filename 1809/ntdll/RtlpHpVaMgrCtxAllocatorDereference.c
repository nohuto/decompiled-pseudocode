/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x180065274
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180064418 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

signed __int64 __fastcall RtlpHpVaMgrCtxAllocatorDereference(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rbx

  v5 = a1 + 48LL * *a2;
  RtlAcquireSRWLockExclusive(a1 + 96, (unsigned __int64)a2, a3, a4);
  if ( (*(_WORD *)(v5 + 154))-- == 1 )
  {
    memset((void *)(v5 + 112), 0, 0x30uLL);
    *(_QWORD *)(v5 + 120) = 0LL;
    *(_QWORD *)(v5 + 128) = 0LL;
    --*(_DWORD *)(a1 + 104);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 96));
}
