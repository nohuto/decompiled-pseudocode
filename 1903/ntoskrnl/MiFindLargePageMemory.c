/*
 * XREFs of MiFindLargePageMemory @ 0x140899CB0
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x140899454 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     MiProtectionToCacheAttribute @ 0x1400A456C (MiProtectionToCacheAttribute.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiZeroInParallel @ 0x140123178 (MiZeroInParallel.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCreateColorAnchors @ 0x1402DF124 (MiCreateColorAnchors.c)
 *     MiDeleteColorAnchors @ 0x1402DF4EC (MiDeleteColorAnchors.c)
 *     MiUpdateLargePagePfns @ 0x1402E039C (MiUpdateLargePagePfns.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFindLargePageMemory(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6,
        unsigned __int64 *a7)
{
  unsigned int v10; // eax
  ULONG_PTR v11; // r15
  _QWORD *PoolWithTag; // rsi
  _QWORD *v13; // r14
  int v14; // r12d
  __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  bool v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp-68h] BYREF
  __int64 v23; // [rsp+68h] [rbp-60h]
  _QWORD v24[11]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+E0h] [rbp+18h]

  memset(v24, 0, 0x20uLL);
  if ( !(unsigned int)MiSufficientAvailablePages(a1, a3 + 160)
    || !(unsigned int)MiCreateColorAnchors((__int64)v24, a2, 0) )
  {
    return;
  }
  v23 = v24[0];
  v10 = MiProtectionToCacheAttribute(a5);
  v11 = qword_14046A348;
  PoolWithTag = 0LL;
  v13 = 0LL;
  v26 = v10;
  v14 = 0;
  HIDWORD(v24[1]) = v10;
  v15 = 0LL;
LABEL_4:
  v16 = MiLargePageSizes[v15];
  if ( a3 < v16 )
    goto LABEL_24;
  if ( v16 < a4 )
    goto LABEL_26;
  if ( PoolWithTag || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C4C6D4Du)) != 0LL )
  {
    if ( (int)MiFindContiguousPages(a1, v16, v11, v16, v16, v26, a2, 0x80000000, 1611661312, 0LL, (__int64 *)&v22) < 0 )
      goto LABEL_24;
    v17 = v22;
    a3 -= v16;
    if ( (unsigned int)MiUpdateLargePagePfns(v23, v22, v16, v26, a6) == 1 )
      v14 = 1;
    if ( v13 && v17 + v16 == *v13 )
    {
      v18 = *v13 - v16;
      v13[1] += v16;
      *v13 = v18;
      goto LABEL_22;
    }
    v19 = 0;
    *PoolWithTag = v17;
    PoolWithTag[1] = v16;
    v20 = (_QWORD *)*a7;
    if ( !*a7 )
      goto LABEL_21;
    while ( 1 )
    {
      if ( v17 >= *(v20 - 2) )
      {
        v21 = (_QWORD *)v20[1];
        if ( !v21 )
        {
          v19 = 1;
LABEL_21:
          RtlAvlInsertNodeEx(a7, (unsigned __int64)v20, v19, PoolWithTag + 2);
          v13 = PoolWithTag;
          PoolWithTag = 0LL;
LABEL_22:
          if ( !a3 )
            goto LABEL_26;
          v11 = v17 - 1;
          if ( v11 <= v16 )
          {
LABEL_24:
            v11 = qword_14046A348;
            v15 = (unsigned int)(v15 + 1);
            v13 = 0LL;
          }
          if ( (unsigned int)v15 >= 3 )
          {
LABEL_26:
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0);
            break;
          }
          goto LABEL_4;
        }
      }
      else
      {
        v21 = (_QWORD *)*v20;
        if ( !*v20 )
        {
          v19 = 0;
          goto LABEL_21;
        }
      }
      v20 = v21;
    }
  }
  if ( v14 == 1 )
  {
    LODWORD(v24[3]) = -1;
    MiZeroInParallel((__int64)v24);
  }
  MiDeleteColorAnchors((__int64)v24);
}
