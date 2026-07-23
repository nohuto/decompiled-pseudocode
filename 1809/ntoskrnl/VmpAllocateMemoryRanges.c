/*
 * XREFs of VmpAllocateMemoryRanges @ 0x1408B1834
 * Callers:
 *     VmpSplitMemoryRange @ 0x14030DAC4 (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x1408B1380 (VmCreateMemoryRange.c)
 *     VmPreallocateForRangeCreate @ 0x1408B16A0 (VmPreallocateForRangeCreate.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     VmpFreeMemoryRanges @ 0x1408B197C (VmpFreeMemoryRanges.c)
 */

_QWORD *__fastcall VmpAllocateMemoryRanges(unsigned __int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rax

  v2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72566D56u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v5 = v4 + 5;
    v6 = 0LL;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
    v4[2] = -1LL;
    if ( a1 )
    {
      while ( 1 )
      {
        v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x72476D56u);
        v8 = v7;
        if ( !v7 )
          break;
        memset(v7, 0, 0x40uLL);
        v8[5] = -1LL;
        v8[2] = v4;
        v9 = (_QWORD *)v4[6];
        if ( (_QWORD *)*v9 != v5 )
          __fastfail(3u);
        *v8 = v5;
        ++v6;
        v8[1] = v9;
        *v9 = v8;
        v4[6] = v8;
        if ( v6 >= a1 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v2 = v4;
      v4 = 0LL;
    }
    if ( v4 )
      VmpFreeMemoryRanges(v4);
  }
  return v2;
}
