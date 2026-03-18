/*
 * XREFs of CcInsertVacbArray @ 0x140190D38
 * Callers:
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x140190C48 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcInsertVacbArray(__int64 a1, _DWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  bool v6; // cc
  __int64 v7; // rdx
  _QWORD *result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // r8

  if ( (unsigned int)CcVacbArraysAllocated > 0x500 )
    KeBugCheckEx(0x34u, 0x1B3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = (_QWORD *)CcVacbArrays;
  v5 = 0LL;
  while ( *v4 )
  {
    v5 = (unsigned int)(v5 + 1);
    ++v4;
    if ( (unsigned int)v5 >= 0x500 )
      goto LABEL_6;
  }
  v6 = (unsigned int)v5 <= CcVacbArraysHighestUsedIndex;
  *(_QWORD *)(CcVacbArrays + 8 * v5) = a2;
  *a2 = v5;
  if ( !v6 )
    CcVacbArraysHighestUsedIndex = v5;
LABEL_6:
  if ( (_DWORD)v5 == 1280 )
    KeBugCheckEx(0x34u, 0x1D0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = 0LL;
  do
  {
    result = &a2[10 * v7 + 8];
    if ( *(_QWORD *)&a2[10 * v7 + 4] )
    {
      v10 = *(_QWORD **)(a1 + 848);
      if ( *v10 != a1 + 840 )
LABEL_17:
        __fastfail(3u);
      *result = a1 + 840;
      result[1] = v10;
      *v10 = result;
      *(_QWORD *)(a1 + 848) = result;
      ++*(_DWORD *)(a1 + 856);
    }
    else
    {
      v9 = (_QWORD *)qword_140463D58;
      if ( *(__int64 **)qword_140463D58 != &CcVacbFreeList )
        goto LABEL_17;
      *result = &CcVacbFreeList;
      result[1] = v9;
      *v9 = result;
      ++CcNumberOfFreeVacbs;
      qword_140463D58 = (__int64)&a2[10 * v7 + 8];
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < 0xCCC );
  return result;
}
