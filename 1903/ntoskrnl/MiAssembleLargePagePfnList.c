/*
 * XREFs of MiAssembleLargePagePfnList @ 0x1408996D4
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x140899454 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     MiSetPfnLink @ 0x1400D8E38 (MiSetPfnLink.c)
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     MiGetLargestPageIndex @ 0x1400F0C40 (MiGetLargestPageIndex.c)
 *     MiPartitionIdToPointer @ 0x1401367DC (MiPartitionIdToPointer.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAssembleLargePagePfnList(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // r13d
  __int64 *v6; // rax
  unsigned __int64 *v7; // rcx
  unsigned int LargestPageIndex; // ebp
  unsigned __int64 v9; // r8
  __int64 *v10; // rdx
  unsigned __int64 *v11; // rbx
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rsi
  unsigned __int64 *v14; // rdx
  unsigned __int64 *v15; // rcx
  unsigned __int64 *v16; // rcx
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r10
  unsigned int i; // ecx
  unsigned __int64 v25; // r8
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 v29; // [rsp+30h] [rbp-48h]
  unsigned __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  __int64 v31; // [rsp+88h] [rbp+10h]
  unsigned __int64 *v32; // [rsp+90h] [rbp+18h]

  v31 = a2;
  v30 = a1;
  v4 = 0LL;
  v29 = 0LL;
  v5 = 0;
  v6 = MiLargePageSizes;
  do
  {
    if ( *v6 == a4 )
      break;
    ++v5;
    ++v6;
  }
  while ( v5 < 3 );
  LargestPageIndex = MiGetLargestPageIndex();
  v10 = &MiLargePageSizes[LargestPageIndex];
  if ( v9 > *v10 )
    v9 = *v10;
  while ( LargestPageIndex < 3 && *v10 != v9 )
  {
    ++LargestPageIndex;
    ++v10;
  }
  v11 = 0LL;
  while ( v7 )
  {
    v11 = v7;
    v7 = (unsigned __int64 *)*v7;
  }
  if ( v11 )
  {
    do
    {
      v12 = (unsigned __int64 *)v11[1];
      v13 = v11 - 2;
      v14 = v11;
      v15 = v11;
      if ( v12 )
      {
        v16 = (unsigned __int64 *)*v12;
        v11 = (unsigned __int64 *)v11[1];
        v32 = v12;
        if ( v16 )
        {
          do
          {
            v17 = (unsigned __int64 *)*v16;
            v11 = v16;
            v32 = v16;
            v16 = v17;
          }
          while ( v17 );
        }
      }
      else
      {
        v11 = (unsigned __int64 *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
        v32 = v11;
        if ( v11 )
        {
          do
          {
            if ( (unsigned __int64 *)*v11 == v15 )
              break;
            v15 = v11;
            v11 = (unsigned __int64 *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
          }
          while ( v11 );
          v32 = v11;
        }
      }
      RtlAvlRemoveNode(&v30, v14);
      v18 = *v13;
      v19 = v13[1];
      ExFreePoolWithTag(v13, 0);
      if ( v11 && (v20 = *(v11 - 2), v19 + v18 == v20) )
      {
        *(v11 - 1) += v19;
        *(v11 - 2) = v20 - v19;
      }
      else
      {
        v21 = (_QWORD *)(48 * v18 - 0x58000000000LL);
        if ( v19 )
        {
          v22 = 0LL;
          v23 = v31;
          do
          {
            for ( i = LargestPageIndex; i <= v5; ++i )
            {
              v25 = MiLargePageSizes[i];
              if ( !(v18 % v25) && v19 >= v25 )
                break;
            }
            v26 = i;
            v27 = MiLargePageSizes[i];
            v29 += v27;
            if ( !v22 && v19 >= 0x200 && i > 1 )
            {
              v22 = MiPartitionIdToPointer(((unsigned int)HIDWORD(v21[5]) >> 8) & 0x3FF);
              MiUpdateLargePageBitMap(
                v22,
                v18 & 0xFFFFFFFFFFFFFE00uLL,
                ((v19 + v18 + 511) & 0xFFFFFFFFFFFFFE00uLL) - (v18 & 0xFFFFFFFFFFFFFE00uLL),
                0,
                0);
              v23 = v31;
            }
            v18 += v27;
            MiSetPfnLink(v21, *(_QWORD *)(v23 + 8 * v26));
            *(_QWORD *)(v23 + 8 * v26) = v21;
            v21 += 6 * v27;
            v19 -= v27;
          }
          while ( v19 );
          v11 = v32;
        }
      }
    }
    while ( v11 );
    return v29;
  }
  return v4;
}
