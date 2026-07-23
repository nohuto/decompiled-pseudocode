/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x14067AA78
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x1409DE13C (MiInitializeBootProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     MiInitializeWorkingSetList @ 0x1400F3230 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1400F3394 (MiAllowWorkingSetExpansion.c)
 *     ExInitializeAutoExpandPushLock @ 0x1401192A0 (ExInitializeAutoExpandPushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiMapProcessExecutable @ 0x140678E08 (MiMapProcessExecutable.c)
 *     MiInsertProcessVads @ 0x14067AD24 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x14067ADA0 (MiInitializeVadBitMap.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14067B028 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14067B100 (MiInitializeProcessBottomUpEntropy.c)
 *     MiComputeProcessUserVa @ 0x14067B2BC (MiComputeProcessUserVa.c)
 *     MiAllocateProcessVads @ 0x14067B3DC (MiAllocateProcessVads.c)
 *     MiReferenceCfgVad @ 0x14067BCA4 (MiReferenceCfgVad.c)
 *     MiSessionCreate @ 0x1407162A8 (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x14084D308 (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x14084D370 (MiReturnProcessVads.c)
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
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
  int v13; // edx
  unsigned int v14; // r9d
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  int inserted; // ebx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // r13
  __int128 v25; // xmm0
  _QWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  struct _KTHREAD *CurrentThread; // rdi
  int v35; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h]
  _OWORD v39[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v40[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[176]; // [rsp+D0h] [rbp-30h] BYREF

  memset(Src, 0, 0xA8uLL);
  memset(&v40[6], 0, 0x20uLL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x230uLL, 0x3250694Du);
  v10 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x230uLL);
    ExInitializeAutoExpandPushLock((_QWORD *)(v10 + 360), 1);
    if ( a2 )
    {
      v20 = *(_QWORD *)(a2 + 1296);
      memmove(Src, (const void *)(v20 + 48), 0xA8uLL);
      v21 = *(_DWORD *)(v20 + 216);
      v22 = 2LL;
      v23 = *(_OWORD *)(v20 + 408);
      v24 = *(_QWORD *)(v20 + 312);
      v39[0] = *(_OWORD *)(v20 + 392);
      v25 = *(_OWORD *)(v20 + 424);
      v35 = v21;
      v26 = &v39[1];
      v39[1] = v23;
      v27 = *(_OWORD *)(v20 + 440);
      v38 = v24;
      v39[2] = v25;
      v39[3] = v27;
      do
      {
        *v26 = 0LL;
        v26 += 4;
        --v22;
      }
      while ( v22 );
    }
    else
    {
      v35 = 0;
      v38 = 0LL;
      memset(v39, 0, sizeof(v39));
    }
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v40);
    *(_QWORD *)(BugCheckParameter1 + 872) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 880) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1576) = 0LL;
    if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
      MiInitializeLockedPagesTracking(BugCheckParameter1);
    v11 = BugCheckParameter1 + 1280;
    P = 0LL;
    MiInitializeWorkingSetList(BugCheckParameter1 + 1280, v10, 0, 0LL);
    v12 = *(_QWORD *)(BugCheckParameter1 + 1296);
    v13 = 256;
    v14 = 1;
    *(_DWORD *)(v12 + 224) = 1;
    *(_QWORD *)(v12 + 496) = v12 + 456;
    *(_DWORD *)(v12 + 488) = 256;
    v40[7] = qword_14043B5E8 + 0x10000000;
    v40[8] = qword_14043B5E8 + 268451840;
    v15 = &v40[7];
    v16 = v12 + 504;
    do
    {
      v17 = *v15;
      if ( !*v15 )
        break;
      v13 <<= 9;
      ++v14;
      *(_DWORD *)v16 = v13;
      ++v15;
      *(_QWORD *)(v16 + 8) = v17;
      v16 += 16LL;
    }
    while ( v14 < 4 );
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x400u);
    v37 = 0LL;
    inserted = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, &v37);
    if ( inserted >= 0 )
    {
      if ( a2
        || (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) != 0
        || (P = (PVOID)MiAllocateProcessVads(BugCheckParameter1, v37)) != 0LL )
      {
        InitializeSListHead((PSLIST_HEADER)(v12 + 320));
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
LABEL_17:
              MiAllowWorkingSetExpansion(BugCheckParameter1 + 1280);
LABEL_18:
              KiUnstackDetachProcess((__int64)v40, 0LL);
              return (unsigned int)inserted;
            }
            if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) != 0 && !a2 )
              goto LABEL_17;
            *a4 &= ~0x10u;
            if ( !a2 )
            {
              KiUnstackDetachProcess((__int64)v40, 0LL);
              return 0;
            }
            if ( (*(_BYTE *)(a2 + 720) & 1) != 0 )
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
              memmove((void *)(v12 + 48), Src, 0xA8uLL);
              v28 = v39[1];
              *(_OWORD *)(v12 + 392) = v39[0];
              *(_DWORD *)(v12 + 216) = v35;
              v29 = v39[2];
              *(_OWORD *)(v12 + 408) = v28;
              v30 = v39[3];
              *(_OWORD *)(v12 + 424) = v29;
              *(_OWORD *)(v12 + 440) = v30;
              inserted = MiInitializeVadBitMap(1LL);
              if ( inserted >= 0 )
              {
                v31 = *(_QWORD **)(a2 + 1064);
                if ( v31 && *v31 )
                  **(_QWORD **)(BugCheckParameter1 + 1064) = *v31;
                if ( (*a4 & 0x80u) == 0 )
                  inserted = 0;
                else
                  inserted = MiSessionCreate();
                v32 = 3LL;
                *(_QWORD *)(v12 + 312) = (v38 + 1) & -(__int64)((a5 & 1) != 0);
                v33 = (_QWORD *)(v12 + 256);
                do
                {
                  v33[1] = v33;
                  *v33 = v33;
                  v33 += 2;
                  --v32;
                }
                while ( v32 );
                KiUnstackDetachProcess((__int64)v40, 0LL);
                if ( inserted >= 0 )
                {
                  inserted = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
                  if ( inserted >= 0 )
                  {
                    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v40);
                    CurrentThread = KeGetCurrentThread();
                    if ( *((_QWORD *)&v39[2] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v39[2], 1LL);
                    if ( *((_QWORD *)&v39[0] + 1) )
                      MiReferenceCfgVad(CurrentThread, *(_QWORD *)&v39[0], 0LL);
                    KiUnstackDetachProcess((__int64)v40, 0LL);
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
    goto LABEL_18;
  }
  return 3221225626LL;
}
