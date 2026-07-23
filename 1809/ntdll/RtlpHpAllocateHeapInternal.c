/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x18001491C
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1800649F0 (RtlpHpAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18010CA98 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegAlloc @ 0x18001DB14 (RtlpHpSegAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x18001E414 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x1800647F4 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        char *BaseAddress,
        size_t Size,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  int v9; // r15d
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // r10
  unsigned __int64 v15; // r8
  unsigned __int8 v16; // al
  void *v17; // rax
  __int64 v18; // rax
  __int64 v20; // [rsp+60h] [rbp+8h]

  v9 = 3;
  if ( a3 > (unsigned int)*((unsigned __int16 *)BaseAddress + 446) - 16 )
    goto LABEL_15;
  v10 = BaseAddress + 832;
  v11 = (unsigned int)(a3 + 2);
  if ( (_DWORD)Size == (_DWORD)a3 )
    v11 = (unsigned int)a3;
  v12 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v11 + 15) >> 4];
  if ( (*(_QWORD *)&v10[8 * v12 + 128] & 1) == 0 || (unsigned int)RtlpHpLfhBucketUpdateStats(v10, v11, 1LL) )
  {
    v14 = *(_QWORD *)&v10[8 * v12 + 128];
    v20 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
    v15 = (unsigned __int8)v10[56] - (unsigned __int64)((v10[56] - 1) & 7) + v20 + 7;
    if ( *(_BYTE *)(v14 + 2) == 1 )
    {
      v16 = 0;
    }
    else
    {
      v16 = *(_BYTE *)(v20 + BYTE1(NtCurrentTeb()->HeapData) + v14);
      v15 = (unsigned __int8)v10[56] - (unsigned __int64)((v10[56] - 1) & 7) + v20 + 7;
    }
    v17 = (void *)RtlpHpLfhSlotAllocate(
                    (__int64)v10,
                    (_RTL_SRWLOCK *)v14,
                    *(_QWORD *)(v15 + 8LL * v16 + v14),
                    (unsigned int)Size,
                    a4);
    v13 = (__int64)v17;
    if ( v17 && (a4 & 2) != 0 )
      memset(v17, 0, (unsigned int)Size);
  }
  else
  {
    v13 = -1LL;
  }
  if ( v13 == -1 )
  {
LABEL_15:
    if ( a3 > 0x20000 )
    {
      if ( a3 > *((unsigned int *)BaseAddress + 116) )
        v18 = RtlpHpLargeAlloc(BaseAddress);
      else
        v18 = RtlpHpSegAlloc(&BaseAddress[*((unsigned int *)BaseAddress + 68) < a3 ? 448LL : 256LL], Size, a3, a3, a4);
    }
    else
    {
      v18 = RtlpHpVsContextAllocate(BaseAddress + 640, (unsigned int)Size, (unsigned int)a3, a4);
    }
    v13 = v18;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v13;
}
