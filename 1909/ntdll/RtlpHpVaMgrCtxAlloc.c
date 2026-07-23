/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x18004DE8C
 * Callers:
 *     RtlpHpAllocVA @ 0x1800479C8 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x18004CEF8 (RtlpHpVaMgrCtxAllocatorFind.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _RTL_SRWLOCK *v6; // rdi
  _RTL_SRWLOCK *v8; // rbx

  if ( *a4 == -1 )
  {
    v8 = a1 + 268;
    RtlAcquireSRWLockShared(a1 + 268);
    v6 = (_RTL_SRWLOCK *)RtlpHpVaMgrCtxAllocatorFind((__int64)a1, (__int64)a4, 0, 0LL);
    RtlReleaseSRWLockShared(v8);
  }
  else
  {
    v6 = &a1[6 * (unsigned int)*a4 + 270];
  }
  return RtlpHpVaMgrAlloc(v6);
}
