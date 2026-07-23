/*
 * XREFs of MiPfPrepareReadList @ 0x1405E0DE0
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiEndingOffsetWithLock @ 0x140031000 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x1400310D8 (MiStartingOffsetNeedLock.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiGetNextPageColor @ 0x140031260 (MiGetNextPageColor.c)
 *     MiPrefetchNormally @ 0x140031280 (MiPrefetchNormally.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiUpdatePfnPriorityByPte @ 0x14003DA70 (MiUpdatePfnPriorityByPte.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MiUseSlabAllocator @ 0x140065C80 (MiUseSlabAllocator.c)
 *     MiSetPfnLink @ 0x140065C94 (MiSetPfnLink.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiReadPteShadow @ 0x14006C540 (MiReadPteShadow.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x140077B30 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400DEE04 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     MiRefillPurgedExtents @ 0x1402B6E40 (MiRefillPurgedExtents.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140663A90 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140699460 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareReadList(__int64 *a1, unsigned __int64 **a2, _QWORD *a3)
{
  __int64 *v3; // r12
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 *v8; // r9
  __int64 v9; // rsi
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v11; // r15
  _QWORD *v12; // rax
  __int64 SubsectionNode; // rbp
  _KPROCESS *Process; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r11
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 *v22; // r9
  __int64 v23; // rbx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  __int64 *v26; // r10
  unsigned __int64 *v27; // rax
  __int64 PteAddress; // rax
  __int64 v29; // rdx
  ULONG_PTR *v30; // rcx
  unsigned __int64 *v31; // r10
  unsigned int v32; // r9d
  __int64 SlabPage; // rax
  _QWORD *v34; // r8
  unsigned __int64 v35; // r8
  _DWORD *v36; // rcx
  int v37; // edi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r11
  __int64 v40; // r8
  __int64 v41; // rdx
  bool v42; // zf
  __int64 v43; // rcx
  unsigned __int64 *v44; // rax
  unsigned int Mdls; // ebx
  _DWORD *v47; // rcx
  _DWORD *v48; // rax
  unsigned __int64 **v49; // rax
  int v50; // edx
  __int64 v51; // rdx
  unsigned __int64 v52; // r8
  int v53; // eax
  __int64 v54; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v55; // [rsp+28h] [rbp-A0h]
  __int64 v56; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v57; // [rsp+38h] [rbp-90h]
  unsigned int v58; // [rsp+40h] [rbp-88h]
  unsigned int v59; // [rsp+44h] [rbp-84h]
  unsigned __int64 v60; // [rsp+48h] [rbp-80h]
  __int64 v61; // [rsp+50h] [rbp-78h]
  __int64 v62; // [rsp+58h] [rbp-70h]
  unsigned __int64 v63; // [rsp+60h] [rbp-68h]
  __int64 ControlAreaPartition; // [rsp+68h] [rbp-60h]
  _BYTE v65[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v66; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 **v67; // [rsp+D8h] [rbp+10h]
  _QWORD *v68; // [rsp+E0h] [rbp+18h]
  unsigned int SessionId; // [rsp+E8h] [rbp+20h]

  v68 = a3;
  v67 = a2;
  v3 = 0LL;
  *a2 = 0LL;
  v5 = *((_DWORD *)a1 + 4);
  if ( (v5 & 0x180) != 0 )
    return 3221225711LL;
  v6 = *a1;
  v7 = *((_DWORD *)a1 + 2);
  v59 = v7;
  v8 = *(__int64 **)(v6 + 40);
  if ( *((_DWORD *)a1 + 3) )
    v8 += 2;
  v9 = *v8;
  v56 = *v8;
  if ( (*(_DWORD *)(*v8 + 56) & 0x400) != 0 || !*(_QWORD *)(v9 + 64) )
    return 3221225711LL;
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (v7 - 1) + 120, 0x6C526D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v9;
  v12 = PoolWithTag + 12;
  SubsectionNode = v9 + 128;
  v12[1] = v12;
  *v12 = v12;
  *(unsigned __int64 *)((char *)v11 + 84) = 0LL;
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
    v15 = a1[2];
    if ( v15 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos(v9, v15, &v66)) == 0 )
    {
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  v63 = 0LL;
  v54 = 0LL;
  *((_DWORD *)v11 + 14) = v5 & 7;
  v58 = v5 & 7;
  v55 = 0LL;
  v61 = 0LL;
  v57 = v11 + 14;
  v60 = 0LL;
  v62 = 0LL;
  *((_DWORD *)v11 + 15) = (v5 & 0x40) != 0 ? 5 : 0;
  LODWORD(v66) = 0;
  v16 = 0LL;
  *((_DWORD *)v11 + 16) = (v5 >> 3) & 7;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], (*(_DWORD *)(v9 + 56) >> 20) & 0x3F, (__int64)v65);
  v18 = 0LL;
  if ( !v59 )
  {
    Mdls = 0;
    goto LABEL_64;
  }
  v19 = v56;
  while ( 1 )
  {
    v20 = a1[v18 + 2] & 0xFFFFFFFFFFFFFF80uLL;
    if ( v20 >= v17 || v16 > v20 )
      break;
    v21 = *(_QWORD *)(SubsectionNode + 8);
    v22 = (__int64 *)(v21 + 8 * ((v20 - v16) >> 12));
    if ( (unsigned __int64)v22 >= v21 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_60;
    if ( (*(_BYTE *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v19 + 56) & 0x4000000) != 0 )
      goto LABEL_21;
LABEL_17:
    if ( v22 == v3 )
      goto LABEL_21;
    v23 = *v22;
    v3 = v22;
    if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v23) = MiReadPteShadow((unsigned __int64)v22, *v22);
    if ( (v23 & 1) != 0 )
    {
LABEL_20:
      MiUpdatePfnPriorityByPte((unsigned __int64)v22, v58);
      goto LABEL_21;
    }
    if ( (v23 & 0x400) != 0 )
    {
      if ( !MiControlAreaUsingExtents(v19) )
        goto LABEL_29;
      LODWORD(v66) = MiRefillPurgedExtents((__int64 *)SubsectionNode);
      if ( (v66 & 0x80000000) != 0LL )
      {
        if ( !v54 )
        {
          Mdls = -1073741670;
LABEL_64:
          MiReleaseReadListResources(v11);
          ExFreePoolWithTag(v11, 0);
          return Mdls;
        }
        v44 = v55;
LABEL_112:
        v31 = v57;
        goto LABEL_81;
      }
    }
    else
    {
      if ( (v23 & 0x800) != 0 )
        goto LABEL_20;
      if ( IS_PTE_NOT_DEMAND_ZERO(v23) )
      {
LABEL_29:
        v25 = v24;
        v26 = (__int64 *)v57;
        v27 = v57;
        if ( v55 )
          v27 = v55;
        v55 = v27;
        *v57 = v24;
        if ( v61 != SubsectionNode || (MiGetPteAddress(v24), PteAddress = MiGetPteAddress(v63), PteAddress != v29) )
        {
          v25 |= 2uLL;
          v61 = SubsectionNode;
          *v26 = v25;
        }
        v63 = v24;
        if ( v24 == v62 )
          *v26 = v25 | 1;
        v57 = (unsigned __int64 *)(v26 + 1);
        if ( !MiPrefetchNormally(ControlAreaPartition) )
          goto LABEL_61;
        if ( v68 )
        {
          if ( !*v68 )
            goto LABEL_61;
          --*v68;
        }
        if ( !(unsigned int)MiObtainFaultCharges(v30, 1u, 1) )
        {
          v53 = v66;
          v43 = v54;
          v31 = v57;
          if ( !v54 )
            v53 = -1073741670;
          LODWORD(v66) = v53;
          goto LABEL_62;
        }
        MiGetNextPageColor((__int64)v65);
        if ( MiUseSlabAllocator(ControlAreaPartition, (_BYTE *)SubsectionNode, v23) )
          SlabPage = MiGetSlabPage(
                       ControlAreaPartition,
                       (*(unsigned __int16 *)(SubsectionNode + 32) >> 1) & 0x1F,
                       (__int64 *)0xFFFFFFFFFFFFFFFFLL);
        else
          SlabPage = MiGetPage(ControlAreaPartition, v32, 0x200u);
        if ( SlabPage == -1 )
        {
          MiReturnFaultCharges(ControlAreaPartition, 1uLL, 1);
          v44 = v55;
          if ( !v54 )
          {
            Mdls = -1073741801;
            goto LABEL_64;
          }
          goto LABEL_112;
        }
        if ( MiIsPfnFromSlabAllocation(48 * SlabPage - 0x58000000000LL) )
        {
          MiSetPfnLink(v34, v11[6]);
          v11[6] = v52;
        }
        else
        {
          MiSetPfnLink(v34, v11[5]);
          v11[5] = v35;
        }
        ++v54;
      }
    }
LABEL_21:
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= v59 )
      goto LABEL_60;
    v17 = v60;
  }
  v36 = (_DWORD *)v56;
  v37 = 0;
  while ( 1 )
  {
    if ( (v36[14] & 0x20) != 0
      && !*(_DWORD *)(SubsectionNode + 36)
      && *(_QWORD *)(SubsectionNode + 8) != *(_QWORD *)(*(_QWORD *)v36 + 64LL) )
    {
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
LABEL_76:
      v36 = (_DWORD *)v56;
      goto LABEL_59;
    }
    v16 = MiStartingOffsetNeedLock((_QWORD *)SubsectionNode, SessionId);
    v38 = MiEndingOffsetWithLock((__int64 *)SubsectionNode);
    v60 = v38;
    v39 = v38;
    if ( v16 > v20 )
      goto LABEL_103;
    if ( v20 < v38 )
      break;
    if ( v20 < v16 )
    {
LABEL_103:
      v19 = v56;
      goto LABEL_21;
    }
    v36 = (_DWORD *)v56;
    if ( (*(_DWORD *)(v56 + 56) & 0x20) == 0 )
    {
      if ( v20 > 0x3FFFFFFFFFF000LL )
        goto LABEL_60;
      SubsectionNode = (__int64)MiLocateSubsectionNode(v56, v20, 0);
      goto LABEL_76;
    }
    SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
LABEL_59:
    if ( !SubsectionNode )
      goto LABEL_60;
  }
  v40 = v56;
  if ( (*(_DWORD *)(v56 + 56) & 0x20) != 0 )
    goto LABEL_50;
  LODWORD(v66) = MiAddViewsForSection((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4LL);
  if ( (v66 & 0x80000000) != 0LL )
    goto LABEL_60;
  v47 = (_DWORD *)v11[4];
  if ( (unsigned __int64 *)v11[3] != v11 + 3 )
  {
    v50 = v47[4];
    if ( v50 != 5 )
    {
LABEL_72:
      v39 = v60;
      v40 = v56;
      *(_QWORD *)&v47[2 * v50 + 6] = SubsectionNode;
      ++v47[4];
      if ( !v11[2] )
        v11[2] = SubsectionNode;
LABEL_50:
      v41 = *(_QWORD *)(SubsectionNode + 8);
      v22 = (__int64 *)(v41 + 8 * ((v20 - v16) >> 12));
      if ( (unsigned __int64)v22 >= v41 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
        goto LABEL_60;
      if ( (*(_BYTE *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v40 + 56) & 0x4000000) != 0 )
        v37 = 1;
      if ( (((_WORD)v39 - (_WORD)v16) & 0xFFF) != 0 )
        v62 = v41 + 8 * (((v39 - v16 + 4095) >> 12) - 1);
      else
        v62 = 0LL;
      v42 = v37 == 1;
      v19 = v56;
      if ( v42 )
        goto LABEL_21;
      goto LABEL_17;
    }
  }
  v48 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
  v47 = v48;
  if ( v48 )
  {
    v48[4] = 0;
    v49 = (unsigned __int64 **)v11[4];
    if ( *v49 != v11 + 3 )
      __fastfail(3u);
    *(_QWORD *)v47 = v11 + 3;
    *((_QWORD *)v47 + 1) = v49;
    *v49 = (unsigned __int64 *)v47;
    v11[4] = (unsigned __int64)v47;
    v50 = v47[4];
    goto LABEL_72;
  }
  MiRemoveViewsFromSectionWithPfn((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 4u);
LABEL_60:
  v31 = v57;
LABEL_61:
  v43 = v54;
LABEL_62:
  v44 = v55;
  if ( !v43 )
  {
    Mdls = v66;
    goto LABEL_64;
  }
LABEL_81:
  v51 = SessionId;
  v11[9] = (unsigned __int64)v44;
  *((_DWORD *)v11 + 17) = ((char *)v31 - (char *)v11 - 112) >> 3;
  Mdls = MiPfAllocateMdls(v11, v51, 0LL);
  if ( (unsigned __int64 *)v11[12] == v11 + 12 )
  {
    MiReleaseReadListResources(v11);
    ExFreePoolWithTag(v11, 0);
    v11 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *v67 = v11;
  return Mdls;
}
