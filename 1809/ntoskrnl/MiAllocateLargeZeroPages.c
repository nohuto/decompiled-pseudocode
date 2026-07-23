/*
 * XREFs of MiAllocateLargeZeroPages @ 0x14085DB40
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408531D0 (MiGetLargePagesForSystemMapping.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     MiZeroAndConvertLargePage @ 0x140118D38 (MiZeroAndConvertLargePage.c)
 *     MiZeroInParallel @ 0x14013C644 (MiZeroInParallel.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiInsertLargePageNeedsZero @ 0x1402C5990 (MiInsertLargePageNeedsZero.c)
 *     MiAddColdPagesToHotRanges @ 0x1402CEC3C (MiAddColdPagesToHotRanges.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiAssembleLargePagePfnList @ 0x14085DE5C (MiAssembleLargePagePfnList.c)
 *     MiCreateColorAnchors @ 0x14085E1C4 (MiCreateColorAnchors.c)
 *     MiDeleteColorAnchors @ 0x14085E3B4 (MiDeleteColorAnchors.c)
 *     MiFindLargePageMemory @ 0x14085E3E0 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x14085E68C (MiGetFastLargePage.c)
 */

__int64 __fastcall MiAllocateLargeZeroPages(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rbx
  int v9; // r14d
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 *PoolWithTag; // rbx
  __int64 FastLargePage; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rdx
  bool v21; // r8
  _QWORD *v22; // rax
  int v23; // r14d
  int v24; // r15d
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  unsigned int v34; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+94h] [rbp-6Ch]
  int v36; // [rsp+98h] [rbp-68h]

  v7 = a6;
  v9 = a1;
  v30 = a1;
  v31 = a6;
  memset(v28, 0, sizeof(v28));
  v35 = 0;
  v11 = 0LL;
  v27 = 0LL;
  v34 = 1;
  v36 = 16;
  if ( a2 )
  {
    while ( 1 )
    {
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C4C6D4Du);
      if ( !PoolWithTag )
        break;
      FastLargePage = MiGetFastLargePage(v9, a4, (int)a2 - (int)v11, 512, a5, (__int64)&v26);
      v32 = FastLargePage;
      if ( FastLargePage )
      {
        v29 = MiFreeZeroPageSizeIndex(FastLargePage);
        v16 = v15;
        v17 = MiLargePageSizes[v29];
        PoolWithTag[1] = v17;
        v33 = v17;
        v18 = (v16 + 0x58000000000LL) / 48;
        *PoolWithTag = v18;
        v19 = v18;
        if ( (HvlEnlightenments & 0x200000) != 0 && (a7 & 2) != 0 )
        {
          MiAddColdPagesToHotRanges((__int64)&v34, v18, v18 + v17);
          v19 = *PoolWithTag;
        }
        v20 = v27;
        v21 = 0;
        if ( v27 )
        {
          while ( 1 )
          {
            if ( v19 >= *(v20 - 2) )
            {
              v22 = (_QWORD *)v20[1];
              if ( !v22 )
              {
                v21 = 1;
                break;
              }
            }
            else
            {
              v22 = (_QWORD *)*v20;
              if ( !*v20 )
              {
                v21 = 0;
                break;
              }
            }
            v20 = v22;
          }
        }
        RtlAvlInsertNodeEx((unsigned __int64 *)&v27, (unsigned __int64)v20, v21, PoolWithTag + 2);
        v23 = v26;
        if ( v26 )
        {
          v24 = MiProtectionToCacheAttribute(a5);
          if ( !LODWORD(v28[2]) )
          {
            if ( (unsigned int)MiCreateColorAnchors(v28, a4, 1LL) )
            {
              LODWORD(v28[1]) |= 5u;
              HIDWORD(v28[1]) = v24;
            }
            else
            {
              MiZeroAndConvertLargePage(v32, v29, v24);
              v23 = 0;
              v26 = 0;
            }
          }
          if ( v23 )
            MiInsertLargePageNeedsZero(v28, PoolWithTag);
        }
        v11 += v33;
        PoolWithTag = 0LL;
        v9 = v30;
        if ( v11 < a2 )
          continue;
      }
      goto LABEL_24;
    }
    v11 = a2;
LABEL_24:
    if ( v35 )
      MiNotifyPageHeat(&v34, v12);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v7 = v31;
  }
  if ( (v28[1] & 1) != 0 )
  {
    LODWORD(v28[3]) = a4;
    MiZeroInParallel((__int64)v28);
    MiDeleteColorAnchors(v28);
  }
  if ( v11 != a2 )
  {
    memset(v28, 0, sizeof(v28));
    if ( (a7 & 1) == 0 && (unsigned int)MiCreateColorAnchors(v28, a4, 0LL) )
    {
      HIDWORD(v28[1]) = MiProtectionToCacheAttribute(a5);
      MiFindLargePageMemory(v9, a4, a2 - v11, a5, (__int64)&v27, (__int64)v28);
    }
    if ( (v28[1] & 1) != 0 )
    {
      LODWORD(v28[3]) = -1;
      MiZeroInParallel((__int64)v28);
    }
    MiDeleteColorAnchors(v28);
  }
  return MiAssembleLargePagePfnList(v27, v7);
}
