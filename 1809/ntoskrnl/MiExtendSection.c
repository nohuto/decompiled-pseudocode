/*
 * XREFs of MiExtendSection @ 0x14061D4C8
 * Callers:
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiIncrementSubsectionViewCount @ 0x140077A40 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiAppendSubsectionChain @ 0x1400929E4 (MiAppendSubsectionChain.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MiSetSubsectionBase @ 0x1401390C0 (MiSetSubsectionBase.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiSubsectionNeedsExtents @ 0x1402B4880 (MiSubsectionNeedsExtents.c)
 *     MiGetSubsectionCharges @ 0x1402C4C84 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x140620030 (MiInitializePrototypePtes.c)
 */

__int64 MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, ...)
{
  __int64 v4; // r10
  __int64 *v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // r9
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned __int64 v11; // rsi
  __int128 v12; // xmm1
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  unsigned __int64 v19; // rbx
  unsigned int v20; // r14d
  __int64 *PoolWithTag; // rax
  __int64 *v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // r14
  __int16 v25; // cx
  unsigned int v26; // r8d
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned int v29; // ebx
  int appended; // eax
  __int16 v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v34; // rdi
  int v35; // r13d
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  PVOID v42; // r13
  int v43; // ebx
  unsigned __int64 v44; // r15
  int SubsectionCharges; // ebx
  __int64 ControlAreaPartition; // rax
  __int64 v47; // r15
  __int64 v48; // r14
  int v49; // [rsp+28h] [rbp-B1h]
  __int64 v50; // [rsp+30h] [rbp-A9h]
  unsigned __int64 v51; // [rsp+38h] [rbp-A1h]
  unsigned __int64 v52; // [rsp+40h] [rbp-99h]
  __int64 v53; // [rsp+48h] [rbp-91h]
  __int128 v54; // [rsp+58h] [rbp-81h] BYREF
  __int128 Privileges; // [rsp+68h] [rbp-71h]
  __int128 v56; // [rsp+78h] [rbp-61h]
  __int128 v57; // [rsp+88h] [rbp-51h]
  __int128 v58; // [rsp+98h] [rbp-41h]
  __int128 v59; // [rsp+A8h] [rbp-31h]
  __int128 v60; // [rsp+B8h] [rbp-21h]
  __int128 v61; // [rsp+C8h] [rbp-11h]
  __int128 v62; // [rsp+D8h] [rbp-1h]
  __int64 v67; // [rsp+150h] [rbp+77h]
  __int64 *v68; // [rsp+158h] [rbp+7Fh] BYREF
  va_list va; // [rsp+158h] [rbp+7Fh]
  va_list va1; // [rsp+160h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v68 = va_arg(va1, __int64 *);
  v5 = (__int64 *)&v54;
  v6 = a1;
  v50 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1;
  v7 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  *v68 = 0LL;
  v53 = *(_QWORD *)v4;
  v8 = *(_DWORD *)(v4 + 56);
  v9 = *(_OWORD *)(a1 + 16);
  v51 = v7;
  v54 = *(_OWORD *)a1;
  v10 = *(_OWORD *)(a1 + 32);
  Privileges = v9;
  v11 = 0LL;
  v12 = *(_OWORD *)(a1 + 48);
  LOBYTE(v49) = 0;
  v13 = (-(__int64)((v8 & 0x40000000) != 0) & 0x100000) + 0x100000;
  v56 = v10;
  v14 = 0LL;
  v52 = v13;
  v15 = *(_OWORD *)(a1 + 64);
  v57 = v12;
  v16 = *(_OWORD *)(a1 + 80);
  v58 = v15;
  v17 = *(_OWORD *)(a1 + 96);
  v59 = v16;
  v18 = *(_OWORD *)(a1 + 128);
  v60 = v17;
  v61 = *(_OWORD *)(a1 + 112);
  v62 = v18;
  if ( a3 )
    DWORD1(v57) ^= (DWORD1(v57) ^ (DWORD1(v57) - a3)) & 0x3FFFFFFF;
  v19 = 0LL;
  do
  {
    if ( v7 - v14 > v13 )
      v20 = v13;
    else
      v20 = v7 - v14;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x64536D4Du);
    v22 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v34 = Privileges;
LABEL_48:
      LOBYTE(v35) = v49;
      SubsectionCharges = -1073741670;
      goto LABEL_49;
    }
    memset(PoolWithTag, 0, 0x90uLL);
    v22[11] = (__int64)(v22 + 10);
    v22[10] = (__int64)(v22 + 10);
    v14 += v20;
    v23 = v20 >> 3;
    v5[2] = (__int64)v22;
    *v22 = v50;
    *((_DWORD *)v22 + 11) = v20 >> 3;
    if ( v14 > 8 * a4 )
      *((_DWORD *)v22 + 13) ^= (*((_DWORD *)v22 + 13) ^ ((v14 >> 3) - a4)) & 0x3FFFFFFF;
    v24 = v53;
    v25 = v22[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v53 + 14) >> 1) & 0x1F));
    *((_WORD *)v22 + 16) = v25;
    if ( v5 == (__int64 *)&v54 )
    {
      *((_WORD *)v5 + 17) &= 0xFu;
      v26 = *((_DWORD *)v5 + 11);
      v27 = *((unsigned int *)v5 + 9);
      v28 = (unsigned __int64)((_WORD)v5[4] & 0xFFC0) << 26;
      *((_DWORD *)v5 + 10) = v26;
      v19 = v27 | v28;
      v25 = *((_WORD *)v22 + 16);
    }
    else
    {
      v26 = *((_DWORD *)v5 + 10);
    }
    v7 = v51;
    v19 += v26;
    *((_DWORD *)v22 + 9) = v19;
    *((_WORD *)v22 + 16) = v25 & 0x3F | (WORD2(v19) << 6);
    if ( v14 < v51 )
    {
      *((_DWORD *)v22 + 10) = v23;
    }
    else
    {
      *((_DWORD *)v22 + 10) = (*a2 >> 12) - v19;
      *((_WORD *)v22 + 17) = *((_WORD *)v22 + 17) & 0xF | (16 * *(_WORD *)a2);
    }
    v13 = v52;
    v5 = v22;
  }
  while ( v14 < v51 );
  v29 = a3;
  if ( a3 && MiControlAreaUsingExtents(v50) && *(_QWORD *)(v6 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)v6);
    *v68 = v6;
  }
  appended = MiAppendSubsectionChain(v6, (__int64)&v54, 0);
  if ( !appended )
  {
LABEL_16:
    v31 = *(_WORD *)(v24 + 12);
    v32 = (*(unsigned int *)(v24 + 8) | ((unsigned __int64)(v31 & 0x3FF) << 32)) + a4 + v29;
    *(_DWORD *)(v24 + 8) += a4 + v29;
    *(_WORD *)(v24 + 12) = v31 ^ (v31 ^ WORD2(v32)) & 0x3FF;
    return 0LL;
  }
  v34 = Privileges;
  v35 = 0;
LABEL_18:
  v36 = v34;
  if ( (appended & 1) != 0 )
  {
    v37 = v51;
    v49 = v35 | 1;
    v38 = 0LL;
    while ( 1 )
    {
      v39 = v37;
      v40 = v52;
      v41 = v39 - v38;
      if ( v41 <= v52 )
        v40 = v41;
      v38 += v40;
      v42 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v40, 0x74536D4Du);
      if ( !v42 )
        goto LABEL_48;
      v43 = *(_DWORD *)(v50 + 56) & 0x40000000;
      MiInitializePrototypePtes((ULONG_PTR)v42);
      if ( v43 )
      {
        if ( !*v68 )
          *v68 = v36;
      }
      else if ( (v49 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount((__int64 *)v36, 0);
      }
      MiSetSubsectionBase((__int64 *)v36, (__int64)v42, 0xFFFFFFFF);
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v36 + 112), 1);
      v37 = v51;
      v36 = *(_QWORD *)(v36 + 16);
      if ( v38 >= v51 )
      {
        v6 = a1;
        v35 = v49;
        goto LABEL_28;
      }
    }
  }
  v35 |= 2u;
  while ( 1 )
  {
    v44 = *(_DWORD *)(v36 + 44) - (*(_DWORD *)(v36 + 52) & 0x3FFFFFFFu);
    SubsectionCharges = MiGetSubsectionCharges(v36, v44);
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((_QWORD *)v36, 56LL) <= 1 )
    {
      v11 += v44;
      break;
    }
    v36 = *(_QWORD *)(v36 + 16);
    if ( !v36 )
    {
      if ( a3 )
      {
        SubsectionCharges = MiGetSubsectionCharges(v6, a3);
        if ( SubsectionCharges < 0 )
          break;
        v11 += a3;
      }
LABEL_28:
      appended = MiAppendSubsectionChain(v6, (__int64)&v54, v35);
      if ( appended )
        goto LABEL_18;
      v29 = a3;
      v24 = v53;
      goto LABEL_16;
    }
  }
LABEL_49:
  ControlAreaPartition = MiGetControlAreaPartition(v50);
  v67 = ControlAreaPartition;
  v47 = ControlAreaPartition;
  if ( v11 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1u, v11);
    v11 = 0LL;
  }
  if ( v34 )
  {
    do
    {
      v48 = *(_QWORD *)(v34 + 16);
      if ( (*(_DWORD *)(v50 + 56) & 0x40000000) != 0 )
      {
        if ( *(_QWORD *)(v34 + 8) )
        {
          v68 = 0LL;
          MiDeleteSubsectionPages((__int64 *)v34, (__int64 **)va);
        }
      }
      else
      {
        if ( (v35 & 2) != 0 && (*(_DWORD *)(v34 + 48) & 0x3FFFFFFF) != 0 )
          v11 += MiDecrementSubsectionViewCount((__int64 *)v34, 24);
        if ( *(_QWORD *)(v34 + 8) )
        {
          MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v34 + 112), 0);
          ExFreePoolWithTag(*(PVOID *)(v34 + 8), 0);
        }
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v34);
      v34 = v48;
    }
    while ( v48 );
    v47 = v67;
  }
  if ( v11 )
    MiReturnCrossPartitionSectionCharges(v47, 1u, v11);
  return (unsigned int)SubsectionCharges;
}
