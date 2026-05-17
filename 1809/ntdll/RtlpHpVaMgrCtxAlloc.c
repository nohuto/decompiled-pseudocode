/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x1800631B0
 * Callers:
 *     RtlpHpAllocVA @ 0x180060CA0 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x180064584 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, char *a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdi
  volatile signed __int64 *v10; // rbx

  if ( *a4 == -1 )
  {
    v10 = (volatile signed __int64 *)(a1 + 96);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 96), a2, a3, (__int64)a4);
    v8 = RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    RtlReleaseSRWLockShared(v10);
  }
  else
  {
    v8 = 48LL * (unsigned int)*a4 + a1 + 112;
  }
  return RtlpHpVaMgrAlloc(v8, a2, a3);
}
