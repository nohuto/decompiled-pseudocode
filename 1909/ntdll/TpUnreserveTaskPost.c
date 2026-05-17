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
  __int64 v2; // r8
  void *v3; // rdx
  __int64 *v4; // rcx
  __int64 result; // rax

  v2 = TppPoolpGlobalPool;
  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)TppPoolpSerializedPool, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)TppPoolpGlobalPool;
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v3 = &TppPoolpGlobalPoolLock;
    v4 = &TppPoolpGlobalPool;
    return TppPoolpDereferenceGlobalPool(v4, v3, TppPoolpGlobalPool);
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v3 = &TppPoolpSerializedPoolLock;
    v4 = &TppPoolpSerializedPool;
    return TppPoolpDereferenceGlobalPool(v4, v3, TppPoolpGlobalPool);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return TppPoolpFree(a1, a2, v2);
  return result;
}
