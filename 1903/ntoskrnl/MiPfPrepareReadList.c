/*
 * XREFs of MiPfPrepareReadList @ 0x140687EA0
 * Callers:
 *     MmPrefetchPagesEx @ 0x14066D9A8 (MmPrefetchPagesEx.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiReadPteShadow @ 0x14004B430 (MiReadPteShadow.c)
 *     MiObtainFaultCharges @ 0x140053790 (MiObtainFaultCharges.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiControlAreaUsingExtents @ 0x14006ED70 (MiControlAreaUsingExtents.c)
 *     MiAddViewsForSection @ 0x140071B80 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x1400734A0 (MiLocateSubsectionNode.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A72D4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400C4A00 (MiUpdatePfnPriorityByPte.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     MiEndingOffsetWithLock @ 0x1400D8A40 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x1400D8D08 (MiStartingOffsetNeedLock.c)
 *     MiSetPfnLink @ 0x1400D8E38 (MiSetPfnLink.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocator @ 0x1400DAED0 (MiUseSlabAllocator.c)
 *     MiGetNextPageColor @ 0x1400DAF0C (MiGetNextPageColor.c)
 *     MiPrefetchNormally @ 0x1400DAF28 (MiPrefetchNormally.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReturnFaultCharges @ 0x140135A54 (MiReturnFaultCharges.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiRefillPurgedExtents @ 0x1402CCED4 (MiRefillPurgedExtents.c)
 *     MiGetSlabAllocator @ 0x1402DC398 (MiGetSlabAllocator.c)
 *     MiGetSlabPage @ 0x1402DC4E4 (MiGetSlabPage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiPfAllocateMdls @ 0x14066DD10 (MiPfAllocateMdls.c)
 *     MiReleaseReadListResources @ 0x14066E178 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MiPfPrepareReadList(unsigned __int64 *a1, unsigned __int64 **a2, _QWORD *a3)
{
  __int64 *v4; // r15
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v11; // r13
  unsigned int *v12; // rbp
  _KPROCESS *Process; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r11
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *v20; // r9
  __int64 v21; // rbx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 *v24; // rax
  __int64 PteAddress; // rax
  __int64 v26; // rdx
  char *v27; // rsi
  ULONG_PTR *v28; // r10
  unsigned int v29; // r9d
  unsigned int v30; // r11d
  __int64 SlabPage; // rax
  _QWORD *v32; // r11
  unsigned __int64 v33; // r11
  _DWORD *v34; // rcx
  int v35; // esi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r11
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 *v41; // rax
  unsigned int Mdls; // ebx
  _DWORD *v44; // rcx
  _DWORD *v45; // rax
  unsigned __int64 **v46; // rax
  int v47; // edx
  unsigned int v48; // edx
  unsigned int *SubsectionNode; // rax
  __int64 SlabAllocator; // rax
  _QWORD *v51; // r11
  __int64 v52; // rax
  unsigned __int64 v53; // r11
  int v54; // eax
  __int64 v55; // [rsp+30h] [rbp-A8h]
  unsigned __int64 *v56; // [rsp+38h] [rbp-A0h]
  unsigned __int64 *v57; // [rsp+40h] [rbp-98h]
  __int64 v58; // [rsp+48h] [rbp-90h]
  unsigned int v59; // [rsp+50h] [rbp-88h]
  unsigned int v60; // [rsp+54h] [rbp-84h]
  unsigned __int64 v61; // [rsp+58h] [rbp-80h]
  unsigned int *v62; // [rsp+60h] [rbp-78h]
  __int64 v63; // [rsp+68h] [rbp-70h]
  unsigned __int64 v64; // [rsp+70h] [rbp-68h]
  __int64 ControlAreaPartition; // [rsp+78h] [rbp-60h]
  _QWORD v66[3]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+E0h] [rbp+8h] BYREF
  unsigned __int64 **v68; // [rsp+E8h] [rbp+10h]
  _QWORD *v69; // [rsp+F0h] [rbp+18h]
  unsigned int SessionId; // [rsp+F8h] [rbp+20h]

  v69 = a3;
  v68 = a2;
  v4 = 0LL;
  *a2 = 0LL;
  v66[0] = 0LL;
  v66[1] = 0LL;
  v5 = *((_DWORD *)a1 + 4);
  if ( (v5 & 0x180) != 0 )
    return 3221225711LL;
  v6 = *a1;
  v7 = *((_DWORD *)a1 + 2);
  v60 = v7;
  v8 = *(_QWORD *)(*a1 + 40) + 16LL;
  if ( !*((_DWORD *)a1 + 3) )
    v8 = *(_QWORD *)(v6 + 40);
  v9 = *(_QWORD *)v8;
  v58 = *(_QWORD *)v8;
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 56LL) & 0x400) != 0 || !*(_QWORD *)(v9 + 64) )
    return 3221225711LL;
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (v7 - 1) + 144, 0x6C526D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  memset(PoolWithTag + 6, 0, 0x20uLL);
  *v11 = 0LL;
  v11[1] = v9;
  v12 = (unsigned int *)(v9 + 128);
  v11[16] = (unsigned __int64)(v11 + 15);
  v11[15] = (unsigned __int64)(v11 + 15);
  *(unsigned __int64 *)((char *)v11 + 108) = 0LL;
  v11[2] = 0LL;
  v11[4] = (unsigned __int64)(v11 + 3);
  v11[3] = (unsigned __int64)(v11 + 3);
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = MiGetControlAreaPartition(v9);
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)Process);
  }
  else
  {
    v14 = a1[2];
    if ( v14 > 0x3FFFFFFFFFF000LL || (v12 = MiOffsetToProtos((_DWORD *)v9, v14, &v67)) == 0LL )
    {
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  v64 = 0LL;
  v55 = 0LL;
  *((_DWORD *)v11 + 20) = v5 & 7;
  v59 = v5 & 7;
  v56 = 0LL;
  v62 = 0LL;
  v57 = v11 + 17;
  v61 = 0LL;
  v63 = 0LL;
  *((_DWORD *)v11 + 21) = (v5 & 0x40) != 0 ? 5 : 0;
  LODWORD(v67) = 0;
  v15 = 0LL;
  *((_DWORD *)v11 + 22) = (v5 >> 3) & 7;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[6], (*(_DWORD *)(v9 + 56) >> 20) & 0x3F, (__int64)v66);
  v17 = 0LL;
  if ( !v60 )
  {
    Mdls = 0;
LABEL_63:
    MiReleaseReadListResources((__int64)v11);
    ExFreePoolWithTag(v11, 0);
    return Mdls;
  }
  while ( 1 )
  {
    v18 = a1[v17 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v18 >= v16 || v15 > v18 )
      break;
    v19 = *((_QWORD *)v12 + 1);
    v20 = (__int64 *)(v19 + 8 * ((v18 - v15) >> 12));
    if ( (unsigned __int64)v20 >= v19 + 8 * (unsigned __int64)v12[11] )
      goto LABEL_59;
    if ( (*((_BYTE *)v12 + 34) & 2) != 0 && (*(_DWORD *)(v9 + 56) & 0x4000000) != 0 )
      goto LABEL_20;
LABEL_16:
    if ( v20 == v4 )
      goto LABEL_20;
    v21 = *v20;
    v4 = v20;
    if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v21) = MiReadPteShadow((unsigned __int64)v20, *v20);
    if ( (v21 & 1) != 0 )
    {
LABEL_19:
      MiUpdatePfnPriorityByPte((unsigned __int64)v20, v59);
      goto LABEL_20;
    }
    if ( (v21 & 0x400) != 0 )
    {
      if ( MiControlAreaUsingExtents(v9) )
      {
        LODWORD(v67) = MiRefillPurgedExtents((__int64 *)v12);
        if ( (v67 & 0x80000000) != 0LL )
        {
          if ( v55 )
          {
            v27 = (char *)v57;
            v41 = v56;
            goto LABEL_79;
          }
          Mdls = -1073741670;
          goto LABEL_63;
        }
        goto LABEL_20;
      }
LABEL_28:
      v23 = v22;
      v24 = v57;
      if ( v56 )
        v24 = v56;
      v56 = v24;
      *v57 = v22;
      if ( v62 != v12 || (MiGetPteAddress(v22), PteAddress = MiGetPteAddress(v64), PteAddress != v26) )
      {
        v23 |= 2uLL;
        v62 = v12;
        *v57 = v23;
      }
      v64 = v22;
      if ( v22 == v63 )
        *v57 = v23 | 1;
      v27 = (char *)++v57;
      if ( !MiPrefetchNormally(ControlAreaPartition, (unsigned int)(*((_DWORD *)v11 + 22) + 1)) )
        goto LABEL_60;
      if ( v69 )
      {
        if ( !*v69 )
          goto LABEL_60;
        --*v69;
      }
      if ( !(unsigned int)MiObtainFaultCharges(v28, 1u, 1) )
      {
        v54 = v67;
        v40 = v55;
        if ( !v55 )
          v54 = -1073741670;
        LODWORD(v67) = v54;
        goto LABEL_61;
      }
      MiGetNextPageColor((__int64)v66);
      if ( (unsigned int)MiUseSlabAllocator(ControlAreaPartition, v12, v21, 0LL) )
        SlabPage = MiGetSlabPage(
                     ControlAreaPartition,
                     (*((unsigned __int16 *)v12 + 16) >> 1) & 0x1F,
                     0,
                     (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                     v29);
      else
        SlabPage = MiGetPage(ControlAreaPartition, v30, 512LL);
      if ( SlabPage == -1 )
      {
        MiReturnFaultCharges(ControlAreaPartition, 1uLL, 1);
        v41 = v56;
        if ( v55 )
          goto LABEL_79;
        Mdls = -1073741801;
        goto LABEL_63;
      }
      if ( MiIsPfnFromSlabAllocation(48 * SlabPage - 0x58000000000LL) )
      {
        SlabAllocator = MiGetSlabAllocator(ControlAreaPartition, 0, (*((unsigned __int16 *)v12 + 16) >> 1) & 0x1F);
        MiSetPfnLink(v51, v11[*(int *)(SlabAllocator + 52) + 6]);
        v11[*(int *)(v52 + 52) + 6] = v53;
      }
      else
      {
        MiSetPfnLink(v32, v11[5]);
        v11[5] = v33;
      }
      ++v55;
      goto LABEL_20;
    }
    if ( (v21 & 0x800) != 0 )
      goto LABEL_19;
    if ( IS_PTE_NOT_DEMAND_ZERO(v21) )
      goto LABEL_28;
LABEL_20:
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= v60 )
      goto LABEL_59;
    v16 = v61;
    v9 = v58;
  }
  v34 = (_DWORD *)v58;
  v35 = 0;
  while ( 1 )
  {
    if ( (v34[14] & 0x20) != 0 && !v12[9] && *((_QWORD *)v12 + 1) != *(_QWORD *)(*(_QWORD *)v34 + 64LL) )
    {
      v12 = (unsigned int *)*((_QWORD *)v12 + 2);
      v34 = (_DWORD *)v58;
      goto LABEL_58;
    }
    v15 = MiStartingOffsetNeedLock((__int64 *)v12, SessionId);
    v36 = MiEndingOffsetWithLock(v12);
    v61 = v36;
    v37 = v36;
    if ( v15 > v18 )
      goto LABEL_20;
    if ( v18 < v36 )
      break;
    if ( v18 < v15 )
      goto LABEL_20;
    v34 = (_DWORD *)v58;
    if ( (*(_DWORD *)(v58 + 56) & 0x20) != 0 )
    {
      v12 = (unsigned int *)*((_QWORD *)v12 + 2);
    }
    else
    {
      if ( v18 > 0x3FFFFFFFFFF000LL )
        goto LABEL_59;
      SubsectionNode = (unsigned int *)MiLocateSubsectionNode(v58, v18, 0);
      v34 = (_DWORD *)v58;
      v12 = SubsectionNode;
    }
LABEL_58:
    if ( !v12 )
      goto LABEL_59;
  }
  v38 = v58;
  if ( (*(_DWORD *)(v58 + 56) & 0x20) != 0 )
    goto LABEL_49;
  LODWORD(v67) = MiAddViewsForSection((__int64 *)v12, v12[11], 4);
  if ( (v67 & 0x80000000) != 0LL )
    goto LABEL_59;
  v44 = (_DWORD *)v11[4];
  if ( (unsigned __int64 *)v11[3] != v11 + 3 )
  {
    v47 = v44[4];
    if ( v47 != 5 )
    {
LABEL_73:
      v37 = v61;
      v38 = v58;
      *(_QWORD *)&v44[2 * v47 + 6] = v12;
      ++v44[4];
      if ( !v11[2] )
        v11[2] = (unsigned __int64)v12;
LABEL_49:
      v39 = *((_QWORD *)v12 + 1);
      v20 = (__int64 *)(v39 + 8 * ((v18 - v15) >> 12));
      if ( (unsigned __int64)v20 >= v39 + 8 * (unsigned __int64)v12[11] )
        goto LABEL_59;
      if ( (*((_BYTE *)v12 + 34) & 2) != 0 && (*(_DWORD *)(v38 + 56) & 0x4000000) != 0 )
        v35 = 1;
      if ( (((_WORD)v37 - (_WORD)v15) & 0xFFF) != 0 )
        v63 = v39 + 8 * (((v37 - v15 + 4095) >> 12) - 1);
      else
        v63 = 0LL;
      if ( v35 != 1 )
      {
        v9 = v58;
        goto LABEL_16;
      }
      goto LABEL_20;
    }
  }
  v45 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
  v44 = v45;
  if ( v45 )
  {
    v45[4] = 0;
    v46 = (unsigned __int64 **)v11[4];
    if ( *v46 != v11 + 3 )
      __fastfail(3u);
    *(_QWORD *)v44 = v11 + 3;
    *((_QWORD *)v44 + 1) = v46;
    *v46 = (unsigned __int64 *)v44;
    v11[4] = (unsigned __int64)v44;
    v47 = v44[4];
    goto LABEL_73;
  }
  MiRemoveViewsFromSectionWithPfn((__int64 *)v12, v12[11], 4u);
LABEL_59:
  v27 = (char *)v57;
LABEL_60:
  v40 = v55;
LABEL_61:
  v41 = v56;
  if ( !v40 )
  {
    Mdls = v67;
    goto LABEL_63;
  }
LABEL_79:
  v48 = SessionId;
  v11[12] = (unsigned __int64)v41;
  *((_DWORD *)v11 + 23) = (v27 - (char *)v11 - 136) >> 3;
  Mdls = MiPfAllocateMdls((__int64)v11, v48, 0LL);
  if ( (unsigned __int64 *)v11[15] == v11 + 15 )
  {
    MiReleaseReadListResources((__int64)v11);
    ExFreePoolWithTag(v11, 0);
    v11 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *v68 = v11;
  return Mdls;
}
