/*
 * XREFs of IopLiveDumpAllocateDumpBuffers @ 0x140820EA8
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x140109020 (MmAllocateIndependentPages.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140285D88 (IopLiveDumpIsUnderMemoryPressure.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408211A4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140821238 (IopLiveDumpFreeDumpBuffers.c)
 */

__int64 __fastcall IopLiveDumpAllocateDumpBuffers(_QWORD *a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  PVOID PoolWithTag; // rax
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rbx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx

  v1 = a1 + 61;
  a1[64] = 0LL;
  a1[68] = 0LL;
  a1[61] = 0LL;
  v3 = a1[14] + 63LL;
  a1[13] = (a1[13] + 63LL) & 0xFFFFFFFFFFFFFFC0uLL;
  v3 &= 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1[12];
  a1[14] = v3;
  v5 = (v4 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  a1[12] = v5;
  v6 = (v5 >> 6) + (v3 >> 6);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (8 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  v1[8] = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_12:
    v9 = -1073741670;
    goto LABEL_13;
  }
  if ( !IopLiveDumpIsUnderMemoryPressure(a1[74], a1[75]) )
  {
    IopLiveDumpDiscardVirtualAddressRange(a1, v8, (8 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    memset((void *)v1[8], 0, (8 * v6 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v10 = 0LL;
    if ( v6 )
    {
      while ( MmAllocateIndependentPages(0x40000LL, 0xFFFFFFFFLL) )
      {
        if ( IopLiveDumpIsUnderMemoryPressure(a1[74], a1[75]) )
        {
          MmFreeIndependentPages(v11, 0x40000uLL);
          goto LABEL_3;
        }
        *(_QWORD *)(v1[8] + 8 * v10) = v11;
        ++v1[7];
        *v1 += 64LL;
        IopLiveDumpDiscardVirtualAddressRange(a1, v11, 0x40000LL);
        if ( ++v10 >= v6 )
          break;
      }
    }
    if ( !IopLiveDumpIsUnderMemoryPressure(a1[74], a1[75]) )
    {
      v12 = *v1;
      v13 = a1[13];
      if ( *v1 >= v13 )
      {
        v9 = 0;
        goto LABEL_14;
      }
      goto LABEL_12;
    }
  }
LABEL_3:
  v9 = -1073741248;
LABEL_13:
  IopLiveDumpFreeDumpBuffers(v1);
  *v1 = 0LL;
  v13 = a1[13];
  v12 = 0LL;
LABEL_14:
  v14 = a1[14];
  if ( v12 < v14 + v13 )
  {
    if ( v12 )
    {
      v1[1] = v13;
      v15 = v12 - v13;
    }
    else
    {
      v1[1] = 0LL;
      v15 = 0LL;
    }
  }
  else
  {
    v1[1] = v12 - v14;
    v15 = a1[14];
  }
  v1[2] = v15;
  return v9;
}
