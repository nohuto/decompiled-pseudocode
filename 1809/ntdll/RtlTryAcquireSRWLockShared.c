/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x18007B650
 * Callers:
 *     EtwpGetNextRegistration @ 0x180050A70 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180050BA4 (EtwpFindRegistration.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E9600 (RtlQueryCriticalSectionOwner.c)
 * Callees:
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 */

char __fastcall RtlTryAcquireSRWLockShared(volatile signed __int64 *a1)
{
  volatile signed __int64 *v1; // r10
  char v2; // r9
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  v7 = 0;
  v2 = 0;
  v3 = _InterlockedCompareExchange64(a1, 17LL, 0LL);
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
    if ( v3 == _InterlockedCompareExchange64(v1, v6, v3) )
      return 1;
    RtlBackoff(&v7);
    _m_prefetchw((const void *)v1);
    v3 = *v1;
  }
  return v2;
}
