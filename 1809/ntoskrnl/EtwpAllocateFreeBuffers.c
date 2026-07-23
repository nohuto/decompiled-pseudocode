/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x1400DD1D4
 * Callers:
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C2E48 (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x14065BF54 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400153E0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x140015480 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400154CC (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x1400DD35C (EtwpInitializeBufferHeader.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  int v6; // r13d
  unsigned __int32 v7; // edi
  PVOID PoolWithTag; // r14
  _QWORD *v9; // r15
  unsigned __int32 v10; // eax
  _QWORD *v11; // rcx
  unsigned __int8 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 832) & 0x1000) != 0 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  v6 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
      if ( v7 > *(_DWORD *)(a1 + 252) )
        break;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), v2, 0x42777445u);
      if ( !PoolWithTag )
        goto LABEL_8;
      v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E777445u);
      *v9 = 0LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
      if ( !v9 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_8:
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
        return v3;
      }
      while ( 1 )
      {
        v10 = *(_DWORD *)(a1 + 260);
        if ( v10 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 260), v7, v10);
      }
      EtwpInitializeBufferHeader(a1, PoolWithTag);
      v9[2] = PoolWithTag;
      EtwpLockBufferList(a1, &v13);
      v11 = *(_QWORD **)(a1 + 104);
      if ( *v11 != a1 + 96 )
        __fastfail(3u);
      v9[1] = v11;
      *v9 = a1 + 96;
      *v11 = v9;
      *(_QWORD *)(a1 + 104) = v9;
      EtwpUnlockBufferList(a1, &v13);
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)PoolWithTag, 0);
      ++v3;
      if ( ++v6 >= a2 )
        goto LABEL_16;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
  }
LABEL_16:
  _InterlockedExchangeAdd(
    (volatile signed __int32 *)(*(_QWORD *)(a1 + 1080) + 4LL * (*(_DWORD *)(a1 + 316) & 1) + 4116),
    *(_DWORD *)(a1 + 4) * v3);
  return v3;
}
