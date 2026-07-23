/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x18007B660
 * Callers:
 *     EtwpGetNextRegistration @ 0x180050A70 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180050BA4 (EtwpFindRegistration.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E9600 (RtlQueryCriticalSectionOwner.c)
 * Callees:
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  PRTL_SRWLOCK v1; // r10
  BOOLEAN v2; // r9
  unsigned __int64 Value; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = SRWLock;
  v7 = 0;
  v2 = 0;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( !Value )
    return 1;
  while ( 1 )
  {
    v5 = (Value >> 1) & 1;
    if ( (Value & 1) != 0 && (v5 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v6 = (Value | 1) + 16;
    if ( v5 )
      v6 = Value | 1;
    if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)v1, v6, Value) )
      return 1;
    RtlBackoff(&v7);
    _m_prefetchw(v1);
    Value = v1->Value;
  }
  return v2;
}
