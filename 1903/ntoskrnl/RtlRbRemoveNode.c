/*
 * XREFs of RtlRbRemoveNode @ 0x140063870
 * Callers:
 *     RtlpHpSegFreeRangeRemove @ 0x14001F2AC (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14005EF0C (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1400601E0 (RtlpHpSegPageRangeAllocate.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVsChunkSplit @ 0x1400620A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x140063540 (RtlpHpVsChunkCoalesce.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140089150 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14008975C (MiBitmapsCachedEntryLengthChanged.c)
 *     PfSnNameRemove @ 0x140096D4C (PfSnNameRemove.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14009EFB4 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14009F26C (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiRemoveTimer2 @ 0x1400BFC50 (KiRemoveTimer2.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400E778C (IoStopDiskIoAttributionForContext.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400E8DBC (KiRemoveSchedulingGroupQueue.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F11C8 (MiInvalidatePageFileBitmapsCache.c)
 *     RtlpHpLargeFree @ 0x14010DFD0 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrAlloc @ 0x14010F224 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140111494 (RtlpHpVaMgrRangeCoalesce.c)
 *     KiSetClockInterval @ 0x140112890 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x1401243AC (MiRescanPageFileBitmapPortion.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B065C (KiSetVirtualHeteroClockIntervalRequest.c)
 *     MiRemoveSlabEntry @ 0x1402DCE60 (MiRemoveSlabEntry.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140308064 (PspJobIoRateVolumeEntryRemove.c)
 *     VmpFaultEntryRemove @ 0x140329DB8 (VmpFaultEntryRemove.c)
 *     VmpMergeMemoryRanges @ 0x14032A7DC (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14032B200 (VmpRemoveMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C43F0 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4670 (EtwpReleaseProviderTraitsReference.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14065FC7C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x14082FD98 (HvpViewMapShrinkStorage.c)
 *     MiDeleteImageHotPatchState @ 0x14088E14C (MiDeleteImageHotPatchState.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408FCA50 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408FCEB4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  char v2; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r14
  char v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  BOOL v13; // esi
  __int64 v14; // r9
  char v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r11
  unsigned __int64 v24; // rax
  char v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  char v29; // r11
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r8
  char v32; // r9
  bool v33; // zf
  unsigned __int64 v34; // rax
  char v35; // cl
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  char v40; // r8
  unsigned __int64 v41; // rbp
  __int64 v42; // rax
  unsigned __int64 *v43; // r15
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  char v47; // cl
  char v48; // cl
  unsigned __int64 v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rdx
  __int64 v53; // r9
  char v54; // cl
  __int64 v55; // r9
  char v56; // al
  char v57; // cl
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int64 *v67; // r11
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // rax
  int v73; // ebp
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r11
  _BOOL8 v82; // rcx
  unsigned __int64 v83; // rax
  int v84; // r9d
  __int64 *v85; // r15
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rdi
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 *v92; // rdi
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rax
  __int64 v96; // rsi
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // r9
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rbp
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // r8
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx

  v2 = *((_BYTE *)a1 + 8);
  v4 = *(_QWORD *)a2;
  if ( (v2 & 1) != 0 && v4 )
    v4 ^= a2;
  v5 = *(_QWORD *)(a2 + 8);
  if ( (v2 & 1) != 0 && v5 )
    v5 ^= a2;
  v6 = v5;
  if ( v4 )
    v6 = v4;
  v7 = 0LL;
  v8 = v2 & 1;
  v9 = 0LL;
  if ( v4 )
    v9 = v5;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v8 && v10 )
      v10 ^= a2;
    v11 = a2;
    if ( !v10 )
    {
      if ( v6 )
        *(_QWORD *)(v6 + 16) = 0LL;
      v17 = a1[1];
      v46 = *a1;
      if ( (v17 & 1) != 0 )
      {
        if ( v46 )
          v46 ^= (unsigned __int64)a1;
        else
          v46 = 0LL;
      }
      if ( v46 != a2 )
        goto LABEL_322;
      if ( (v17 & 1) != 0 )
      {
        v112 = 0LL;
        LOBYTE(v17) = v6 ^ (unsigned __int8)a1;
        if ( v6 )
          v112 = v6 ^ (unsigned __int64)a1;
        a1[1] = v112;
        v47 = v112 | 1;
        *((_BYTE *)a1 + 8) = v47;
      }
      else
      {
        a1[1] = v6;
        v47 = v6;
      }
      if ( (v47 & 1) != 0 )
      {
        LOBYTE(v17) = v6 ^ (unsigned __int8)a1;
        if ( v6 )
          v7 = v6 ^ (unsigned __int64)a1;
        *a1 = v7;
      }
      else
      {
        *a1 = v6;
      }
      return v17;
    }
    v12 = *(_QWORD *)(v10 + 8);
    if ( v8 && v12 )
      v12 ^= v10;
    if ( v12 == a2 )
    {
      v13 = 1;
    }
    else
    {
      v18 = *(_QWORD *)v10;
      if ( v8 && v18 )
        v18 ^= v10;
      if ( v18 != a2 )
        goto LABEL_322;
      v19 = a1[1];
      v13 = 0;
      if ( (v19 & 1) != 0 )
      {
        if ( v19 == 1 )
          v20 = 0LL;
        else
          v20 = v19 ^ ((unsigned __int64)a1 | 1);
      }
      else
      {
        v20 = a1[1];
      }
      if ( v20 == a2 )
      {
        if ( v6 )
        {
          if ( (v19 & 1) != 0 )
          {
            a1[1] = (unsigned __int64)a1 ^ v6;
            *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v6 | 1;
          }
          else
          {
            a1[1] = v6;
          }
        }
        else if ( (v19 & 1) != 0 )
        {
          a1[1] = (unsigned __int64)a1 ^ v10;
          *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v10 | 1;
        }
        else
        {
          a1[1] = v10;
        }
      }
    }
    LOBYTE(v14) = *(_BYTE *)(a2 + 16);
    goto LABEL_14;
  }
  v21 = *(_QWORD *)v5;
  v11 = v5;
  v10 = v5;
  v13 = 1;
  if ( *(_QWORD *)v5 )
  {
    v13 = 0;
    do
    {
      v10 = v11;
      if ( v8 && v21 )
        v11 ^= v21;
      else
        v11 = v21;
      v21 = *(_QWORD *)v11;
    }
    while ( *(_QWORD *)v11 );
  }
  if ( v8 && v4 )
    v22 = v4 ^ v11;
  else
    v22 = v4;
  *(_QWORD *)v11 = v22;
  v23 = *(_QWORD *)(v4 + 16);
  v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
  v25 = a1[1] & 1;
  if ( v25 && v24 )
    v24 ^= v4;
  if ( v24 != a2 )
    goto LABEL_322;
  v26 = v4 ^ v11;
  if ( !v25 )
    v26 = v11;
  *(_QWORD *)(v4 + 16) = v23 & 3 | v26;
  v27 = *(_QWORD *)(v5 + 16);
  v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
  v29 = a1[1] & 1;
  if ( v29 && v28 )
    v28 ^= v5;
  if ( v28 != a2 )
    goto LABEL_322;
  v30 = v5 ^ v11;
  v31 = v5 ^ v11;
  if ( !v29 )
    v30 = v11;
  *(_QWORD *)(v5 + 16) = v27 & 3 | v30;
  v6 = *(_QWORD *)(v11 + 8);
  v32 = a1[1] & 1;
  if ( v32 && v6 )
    v6 ^= v11;
  v33 = v32 == 0;
  v14 = *(_QWORD *)(v11 + 16);
  if ( v33 )
    v31 = v5;
  v34 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  *(_QWORD *)(v11 + 8) = v31;
  v35 = a1[1] & 1;
  if ( v35 && v34 )
    v36 = v11 ^ v34;
  else
    v36 = v34;
  if ( v36 != v10 )
  {
    if ( v35 )
    {
      if ( !v34 )
        goto LABEL_228;
      v34 ^= v11;
    }
    if ( v34 )
      goto LABEL_322;
LABEL_228:
    if ( v11 != v10 )
      goto LABEL_322;
  }
  v37 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v35 )
  {
    if ( v37 )
      v37 ^= a2;
    if ( v37 )
      v37 ^= v11;
  }
  v38 = v37 | v14 & 3;
  *(_QWORD *)(v11 + 16) = v38;
  *(_BYTE *)(v11 + 16) = v38 ^ (v38 ^ *(_BYTE *)(a2 + 16)) & 1;
  v39 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v39 )
  {
    v40 = a1[1] & 1;
    if ( v40 )
      v39 ^= a2;
    v41 = *(_QWORD *)(v39 + 8);
    if ( v40 && v41 )
      v41 ^= v39;
    v42 = 0LL;
    if ( v41 == a2 )
      v42 = 8LL;
    v43 = (unsigned __int64 *)(v42 + v39);
    v44 = *(_QWORD *)(v42 + v39);
    if ( v40 && v44 )
      v44 ^= v39;
    if ( v44 != a2 )
      goto LABEL_322;
    v45 = v39 ^ v11;
    if ( !v40 )
      v45 = v11;
    *v43 = v45;
  }
  else
  {
    v109 = a1[1];
    v110 = *a1;
    if ( (v109 & 1) != 0 )
    {
      if ( v110 )
        v110 ^= (unsigned __int64)a1;
      else
        v110 = 0LL;
    }
    if ( v110 != a2 )
      goto LABEL_322;
    v111 = v11;
    if ( (v109 & 1) != 0 )
      v111 = (unsigned __int64)a1 ^ v11;
    *a1 = v111;
  }
LABEL_14:
  v15 = v14 & 1;
  if ( (a1[1] & 1) != 0 && v6 )
    v16 = v6 ^ v10;
  else
    v16 = v6;
  LOBYTE(v17) = v13;
  *(_QWORD *)(v10 + 8LL * v13) = v16;
  if ( v6 )
  {
    v17 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v57 = a1[1] & 1;
    if ( v57 && v17 )
      v17 ^= v6;
    if ( v17 != v11 )
      goto LABEL_322;
    if ( v57 && v10 )
      v10 ^= v6;
    *(_QWORD *)(v6 + 16) = v10;
    return v17;
  }
  if ( v15 )
    return v17;
  v48 = *((_BYTE *)a1 + 8);
  while ( 1 )
  {
    v49 = v10;
    v50 = !v13;
    v51 = *(_QWORD *)(v10 + 8 * v50);
    if ( (v48 & 1) != 0 && v51 )
      v52 = v10 ^ v51;
    else
      v52 = *(_QWORD *)(v10 + 8 * v50);
    if ( (*(_BYTE *)(v52 + 16) & 1) == 0 )
      goto LABEL_72;
    v71 = *a1;
    if ( (a1[1] & 1) != 0 )
    {
      if ( v71 )
        v71 ^= (unsigned __int64)a1;
      else
        v71 = 0LL;
    }
    v72 = *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v73 = a1[1] & 1;
    if ( (a1[1] & 1) != 0 && v72 )
      v72 ^= v52;
    if ( v72 != v10 )
      goto LABEL_322;
    if ( (a1[1] & 1) != 0 && v51 )
      v51 ^= v10;
    if ( v51 != v52 )
      goto LABEL_322;
    v74 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 )
    {
      if ( !v74 )
      {
LABEL_244:
        if ( v71 != v10 )
          goto LABEL_322;
        v71 = v52;
        goto LABEL_132;
      }
      v74 ^= v10;
    }
    if ( !v74 )
      goto LABEL_244;
    v75 = *(_QWORD *)(v74 + 8);
    if ( (a1[1] & 1) != 0 && v75 )
      v75 ^= v74;
    if ( v75 == v10 )
    {
      v76 = v74 ^ v52;
      if ( (a1[1] & 1) == 0 )
        v76 = v52;
      *(_QWORD *)(v74 + 8) = v76;
    }
    else
    {
      v104 = *(_QWORD *)v74;
      if ( (a1[1] & 1) != 0 && v104 )
        v104 ^= v74;
      if ( v104 != v10 )
        goto LABEL_322;
      v105 = v74 ^ v52;
      if ( (a1[1] & 1) == 0 )
        v105 = v52;
      *(_QWORD *)v74 = v105;
    }
LABEL_132:
    if ( v73 && v74 )
      v74 ^= v52;
    *(_QWORD *)(v52 + 16) = v74 | *(_DWORD *)(v52 + 16) & 3;
    v77 = *(_QWORD *)(v52 + 8LL * v13);
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
        v103 = v77 ^ v10;
        if ( !v73 )
          v103 = v10;
        *(_QWORD *)(v77 + 16) = v101 & 3 | v103;
      }
    }
    if ( v73 && v77 )
      v77 ^= v10;
    *(_QWORD *)(v10 + 8 * v50) = v77;
    v78 = v52 ^ v10;
    v79 = v52 ^ v10;
    if ( !v73 )
    {
      v79 = v10;
      v78 = v52;
    }
    *(_QWORD *)(v52 + 8LL * v13) = v79;
    v80 = v71;
    *(_QWORD *)(v10 + 16) = *(_DWORD *)(v10 + 16) & 3 | v78;
    if ( (a1[1] & 1) != 0 )
    {
      v80 = (unsigned __int64)a1 ^ v71;
      if ( !v71 )
        v80 = 0LL;
    }
    *a1 = v80;
    *(_BYTE *)(v52 + 16) &= ~1u;
    *(_BYTE *)(v10 + 16) |= 1u;
    v48 = *((_BYTE *)a1 + 8);
    v52 = *(_QWORD *)(v10 + 8 * v50);
    if ( (v48 & 1) != 0 && v52 )
      v52 ^= v10;
LABEL_72:
    v53 = *(_QWORD *)v52;
    v54 = v48 & 1;
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
    v56 = *(_BYTE *)(v10 + 16);
    if ( (v56 & 1) != 0 )
    {
      LOBYTE(v17) = v56 & 0xFE;
      *(_BYTE *)(v10 + 16) = v17;
      *(_BYTE *)(v52 + 16) |= 1u;
      return v17;
    }
    *(_BYTE *)(v52 + 16) |= 1u;
    v48 = *((_BYTE *)a1 + 8);
    v17 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v48 & 1) != 0 && v17 )
      v10 ^= v17;
    else
      v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v10 )
      return v17;
    v70 = *(_QWORD *)(v10 + 8);
    if ( (v48 & 1) != 0 && v70 )
      v70 ^= v10;
    v13 = v70 == v49;
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
  v81 = *(_QWORD *)(v52 + 8LL * v13);
  if ( v54 && v81 )
    v81 ^= v52;
  *(_BYTE *)(v81 + 16) &= ~1u;
  v82 = !v13;
  v83 = *(_QWORD *)(v81 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v84 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v83 )
    v83 ^= v81;
  if ( v83 != v52 )
    goto LABEL_322;
  v85 = (__int64 *)(v52 + 8LL * v13);
  v86 = *v85;
  if ( (a1[1] & 1) != 0 && v86 )
    v86 ^= v52;
  if ( v86 != v81 )
    goto LABEL_322;
  v87 = *(_QWORD *)(v10 + 8 * v82);
  if ( (a1[1] & 1) != 0 && v87 )
    v87 ^= v10;
  if ( v87 != v52 )
    goto LABEL_322;
  v88 = *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) != 0 && v88 )
    v88 ^= v52;
  if ( v88 != v10 )
    goto LABEL_322;
  v89 = v10 ^ v81;
  v90 = v10 ^ v81;
  if ( (a1[1] & 1) == 0 )
    v90 = v81;
  *(_QWORD *)(v10 + 8 * v82) = v90;
  if ( !v84 || !v10 )
    v89 = v10;
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
  *(_BYTE *)(v52 + 16) ^= (*(_BYTE *)(v10 + 16) ^ *(_BYTE *)(v52 + 16)) & 1;
  *(_BYTE *)(v10 + 16) &= ~1u;
  *(_BYTE *)(v58 + 16) &= ~1u;
  v59 = *a1;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v59 )
      v59 ^= (unsigned __int64)a1;
    else
      v59 = 0LL;
  }
  v60 = *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v61 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v60 )
    v60 ^= v52;
  if ( v60 != v10 )
    goto LABEL_322;
  v62 = *(_QWORD *)(v10 + 8 * v50);
  if ( (a1[1] & 1) != 0 && v62 )
    v62 ^= v10;
  if ( v62 != v52 )
LABEL_322:
    __fastfail(0x1Du);
  v63 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v63 )
    {
      v63 ^= v10;
      goto LABEL_101;
    }
    goto LABEL_242;
  }
LABEL_101:
  if ( !v63 )
  {
LABEL_242:
    if ( v59 != v10 )
      goto LABEL_322;
    v59 = v52;
    goto LABEL_107;
  }
  v64 = *(_QWORD *)(v63 + 8);
  if ( (a1[1] & 1) != 0 && v64 )
    v64 ^= v63;
  if ( v64 == v10 )
  {
    v65 = v63 ^ v52;
    if ( (a1[1] & 1) == 0 )
      v65 = v52;
    *(_QWORD *)(v63 + 8) = v65;
  }
  else
  {
    v99 = *(_QWORD *)v63;
    if ( (a1[1] & 1) != 0 && v99 )
      v99 ^= v63;
    if ( v99 != v10 )
      goto LABEL_322;
    v100 = v63 ^ v52;
    if ( (a1[1] & 1) == 0 )
      v100 = v52;
    *(_QWORD *)v63 = v100;
  }
LABEL_107:
  if ( v61 && v63 )
    v63 ^= v52;
  *(_QWORD *)(v52 + 16) = v63 | *(_DWORD *)(v52 + 16) & 3;
  v66 = *(_QWORD *)(v52 + 8LL * v13);
  v67 = (unsigned __int64 *)(v52 + 8LL * v13);
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
      v98 = v66 ^ v10;
      if ( !v61 )
        v98 = v10;
      *(_QWORD *)(v66 + 16) = v96 & 3 | v98;
    }
  }
  if ( v61 && v66 )
    v66 ^= v10;
  *(_QWORD *)(v10 + 8 * v50) = v66;
  v68 = v52 ^ v10;
  v69 = v52 ^ v10;
  if ( !v61 )
  {
    v69 = v10;
    v68 = v52;
  }
  *v67 = v69;
  v17 = v59;
  *(_QWORD *)(v10 + 16) = *(_DWORD *)(v10 + 16) & 3 | v68;
  if ( (a1[1] & 1) != 0 )
  {
    v17 = (unsigned __int64)a1 ^ v59;
    if ( !v59 )
      v17 = 0LL;
  }
  *a1 = v17;
  return v17;
}
