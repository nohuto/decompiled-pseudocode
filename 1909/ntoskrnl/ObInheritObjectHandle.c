/*
 * XREFs of ObInheritObjectHandle @ 0x1406B7800
 * Callers:
 *     ExDupHandleTable @ 0x1406B73C0 (ExDupHandleTable.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObpIncrPointerCount @ 0x140047740 (ObpIncrPointerCount.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     EtwTraceDuplicateHandle @ 0x1408F3554 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObInheritObjectHandle(ULONG_PTR a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbp
  int v9; // ebx
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v6 = (*(__int64 *)a4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  ObpIncrPointerCount((volatile signed __int64 *)v6);
  v12 = *(_DWORD *)(a4 + 8) & 0x1FFFFFF;
  _InterlockedExchangeAdd64((volatile signed __int64 *)a4, 1uLL);
  _InterlockedOr(v11, 0);
  if ( *(_QWORD *)(a3 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
  v9 = ObpIncrementHandleCountEx(3u, (__int64)&v12, a1, v6 + 48, 0, 0, 0LL);
  if ( v9 < 0 )
  {
    ObfDereferenceObject((PVOID)(v6 + 48));
  }
  else if ( (xmmword_140572410 & 0x40) != 0 )
  {
    EtwTraceDuplicateHandle(
      a2,
      a2,
      v6 + 48,
      *(_DWORD *)(a1 + 1000),
      *(_DWORD *)(a1 + 744),
      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 + 24) ^ (unsigned __int64)BYTE1(v6)]);
  }
  return (unsigned int)v9;
}
