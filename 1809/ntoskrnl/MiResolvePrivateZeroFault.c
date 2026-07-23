/*
 * XREFs of MiResolvePrivateZeroFault @ 0x140047430
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiComputeZeroClusterMaximum @ 0x14010FB04 (MiComputeZeroClusterMaximum.c)
 *     MiGetClusterPage @ 0x1402C69AC (MiGetClusterPage.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  int v1; // edi
  unsigned __int64 v3; // r13
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // r12
  struct _KTHREAD *v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r10
  __int64 PageChain; // rsi
  int v12; // r15d
  __int64 v13; // rbp
  __int64 v14; // rax
  int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // r9d
  unsigned __int64 v19; // r10
  unsigned __int64 i; // rdi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  int v24; // r11d
  unsigned __int64 v25; // rbp
  __int64 v26; // rdx
  bool v27; // zf
  int v28; // r11d
  __int16 v29; // cx
  unsigned __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 ClusterPage; // rax
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // [rsp+40h] [rbp-D8h]
  volatile signed __int32 *v40; // [rsp+48h] [rbp-D0h] BYREF
  __int16 v41; // [rsp+50h] [rbp-C8h]
  unsigned __int16 v42; // [rsp+52h] [rbp-C6h]
  _QWORD v43[3]; // [rsp+58h] [rbp-C0h] BYREF
  __int16 v44; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD *v45; // [rsp+78h] [rbp-A0h]
  __int64 v46; // [rsp+80h] [rbp-98h]
  __int64 v47; // [rsp+88h] [rbp-90h]
  __int64 v48; // [rsp+90h] [rbp-88h]
  char v49; // [rsp+120h] [rbp+8h] BYREF
  unsigned int v50; // [rsp+128h] [rbp+10h]
  unsigned __int64 v51; // [rsp+130h] [rbp+18h]
  __int64 v52; // [rsp+138h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 7);
  if ( (*a1 & 2) != 0 )
  {
    v31 = a1[8];
    if ( v31 >> 3 == 3 )
    {
      if ( (v31 & 7) == 0 )
        goto LABEL_56;
    }
    else if ( v31 >> 3 != 1 )
    {
      goto LABEL_56;
    }
    if ( (v1 & 4) != 0 )
      goto LABEL_2;
LABEL_56:
    MiAdvanceFaultList((_QWORD *)v4);
    return 0LL;
  }
LABEL_2:
  if ( (v1 & 8) != 0 && (*(_DWORD *)(v4 + 56) & 8) != 0 )
    return 3221225495LL;
  v5 = *((_QWORD *)a1 + 1);
  v6 = *(_QWORD *)(v5 + 56);
  v7 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v6 + 174));
  if ( (v1 & 0x40) != 0 )
  {
    v8 = (struct _KTHREAD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10];
    if ( v8 )
    {
      if ( v8 != KeGetCurrentThread() )
      {
        *(_DWORD *)(v5 + 80) |= 4u;
        return 0LL;
      }
    }
  }
  v52 = 1LL;
  v9 = -1LL;
  v51 = -1LL;
  v10 = *((_QWORD *)a1 + 8);
  PageChain = 0LL;
  v12 = a1[12];
  v13 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = 0;
  v39 = v10;
  if ( !v10 )
  {
    if ( (v1 & 0x41) == 1 && (*(_BYTE *)(v6 + 184) & 7u) >= 2 )
    {
      v51 = MiComputeZeroClusterMaximum(v4, v6, 0LL);
      v9 = v51;
      if ( v51 > 1 )
      {
        v19 = 0xFFFFF6FB7DBED000uLL;
        v4 = 1LL;
        goto LABEL_22;
      }
    }
    goto LABEL_7;
  }
  v16 = v1 & 0x15;
  if ( v16 )
  {
    v17 = MiComputeZeroClusterMaximum(v4, v6, v10);
    v10 = v39;
    v50 = 1;
    v9 = v17;
    v51 = v17;
  }
  v18 = *(_DWORD *)(v10 + 48);
  v12 = (v18 >> 8) & 0x3F;
  if ( (v18 & 0x44000) == 0x44000 )
  {
    ClusterPage = MiGetClusterPage(v10, v3, 16, a1[8], a1[9], (__int64)&v49);
    PageChain = ClusterPage;
    if ( ClusterPage )
    {
      if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
      {
        v9 = v51;
        v52 = 1LL;
        if ( v49 == 1 )
          *a1 |= 4u;
        goto LABEL_20;
      }
      v33 = v3 & 0xFFFFFFFFFFFF0000uLL;
      v52 = 16LL;
      *((_QWORD *)a1 + 2) = v33;
      v13 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
LABEL_50:
    v9 = v51;
    goto LABEL_20;
  }
  if ( v16 == 0
    && ((v3 >> 9) & 0x78) == 0
    && (v18 & 0x4000) != 0
    && (v18 & 7) != 4
    && !a1[9]
    && v3 >= ((*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) + 16) << 12
    && ((v3 >> 9) & 0xFF8) != 0
    && (v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v21 = 0LL;
    v22 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    do
    {
      v23 = *(_QWORD *)v22;
      if ( v22 >= 0xFFFFF6FB7DBED000uLL
        && v22 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * ((v22 >> 3) & 0x1FF));
          LOBYTE(v34) = v23 | 0x20;
          if ( (v35 & 0x20) == 0 )
            v34 = *(_QWORD *)v22;
          LOBYTE(v23) = v34;
          if ( (v35 & 0x42) != 0 )
            LOBYTE(v23) = v34 | 0x42;
        }
      }
      if ( (v23 & 1) == 0 )
        break;
      if ( (v23 & 0x20) == 0 )
        break;
      ++v21;
      v22 -= 8LL;
    }
    while ( v21 < 0x10 );
    if ( v21 == 16 )
    {
      v43[1] = 0x10000LL;
      v46 = 1LL;
      v44 = 0;
      v43[0] = v3 & 0xFFFFFFFFFFFFF000uLL;
      v45 = v43;
      v47 = 0LL;
      v48 = 0LL;
      if ( (unsigned __int64)MiComputeZeroClusterMaximum(&v44, v6, v10) >= 0x10 )
      {
        v9 = 16LL;
        v51 = 16LL;
        v19 = 0xFFFFF6FB7DBED000uLL;
        v4 = 2LL;
        goto LABEL_37;
      }
      goto LABEL_7;
    }
    goto LABEL_50;
  }
LABEL_20:
  v4 = v50;
  v19 = 0xFFFFF6FB7DBED000uLL;
  if ( v50 && !PageChain )
  {
LABEL_22:
    i = 1LL;
    if ( v9 <= 1 )
    {
LABEL_43:
      if ( (_DWORD)v4 == 2 )
      {
        if ( i == v9 )
        {
          MiInitializePageColorBase(v6, v12, (__int64)&v40);
          v28 = v42;
          v12 = v42 >> byte_14043B109;
          v29 = _InterlockedExchangeAdd(v40, 1u);
          PageChain = MiGet64KPage(v7, a1[8], v28 | (unsigned int)(unsigned __int16)(v29 & v41), 0LL);
          if ( PageChain )
            *a1 |= 0x80u;
        }
        else
        {
          i = 1LL;
        }
      }
      v52 = i;
      goto LABEL_7;
    }
LABEL_37:
    v24 = a1[9];
    v25 = v13 + 8;
    for ( i = 1LL; i < v9; ++i )
    {
      v26 = *(_QWORD *)v25;
      if ( v25 >= v19
        && v25 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v36 )
        {
          v37 = v26 | 0x20;
          v38 = *(_QWORD *)(v36 + 8 * ((v25 >> 3) & 0x1FF));
          if ( (v38 & 0x20) == 0 )
            v37 = *(_QWORD *)v25;
          v26 = v37;
          v9 = v51;
          if ( (v38 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
      }
      if ( v24 )
      {
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v26) )
          goto LABEL_43;
        v27 = v24 == ((v30 >> 5) & 0x1F);
      }
      else
      {
        v27 = v26 == 0;
      }
      if ( !v27 )
        break;
      v25 += 8LL;
    }
    goto LABEL_43;
  }
LABEL_7:
  v14 = *((_QWORD *)a1 + 9);
  if ( v14 )
    v7 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v14 + 544) + 1454LL));
  if ( !PageChain )
  {
    PageChain = MiGetPageChain(v7, v6, v12, a1[8], 258, -1LL, (__int64)&v52);
    if ( !PageChain )
      return 3221225495LL;
  }
  return MiCompletePrivateZeroFault(a1, PageChain, v52, v4);
}
