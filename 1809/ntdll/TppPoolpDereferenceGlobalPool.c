/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18002D82C
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18002DB64 (TppCleanupGroupMemberInitialize.c)
 *     TpUnreserveTaskPost @ 0x18002FC60 (TpUnreserveTaskPost.c)
 *     TpDereferenceGlobalPool @ 0x18003135C (TpDereferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x180032AA0 (TpSetDefaultPoolStackInformation.c)
 *     TpReleasePool @ 0x180082870 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180110320 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x180082870 (TpReleasePool.c)
 */

signed __int64 __fastcall TppPoolpDereferenceGlobalPool(const void **a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rdi
  volatile signed __int32 *v6; // r8
  signed __int32 v7; // ecx
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int64 result; // rax
  volatile signed __int32 *v11; // rdx
  signed __int32 v12; // ecx
  signed __int32 v13; // r8d
  signed __int32 v14; // eax
  signed __int32 v15; // eax
  const void *v16; // [rsp+30h] [rbp+8h]

  v4 = (volatile signed __int64 *)a2;
  v16 = 0LL;
  v6 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v7 = *v6;
  while ( v7 > 1 )
  {
    a2 = (unsigned int)v7;
    v9 = _InterlockedCompareExchange(v6, v7 - 1, v7);
    v8 = v7 == v9;
    v7 = v9;
    if ( v8 )
    {
      result = (unsigned int)(a2 - 1);
      goto LABEL_5;
    }
  }
  result = 0LL;
LABEL_5:
  if ( !(_DWORD)result )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v4, a2, (unsigned __int64 *)v6, a4);
    v11 = (volatile signed __int32 *)*a1;
    _m_prefetchw(*a1);
    v12 = *v11;
    while ( v12 > 1 )
    {
      v13 = v12;
      v14 = _InterlockedCompareExchange(v11, v12 - 1, v12);
      v8 = v12 == v14;
      v12 = v14;
      if ( v8 )
      {
        v15 = v13 - 1;
        goto LABEL_13;
      }
    }
    v15 = 0;
LABEL_13:
    if ( !v15 )
    {
      v16 = *a1;
      *a1 = 0LL;
    }
    result = RtlReleaseSRWLockExclusive(v4);
    if ( v16 )
      return TpReleasePool();
  }
  return result;
}
