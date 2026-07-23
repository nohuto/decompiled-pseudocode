/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x140124104
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiAllocateWorkingSetSwapSupport @ 0x1400E59B4 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x14012420C (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140124908 (MiPageFileLargestBitmapsRun.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 *v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ebx
  unsigned __int64 *WorkingSetSwapSupport; // rax
  unsigned int v12; // ebx

  v2 = -1;
  v3 = 0;
  v5 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a2 + 1454));
  v6 = *(_DWORD *)(v5 + 7128);
  if ( !v6 )
    return 3221225799LL;
  v7 = (__int64 *)(v5 + 7136);
  do
  {
    v8 = *v7;
    if ( (*(_BYTE *)(*v7 + 204) & 0x50) == 0 )
    {
      if ( v2 == -1
        || (v12 = MiPageFileLargestBitmapsRun(*(_QWORD *)(v5 + 8LL * v2 + 7136)),
            (unsigned int)MiPageFileLargestBitmapsRun(v8) > v12) )
      {
        v2 = v3;
      }
    }
    ++v3;
    ++v7;
  }
  while ( v3 < v6 );
  if ( v2 == -1 )
    return 3221225799LL;
  v9 = *(_DWORD *)(a2 + 1176);
  if ( !v9 )
    return 3221225738LL;
  if ( v9 > 0x2AAAAAAA )
    v9 = 715827882;
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(2 * v9);
  *(_QWORD *)(a1 + 56) = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
    return 3221225626LL;
  *(_QWORD *)(a1 + 64) ^= (*(_DWORD *)(a1 + 64) ^ (v2 << 12)) & 0xF000;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace(v5, a1 + 64, 6 * v9, 33LL);
  return 0LL;
}
