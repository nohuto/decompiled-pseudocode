/*
 * XREFs of MiExtendSection @ 0x14069CB90
 * Callers:
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 * Callees:
 *     MiControlAreaUsingExtents @ 0x14006ED70 (MiControlAreaUsingExtents.c)
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400723F0 (MiIncrementSubsectionViewCount.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiAppendSubsectionChain @ 0x1400EAEF8 (MiAppendSubsectionChain.c)
 *     MiSetSubsectionBase @ 0x1400EB1D4 (MiSetSubsectionBase.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiSubsectionNeedsExtents @ 0x1402C9D80 (MiSubsectionNeedsExtents.c)
 *     MiGetSubsectionCharges @ 0x1402DE9C8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x140689274 (MiInitializePrototypePtes.c)
 */

__int64 MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, ...)
{
  __int64 *v4; // r15
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int128 v9; // xmm1
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rsi
  __int128 v16; // xmm0
  int v17; // r12d
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int64 v21; // rbx
  unsigned int v22; // ebp
  __int64 *PoolWithTag; // rax
  __int64 *v24; // rdi
  __int64 v25; // r9
  unsigned int v26; // r8d
  __int64 v27; // rbp
  __int16 v28; // cx
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  unsigned int v33; // r15d
  int appended; // eax
  __int16 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v38; // rdi
  __int64 v39; // rbp
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r15
  SIZE_T v42; // rax
  unsigned __int64 v43; // r14
  PVOID v44; // r12
  int v45; // ebx
  __int64 v46; // r8
  unsigned __int64 v47; // r14
  int SubsectionCharges; // ebx
  __int64 ControlAreaPartition; // rax
  __int64 v50; // r8
  __int64 v51; // r14
  __int64 v52; // rbp
  __int64 v53; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v54; // [rsp+28h] [rbp-F0h]
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-E8h]
  __int64 v56; // [rsp+38h] [rbp-E0h]
  __int128 v57; // [rsp+40h] [rbp-D8h] BYREF
  __int128 Privileges; // [rsp+50h] [rbp-C8h]
  __int128 v59; // [rsp+60h] [rbp-B8h]
  __int128 v60; // [rsp+70h] [rbp-A8h]
  __int128 v61; // [rsp+80h] [rbp-98h]
  __int128 v62; // [rsp+90h] [rbp-88h]
  __int128 v63; // [rsp+A0h] [rbp-78h]
  __int128 v64; // [rsp+B0h] [rbp-68h]
  __int128 v65; // [rsp+C0h] [rbp-58h]
  int v66; // [rsp+120h] [rbp+8h]
  __int64 v70; // [rsp+138h] [rbp+20h]
  __int64 *v71; // [rsp+140h] [rbp+28h] BYREF
  va_list va; // [rsp+140h] [rbp+28h]
  va_list va1; // [rsp+148h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v71 = va_arg(va1, __int64 *);
  v4 = (__int64 *)&v57;
  v7 = *(_QWORD *)a1;
  *v71 = 0LL;
  v8 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v9 = *(_OWORD *)(a1 + 16);
  v56 = *(_QWORD *)v7;
  v10 = *(_DWORD *)(v7 + 56);
  v57 = *(_OWORD *)a1;
  v53 = v7;
  v11 = *(_OWORD *)(a1 + 32);
  Privileges = v9;
  v12 = *(_OWORD *)(a1 + 48);
  v13 = 0LL;
  v59 = v11;
  v14 = (-(__int64)((v10 & 0x40000000) != 0) & 0x100000) + 0x100000;
  v15 = 0LL;
  v16 = *(_OWORD *)(a1 + 64);
  v17 = 0;
  v54 = v8;
  NumberOfBytes = v14;
  v60 = v12;
  v18 = *(_OWORD *)(a1 + 80);
  v61 = v16;
  v19 = *(_OWORD *)(a1 + 96);
  v62 = v18;
  v20 = *(_OWORD *)(a1 + 128);
  v63 = v19;
  v64 = *(_OWORD *)(a1 + 112);
  v65 = v20;
  if ( a3 )
    DWORD1(v60) ^= (DWORD1(v60) ^ (DWORD1(v60) - a3)) & 0x3FFFFFFF;
  v21 = 0LL;
  do
  {
    if ( v8 - v13 > v14 )
      v22 = v14;
    else
      v22 = v8 - v13;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x64536D4Du);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v38 = Privileges;
LABEL_49:
      SubsectionCharges = -1073741670;
      goto LABEL_50;
    }
    memset(PoolWithTag, 0, 0x90uLL);
    v25 = v53;
    v24[11] = (__int64)(v24 + 10);
    v24[10] = (__int64)(v24 + 10);
    v13 += v22;
    v26 = v22 >> 3;
    v4[2] = (__int64)v24;
    *v24 = v53;
    *((_DWORD *)v24 + 11) = v22 >> 3;
    if ( v13 > 8 * a4 )
      *((_DWORD *)v24 + 13) ^= (*((_DWORD *)v24 + 13) ^ ((v13 >> 3) - a4)) & 0x3FFFFFFF;
    v27 = v56;
    v28 = v24[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v56 + 14) >> 1) & 0x1F));
    *((_WORD *)v24 + 16) = v28;
    if ( v4 == (__int64 *)&v57 )
    {
      *((_WORD *)v4 + 17) &= 0xFu;
      v29 = *((_DWORD *)v4 + 11);
      v30 = *((unsigned int *)v4 + 9);
      v31 = (unsigned __int64)((_WORD)v4[4] & 0xFFC0) << 26;
      *((_DWORD *)v4 + 10) = v29;
      v21 = v30 | v31;
      v28 = *((_WORD *)v24 + 16);
    }
    else
    {
      v29 = *((_DWORD *)v4 + 10);
    }
    v32 = v29;
    v8 = v54;
    v21 += v32;
    *((_DWORD *)v24 + 9) = v21;
    *((_WORD *)v24 + 16) = v28 & 0x3F | (WORD2(v21) << 6);
    if ( v13 < v54 )
    {
      *((_DWORD *)v24 + 10) = v26;
    }
    else
    {
      *((_DWORD *)v24 + 10) = (*a2 >> 12) - v21;
      v25 = v53;
      *((_WORD *)v24 + 17) = *((_WORD *)v24 + 17) & 0xF | (16 * *(_WORD *)a2);
    }
    v14 = NumberOfBytes;
    v4 = v24;
  }
  while ( v13 < v54 );
  v33 = a3;
  if ( a3 && MiControlAreaUsingExtents(v25) && *(_QWORD *)(a1 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)a1);
    *v71 = a1;
  }
  appended = MiAppendSubsectionChain(a1, (__int64)&v57, 0);
  if ( !appended )
  {
LABEL_16:
    v35 = *(_WORD *)(v27 + 12);
    v36 = (*(unsigned int *)(v27 + 8) | ((unsigned __int64)(v35 & 0x3FF) << 32)) + a4 + v33;
    *(_DWORD *)(v27 + 8) += a4 + v33;
    *(_WORD *)(v27 + 12) = v35 ^ (v35 ^ WORD2(v36)) & 0x3FF;
    return 0LL;
  }
  v38 = Privileges;
LABEL_18:
  v39 = v38;
  if ( (appended & 1) != 0 )
  {
    v40 = v54;
    v66 = v17 | 1;
    v41 = 0LL;
    while ( 1 )
    {
      v42 = v40 - v41;
      if ( v42 > NumberOfBytes )
        LODWORD(v42) = NumberOfBytes;
      v43 = (unsigned int)v42;
      v41 += (unsigned int)v42;
      v44 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, (unsigned int)v42, 0x74536D4Du);
      if ( !v44 )
        break;
      v45 = *(_DWORD *)(v53 + 56) & 0x40000000;
      MiInitializePrototypePtes((ULONG_PTR)v44, v43 >> 3, v39, v45 == 0);
      if ( v45 )
      {
        if ( !*v71 )
          *v71 = v39;
      }
      else if ( (v66 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount((_QWORD *)v39, 0LL, v46);
      }
      MiSetSubsectionBase((__int64 *)v39, (__int64)v44, 0xFFFFFFFF);
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v39 + 112), 1);
      v40 = v54;
      v39 = *(_QWORD *)(v39 + 16);
      if ( v41 >= v54 )
      {
        v17 = v66;
        v33 = a3;
        goto LABEL_28;
      }
    }
    LOBYTE(v17) = v66;
    goto LABEL_49;
  }
  v17 |= 2u;
  while ( 1 )
  {
    v47 = *(_DWORD *)(v39 + 44) - (*(_DWORD *)(v39 + 52) & 0x3FFFFFFFu);
    SubsectionCharges = MiGetSubsectionCharges(v39, v47);
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((_QWORD *)v39, 56LL) <= 1 )
    {
      v15 += v47;
      break;
    }
    v39 = *(_QWORD *)(v39 + 16);
    if ( !v39 )
    {
      if ( v33 )
      {
        SubsectionCharges = MiGetSubsectionCharges(a1, v33);
        if ( SubsectionCharges < 0 )
          break;
        v15 += v33;
      }
LABEL_28:
      appended = MiAppendSubsectionChain(a1, (__int64)&v57, v17);
      if ( appended )
        goto LABEL_18;
      v27 = v56;
      goto LABEL_16;
    }
  }
LABEL_50:
  ControlAreaPartition = MiGetControlAreaPartition(v53);
  v70 = ControlAreaPartition;
  v51 = ControlAreaPartition;
  if ( v15 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1u, v15);
    v15 = 0LL;
  }
  if ( v38 )
  {
    do
    {
      v52 = *(_QWORD *)(v38 + 16);
      if ( (*(_DWORD *)(v53 + 56) & 0x40000000) != 0 )
      {
        if ( *(_QWORD *)(v38 + 8) )
        {
          v71 = 0LL;
          MiDeleteSubsectionPages((__int64 *)v38, (__int64 **)va);
        }
      }
      else
      {
        if ( (v17 & 2) != 0 && (*(_DWORD *)(v38 + 48) & 0x3FFFFFFF) != 0 )
          v15 += MiDecrementSubsectionViewCount((_QWORD *)v38, 24LL, v50);
        if ( *(_QWORD *)(v38 + 8) )
        {
          MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v38 + 112), 0);
          ExFreePoolWithTag(*(PVOID *)(v38 + 8), 0);
        }
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v38);
      v38 = v52;
    }
    while ( v52 );
    v51 = v70;
  }
  if ( v15 )
    MiReturnCrossPartitionSectionCharges(v51, 1u, v15);
  return (unsigned int)SubsectionCharges;
}
