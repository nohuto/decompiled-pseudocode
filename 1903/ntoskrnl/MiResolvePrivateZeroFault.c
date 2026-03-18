/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1400CD460
 * Callers:
 *     MiZeroFault @ 0x1400C99E0 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiComputeZeroClusterMaximum @ 0x14007D620 (MiComputeZeroClusterMaximum.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAdvanceFaultList @ 0x1400F57E0 (MiAdvanceFaultList.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiGetClusterPage @ 0x1402E0924 (MiGetClusterPage.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  int v1; // esi
  unsigned __int64 v3; // r13
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // r12
  struct _KTHREAD *v8; // rdx
  __int64 v9; // r11
  unsigned __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r14
  int v13; // ebx
  __int64 LargePage; // rbp
  __int64 v15; // rax
  int v17; // esi
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 i; // rsi
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  int v24; // r10d
  unsigned __int64 v25; // r14
  __int64 v26; // rdx
  bool v27; // zf
  unsigned int v28; // r11d
  signed __int32 v29; // r11d
  unsigned __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 ClusterPage; // rax
  unsigned __int64 v33; // r13
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // [rsp+40h] [rbp-D8h]
  volatile signed __int32 *v40; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-C0h]
  _QWORD v43[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v44[13]; // [rsp+70h] [rbp-A8h] BYREF
  char v45; // [rsp+120h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+128h] [rbp+10h]
  unsigned __int64 v47; // [rsp+130h] [rbp+18h]
  __int64 v48; // [rsp+138h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 7);
  if ( (*a1 & 2) != 0 )
  {
    v31 = a1[8];
    if ( v31 >> 3 == 3 )
    {
      if ( (v31 & 7) == 0 )
        goto LABEL_57;
    }
    else if ( v31 >> 3 != 1 )
    {
      goto LABEL_57;
    }
    if ( (v1 & 4) != 0 )
      goto LABEL_2;
LABEL_57:
    MiAdvanceFaultList(v4);
    return 0LL;
  }
LABEL_2:
  if ( (v1 & 8) != 0 && (*(_DWORD *)(v4 + 56) & 8) != 0 )
    return 3221225495LL;
  v5 = *((_QWORD *)a1 + 1);
  v6 = *(_QWORD *)(v5 + 56);
  v7 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(v6 + 174));
  v42 = v7;
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
  v9 = 1LL;
  v48 = 1LL;
  v10 = -1LL;
  v11 = *((_QWORD *)a1 + 8);
  v12 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = a1[12];
  LargePage = 0LL;
  v46 = 0;
  v39 = v11;
  if ( !v11 )
  {
    if ( (v1 & 0x41) == 1 && (*(_BYTE *)(v6 + 184) & 7u) >= 2 )
    {
      v47 = MiComputeZeroClusterMaximum(v4, v6, 0LL);
      v10 = v47;
      if ( v47 > 1 )
      {
        v9 = 1LL;
        v4 = 1LL;
        goto LABEL_23;
      }
    }
    goto LABEL_7;
  }
  v17 = v1 & 0x15;
  if ( v17 )
  {
    v18 = MiComputeZeroClusterMaximum(v4, v6, v11);
    v11 = v39;
    v9 = 1LL;
    v46 = 1;
    v10 = v18;
  }
  v19 = *(_DWORD *)(v11 + 48);
  v13 = (v19 >> 12) & 0x3F;
  v47 = v10;
  if ( (v19 & 0x100000) != 0 && MiVadPageSizes[(v19 >> 18) & 3] == 16 )
  {
    ClusterPage = MiGetClusterPage(v11, v3, 16, a1[8], a1[9], (__int64)&v45);
    LargePage = ClusterPage;
    if ( ClusterPage )
    {
      if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
      {
        v10 = v47;
        v9 = 1LL;
        if ( v45 == 1 )
          *a1 |= 4u;
        goto LABEL_21;
      }
      v33 = v3 & 0xFFFFFFFFFFFF0000uLL;
      v48 = 16LL;
      *((_QWORD *)a1 + 2) = v33;
      v12 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v9 = 1LL;
LABEL_53:
    v10 = v47;
    goto LABEL_21;
  }
  if ( v17 == 0
    && ((v3 >> 9) & 0x78) == 0
    && (v19 & 0x100000) != 0
    && (v19 & 0x300000) != 0x300000
    && !a1[9]
    && v3 >= ((*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) + 16) << 12
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
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v23 & 1) == 0 )
          break;
        if ( (v23 & 0x20) == 0 || (v23 & 0x42) == 0 )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v35 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v22 >> 3) & 0x1FF));
            LOBYTE(DeepFreezeStartTime) = v23 | 0x20;
            if ( (v35 & 0x20) == 0 )
              DeepFreezeStartTime = *(_QWORD *)v22;
            LOBYTE(v23) = DeepFreezeStartTime;
            if ( (v35 & 0x42) != 0 )
              LOBYTE(v23) = DeepFreezeStartTime | 0x42;
          }
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
    v7 = v42;
    if ( v21 == 16 )
    {
      memset(v44, 0, 0x58uLL);
      v44[1] = v43;
      v43[0] = v3 & 0xFFFFFFFFFFFFF000uLL;
      v43[1] = 0x10000LL;
      v44[2] = 1LL;
      v44[3] = 0LL;
      v44[4] = 0LL;
      if ( MiComputeZeroClusterMaximum((__int64)v44, v6, v39) >= 0x10 )
      {
        v10 = 16LL;
        v9 = 1LL;
        v47 = 16LL;
        v4 = 2LL;
        goto LABEL_38;
      }
      goto LABEL_7;
    }
    goto LABEL_53;
  }
LABEL_21:
  v4 = v46;
  if ( v46 && !LargePage )
  {
LABEL_23:
    i = 1LL;
    if ( v10 <= 1 )
    {
LABEL_44:
      if ( (_DWORD)v4 == 2 )
      {
        if ( i == v10 )
        {
          v40 = 0LL;
          v41 = 0LL;
          MiInitializePageColorBase(v6, v13, (__int64)&v40);
          v29 = _InterlockedExchangeAdd(v40, v28);
          LargePage = MiGetLargePage(v7, 2u, a1[8], HIDWORD(v41) | v29 & (unsigned int)v41, 0LL);
          if ( LargePage )
            *a1 |= 0x80u;
        }
        else
        {
          i = v9;
        }
      }
      v48 = i;
      goto LABEL_7;
    }
LABEL_38:
    v24 = a1[9];
    v25 = v12 + 8;
    for ( i = 1LL; i < v10; ++i )
    {
      v26 = *(_QWORD *)v25;
      if ( v25 >= 0xFFFFF6FB7DBED000uLL
        && v25 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v36 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v36 )
        {
          v37 = v26 | 0x20;
          v38 = *(_QWORD *)(v36 + 8 * ((v25 >> 3) & 0x1FF));
          if ( (v38 & 0x20) == 0 )
            v37 = *(_QWORD *)v25;
          v26 = v37;
          v10 = v47;
          if ( (v38 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
      }
      if ( v24 )
      {
        if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v26) )
          goto LABEL_44;
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
    goto LABEL_44;
  }
LABEL_7:
  v15 = *((_QWORD *)a1 + 9);
  if ( v15 )
    v7 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v15 + 544) + 1454LL));
  if ( !LargePage )
  {
    LargePage = MiGetPageChain(v7, v6, v13, a1[8], 258, -1LL, (__int64)&v48);
    if ( !LargePage )
      return 3221225495LL;
  }
  return MiCompletePrivateZeroFault(a1, LargePage, v48, v4);
}
