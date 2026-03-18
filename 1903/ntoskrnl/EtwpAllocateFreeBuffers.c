/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x140108A64
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C3D58 (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x1406B67BC (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140003928 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400039C4 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140003A10 (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x140108BA8 (EtwpInitializeBufferHeader.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  bool v4; // zf
  int v7; // r12d
  unsigned __int32 v8; // edi
  _QWORD *PoolWithTag; // r14
  unsigned __int32 v10; // eax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int8 v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 832) & 0x1000) == 0;
  v14 = 0;
  if ( !v4 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  v7 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
      if ( v8 > *(_DWORD *)(a1 + 252) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
        goto LABEL_9;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), v2, 0x42777445u);
      if ( !PoolWithTag )
        break;
      while ( 1 )
      {
        v10 = *(_DWORD *)(a1 + 260);
        if ( v10 >= v8 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 260), v8, v10);
      }
      EtwpInitializeBufferHeader(a1, PoolWithTag);
      EtwpLockBufferList(a1, &v14);
      v11 = *(_QWORD **)(a1 + 104);
      v12 = PoolWithTag + 7;
      if ( *v11 != a1 + 96 )
        __fastfail(3u);
      PoolWithTag[8] = v11;
      *v12 = a1 + 96;
      *v11 = v12;
      *(_QWORD *)(a1 + 104) = v12;
      EtwpUnlockBufferList(a1, &v14);
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)PoolWithTag, 0);
      ++v3;
      if ( ++v7 >= a2 )
        goto LABEL_9;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
  }
  else
  {
LABEL_9:
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(a1 + 1112) + 4LL * (*(_DWORD *)(a1 + 316) & 1) + 4116),
      *(_DWORD *)(a1 + 4) * v3);
  }
  return v3;
}
