/*
 * XREFs of TpUnreserveTaskPost @ 0x18002F270
 * Callers:
 *     RtlpTpWorkUnposted @ 0x18002F180 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 */

__int64 __fastcall TpUnreserveTaskPost(volatile signed __int32 *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdx
  __int64 *v3; // rcx
  __int64 result; // rax

  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)TppPoolpSerializedPool, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)TppPoolpGlobalPool;
  }
  if ( a1 == TppPoolpGlobalPool )
  {
    v2 = &TppPoolpGlobalPoolLock;
    v3 = (__int64 *)&TppPoolpGlobalPool;
    return TppPoolpDereferenceGlobalPool(v3, v2, TppPoolpGlobalPool);
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v2 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
    v3 = &TppPoolpSerializedPool;
    return TppPoolpDereferenceGlobalPool(v3, v2, TppPoolpGlobalPool);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return TppPoolpFree((PVOID)a1);
  return result;
}
