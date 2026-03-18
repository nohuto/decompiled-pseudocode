/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x1400DC0BC
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400D99CC (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x1400DC1D4 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400DC800 (MiPageFileLargestBitmapsRun.c)
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
  _QWORD *WorkingSetSwapSupport; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rdx
  unsigned int v14; // ebx

  v2 = -1;
  v3 = 0;
  v5 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a2 + 1454));
  v6 = *(_DWORD *)(v5 + 7896);
  if ( !v6 )
    return 3221225799LL;
  v7 = (__int64 *)(v5 + 7904);
  do
  {
    v8 = *v7;
    if ( (*(_BYTE *)(*v7 + 204) & 0x50) == 0 )
    {
      if ( v2 == -1
        || (v14 = MiPageFileLargestBitmapsRun(*(_QWORD *)(v5 + 8LL * v2 + 7904)),
            (unsigned int)MiPageFileLargestBitmapsRun(v8) > v14) )
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
  v11 = MiSwizzleInvalidPte(0LL);
  *v12 = ((unsigned __int64)(v2 & 0xF) << 12) | v11 & 0xFFFFFFFFFFFF0FFFuLL;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace(v5, v12, 6 * v9, 33LL);
  return 0LL;
}
