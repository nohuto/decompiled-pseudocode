/*
 * XREFs of MiAllocateLargeZeroPages @ 0x140898C74
 * Callers:
 *     MiCreateLargePfnList @ 0x1402DEF48 (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x14088B1F8 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14002DE60 (MiFreeZeroPageSizeIndex.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MiZeroAndConvertLargePage @ 0x140097F8C (MiZeroAndConvertLargePage.c)
 *     MiZeroInParallel @ 0x1400F8BB8 (MiZeroInParallel.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCreateColorAnchors @ 0x1402DEE84 (MiCreateColorAnchors.c)
 *     MiDeleteColorAnchors @ 0x1402DF24C (MiDeleteColorAnchors.c)
 *     MiInsertLargePageNeedsZero @ 0x1402DFB94 (MiInsertLargePageNeedsZero.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiAssembleLargePagePfnList @ 0x140898EF4 (MiAssembleLargePagePfnList.c)
 *     MiFindLargePageMemory @ 0x1408994D0 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x1408997F8 (MiGetFastLargePage.c)
 */

__int64 __fastcall MiAllocateLargeZeroPages(
        int a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  int v9; // r14d
  __int64 v10; // r15
  unsigned int v11; // r12d
  int v12; // r13d
  unsigned __int64 v13; // rsi
  _QWORD *PoolWithTag; // r14
  __int64 FastLargePage; // rax
  __int64 v16; // r9
  BOOL v17; // r15d
  bool v18; // r10
  __int64 v19; // r9
  _QWORD *v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  bool v24; // r8
  _QWORD *v25; // rax
  unsigned int v27; // [rsp+48h] [rbp-41h]
  _QWORD *v28; // [rsp+50h] [rbp-39h] BYREF
  __int64 v29; // [rsp+58h] [rbp-31h]
  __int64 v30; // [rsp+60h] [rbp-29h]
  __int64 v31[12]; // [rsp+68h] [rbp-21h] BYREF
  int v33; // [rsp+E0h] [rbp+57h]

  v9 = a1;
  v10 = a4;
  memset(v31, 0, 0x20uLL);
  v11 = a6;
  v12 = MiProtectionToCacheAttribute(a6);
  v13 = 0LL;
  v28 = 0LL;
  v33 = 0;
  if ( !a2 )
    goto LABEL_28;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C4C6D4Du);
    if ( !PoolWithTag )
      break;
    FastLargePage = MiGetFastLargePage(a1, a5, (int)a2 - (int)v13, v10, v11);
    v29 = FastLargePage;
    v16 = FastLargePage;
    if ( !FastLargePage )
      goto LABEL_23;
    v17 = 0;
    if ( (a8 & 2) == 0 )
      v17 = MiPfnZeroingNeeded(FastLargePage, v12);
    v27 = MiFreeZeroPageSizeIndex(v16);
    v20 = v28;
    v21 = (__int64)((unsigned __int128)((v19 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v22 = (v21 >> 63) + v21;
    v23 = MiLargePageSizes[v27];
    v24 = 0;
    *PoolWithTag = v22;
    v30 = v23;
    PoolWithTag[1] = v23;
    if ( v20 )
    {
      while ( 1 )
      {
        if ( v22 >= *(v20 - 2) )
        {
          v25 = (_QWORD *)v20[1];
          if ( !v25 )
          {
            v24 = v18;
            break;
          }
        }
        else
        {
          v25 = (_QWORD *)*v20;
          if ( !*v20 )
          {
            v24 = 0;
            break;
          }
        }
        v20 = v25;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&v28, (unsigned __int64)v20, v24, PoolWithTag + 2);
    if ( v17 || v12 != 1 )
    {
      if ( !LODWORD(v31[2]) )
      {
        if ( !(unsigned int)MiCreateColorAnchors((__int64)v31, a5, 1) )
        {
          MiZeroAndConvertLargePage(v29, v27, v12, 2 * v17);
          goto LABEL_19;
        }
        HIDWORD(v31[1]) = v12;
        LODWORD(v31[1]) = (a8 & 2) == 0 ? 2 : 0;
      }
      MiInsertLargePageNeedsZero(v31, PoolWithTag);
      v33 = 1;
    }
LABEL_19:
    v13 += v30;
    v10 = a4;
    v11 = a6;
    if ( v13 >= a2 )
      goto LABEL_25;
  }
  v13 = a2;
LABEL_23:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_25:
  if ( v33 )
  {
    LODWORD(v31[3]) = a5;
    MiZeroInParallel((__int64)v31);
    MiDeleteColorAnchors((__int64)v31);
  }
  v9 = a1;
LABEL_28:
  if ( v13 != a2 && (a8 & 1) == 0 )
    MiFindLargePageMemory(v9, a5, a2 - v13, v10, v11, a8, (__int64)&v28);
  return MiAssembleLargePagePfnList(v28, a7, a3, v10);
}
