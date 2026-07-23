/*
 * XREFs of RtlRbRemoveNode @ 0x140063910
 * Callers:
 *     RtlpHpSegFreeRangeRemove @ 0x14001F69C (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14005EFAC (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140060280 (RtlpHpSegPageRangeAllocate.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVsChunkSplit @ 0x140062140 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x1400635E0 (RtlpHpVsChunkCoalesce.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14008A450 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14008AA5C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiRemoveTimer2 @ 0x14009FAD0 (KiRemoveTimer2.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400C6DF0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400C70A8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     PfSnNameRemove @ 0x1400D406C (PfSnNameRemove.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400DC578 (MiInvalidatePageFileBitmapsCache.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400EC72C (IoStopDiskIoAttributionForContext.c)
 *     RtlpHpLargeFree @ 0x14010D6C0 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrAlloc @ 0x14010E914 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140110B84 (RtlpHpVaMgrRangeCoalesce.c)
 *     KiSetClockInterval @ 0x140111E80 (KiSetClockInterval.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140115A2C (KiRemoveSchedulingGroupQueue.c)
 *     MiRescanPageFileBitmapPortion @ 0x14012502C (MiRescanPageFileBitmapPortion.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B03BC (KiSetVirtualHeteroClockIntervalRequest.c)
 *     MiRemoveSlabEntry @ 0x1402DCBC0 (MiRemoveSlabEntry.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140307B14 (PspJobIoRateVolumeEntryRemove.c)
 *     VmpFaultEntryRemove @ 0x140329808 (VmpFaultEntryRemove.c)
 *     VmpMergeMemoryRanges @ 0x14032A22C (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14032AC50 (VmpRemoveMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C48F0 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4B70 (EtwpReleaseProviderTraitsReference.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14068DC9C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x14082FC08 (HvpViewMapShrinkStorage.c)
 *     MiDeleteImageHotPatchState @ 0x14088D96C (MiDeleteImageHotPatchState.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408FC430 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  $7D93978C745EB1C2D28075BAF55422B4 v2; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r11
  _RTL_BALANCED_NODE *v7; // r14
  char v8; // r9
  unsigned __int64 v9; // rax
  _RTL_BALANCED_NODE *v10; // r10
  PRTL_BALANCED_NODE v11; // rdi
  unsigned __int64 v12; // rax
  _BOOL8 v13; // rsi
  unsigned __int64 ParentValue; // r9
  char v15; // r9
  _RTL_BALANCED_NODE *v16; // rcx
  unsigned __int64 Min; // rax
  unsigned __int64 v18; // rax
  _RTL_BALANCED_NODE *v19; // rax
  _RTL_BALANCED_NODE *v20; // rcx
  _RTL_BALANCED_NODE *v21; // rax
  _RTL_BALANCED_NODE *v22; // rax
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rax
  char v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rax
  char v29; // r11
  unsigned __int64 v30; // rax
  _RTL_BALANCED_NODE *v31; // r8
  char v32; // r9
  bool v33; // zf
  unsigned __int64 v34; // rax
  char v35; // cl
  _RTL_BALANCED_NODE *v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  char v40; // r8
  unsigned __int64 v41; // rbp
  __int64 v42; // rax
  PRTL_BALANCED_NODE *v43; // r15
  unsigned __int64 v44; // rax
  PRTL_BALANCED_NODE v45; // rax
  unsigned __int64 Root; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v47; // cl
  $7D93978C745EB1C2D28075BAF55422B4 v48; // cl
  _RTL_BALANCED_NODE *v49; // rdi
  __int64 v50; // r8
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rdx
  __int64 v53; // r9
  char v54; // cl
  __int64 v55; // r9
  $424C8BBEF8F6C852886B4C6E806B5DB0 v56; // al
  char v57; // cl
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rax
  int v61; // r9d
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  _RTL_BALANCED_NODE **v67; // r11
  unsigned __int64 v68; // rcx
  _RTL_BALANCED_NODE *v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // rax
  int v73; // ebp
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rcx
  _RTL_BALANCED_NODE *v79; // rax
  _RTL_BALANCED_NODE *v80; // rax
  unsigned __int64 v81; // r11
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  int v84; // r9d
  __int64 *v85; // r15
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rdi
  _RTL_BALANCED_NODE *v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 *v92; // rdi
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rsi
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // r9
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rbp
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  _RTL_BALANCED_NODE *v109; // r8
  unsigned __int64 v110; // rax
  _RTL_BALANCED_NODE *v111; // rax
  unsigned __int64 v112; // rcx

  v2 = Tree->0;
  v4 = (unsigned __int64)Node->Children[0];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)Node;
  v5 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)Node;
  v6 = v5;
  if ( v4 )
    v6 = v4;
  v7 = 0LL;
  v8 = *(_BYTE *)&v2 & 1;
  v9 = 0LL;
  if ( v4 )
    v9 = v5;
  if ( !v9 )
  {
    v10 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v8 && v10 )
      v10 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v10);
    v11 = Node;
    if ( !v10 )
    {
      if ( v6 )
        *(_QWORD *)(v6 + 16) = 0LL;
      Min = (unsigned __int64)Tree->Min;
      Root = (unsigned __int64)Tree->Root;
      if ( (Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      if ( (PRTL_BALANCED_NODE)Root != Node )
        goto LABEL_322;
      if ( (Min & 1) != 0 )
      {
        v112 = 0LL;
        LOBYTE(Min) = v6 ^ (unsigned __int8)Tree;
        if ( v6 )
          v112 = v6 ^ (unsigned __int64)Tree;
        Tree->Min = (_RTL_BALANCED_NODE *)v112;
        v47 = ($7D93978C745EB1C2D28075BAF55422B4)(v112 | 1);
        Tree->0 = v47;
      }
      else
      {
        Tree->Min = (_RTL_BALANCED_NODE *)v6;
        v47 = ($7D93978C745EB1C2D28075BAF55422B4)v6;
      }
      if ( (*(_BYTE *)&v47 & 1) != 0 )
      {
        LOBYTE(Min) = v6 ^ (unsigned __int8)Tree;
        if ( v6 )
          v7 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)Tree);
        Tree->Root = v7;
      }
      else
      {
        Tree->Root = (_RTL_BALANCED_NODE *)v6;
      }
      return Min;
    }
    v12 = (unsigned __int64)v10->Children[1];
    if ( v8 && v12 )
      v12 ^= (unsigned __int64)v10;
    if ( (PRTL_BALANCED_NODE)v12 == Node )
    {
      LODWORD(v13) = 1;
    }
    else
    {
      v18 = (unsigned __int64)v10->Children[0];
      if ( v8 && v18 )
        v18 ^= (unsigned __int64)v10;
      if ( (PRTL_BALANCED_NODE)v18 != Node )
        goto LABEL_322;
      v19 = Tree->Min;
      LODWORD(v13) = 0;
      if ( ((unsigned __int8)v19 & 1) != 0 )
      {
        if ( v19 == (_RTL_BALANCED_NODE *)1 )
          v20 = 0LL;
        else
          v20 = (_RTL_BALANCED_NODE *)((unsigned __int64)v19 ^ ((unsigned __int64)Tree | 1));
      }
      else
      {
        v20 = Tree->Min;
      }
      if ( v20 == Node )
      {
        if ( v6 )
        {
          if ( ((unsigned __int8)v19 & 1) != 0 )
          {
            Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v6);
            Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ v6 | 1);
          }
          else
          {
            Tree->Min = (_RTL_BALANCED_NODE *)v6;
          }
        }
        else if ( ((unsigned __int8)v19 & 1) != 0 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v10);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v10 | 1);
        }
        else
        {
          Tree->Min = v10;
        }
      }
    }
    LOBYTE(ParentValue) = Node->0;
    goto LABEL_14;
  }
  v21 = *(_RTL_BALANCED_NODE **)v5;
  v11 = (PRTL_BALANCED_NODE)v5;
  v10 = (_RTL_BALANCED_NODE *)v5;
  LODWORD(v13) = 1;
  if ( *(_QWORD *)v5 )
  {
    LODWORD(v13) = 0;
    do
    {
      v10 = v11;
      if ( v8 && v21 )
        v11 = (PRTL_BALANCED_NODE)((unsigned __int64)v21 ^ (unsigned __int64)v11);
      else
        v11 = v21;
      v21 = v11->Children[0];
    }
    while ( v11->Children[0] );
  }
  if ( v8 && v4 )
    v22 = (_RTL_BALANCED_NODE *)(v4 ^ (unsigned __int64)v11);
  else
    v22 = (_RTL_BALANCED_NODE *)v4;
  v11->Children[0] = v22;
  v23 = *(_QWORD *)(v4 + 16);
  v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
  v25 = *(_BYTE *)&Tree->0 & 1;
  if ( v25 && v24 )
    v24 ^= v4;
  if ( (PRTL_BALANCED_NODE)v24 != Node )
    goto LABEL_322;
  v26 = v4 ^ (unsigned __int64)v11;
  if ( !v25 )
    v26 = (unsigned __int64)v11;
  *(_QWORD *)(v4 + 16) = v23 & 3 | v26;
  v27 = *(_QWORD *)(v5 + 16);
  v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
  v29 = *(_BYTE *)&Tree->0 & 1;
  if ( v29 && v28 )
    v28 ^= v5;
  if ( (PRTL_BALANCED_NODE)v28 != Node )
    goto LABEL_322;
  v30 = v5 ^ (unsigned __int64)v11;
  v31 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v11);
  if ( !v29 )
    v30 = (unsigned __int64)v11;
  *(_QWORD *)(v5 + 16) = v27 & 3 | v30;
  v6 = (unsigned __int64)v11->Children[1];
  v32 = *(_BYTE *)&Tree->0 & 1;
  if ( v32 && v6 )
    v6 ^= (unsigned __int64)v11;
  v33 = v32 == 0;
  ParentValue = v11->ParentValue;
  if ( v33 )
    v31 = (_RTL_BALANCED_NODE *)v5;
  v34 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v11->Children[1] = v31;
  v35 = *(_BYTE *)&Tree->0 & 1;
  if ( v35 && v34 )
    v36 = (_RTL_BALANCED_NODE *)((unsigned __int64)v11 ^ v34);
  else
    v36 = (_RTL_BALANCED_NODE *)v34;
  if ( v36 != v10 )
  {
    if ( v35 )
    {
      if ( !v34 )
        goto LABEL_228;
      v34 ^= (unsigned __int64)v11;
    }
    if ( v34 )
      goto LABEL_322;
LABEL_228:
    if ( v11 != v10 )
      goto LABEL_322;
  }
  v37 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v35 )
  {
    if ( v37 )
      v37 ^= (unsigned __int64)Node;
    if ( v37 )
      v37 ^= (unsigned __int64)v11;
  }
  v38 = v37 | ParentValue & 3;
  v11->ParentValue = v38;
  v11->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v38 ^ (v38 ^ *(_BYTE *)&Node->0) & 1);
  v39 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v39 )
  {
    v40 = *(_BYTE *)&Tree->0 & 1;
    if ( v40 )
      v39 ^= (unsigned __int64)Node;
    v41 = *(_QWORD *)(v39 + 8);
    if ( v40 && v41 )
      v41 ^= v39;
    v42 = 0LL;
    if ( (PRTL_BALANCED_NODE)v41 == Node )
      v42 = 8LL;
    v43 = (PRTL_BALANCED_NODE *)(v42 + v39);
    v44 = *(_QWORD *)(v42 + v39);
    if ( v40 && v44 )
      v44 ^= v39;
    if ( (PRTL_BALANCED_NODE)v44 != Node )
      goto LABEL_322;
    v45 = (PRTL_BALANCED_NODE)(v39 ^ (unsigned __int64)v11);
    if ( !v40 )
      v45 = v11;
    *v43 = v45;
  }
  else
  {
    v109 = Tree->Min;
    v110 = (unsigned __int64)Tree->Root;
    if ( ((unsigned __int8)v109 & 1) != 0 )
    {
      if ( v110 )
        v110 ^= (unsigned __int64)Tree;
      else
        v110 = 0LL;
    }
    if ( (PRTL_BALANCED_NODE)v110 != Node )
      goto LABEL_322;
    v111 = v11;
    if ( ((unsigned __int8)v109 & 1) != 0 )
      v111 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v11);
    Tree->Root = v111;
  }
LABEL_14:
  v15 = ParentValue & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v6 )
    v16 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v10);
  else
    v16 = (_RTL_BALANCED_NODE *)v6;
  LOBYTE(Min) = v13;
  v10->Children[v13] = v16;
  if ( v6 )
  {
    Min = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v57 = *(_BYTE *)&Tree->0 & 1;
    if ( v57 && Min )
      Min ^= v6;
    if ( (PRTL_BALANCED_NODE)Min != v11 )
      goto LABEL_322;
    if ( v57 && v10 )
      v10 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v10);
    *(_QWORD *)(v6 + 16) = v10;
    return Min;
  }
  if ( v15 )
    return Min;
  v48 = Tree->0;
  while ( 1 )
  {
    v49 = v10;
    v50 = !v13;
    v51 = (unsigned __int64)v10->Children[v50];
    if ( (*(_BYTE *)&v48 & 1) != 0 && v51 )
      v52 = (unsigned __int64)v10 ^ v51;
    else
      v52 = (unsigned __int64)v10->Children[v50];
    if ( (*(_BYTE *)(v52 + 16) & 1) == 0 )
      goto LABEL_72;
    v71 = (unsigned __int64)Tree->Root;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( v71 )
        v71 ^= (unsigned __int64)Tree;
      else
        v71 = 0LL;
    }
    v72 = *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v73 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v72 )
      v72 ^= v52;
    if ( (_RTL_BALANCED_NODE *)v72 != v10 )
      goto LABEL_322;
    if ( ((__int64)Tree->Min & 1) != 0 && v51 )
      v51 ^= (unsigned __int64)v10;
    if ( v51 != v52 )
      goto LABEL_322;
    v74 = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( !v74 )
      {
LABEL_244:
        if ( (_RTL_BALANCED_NODE *)v71 != v10 )
          goto LABEL_322;
        v71 = v52;
        goto LABEL_132;
      }
      v74 ^= (unsigned __int64)v10;
    }
    if ( !v74 )
      goto LABEL_244;
    v75 = *(_QWORD *)(v74 + 8);
    if ( ((__int64)Tree->Min & 1) != 0 && v75 )
      v75 ^= v74;
    if ( (_RTL_BALANCED_NODE *)v75 == v10 )
    {
      v76 = v74 ^ v52;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v76 = v52;
      *(_QWORD *)(v74 + 8) = v76;
    }
    else
    {
      v104 = *(_QWORD *)v74;
      if ( ((__int64)Tree->Min & 1) != 0 && v104 )
        v104 ^= v74;
      if ( (_RTL_BALANCED_NODE *)v104 != v10 )
        goto LABEL_322;
      v105 = v74 ^ v52;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v105 = v52;
      *(_QWORD *)v74 = v105;
    }
LABEL_132:
    if ( v73 && v74 )
      v74 ^= v52;
    *(_QWORD *)(v52 + 16) = v74 | *(_DWORD *)(v52 + 16) & 3;
    v77 = *(_QWORD *)(v52 + 8 * v13);
    if ( !v73 )
      goto LABEL_134;
    if ( v77 )
    {
      v77 ^= v52;
LABEL_134:
      if ( v77 )
      {
        v101 = *(_QWORD *)(v77 + 16);
        v102 = v101 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v73 && v102 )
          v102 ^= v77;
        if ( v102 != v52 )
          goto LABEL_322;
        v103 = v77 ^ (unsigned __int64)v10;
        if ( !v73 )
          v103 = (unsigned __int64)v10;
        *(_QWORD *)(v77 + 16) = v101 & 3 | v103;
      }
    }
    if ( v73 && v77 )
      v77 ^= (unsigned __int64)v10;
    v10->Children[v50] = (_RTL_BALANCED_NODE *)v77;
    v78 = v52 ^ (unsigned __int64)v10;
    v79 = (_RTL_BALANCED_NODE *)(v52 ^ (unsigned __int64)v10);
    if ( !v73 )
    {
      v79 = v10;
      v78 = v52;
    }
    *(_QWORD *)(v52 + 8 * v13) = v79;
    v80 = (_RTL_BALANCED_NODE *)v71;
    v10->ParentValue = *(_DWORD *)&v10->0 & 3 | v78;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      v80 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v71);
      if ( !v71 )
        v80 = 0LL;
    }
    Tree->Root = v80;
    *(_BYTE *)(v52 + 16) &= ~1u;
    *(_BYTE *)&v10->0 |= 1u;
    v48 = Tree->0;
    v52 = (unsigned __int64)v10->Children[v50];
    if ( (*(_BYTE *)&v48 & 1) != 0 && v52 )
      v52 ^= (unsigned __int64)v10;
LABEL_72:
    v53 = *(_QWORD *)v52;
    v54 = *(_BYTE *)&v48 & 1;
    if ( *(_QWORD *)v52 )
    {
      if ( v54 )
        v53 ^= v52;
      if ( (*(_BYTE *)(v53 + 16) & 1) != 0 )
        break;
    }
    v55 = *(_QWORD *)(v52 + 8);
    if ( v55 )
    {
      if ( v54 )
        v55 ^= v52;
      if ( (*(_BYTE *)(v55 + 16) & 1) != 0 )
        break;
    }
    v56 = v10->0;
    if ( (*(_BYTE *)&v56 & 1) != 0 )
    {
      LOBYTE(Min) = *(_BYTE *)&v56 & 0xFE;
      v10->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)Min;
      *(_BYTE *)(v52 + 16) |= 1u;
      return Min;
    }
    *(_BYTE *)(v52 + 16) |= 1u;
    v48 = Tree->0;
    Min = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v48 & 1) != 0 && Min )
      v10 = (_RTL_BALANCED_NODE *)(Min ^ (unsigned __int64)v10);
    else
      v10 = (_RTL_BALANCED_NODE *)(v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v10 )
      return Min;
    v70 = (unsigned __int64)v10->Children[1];
    if ( (*(_BYTE *)&v48 & 1) != 0 && v70 )
      v70 ^= (unsigned __int64)v10;
    v13 = v70 == (_QWORD)v49;
  }
  v58 = *(_QWORD *)(v52 + 8 * v50);
  if ( v54 )
  {
    if ( v58 )
    {
      v58 ^= v52;
      goto LABEL_93;
    }
  }
  else
  {
LABEL_93:
    if ( v58 && (*(_BYTE *)(v58 + 16) & 1) != 0 )
      goto LABEL_95;
  }
  v81 = *(_QWORD *)(v52 + 8 * v13);
  if ( v54 && v81 )
    v81 ^= v52;
  *(_BYTE *)(v81 + 16) &= ~1u;
  v82 = (unsigned int)v13 ^ 1;
  v83 = *(_QWORD *)(v81 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v84 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v83 )
    v83 ^= v81;
  if ( v83 != v52 )
    goto LABEL_322;
  v85 = (__int64 *)(v52 + 8 * v13);
  v86 = *v85;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v86 )
    v86 ^= v52;
  if ( v86 != v81 )
    goto LABEL_322;
  v87 = (unsigned __int64)v10->Children[v82];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v87 )
    v87 ^= (unsigned __int64)v10;
  if ( v87 != v52 )
    goto LABEL_322;
  v88 = *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v88 )
    v88 ^= v52;
  if ( (_RTL_BALANCED_NODE *)v88 != v10 )
    goto LABEL_322;
  v89 = (unsigned __int64)v10 ^ v81;
  v90 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v81);
  if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
    v90 = (_RTL_BALANCED_NODE *)v81;
  v10->Children[v82] = v90;
  if ( !v84 || !v10 )
    v89 = (unsigned __int64)v10;
  v91 = v89 | *(_DWORD *)(v81 + 16) & 3;
  v92 = (unsigned __int64 *)(v81 + 8 * v82);
  *(_QWORD *)(v81 + 16) = v91;
  v93 = *v92;
  if ( !v84 )
  {
LABEL_158:
    if ( !v93 )
      goto LABEL_159;
    v106 = *(_QWORD *)(v93 + 16);
    v107 = v106 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v84 && v107 )
      v107 ^= v93;
    if ( v107 == v81 )
    {
      v108 = v93 ^ v52;
      if ( !v84 )
        v108 = v52;
      *(_QWORD *)(v93 + 16) = v106 & 3 | v108;
      goto LABEL_159;
    }
    goto LABEL_322;
  }
  if ( v93 )
  {
    v93 ^= v81;
    goto LABEL_158;
  }
LABEL_159:
  if ( v84 && v93 )
    v93 ^= v52;
  *v85 = v93;
  v94 = v52 ^ v81;
  v33 = v84 == 0;
  v95 = v52 ^ v81;
  v58 = v52;
  if ( v33 )
  {
    v95 = v52;
    v94 = v81;
  }
  *v92 = v95;
  *(_QWORD *)(v52 + 16) = *(_DWORD *)(v52 + 16) & 3 | v94;
  v52 = v81;
LABEL_95:
  *(_BYTE *)(v52 + 16) ^= (*(_BYTE *)&v10->0 ^ *(_BYTE *)(v52 + 16)) & 1;
  *(_BYTE *)&v10->0 &= ~1u;
  *(_BYTE *)(v58 + 16) &= ~1u;
  v59 = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v59 )
      v59 ^= (unsigned __int64)Tree;
    else
      v59 = 0LL;
  }
  v60 = *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v61 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v60 )
    v60 ^= v52;
  if ( (_RTL_BALANCED_NODE *)v60 != v10 )
    goto LABEL_322;
  v62 = (unsigned __int64)v10->Children[v50];
  if ( ((__int64)Tree->Min & 1) != 0 && v62 )
    v62 ^= (unsigned __int64)v10;
  if ( v62 != v52 )
LABEL_322:
    __fastfail(0x1Du);
  v63 = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v63 )
    {
      v63 ^= (unsigned __int64)v10;
      goto LABEL_101;
    }
    goto LABEL_242;
  }
LABEL_101:
  if ( !v63 )
  {
LABEL_242:
    if ( (_RTL_BALANCED_NODE *)v59 != v10 )
      goto LABEL_322;
    v59 = v52;
    goto LABEL_107;
  }
  v64 = *(_QWORD *)(v63 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v64 )
    v64 ^= v63;
  if ( (_RTL_BALANCED_NODE *)v64 == v10 )
  {
    v65 = v63 ^ v52;
    if ( ((__int64)Tree->Min & 1) == 0 )
      v65 = v52;
    *(_QWORD *)(v63 + 8) = v65;
  }
  else
  {
    v99 = *(_QWORD *)v63;
    if ( ((__int64)Tree->Min & 1) != 0 && v99 )
      v99 ^= v63;
    if ( (_RTL_BALANCED_NODE *)v99 != v10 )
      goto LABEL_322;
    v100 = v63 ^ v52;
    if ( ((__int64)Tree->Min & 1) == 0 )
      v100 = v52;
    *(_QWORD *)v63 = v100;
  }
LABEL_107:
  if ( v61 && v63 )
    v63 ^= v52;
  *(_QWORD *)(v52 + 16) = v63 | *(_DWORD *)(v52 + 16) & 3;
  v66 = *(_QWORD *)(v52 + 8 * v13);
  v67 = (_RTL_BALANCED_NODE **)(v52 + 8 * v13);
  if ( v61 )
  {
    if ( v66 )
    {
      v66 ^= v52;
      goto LABEL_109;
    }
  }
  else
  {
LABEL_109:
    if ( v66 )
    {
      v96 = *(_QWORD *)(v66 + 16);
      v97 = v96 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v61 && v97 )
        v97 ^= v66;
      if ( v97 != v52 )
        goto LABEL_322;
      v98 = v66 ^ (unsigned __int64)v10;
      if ( !v61 )
        v98 = (unsigned __int64)v10;
      *(_QWORD *)(v66 + 16) = v96 & 3 | v98;
    }
  }
  if ( v61 && v66 )
    v66 ^= (unsigned __int64)v10;
  v10->Children[v50] = (_RTL_BALANCED_NODE *)v66;
  v68 = v52 ^ (unsigned __int64)v10;
  v69 = (_RTL_BALANCED_NODE *)(v52 ^ (unsigned __int64)v10);
  if ( !v61 )
  {
    v69 = v10;
    v68 = v52;
  }
  *v67 = v69;
  Min = v59;
  v10->ParentValue = *(_DWORD *)&v10->0 & 3 | v68;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Min = (unsigned __int64)Tree ^ v59;
    if ( !v59 )
      Min = 0LL;
  }
  Tree->Root = (_RTL_BALANCED_NODE *)Min;
  return Min;
}
