/*
 * XREFs of TpReserveTaskPost @ 0x18002FCC4
 * Callers:
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 */

__int64 __fastcall TpReserveTaskPost(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 *v6; // rcx
  char *v7; // rdx
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v4 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    TppGetCurrentThreadNumaNode((__int64)v9, (_DWORD *)(a2 + 8), (unsigned __int8 *)(a2 + 12));
    return v4;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v6 = &TppPoolpSerializedPool;
    v7 = (char *)&TppPoolpSerializedPoolLock;
  }
  else
  {
    v6 = &TppPoolpGlobalPool;
    v7 = (char *)&TppPoolpGlobalPoolLock;
  }
  result = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v6, v7, &v9, a4);
  v4 = result;
  if ( (int)result >= 0 )
    goto LABEL_6;
  return result;
}
