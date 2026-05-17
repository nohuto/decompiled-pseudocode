/*
 * XREFs of TpUnreserveTaskPost @ 0x18002FC60
 * Callers:
 *     RtlpTpWorkUnposted @ 0x18002FD50 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 */

__int64 __fastcall TpUnreserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rdx
  __int64 *v5; // rcx
  __int64 result; // rax

  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)TppPoolpSerializedPool, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)TppPoolpGlobalPool;
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v4 = &TppPoolpGlobalPoolLock;
    v5 = &TppPoolpGlobalPool;
    return TppPoolpDereferenceGlobalPool((const void **)v5, (unsigned __int64)v4, TppPoolpGlobalPool, a4);
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v4 = &TppPoolpSerializedPoolLock;
    v5 = &TppPoolpSerializedPool;
    return TppPoolpDereferenceGlobalPool((const void **)v5, (unsigned __int64)v4, TppPoolpGlobalPool, a4);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return TppPoolpFree(a1, a2);
  return result;
}
