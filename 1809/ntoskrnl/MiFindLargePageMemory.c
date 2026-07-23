/*
 * XREFs of MiFindLargePageMemory @ 0x14085E3E0
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiUpdateLargePagePfns @ 0x1402C5EE8 (MiUpdateLargePagePfns.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiFindLargePageMemory(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  unsigned __int64 v7; // r15
  _QWORD *PoolWithTag; // rbx
  _QWORD *v9; // rsi
  int v10; // r12d
  unsigned int v11; // eax
  int v12; // ebp
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  bool v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp-48h] BYREF
  __int64 v21; // [rsp+68h] [rbp-40h]
  unsigned int v24; // [rsp+C0h] [rbp+18h]

  v7 = a3;
  if ( (unsigned int)MiSufficientAvailablePages(a1, a3 + 160) )
  {
    PoolWithTag = 0LL;
    v9 = 0LL;
    v10 = 0;
    v11 = MiProtectionToCacheAttribute(a4);
    v12 = 1;
    v13 = qword_14043F5C8;
    v24 = v11;
    v21 = *(_QWORD *)a6;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 < 0x40000 || v10 )
        {
          if ( v12 != 1 )
          {
            v13 = qword_14043F5C8;
            v9 = 0LL;
            v12 = 1;
            v10 = 1;
          }
        }
        else
        {
          v12 = 0;
        }
        v14 = MiLargePageSizes[v12];
        if ( !PoolWithTag )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C4C6D4Du);
          if ( !PoolWithTag )
            return;
        }
        if ( (int)MiFindContiguousPages(a1, v14, v13, v14, v14, v24, a2, 0x80000000, 1611661312, 0LL, (__int64 *)&v20) >= 0 )
          break;
        if ( v12 == 1 )
          goto LABEL_28;
        v10 = 1;
      }
      v15 = v20;
      v7 -= v14;
      if ( (unsigned int)MiUpdateLargePagePfns(v21, v20) == 1 )
        *(_DWORD *)(a6 + 8) |= 1u;
      if ( v9 && v15 + v14 == *v9 )
      {
        v16 = *v9 - v14;
        v9[1] += v14;
        *v9 = v16;
        goto LABEL_26;
      }
      v17 = 0;
      *PoolWithTag = v15;
      PoolWithTag[1] = v14;
      v18 = (_QWORD *)*a5;
      if ( !*a5 )
        goto LABEL_25;
      while ( v15 < *(v18 - 2) )
      {
        v19 = (_QWORD *)*v18;
        if ( !*v18 )
        {
          v17 = 0;
          goto LABEL_25;
        }
LABEL_23:
        v18 = v19;
      }
      v19 = (_QWORD *)v18[1];
      if ( v19 )
        goto LABEL_23;
      v17 = 1;
LABEL_25:
      RtlAvlInsertNodeEx(a5, (unsigned __int64)v18, v17, PoolWithTag + 2);
      v9 = PoolWithTag;
      PoolWithTag = 0LL;
LABEL_26:
      if ( v7 )
      {
        v13 = v15 - 1;
        if ( v13 > v14 )
          continue;
      }
LABEL_28:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      return;
    }
  }
}
