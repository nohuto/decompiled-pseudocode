/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x1405ECA20
 * Callers:
 *     MmPrefetchForCacheManager @ 0x1406637F8 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiEndingOffsetWithLock @ 0x140031000 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiUpdatePfnPriorityByPte @ 0x14003DA70 (MiUpdatePfnPriorityByPte.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MiUseSlabAllocator @ 0x140065C80 (MiUseSlabAllocator.c)
 *     MiSetPfnLink @ 0x140065C94 (MiSetPfnLink.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiReadPteShadow @ 0x14006C540 (MiReadPteShadow.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x140077D08 (MiGetControlAreaPtes.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400DEE04 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x14013497C (MiGetAvailablePagesExcludeSlists.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 *     MiRefillPurgedExtents @ 0x1402B6E40 (MiRefillPurgedExtents.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140663A90 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140699460 (MiPfAllocateMdls.c)
 */

__int64 MiPfPrepareSequentialReadList(__int64 a1, __int64 a2, unsigned __int64 a3, ...)
{
  bool v3; // zf
  __int64 v5; // r14
  unsigned __int64 ControlAreaPtes; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // r8
  __int64 *v15; // rsi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdi
  int v18; // edx
  _QWORD *v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // r10
  _QWORD *v22; // r11
  _QWORD *v23; // rax
  unsigned __int64 v24; // r8
  _QWORD *v25; // r14
  __int64 PteAddress; // rax
  __int64 v27; // rdx
  __int16 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r10
  unsigned __int64 v31; // rbx
  int v32; // ecx
  unsigned int v33; // r14d
  unsigned __int64 v34; // r14
  _QWORD *v35; // rsi
  _DWORD *v36; // rcx
  _DWORD *v37; // rax
  _QWORD *v38; // rax
  unsigned __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r14
  unsigned int v43; // r13d
  __int64 PageChain; // rax
  unsigned __int64 v45; // rbx
  _QWORD *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned int Mdls; // ebx
  __int64 SharedProtos; // rax
  int v54; // eax
  __int64 SlabPage; // rax
  __int64 v56; // rcx
  int v57; // eax
  unsigned __int64 v58; // rbx
  __int64 v59; // [rsp+40h] [rbp-C8h]
  __int64 v60; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+50h] [rbp-B8h]
  ULONG_PTR *ControlAreaPartition; // [rsp+58h] [rbp-B0h]
  _QWORD *v63; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v64; // [rsp+68h] [rbp-A0h]
  unsigned __int64 *v65; // [rsp+78h] [rbp-90h]
  char *v66; // [rsp+80h] [rbp-88h]
  unsigned __int64 v67; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v68; // [rsp+90h] [rbp-78h]
  unsigned __int64 v69; // [rsp+98h] [rbp-70h]
  __int64 *v70; // [rsp+A0h] [rbp-68h]
  __int64 *v71; // [rsp+A8h] [rbp-60h]
  __int64 AvailablePagesExcludeSlists; // [rsp+B0h] [rbp-58h]
  unsigned __int16 *v73; // [rsp+B8h] [rbp-50h]
  char v74[10]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int16 v75; // [rsp+CAh] [rbp-3Eh]
  unsigned __int64 v78; // [rsp+128h] [rbp+20h] BYREF
  va_list va; // [rsp+128h] [rbp+20h]
  unsigned __int64 v80; // [rsp+130h] [rbp+28h]
  __int64 v81; // [rsp+138h] [rbp+30h]
  __int64 v82; // [rsp+140h] [rbp+38h]
  _QWORD *v83; // [rsp+148h] [rbp+40h]
  va_list va1; // [rsp+150h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v78 = va_arg(va1, _QWORD);
  v80 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
  v83 = va_arg(va1, _QWORD *);
  v3 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v5 = a2;
  *v83 = 0LL;
  if ( !v3 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  v8 = v80;
  if ( v80 )
  {
    v9 = v80 >> 12;
    if ( v80 >> 12 < 0x100000000LL && (unsigned int)v9 <= ControlAreaPtes )
      goto LABEL_6;
    return 3221225713LL;
  }
  if ( ControlAreaPtes >= 0x100000000LL )
    return 3221225713LL;
  LODWORD(v9) = ControlAreaPtes;
LABEL_6:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v9 - 1) + 120, 0x6C526D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = v5;
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *PoolWithTag = 0LL;
  v12 = PoolWithTag + 12;
  v67 = 0LL;
  v12[1] = v12;
  *v12 = v12;
  *(_QWORD *)((char *)v11 + 84) = 0LL;
  v11[2] = 0LL;
  v11[4] = v11 + 3;
  v11[3] = v11 + 3;
  v60 = v5 + 128;
  LODWORD(v12) = (*(unsigned __int16 *)(v5 + 160) >> 1) & 0x1F;
  v59 = 0LL;
  v61 = 0LL;
  v63 = 0LL;
  v71 = 0LL;
  v68 = (unsigned int)v12;
  if ( v8 )
  {
    v13 = MiOffsetToProtos(v5, a3, &v67);
    v60 = v13;
  }
  else
  {
    v13 = v5 + 128;
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v5);
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)ControlAreaPartition);
  v15 = v14;
  v70 = v14;
  v16 = (unsigned __int64)v14;
  v69 = (unsigned __int64)v14;
  if ( a1 )
  {
    v17 = __PAIR64__(HIDWORD(v14), *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u);
    v65 = *(unsigned __int64 **)(a1 + 32);
  }
  else
  {
    v65 = (unsigned __int64 *)v14;
    v17 = (unsigned __int64)v14;
  }
  *((_DWORD *)v11 + 14) = v81;
  *((_DWORD *)v11 + 15) = 5;
  *((_DWORD *)v11 + 16) = 7;
  v18 = (*(_DWORD *)(v5 + 56) >> 20) & 0x3F;
  v66 = (char *)(v11 + 14);
  v73 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  MiInitializePageColorBase((__int64)v73, v18, (__int64)v74);
  LODWORD(v78) = 0;
  v19 = 0LL;
  if ( !(_DWORD)v9 )
  {
    v41 = (__int64)ControlAreaPartition;
    v31 = 0LL;
    v42 = 0LL;
    v43 = 0;
    goto LABEL_54;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)v15 >= v16 )
    {
      if ( v15 )
      {
        v13 = *(_QWORD *)(v13 + 16);
        v60 = v13;
        if ( !v13 )
        {
LABEL_52:
          v31 = v61;
          v19 = v63;
          v41 = (__int64)ControlAreaPartition;
          v42 = v59;
          goto LABEL_53;
        }
        v67 = 0LL;
      }
      v32 = *(_DWORD *)(v5 + 56);
      if ( (v32 & 0x20) != 0 )
      {
        v34 = *(_QWORD *)(v13 + 8);
        if ( (*(_BYTE *)(v13 + 34) & 2) != 0 && (v32 & 0x4000000) != 0 )
        {
          if ( !*(_QWORD *)(v13 + 24) )
          {
            v15 = (__int64 *)(v16 - 8);
            goto LABEL_30;
          }
          SharedProtos = MiGetSharedProtos(a2, (unsigned int)v82, v13);
          if ( !SharedProtos )
          {
            v15 = (__int64 *)(v16 - 8);
            goto LABEL_30;
          }
          v34 = *(_QWORD *)(SharedProtos + 72);
        }
      }
      else
      {
        LODWORD(v78) = MiAddViewsForSection((__int64 *)v13, *(unsigned int *)(v13 + 44), 4LL);
        v33 = v78;
        if ( (v78 & 0x80000000) != 0LL )
        {
          if ( v61 )
            MiReturnFaultCharges((__int64)ControlAreaPartition, v61, 1);
          MiReleaseReadListResources(v11);
          ExFreePoolWithTag(v11, 0);
          return v33;
        }
        v34 = *(_QWORD *)(v13 + 8);
        v35 = v11 + 3;
        v36 = (_DWORD *)v11[4];
        if ( (_QWORD *)*v35 == v35 || v36[4] == 5 )
        {
          v37 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
          v36 = v37;
          if ( !v37 )
          {
            MiRemoveViewsFromSectionWithPfn((__int64 *)v13, *(unsigned int *)(v13 + 44), 4u);
            MiReleaseReadListResources(v11);
            ExFreePoolWithTag(v11, 0);
            return 3221225626LL;
          }
          v37[4] = 0;
          v38 = (_QWORD *)v11[4];
          if ( (_QWORD *)*v38 != v35 )
            __fastfail(3u);
          *(_QWORD *)v36 = v35;
          *((_QWORD *)v36 + 1) = v38;
          *v38 = v36;
          v11[4] = v36;
        }
        if ( !v11[2] )
          v11[2] = v13;
        *(_QWORD *)&v36[2 * v36[4]++ + 6] = v13;
      }
      v15 = (__int64 *)(v34 + 8 * v67);
      v16 = v34 + 8LL * *(unsigned int *)(v13 + 44);
      v39 = MiStartingOffset((__int64 *)v13, v34, v82);
      v40 = MiEndingOffsetWithLock((__int64 *)v60);
      if ( (((_WORD)v40 - (_WORD)v39) & 0xFFF) != 0 )
        v70 = (__int64 *)(v34 + 8 * (((v40 - v39 + 4095) >> 12) - 1));
      else
        v70 = 0LL;
      if ( v65 )
      {
        HIDWORD(v64) = HIDWORD(v39);
        v69 = v34;
        LODWORD(v64) = v39 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
        v17 = v64;
      }
      v5 = a2;
    }
    v20 = *v15;
    if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v20) = MiReadPteShadow((unsigned __int64)v15, *v15);
    if ( (v20 & 1) != 0 )
      goto LABEL_33;
    if ( (v20 & 0x400) == 0 )
    {
      if ( (v20 & 0x800) != 0 )
      {
LABEL_33:
        MiUpdatePfnPriorityByPte((unsigned __int64)v15, v81);
      }
      else if ( IS_PTE_NOT_DEMAND_ZERO(v20) )
      {
        goto LABEL_19;
      }
      v13 = v60;
      goto LABEL_30;
    }
    if ( !MiControlAreaUsingExtents(v5) )
      break;
    v13 = v60;
    v54 = MiRefillPurgedExtents((__int64 *)v60);
    LODWORD(v78) = v54;
    if ( v54 < 0 )
    {
      v42 = v59;
      v31 = v61;
      v19 = v63;
      v41 = (__int64)ControlAreaPartition;
      if ( v59 )
        v43 = v54;
      else
        v43 = -1073741670;
      goto LABEL_54;
    }
LABEL_30:
    LODWORD(v19) = (_DWORD)v19 + 1;
    ++v15;
    if ( (unsigned int)v19 >= (unsigned int)v9 )
      goto LABEL_52;
    v5 = a2;
  }
  if ( v65 )
  {
    v17 += (__int64)((__int64)v15 - v69) >> 3 << 12;
    v69 = (unsigned __int64)v15;
    *v65++ = v17;
  }
LABEL_19:
  v23 = v22;
  *v22 = v15;
  v24 = (unsigned __int64)v15;
  if ( v63 )
    v23 = v63;
  v63 = v23;
  v25 = v23;
  if ( v21 != v60
    || (MiGetPteAddress((unsigned __int64)v15), PteAddress = MiGetPteAddress((unsigned __int64)v71), PteAddress != v27) )
  {
    v24 |= 2uLL;
    *v22 = v24;
  }
  v71 = v15;
  if ( v15 == v70 )
    *v22 = v24 | 1;
  v66 = (char *)(v22 + 1);
  if ( (unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
  {
    v28 = v20;
    v13 = v60;
    if ( MiUseSlabAllocator((__int64)ControlAreaPartition, (_BYTE *)v60, v28) )
    {
      SlabPage = MiGetSlabPage(v30, (*(unsigned __int16 *)(v60 + 32) >> 1) & 0x1F, (__int64 *)0xFFFFFFFFFFFFFFFFLL);
      if ( SlabPage == -1 )
      {
        v31 = v61;
LABEL_103:
        v41 = (__int64)ControlAreaPartition;
        MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
        v19 = v25;
        v42 = v59;
        if ( !v59 )
        {
          v43 = -1073741801;
          goto LABEL_54;
        }
LABEL_53:
        v43 = v78;
        goto LABEL_54;
      }
      MiSetPfnLink((_QWORD *)(48 * SlabPage - 0x58000000000LL), v11[6]);
      v11[6] = v56;
    }
    else
    {
      v31 = v61;
      if ( v61 > AvailablePagesExcludeSlists + 160 )
        goto LABEL_103;
      ++v61;
      v13 = v29;
    }
    ++v59;
    goto LABEL_30;
  }
  v42 = v59;
  v57 = v78;
  v19 = v63;
  v31 = v61;
  if ( !v59 )
    v57 = -1073741670;
  v41 = (__int64)ControlAreaPartition;
  v43 = v57;
LABEL_54:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v65;
  if ( !v42 )
    goto LABEL_71;
  if ( v31 )
  {
    v78 = v31;
    PageChain = MiGetPageChain(v41, (__int64)v73, (v75 >> byte_14043B109) + 1, v68, 0, -1LL, (unsigned __int64 *)va);
    v45 = v78;
    v46 = (_QWORD *)PageChain;
    if ( v78 != v61 )
    {
      MiReturnFaultCharges(v41, v61 - v78, 1);
      v58 = v45 - v61;
      v3 = v58 + v42 == 0;
      v42 += v58;
      v59 = v42;
      if ( v3 )
        v43 = -1073741801;
    }
    if ( v46 )
    {
      do
      {
        v47 = v46[3] & 0xFFFFFFFFFLL;
        if ( v47 == 0xFFFFFFFFFLL )
          v48 = 0LL;
        else
          v48 = 48 * v47 - 0x58000000000LL;
        MiSetPfnLink(v46, v11[5]);
        v11[5] = v46;
        MiSetPfnBlink(v49, 0LL, 0);
        v46 = (_QWORD *)v48;
      }
      while ( v48 );
      v42 = v59;
    }
  }
  if ( v42 )
  {
    v50 = (unsigned int)v82;
    v11[9] = v19;
    *((_DWORD *)v11 + 17) = (v66 - (char *)v11 - 112) >> 3;
    Mdls = MiPfAllocateMdls(v11, v50, 0LL);
    if ( (_QWORD *)v11[12] == v11 + 12 )
    {
      MiReleaseReadListResources(v11);
      ExFreePoolWithTag(v11, 0);
      v11 = 0LL;
    }
    else
    {
      Mdls = 0;
    }
    *v83 = v11;
    return Mdls;
  }
  else
  {
LABEL_71:
    MiReleaseReadListResources(v11);
    ExFreePoolWithTag(v11, 0);
    return v43;
  }
}
