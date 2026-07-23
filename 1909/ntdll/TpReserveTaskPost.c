/*
 * XREFs of TpReserveTaskPost @ 0x18002FD98
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180031620 (TppGetCurrentThreadNumaNode.c)
 */

NTSTATUS __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // ebx
  volatile signed __int32 **v5; // rcx
  _RTL_SRWLOCK *v6; // rdx
  NTSTATUS result; // eax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    TppGetCurrentThreadNumaNode(v8, a2 + 8, a2 + 12);
    return v3;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v5 = (volatile signed __int32 **)&TppPoolpSerializedPool;
    v6 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
  }
  else
  {
    v5 = (volatile signed __int32 **)&TppPoolpGlobalPool;
    v6 = &TppPoolpGlobalPoolLock;
  }
  result = TppPoolpReferenceGlobalPool(v5, v6, &v8);
  v3 = result;
  if ( result >= 0 )
    goto LABEL_6;
  return result;
}
