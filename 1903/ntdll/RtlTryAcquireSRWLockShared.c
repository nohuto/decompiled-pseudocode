/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x180078D70
 * Callers:
 *     sub_18000835C @ 0x18000835C (sub_18000835C.c)
 *     sub_18000844C @ 0x18000844C (sub_18000844C.c)
 * Callees:
 *     sub_1800365A0 @ 0x1800365A0 (sub_1800365A0.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  BOOLEAN v1; // r9
  volatile signed __int64 *v2; // r10
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (volatile signed __int64 *)SRWLock;
  v7 = 0;
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    v5 = (v3 >> 1) & 1;
    if ( (v3 & 1) != 0 && (v5 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v6 = (v3 | 1) + 16;
    if ( v5 )
      v6 = v3 | 1;
    if ( v3 == _InterlockedCompareExchange64(v2, v6, v3) )
      return 1;
    sub_1800365A0(&v7);
    _m_prefetchw((const void *)v2);
    v3 = *v2;
  }
  return v1;
}
