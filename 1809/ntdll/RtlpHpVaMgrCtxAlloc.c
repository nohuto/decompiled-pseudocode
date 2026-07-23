/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x1800631B0
 * Callers:
 *     RtlpHpAllocVA @ 0x180060CA0 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x180064584 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _RTL_SRWLOCK *v6; // rdi
  _RTL_SRWLOCK *v8; // rbx

  if ( *a4 == -1 )
  {
    v8 = a1 + 12;
    RtlAcquireSRWLockShared(a1 + 12);
    v6 = (_RTL_SRWLOCK *)RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    RtlReleaseSRWLockShared(v8);
  }
  else
  {
    v6 = &a1[6 * (unsigned int)*a4 + 14];
  }
  return RtlpHpVaMgrAlloc(v6);
}
