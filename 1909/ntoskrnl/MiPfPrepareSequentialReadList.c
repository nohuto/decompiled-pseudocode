/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x140607B90
 * Callers:
 *     MmPrefetchForCacheManager @ 0x1406475F8 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1406E7830 (MiPrefetchControlArea.c)
 * Callees:
 *     MiReadPteShadow @ 0x14004B4D0 (MiReadPteShadow.c)
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiControlAreaUsingExtents @ 0x14006EFE0 (MiControlAreaUsingExtents.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x140072780 (MiGetControlAreaPtes.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140094B04 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiGetControlAreaPartition @ 0x1400979D0 (MiGetControlAreaPartition.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400A4880 (MiUpdatePfnPriorityByPte.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     MiEndingOffsetWithLock @ 0x1400B88C0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiSetPfnLink @ 0x1400B8CB8 (MiSetPfnLink.c)
 *     MiUseSlabAllocator @ 0x1400BAD50 (MiUseSlabAllocator.c)
 *     MiSetPfnBlink @ 0x1400BB420 (MiSetPfnBlink.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BFAD4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x140134E94 (MiGetAvailablePagesExcludeSlists.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     MiGetSharedProtos @ 0x14015CC6C (MiGetSharedProtos.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiRefillPurgedExtents @ 0x1402CCC34 (MiRefillPurgedExtents.c)
 *     MiGetSlabAllocator @ 0x1402DC0F8 (MiGetSlabAllocator.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiPfAllocateMdls @ 0x140647770 (MiPfAllocateMdls.c)
 *     MiReleaseReadListResources @ 0x140647BD8 (MiReleaseReadListResources.c)
 */

__int64 MiPfPrepareSequentialReadList(__int64 a1, __int64 a2, unsigned __int64 a3, ...)
{
  unsigned __int64 v3; // r13
  bool v4; // zf
  unsigned __int64 ControlAreaPtes; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // r14
  int v13; // eax
  unsigned int *v14; // rbx
  __int64 *v15; // rsi
  __int64 v16; // rdi
  int v17; // edx
  unsigned int v18; // ebp
  __int64 v19; // rbx
  unsigned int *v20; // r10
  _QWORD *v21; // r11
  _QWORD *v22; // rax
  unsigned __int64 v23; // r8
  _QWORD *v24; // r14
  __int64 PteAddress; // rax
  __int64 v26; // rdx
  __int16 v27; // r8
  unsigned int *v28; // rdx
  __int64 v29; // r11
  unsigned __int64 v30; // rbx
  int v31; // ecx
  unsigned int v32; // r14d
  unsigned __int64 v33; // r14
  _QWORD *v34; // rsi
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  _QWORD *v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  _QWORD *v40; // rbp
  __int64 v41; // r12
  __int64 v42; // r14
  __int64 PageChain; // rax
  unsigned __int64 v44; // rbx
  _QWORD *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned int Mdls; // ebx
  __int64 SharedProtos; // rax
  int v53; // eax
  __int64 SlabAllocator; // rax
  _QWORD *v55; // r11
  __int64 v56; // rax
  __int64 v57; // r11
  int v58; // eax
  unsigned __int64 v59; // rbx
  __int64 v60; // [rsp+40h] [rbp-C8h]
  unsigned int *v61; // [rsp+48h] [rbp-C0h]
  _QWORD *v62; // [rsp+50h] [rbp-B8h]
  ULONG_PTR *ControlAreaPartition; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+60h] [rbp-A8h]
  __int64 v65; // [rsp+68h] [rbp-A0h]
  _QWORD *v66; // [rsp+78h] [rbp-90h]
  char *v67; // [rsp+80h] [rbp-88h]
  unsigned __int64 v68; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v69; // [rsp+90h] [rbp-78h]
  unsigned __int64 v70; // [rsp+98h] [rbp-70h]
  __int64 *v71; // [rsp+A0h] [rbp-68h]
  __int64 *v72; // [rsp+A8h] [rbp-60h]
  __int64 AvailablePagesExcludeSlists; // [rsp+B0h] [rbp-58h]
  unsigned __int16 *v74; // [rsp+B8h] [rbp-50h]
  char v75[8]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v79; // [rsp+128h] [rbp+20h] BYREF
  va_list va; // [rsp+128h] [rbp+20h]
  unsigned __int64 v81; // [rsp+130h] [rbp+28h]
  __int64 v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]
  _QWORD *v84; // [rsp+148h] [rbp+40h]
  va_list va1; // [rsp+150h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v79 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
  v83 = va_arg(va1, _QWORD);
  v84 = va_arg(va1, _QWORD *);
  v3 = 0LL;
  v4 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v76 = 0LL;
  *v84 = 0LL;
  if ( !v4 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  v8 = v81;
  if ( v81 )
  {
    v9 = v81 >> 12;
    if ( v81 >> 12 < 0x100000000LL && (unsigned int)v9 <= ControlAreaPtes )
      goto LABEL_6;
    return 3221225713LL;
  }
  if ( ControlAreaPtes >= 0x100000000LL )
    return 3221225713LL;
  LODWORD(v9) = ControlAreaPtes;
LABEL_6:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v9 - 1) + 144, 0x6C526D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  memset(PoolWithTag + 6, 0, 0x20uLL);
  *v11 = 0LL;
  v11[1] = a2;
  v12 = 0LL;
  v11[16] = v11 + 15;
  v11[15] = v11 + 15;
  *(_QWORD *)((char *)v11 + 108) = 0LL;
  v11[2] = 0LL;
  v11[4] = v11 + 3;
  v11[3] = v11 + 3;
  v61 = (unsigned int *)(a2 + 128);
  v13 = (*(unsigned __int16 *)(a2 + 160) >> 1) & 0x1F;
  v68 = 0LL;
  v60 = 0LL;
  v64 = 0LL;
  v62 = 0LL;
  v72 = 0LL;
  v69 = v13;
  if ( v8 )
  {
    v14 = MiOffsetToProtos((_DWORD *)a2, a3, &v68);
    v61 = v14;
  }
  else
  {
    v14 = (unsigned int *)(a2 + 128);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a2);
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)ControlAreaPartition);
  v15 = 0LL;
  v71 = 0LL;
  v70 = 0LL;
  if ( a1 )
  {
    v66 = *(_QWORD **)(a1 + 32);
    v16 = *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u;
  }
  else
  {
    v66 = 0LL;
    v16 = 0LL;
  }
  *((_DWORD *)v11 + 20) = v82;
  *((_DWORD *)v11 + 21) = 5;
  *((_DWORD *)v11 + 22) = 7;
  v17 = (*(_DWORD *)(a2 + 56) >> 20) & 0x3F;
  v67 = (char *)(v11 + 17);
  v74 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  MiInitializePageColorBase((__int64)v74, v17, (__int64)v75);
  LODWORD(v79) = 0;
  v18 = 0;
  if ( !(_DWORD)v9 )
  {
    v41 = (__int64)ControlAreaPartition;
    v30 = 0LL;
    v40 = 0LL;
    v42 = 0LL;
    goto LABEL_54;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)v15 >= v3 )
    {
      if ( v15 )
      {
        v14 = (unsigned int *)*((_QWORD *)v14 + 2);
        v61 = v14;
        if ( !v14 )
        {
LABEL_52:
          v30 = v64;
          v40 = v62;
          v41 = (__int64)ControlAreaPartition;
          v42 = v60;
          goto LABEL_53;
        }
        v68 = 0LL;
      }
      v31 = *(_DWORD *)(a2 + 56);
      if ( (v31 & 0x20) != 0 )
      {
        v33 = *((_QWORD *)v14 + 1);
        if ( (*((_BYTE *)v14 + 34) & 2) != 0 && (v31 & 0x4000000) != 0 )
        {
          if ( !*((_QWORD *)v14 + 3) )
          {
            v15 = (__int64 *)(v3 - 8);
            goto LABEL_33;
          }
          SharedProtos = MiGetSharedProtos(a2);
          if ( !SharedProtos )
          {
            v15 = (__int64 *)(v3 - 8);
            goto LABEL_33;
          }
          v33 = *(_QWORD *)(SharedProtos + 72);
        }
      }
      else
      {
        LODWORD(v79) = MiAddViewsForSection((__int64 *)v14, v14[11], 4);
        v32 = v79;
        if ( (v79 & 0x80000000) != 0LL )
        {
          if ( v64 )
            MiReturnFaultCharges((__int64)ControlAreaPartition, v64, 1);
          MiReleaseReadListResources(v11);
          ExFreePoolWithTag(v11, 0);
          return v32;
        }
        v33 = *((_QWORD *)v14 + 1);
        v34 = v11 + 3;
        v35 = (_DWORD *)v11[4];
        if ( (_QWORD *)*v34 == v34 || v35[4] == 5 )
        {
          v36 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
          v35 = v36;
          if ( !v36 )
          {
            MiRemoveViewsFromSectionWithPfn((__int64 *)v14, v14[11], 4u);
            MiReleaseReadListResources(v11);
            ExFreePoolWithTag(v11, 0);
            return 3221225626LL;
          }
          v36[4] = 0;
          v37 = (_QWORD *)v11[4];
          if ( (_QWORD *)*v37 != v34 )
            __fastfail(3u);
          *(_QWORD *)v35 = v34;
          *((_QWORD *)v35 + 1) = v37;
          *v37 = v35;
          v11[4] = v35;
        }
        if ( !v11[2] )
          v11[2] = v14;
        *(_QWORD *)&v35[2 * v35[4]++ + 6] = v14;
      }
      v15 = (__int64 *)(v33 + 8 * v68);
      v3 = v33 + 8LL * v14[11];
      v38 = MiStartingOffset((__int64 *)v14, v33, v83);
      v39 = MiEndingOffsetWithLock(v61);
      if ( (((_WORD)v39 - (_WORD)v38) & 0xFFF) != 0 )
        v71 = (__int64 *)(v33 + 8 * (((v39 - v38 + 4095) >> 12) - 1));
      else
        v71 = 0LL;
      if ( v66 )
      {
        HIDWORD(v65) = HIDWORD(v38);
        v70 = v33;
        LODWORD(v65) = v38 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
        v16 = v65;
      }
      v12 = v62;
    }
    v19 = *v15;
    if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v19) = MiReadPteShadow((unsigned __int64)v15, *v15);
    if ( (v19 & 1) != 0 )
      goto LABEL_31;
    if ( (v19 & 0x400) == 0 )
    {
      if ( (v19 & 0x800) != 0 )
      {
LABEL_31:
        MiUpdatePfnPriorityByPte((unsigned __int64)v15, v82);
      }
      else if ( IS_PTE_NOT_DEMAND_ZERO(v19) )
      {
        goto LABEL_19;
      }
      v14 = v61;
      goto LABEL_33;
    }
    if ( !MiControlAreaUsingExtents(a2) )
      break;
    v14 = v61;
    v53 = MiRefillPurgedExtents((__int64 *)v61);
    LODWORD(v79) = v53;
    if ( v53 < 0 )
    {
      v42 = v60;
      v30 = v64;
      v40 = v62;
      v41 = (__int64)ControlAreaPartition;
      if ( v60 )
        LODWORD(v3) = v53;
      else
        LODWORD(v3) = -1073741670;
      goto LABEL_54;
    }
LABEL_33:
    ++v18;
    ++v15;
    if ( v18 >= (unsigned int)v9 )
      goto LABEL_52;
    v12 = v62;
  }
  if ( v66 )
  {
    v16 += (__int64)((__int64)v15 - v70) >> 3 << 12;
    v70 = (unsigned __int64)v15;
    *v66++ = v16;
  }
LABEL_19:
  v22 = v21;
  *v21 = v15;
  if ( v12 )
    v22 = v12;
  v23 = (unsigned __int64)v15;
  v62 = v22;
  v24 = v22;
  if ( v20 != v61
    || (MiGetPteAddress((unsigned __int64)v15), PteAddress = MiGetPteAddress((unsigned __int64)v72), PteAddress != v26) )
  {
    v23 |= 2uLL;
    *v21 = v23;
  }
  v72 = v15;
  if ( v15 == v71 )
    *v21 = v23 | 1;
  v67 = (char *)(v21 + 1);
  if ( (unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
  {
    v27 = v19;
    v14 = v61;
    if ( (unsigned int)MiUseSlabAllocator((__int64)ControlAreaPartition, v61, v27, 0LL) )
    {
      if ( MiGetSlabPage(
             v29,
             (*((unsigned __int16 *)v61 + 16) >> 1) & 0x1F,
             0,
             (__int64 *)0xFFFFFFFFFFFFFFFFLL,
             0x20000u) == -1 )
      {
        v30 = v64;
LABEL_102:
        v41 = (__int64)ControlAreaPartition;
        MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
        v40 = v24;
        v42 = v60;
        if ( !v60 )
        {
          LODWORD(v3) = -1073741801;
          goto LABEL_54;
        }
LABEL_53:
        LODWORD(v3) = v79;
        goto LABEL_54;
      }
      SlabAllocator = MiGetSlabAllocator(
                        (__int64)ControlAreaPartition,
                        0,
                        (*((unsigned __int16 *)v61 + 16) >> 1) & 0x1F);
      MiSetPfnLink(v55, v11[*(int *)(SlabAllocator + 52) + 6]);
      v11[*(int *)(v56 + 52) + 6] = v57;
    }
    else
    {
      v30 = v64;
      if ( v64 > AvailablePagesExcludeSlists + 160 )
        goto LABEL_102;
      ++v64;
      v14 = v28;
    }
    ++v60;
    goto LABEL_33;
  }
  v42 = v60;
  v58 = v79;
  v40 = v62;
  v30 = v64;
  if ( !v60 )
    v58 = -1073741670;
  v41 = (__int64)ControlAreaPartition;
  LODWORD(v3) = v58;
LABEL_54:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v66;
  if ( !v42 )
    goto LABEL_70;
  if ( v30 )
  {
    v79 = v30;
    PageChain = MiGetPageChain(
                  v41,
                  (__int64)v74,
                  (HIDWORD(v76) >> byte_14046574D) + 1,
                  v69,
                  0,
                  -1LL,
                  (unsigned __int64 *)va);
    v44 = v79;
    v45 = (_QWORD *)PageChain;
    if ( v79 != v64 )
    {
      MiReturnFaultCharges(v41, v64 - v79, 1);
      v59 = v44 - v64;
      v4 = v59 + v42 == 0;
      v42 += v59;
      v60 = v42;
      if ( v4 )
        LODWORD(v3) = -1073741801;
    }
    if ( v45 )
    {
      do
      {
        v46 = v45[3] & 0xFFFFFFFFFLL;
        if ( v46 == 0xFFFFFFFFFLL )
          v47 = 0LL;
        else
          v47 = 48 * v46 - 0x58000000000LL;
        MiSetPfnLink(v45, v11[5]);
        v11[5] = v45;
        MiSetPfnBlink(v48, 0LL, 0);
        v45 = (_QWORD *)v47;
      }
      while ( v47 );
      v42 = v60;
    }
  }
  if ( v42 )
  {
    v49 = (unsigned int)v83;
    v11[12] = v40;
    *((_DWORD *)v11 + 23) = (v67 - (char *)v11 - 136) >> 3;
    Mdls = MiPfAllocateMdls(v11, v49, 0LL);
    if ( (_QWORD *)v11[15] == v11 + 15 )
    {
      MiReleaseReadListResources(v11);
      ExFreePoolWithTag(v11, 0);
      v11 = 0LL;
    }
    else
    {
      Mdls = 0;
    }
    *v84 = v11;
    return Mdls;
  }
  else
  {
LABEL_70:
    MiReleaseReadListResources(v11);
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)v3;
  }
}
