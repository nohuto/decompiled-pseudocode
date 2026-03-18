/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x1406921D8
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x140A202F0 (MiInitializeBootProcess.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     InitializeSListHead @ 0x1400E5520 (InitializeSListHead.c)
 *     MiInitializeProcessPageTableCommitmentBitMaps @ 0x1400E555C (MiInitializeProcessPageTableCommitmentBitMaps.c)
 *     MiInitializeWorkingSetList @ 0x1400E55C0 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1400E5724 (MiAllowWorkingSetExpansion.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiMapProcessExecutable @ 0x1406796F4 (MiMapProcessExecutable.c)
 *     MiInsertProcessVads @ 0x14069241C (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x140692498 (MiInitializeVadBitMap.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140692724 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406927FC (MiInitializeProcessBottomUpEntropy.c)
 *     MiComputeProcessUserVa @ 0x1406929BC (MiComputeProcessUserVa.c)
 *     MiAllocateProcessVads @ 0x140692ADC (MiAllocateProcessVads.c)
 *     MiReferenceCfgVad @ 0x1406BE04C (MiReferenceCfgVad.c)
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x1408875AC (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x1408875FC (MiReturnProcessVads.c)
 *     MiInitializeProcessAwe @ 0x1408968B4 (MiInitializeProcessAwe.c)
 *     MiCloneProcessAddressSpace @ 0x14089AED4 (MiCloneProcessAddressSpace.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int *a4,
        char a5)
{
  PVOID PoolWithTag; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r14
  int inserted; // ebx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int64 v19; // r13
  __int128 v20; // xmm0
  _QWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  _OWORD v36[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[224]; // [rsp+B0h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  memset(Src, 0, 0xD8uLL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x270uLL, 0x3250694Du);
  v10 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x270uLL);
    MiInitializeProcessAwe(v10 + 48);
    if ( a2 )
    {
      v15 = *(_QWORD *)(a2 + 1296);
      memmove(Src, (const void *)(v15 + 48), 0xD8uLL);
      v16 = *(_QWORD *)(v15 + 264);
      v17 = 2LL;
      v18 = *(_OWORD *)(v15 + 456);
      v19 = *(_QWORD *)(v15 + 360);
      v36[0] = *(_OWORD *)(v15 + 440);
      v20 = *(_OWORD *)(v15 + 472);
      v34 = v16;
      v21 = &v36[1];
      v36[1] = v18;
      v22 = *(_OWORD *)(v15 + 488);
      v35 = v19;
      v36[2] = v20;
      v36[3] = v22;
      do
      {
        *v21 = 0LL;
        v21 += 4;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      v34 = 0LL;
      v35 = 0LL;
      memset(v36, 0, sizeof(v36));
    }
    KeStackAttachProcess((PRKPROCESS)BugCheckParameter1, &ApcState);
    *(_QWORD *)(BugCheckParameter1 + 880) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 888) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1624) = 0LL;
    if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
      MiInitializeLockedPagesTracking(BugCheckParameter1);
    v11 = BugCheckParameter1 + 1280;
    P = 0LL;
    MiInitializeWorkingSetList(BugCheckParameter1 + 1280, v10, 0, 0LL);
    v12 = *(_QWORD *)(BugCheckParameter1 + 1296);
    *(_DWORD *)(v12 + 280) = 1;
    MiInitializeProcessPageTableCommitmentBitMaps(BugCheckParameter1);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 780), 0x400u);
    v33 = 0LL;
    inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, &v33);
    if ( inserted >= 0 )
    {
      if ( a2
        || (*(_DWORD *)(BugCheckParameter1 + 1788) & 1) != 0
        || (P = (PVOID)MiAllocateProcessVads(BugCheckParameter1, v33)) != 0LL )
      {
        InitializeSListHead((PSLIST_HEADER)(v12 + 368));
        if ( a2
          || (MiInitializeProcessBottomUpEntropy(BugCheckParameter1),
              MiInitializeProcessTopDownEntropy(BugCheckParameter1, a3),
              inserted = MiInitializeVadBitMap(0LL),
              inserted >= 0) )
        {
          inserted = MiInsertProcessVads(BugCheckParameter1, &P);
          if ( inserted >= 0 )
          {
            if ( a3 )
            {
              inserted = MiMapProcessExecutable((_KPROCESS *)BugCheckParameter1, a3, a4);
LABEL_14:
              MiAllowWorkingSetExpansion(BugCheckParameter1 + 1280);
LABEL_15:
              KeUnstackDetachProcess(&ApcState);
              return (unsigned int)inserted;
            }
            if ( (*(_DWORD *)(BugCheckParameter1 + 1788) & 1) != 0 && !a2 )
              goto LABEL_14;
            *a4 &= ~0x10u;
            if ( !a2 )
            {
              KeUnstackDetachProcess(&ApcState);
              return 0;
            }
            if ( (*(_BYTE *)(a2 + 728) & 1) != 0 )
            {
              inserted = -1073741595;
            }
            else
            {
              *(_QWORD *)(BugCheckParameter1 + 1104) = *(_QWORD *)(a2 + 1104);
              *(_DWORD *)(BugCheckParameter1 + 1112) = *(_DWORD *)(a2 + 1112);
              *(_WORD *)(BugCheckParameter1 + 1116) = *(_WORD *)(a2 + 1116);
              *(_BYTE *)(BugCheckParameter1 + 1118) = *(_BYTE *)(a2 + 1118);
              *(_QWORD *)(BugCheckParameter1 + 1152) = *(_QWORD *)(a2 + 1152);
              memmove((void *)(v12 + 48), Src, 0xD8uLL);
              v23 = v36[1];
              v24 = v34;
              *(_OWORD *)(v12 + 440) = v36[0];
              *(_QWORD *)(v12 + 264) = v24;
              v25 = v36[2];
              *(_OWORD *)(v12 + 456) = v23;
              v26 = v36[3];
              *(_OWORD *)(v12 + 472) = v25;
              *(_OWORD *)(v12 + 488) = v26;
              inserted = MiInitializeVadBitMap(1LL);
              if ( inserted >= 0 )
              {
                v28 = *(__int64 **)(a2 + 1064);
                if ( v28 )
                {
                  v27 = *v28;
                  if ( *v28 )
                    **(_QWORD **)(BugCheckParameter1 + 1064) = v27;
                }
                if ( (*a4 & 0x80u) == 0 )
                  inserted = 0;
                else
                  inserted = MiSessionCreate(v27);
                v29 = 2LL;
                *(_QWORD *)(v12 + 360) = (v35 + 1) & -(__int64)((a5 & 1) != 0);
                v30 = (_QWORD *)(v12 + 320);
                do
                {
                  v30[1] = v30;
                  *v30 = v30;
                  v30 += 2;
                  --v29;
                }
                while ( v29 );
                KeUnstackDetachProcess(&ApcState);
                if ( inserted >= 0 )
                {
                  inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
                  if ( inserted >= 0 )
                  {
                    KeStackAttachProcess((PRKPROCESS)BugCheckParameter1, &ApcState);
                    CurrentThread = KeGetCurrentThread();
                    if ( *((_QWORD *)&v36[2] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v36[2], 1LL);
                    if ( *((_QWORD *)&v36[0] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v36[0], 0LL);
                    KeUnstackDetachProcess(&ApcState);
                  }
                }
                MiAllowWorkingSetExpansion(v11);
                return (unsigned int)inserted;
              }
            }
          }
        }
      }
      else
      {
        inserted = -1073741670;
      }
    }
    MiReturnProcessVads(P);
    goto LABEL_15;
  }
  return 3221225626LL;
}
