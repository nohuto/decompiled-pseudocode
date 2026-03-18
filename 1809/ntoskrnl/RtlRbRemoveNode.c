/*
 * XREFs of RtlRbRemoveNode @ 0x1400BDDD0
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140009D00 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14000B644 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVaMgrAlloc @ 0x14000D358 (RtlpHpVaMgrAlloc.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140024DA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140024FE4 (KiAbEntryUpdateOwnerTreePosition.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140028C34 (MiBitmapsCachedEntryLengthChanged.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14002A820 (MiCoalescePageFileBitmapsCache.c)
 *     RtlpHpVsChunkSplit @ 0x1400BC830 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1400BD300 (RtlpHpVsFreeChunkRemove.c)
 *     KiRemoveTimer2 @ 0x1400FB710 (KiRemoveTimer2.c)
 *     IoStopDiskIoAttributionForContext @ 0x140105C3C (IoStopDiskIoAttributionForContext.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140116EC8 (KiRemoveSchedulingGroupQueue.c)
 *     MiRescanPageFileBitmapPortion @ 0x1401208EC (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140124554 (MiInvalidatePageFileBitmapsCache.c)
 *     PfSnNameRemove @ 0x140126838 (PfSnNameRemove.c)
 *     KiSetClockInterval @ 0x14012EAD8 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x140190BCC (KiResetClockInterval.c)
 *     MiRemoveSlabEntry @ 0x1402C2B54 (MiRemoveSlabEntry.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1402EA480 (PspJobIoRateVolumeEntryRemove.c)
 *     VmpFaultEntryRemove @ 0x14030C1F8 (VmpFaultEntryRemove.c)
 *     VmpMergeMemoryRanges @ 0x14030CB10 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14030D510 (VmpRemoveMemoryRange.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C4680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C4A10 (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BA4D0 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x1407F7150 (HvpViewMapShrinkStorage.c)
 *     MiDeleteImageHotPatchState @ 0x140854CFC (MiDeleteImageHotPatchState.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408BFC50 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408C00B8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(__int64 a1, unsigned __int64 a2)
{
  char v2; // di
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  char v9; // di
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  BOOL v12; // r15d
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  char v22; // di
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  char v25; // di
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  char v28; // bl
  char v29; // si
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  char v37; // si
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int64 *v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  char v46; // cl
  bool v47; // zf
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  char v52; // bl
  unsigned __int64 v53; // rcx
  char v54; // cl
  char v55; // cl
  unsigned __int64 v56; // rsi
  __int64 v57; // rbp
  __int64 v58; // r9
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rax
  int v62; // r10d
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r9
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // r9
  char v76; // cl
  __int64 v77; // r9
  char v78; // al
  __int64 v79; // rax
  unsigned __int64 v80; // r9
  unsigned __int64 v81; // r10
  _BOOL8 v82; // rcx
  unsigned __int64 v83; // rax
  int v84; // r9d
  __int64 *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rax
  unsigned __int64 *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rbx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // r10
  unsigned __int64 v100; // rax
  int v101; // r9d
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 *v108; // rsi
  unsigned __int64 v109; // rcx
  __int64 v110; // rbx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  unsigned __int64 v114; // rax

  v2 = *(_BYTE *)(a1 + 8);
  v4 = *(_QWORD *)a2;
  if ( (v2 & 1) != 0 && v4 )
    v4 ^= a2;
  v6 = *(_QWORD *)(a2 + 8);
  if ( (v2 & 1) != 0 && v6 )
    v6 ^= a2;
  v7 = v6;
  if ( v4 )
    v7 = v4;
  v8 = 0LL;
  v9 = v2 & 1;
  v10 = 0LL;
  if ( v4 )
    v10 = v6;
  if ( !v10 )
  {
    v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v9 && v14 )
      v14 ^= a2;
    v13 = a2;
    if ( !v14 )
    {
      if ( v7 )
        *(_QWORD *)(v7 + 16) = 0LL;
      v43 = *(_QWORD *)(a1 + 8);
      v44 = *(_QWORD *)a1;
      if ( (v43 & 1) != 0 )
      {
        if ( v44 )
          v44 ^= a1;
        else
          v44 = 0LL;
      }
      if ( v44 != a2 )
        goto LABEL_322;
      if ( (v43 & 1) != 0 )
      {
        v45 = 0LL;
        LOBYTE(v44) = a1 ^ v7;
        if ( v7 )
          v45 = a1 ^ v7;
        *(_QWORD *)(a1 + 8) = v45;
        v46 = v45 | 1;
        *(_BYTE *)(a1 + 8) = v46;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v7;
        v46 = v7;
      }
      if ( (v46 & 1) != 0 )
      {
        v44 = a1 ^ v7;
        v47 = v7 == 0;
LABEL_96:
        if ( !v47 )
          v8 = v44;
      }
      else
      {
        v8 = v7;
      }
      *(_QWORD *)a1 = v8;
      return v44;
    }
    v48 = *(_QWORD *)(v14 + 8);
    if ( v9 && v48 )
      v48 ^= v14;
    if ( v48 == a2 )
    {
      v12 = 1;
    }
    else
    {
      v49 = *(_QWORD *)v14;
      if ( v9 && v49 )
        v49 ^= v14;
      if ( v49 != a2 )
        goto LABEL_322;
      v50 = *(_QWORD *)(a1 + 8);
      v12 = 0;
      if ( (v50 & 1) != 0 )
      {
        if ( v50 == 1 )
          v51 = 0LL;
        else
          v51 = v50 ^ (a1 | 1);
      }
      else
      {
        v51 = *(_QWORD *)(a1 + 8);
      }
      if ( v51 == a2 )
      {
        if ( v7 )
        {
          if ( (v50 & 1) != 0 )
          {
            *(_QWORD *)(a1 + 8) = a1 ^ v7;
            *(_BYTE *)(a1 + 8) = a1 ^ v7 | 1;
          }
          else
          {
            *(_QWORD *)(a1 + 8) = v7;
          }
        }
        else if ( (v50 & 1) != 0 )
        {
          *(_QWORD *)(a1 + 8) = a1 ^ v14;
          *(_BYTE *)(a1 + 8) = a1 ^ v14 | 1;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v14;
        }
      }
    }
    v28 = *(_BYTE *)(a2 + 16);
    goto LABEL_124;
  }
  v11 = *(_QWORD *)v6;
  v12 = 1;
  v13 = v6;
  v14 = v6;
  if ( *(_QWORD *)v6 )
  {
    v12 = 0;
    do
    {
      v14 = v13;
      if ( v9 && v11 )
        v13 ^= v11;
      else
        v13 = v11;
      v11 = *(_QWORD *)v13;
    }
    while ( *(_QWORD *)v13 );
  }
  if ( v9 && v4 )
    v15 = v4 ^ v13;
  else
    v15 = v4;
  *(_QWORD *)v13 = v15;
  v16 = *(_QWORD *)(v4 + 16);
  v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = *(_BYTE *)(a1 + 8) & 1;
  if ( v18 && v17 )
    v17 ^= v4;
  if ( v17 != a2 )
    goto LABEL_322;
  v19 = v4 ^ v13;
  if ( !v18 )
    v19 = v13;
  *(_QWORD *)(v4 + 16) = v16 & 3 | v19;
  v20 = *(_QWORD *)(v6 + 16);
  v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
  v22 = *(_BYTE *)(a1 + 8) & 1;
  if ( v22 && v21 )
    v21 ^= v6;
  if ( v21 != a2 )
    goto LABEL_322;
  v23 = v6 ^ v13;
  v24 = v6 ^ v13;
  if ( !v22 )
    v23 = v13;
  *(_QWORD *)(v6 + 16) = v20 & 3 | v23;
  v7 = *(_QWORD *)(v13 + 8);
  v25 = *(_BYTE *)(a1 + 8) & 1;
  if ( v25 && v7 )
    v7 ^= v13;
  if ( !v25 )
    v24 = v6;
  *(_QWORD *)(v13 + 8) = v24;
  v26 = *(_QWORD *)(v13 + 16);
  v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
  v28 = v26;
  v29 = *(_BYTE *)(a1 + 8) & 1;
  if ( v29 && v27 )
    v30 = v13 ^ v27;
  else
    v30 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v30 != v14 )
  {
    v28 = v26;
    if ( v29 )
    {
      if ( !v27 )
        goto LABEL_49;
      v27 ^= v13;
    }
    if ( v27 )
      goto LABEL_322;
LABEL_49:
    if ( v13 != v14 )
      goto LABEL_322;
  }
  v31 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v29 )
  {
    if ( v31 )
      v31 ^= a2;
    if ( v31 )
      v31 ^= v13;
  }
  v32 = v31 | v26 & 3;
  *(_QWORD *)(v13 + 16) = v32;
  *(_BYTE *)(v13 + 16) = v32 ^ (*(_BYTE *)(a2 + 16) ^ v32) & 1;
  v33 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v33 )
  {
    v37 = *(_BYTE *)(a1 + 8) & 1;
    if ( v37 )
      v33 ^= a2;
    v38 = *(_QWORD *)(v33 + 8);
    if ( v37 && v38 )
      v38 ^= v33;
    v39 = 0LL;
    if ( v38 == a2 )
      v39 = 8LL;
    v40 = (unsigned __int64 *)(v39 + v33);
    v41 = *(_QWORD *)(v39 + v33);
    if ( v37 && v41 )
      v41 ^= v33;
    if ( v41 != a2 )
      goto LABEL_322;
    v42 = v33 ^ v13;
    if ( !v37 )
      v42 = v13;
    *v40 = v42;
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 8);
    v35 = *(_QWORD *)a1;
    if ( (v34 & 1) != 0 )
    {
      if ( v35 )
        v35 ^= a1;
      else
        v35 = 0LL;
    }
    if ( v35 != a2 )
      goto LABEL_322;
    v36 = v13;
    if ( (v34 & 1) != 0 )
      v36 = a1 ^ v13;
    *(_QWORD *)a1 = v36;
  }
LABEL_124:
  v52 = v28 & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v7 )
    v53 = v7 ^ v14;
  else
    v53 = v7;
  LOBYTE(v44) = v12;
  *(_QWORD *)(v14 + 8LL * v12) = v53;
  if ( v7 )
  {
    v44 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v54 = *(_BYTE *)(a1 + 8) & 1;
    if ( v54 && v44 )
      v44 ^= v7;
    if ( v44 != v13 )
      goto LABEL_322;
    if ( v54 && v14 )
      v14 ^= v7;
    *(_QWORD *)(v7 + 16) = v14;
    return v44;
  }
  if ( v52 )
    return v44;
  v55 = *(_BYTE *)(a1 + 8);
  while ( 1 )
  {
    v56 = v14;
    v57 = !v12;
    v58 = *(_QWORD *)(v14 + 8 * v57);
    if ( (v55 & 1) != 0 && v58 )
      v59 = v14 ^ v58;
    else
      v59 = *(_QWORD *)(v14 + 8 * v57);
    if ( (*(_BYTE *)(v59 + 16) & 1) == 0 )
      goto LABEL_203;
    v60 = *(_QWORD *)a1;
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
    {
      if ( v60 )
        v60 ^= a1;
      else
        v60 = 0LL;
    }
    v61 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v62 = *(_QWORD *)(a1 + 8) & 1;
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v61 )
      v61 ^= v59;
    if ( v61 != v14 )
      goto LABEL_322;
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v58 )
      v58 ^= v14;
    if ( v58 != v59 )
      goto LABEL_322;
    v63 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
    {
      if ( !v63 )
        goto LABEL_160;
      v63 ^= v14;
    }
    if ( !v63 )
    {
LABEL_160:
      if ( v60 != v14 )
        goto LABEL_322;
      v60 = v59;
      goto LABEL_176;
    }
    v64 = *(_QWORD *)(v63 + 8);
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v64 )
      v64 ^= v63;
    if ( v64 == v14 )
    {
      v65 = v59 ^ v63;
      if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
        v65 = v59;
      *(_QWORD *)(v63 + 8) = v65;
    }
    else
    {
      v66 = *(_QWORD *)v63;
      if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v66 )
        v66 ^= v63;
      if ( v66 != v14 )
        goto LABEL_322;
      v67 = v59 ^ v63;
      if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
        v67 = v59;
      *(_QWORD *)v63 = v67;
    }
LABEL_176:
    if ( v62 && v63 )
      v63 ^= v59;
    *(_QWORD *)(v59 + 16) = v63 | *(_DWORD *)(v59 + 16) & 3;
    v68 = *(_QWORD *)(v59 + 8LL * v12);
    if ( !v62 )
      goto LABEL_182;
    if ( v68 )
    {
      v68 ^= v59;
LABEL_182:
      if ( v68 )
      {
        v69 = *(_QWORD *)(v68 + 16);
        v70 = v69 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v62 && v70 )
          v70 ^= v68;
        if ( v70 != v59 )
          goto LABEL_322;
        v71 = v68 ^ v14;
        if ( !v62 )
          v71 = v14;
        *(_QWORD *)(v68 + 16) = v69 & 3 | v71;
      }
    }
    if ( v62 && v68 )
      v68 ^= v14;
    *(_QWORD *)(v14 + 8 * v57) = v68;
    v72 = v59 ^ v14;
    v73 = v59 ^ v14;
    if ( !v62 )
    {
      v73 = v14;
      v72 = v59;
    }
    *(_QWORD *)(v59 + 8LL * v12) = v73;
    *(_QWORD *)(v14 + 16) = *(_DWORD *)(v14 + 16) & 3 | v72;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      v74 = 0LL;
      if ( v60 )
        v74 = a1 ^ v60;
    }
    else
    {
      v74 = v60;
    }
    *(_QWORD *)a1 = v74;
    *(_BYTE *)(v59 + 16) &= ~1u;
    *(_BYTE *)(v14 + 16) |= 1u;
    v55 = *(_BYTE *)(a1 + 8);
    v59 = *(_QWORD *)(v14 + 8 * v57);
    if ( (v55 & 1) != 0 && v59 )
      v59 ^= v14;
LABEL_203:
    v75 = *(_QWORD *)v59;
    v76 = v55 & 1;
    if ( *(_QWORD *)v59 )
    {
      if ( v76 )
        v75 ^= v59;
      if ( (*(_BYTE *)(v75 + 16) & 1) != 0 )
        break;
    }
    v77 = *(_QWORD *)(v59 + 8);
    if ( v77 )
    {
      if ( v76 )
        v77 ^= v59;
      if ( (*(_BYTE *)(v77 + 16) & 1) != 0 )
        break;
    }
    v78 = *(_BYTE *)(v14 + 16);
    if ( (v78 & 1) != 0 )
    {
      LOBYTE(v44) = v78 & 0xFE;
      *(_BYTE *)(v14 + 16) = v44;
      *(_BYTE *)(v59 + 16) |= 1u;
      return v44;
    }
    *(_BYTE *)(v59 + 16) |= 1u;
    v55 = *(_BYTE *)(a1 + 8);
    v44 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v55 & 1) != 0 && v44 )
      v14 ^= v44;
    else
      v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
      return v44;
    v79 = *(_QWORD *)(v14 + 8);
    if ( (v55 & 1) != 0 && v79 )
      v79 ^= v14;
    v12 = v79 == v56;
  }
  v80 = *(_QWORD *)(v59 + 8 * v57);
  if ( !v76 )
  {
LABEL_224:
    if ( !v80 || (*(_BYTE *)(v80 + 16) & 1) == 0 )
      goto LABEL_226;
    goto LABEL_267;
  }
  if ( v80 )
  {
    v80 ^= v59;
    goto LABEL_224;
  }
LABEL_226:
  v81 = *(_QWORD *)(v59 + 8LL * v12);
  if ( v76 && v81 )
    v81 ^= v59;
  *(_BYTE *)(v81 + 16) &= ~1u;
  v82 = !v12;
  v83 = *(_QWORD *)(v81 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v84 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v83 )
    v83 ^= v81;
  if ( v83 != v59 )
    goto LABEL_322;
  v85 = (__int64 *)(v59 + 8LL * v12);
  v86 = *v85;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v86 )
    v86 ^= v59;
  if ( v86 != v81 )
    goto LABEL_322;
  v87 = 8 * v82;
  v88 = *(_QWORD *)(8 * v82 + v14);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v88 )
    v88 ^= v14;
  if ( v88 != v59 )
    goto LABEL_322;
  v89 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v89 )
    v89 ^= v59;
  if ( v89 != v14 )
    goto LABEL_322;
  v90 = v81 ^ v14;
  v91 = v81 ^ v14;
  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    v91 = v81;
  *(_QWORD *)(v87 + v14) = v91;
  if ( !v84 || !v14 )
    v90 = v14;
  v92 = (unsigned __int64 *)(v87 + v81);
  *(_QWORD *)(v81 + 16) = v90 | *(_DWORD *)(v81 + 16) & 3;
  v93 = *(_QWORD *)(v87 + v81);
  if ( !v84 )
  {
LABEL_253:
    if ( !v93 )
      goto LABEL_261;
    v94 = *(_QWORD *)(v93 + 16);
    v95 = v94 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v84 && v95 )
      v95 ^= v93;
    if ( v95 == v81 )
    {
      v96 = v93 ^ v59;
      if ( !v84 )
        v96 = v59;
      *(_QWORD *)(v93 + 16) = v94 & 3 | v96;
      goto LABEL_261;
    }
    goto LABEL_322;
  }
  if ( v93 )
  {
    v93 ^= v81;
    goto LABEL_253;
  }
LABEL_261:
  if ( v84 && v93 )
    v93 ^= v59;
  *v85 = v93;
  v97 = v81 ^ v59;
  v47 = v84 == 0;
  v98 = v81 ^ v59;
  v80 = v59;
  if ( v47 )
  {
    v98 = v59;
    v97 = v81;
  }
  *v92 = v98;
  *(_QWORD *)(v59 + 16) = *(_DWORD *)(v59 + 16) & 3 | v97;
  v59 = v81;
LABEL_267:
  *(_BYTE *)(v59 + 16) ^= (*(_BYTE *)(v14 + 16) ^ *(_BYTE *)(v59 + 16)) & 1;
  *(_BYTE *)(v14 + 16) &= ~1u;
  *(_BYTE *)(v80 + 16) &= ~1u;
  v99 = *(_QWORD *)a1;
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 )
  {
    if ( v99 )
      v99 ^= a1;
    else
      v99 = 0LL;
  }
  v100 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v101 = *(_QWORD *)(a1 + 8) & 1;
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v100 )
    v100 ^= v59;
  if ( v100 != v14 )
    goto LABEL_322;
  v102 = *(_QWORD *)(v14 + 8 * v57);
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v102 )
    v102 ^= v14;
  if ( v102 != v59 )
LABEL_322:
    __fastfail(0x1Du);
  v103 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
    goto LABEL_282;
  if ( !v103 )
    goto LABEL_283;
  v103 ^= v14;
LABEL_282:
  if ( !v103 )
  {
LABEL_283:
    if ( v99 == v14 )
    {
      v99 = v59;
      goto LABEL_299;
    }
    goto LABEL_322;
  }
  v104 = *(_QWORD *)(v103 + 8);
  if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v104 )
    v104 ^= v103;
  if ( v104 == v14 )
  {
    v105 = v103 ^ v59;
    if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
      v105 = v59;
    *(_QWORD *)(v103 + 8) = v105;
  }
  else
  {
    v106 = *(_QWORD *)v103;
    if ( (*(_QWORD *)(a1 + 8) & 1) != 0 && v106 )
      v106 ^= v103;
    if ( v106 != v14 )
      goto LABEL_322;
    v107 = v103 ^ v59;
    if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
      v107 = v59;
    *(_QWORD *)v103 = v107;
  }
LABEL_299:
  if ( v101 && v103 )
    v103 ^= v59;
  v108 = (unsigned __int64 *)(v59 + 8LL * v12);
  *(_QWORD *)(v59 + 16) = v103 | *(_DWORD *)(v59 + 16) & 3;
  v109 = *v108;
  if ( v101 )
  {
    if ( v109 )
    {
      v109 ^= v59;
      goto LABEL_305;
    }
  }
  else
  {
LABEL_305:
    if ( v109 )
    {
      v110 = *(_QWORD *)(v109 + 16);
      v111 = v110 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v101 && v111 )
        v111 ^= v109;
      if ( v111 != v59 )
        goto LABEL_322;
      v112 = v109 ^ v14;
      if ( !v101 )
        v112 = v14;
      *(_QWORD *)(v109 + 16) = v110 & 3 | v112;
    }
  }
  if ( v101 && v109 )
    v109 ^= v14;
  *(_QWORD *)(v14 + 8 * !v12) = v109;
  v113 = v59 ^ v14;
  v114 = v59 ^ v14;
  if ( !v101 )
  {
    v114 = v14;
    v113 = v59;
  }
  *v108 = v114;
  v44 = *(_DWORD *)(v14 + 16) & 3;
  *(_QWORD *)(v14 + 16) = v44 | v113;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    v44 = a1 ^ v99;
    v47 = v99 == 0;
    goto LABEL_96;
  }
  *(_QWORD *)a1 = v99;
  return v44;
}
