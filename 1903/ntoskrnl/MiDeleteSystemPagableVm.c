/*
 * XREFs of MiDeleteSystemPagableVm @ 0x14002D400
 * Callers:
 *     MmFreePoolMemory @ 0x14010E4BC (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x14018A7A8 (MiDeleteBootRange.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x14088B180 (MmReturnChargesToLockPagedPool.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiDeleteValidSystemPage @ 0x140024550 (MiDeleteValidSystemPage.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiTerminateWsle @ 0x14004B140 (MiTerminateWsle.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DF18 (MI_WSLE_LOG_ACCESS.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiPageTableLockIsContended @ 0x14008DE78 (MiPageTableLockIsContended.c)
 *     MiIsPfnSystemCharged @ 0x140091B9C (MiIsPfnSystemCharged.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MiWriteWsle @ 0x1400F6984 (MiWriteWsle.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140102110 (MI_PROTO_FORMAT_COMBINED.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     MiReturnSystemCharges @ 0x140125544 (MiReturnSystemCharges.c)
 *     MiDecrementCombinedPte @ 0x140140850 (MiDecrementCombinedPte.c)
 *     MiImageProtoChargedCommit @ 0x14017AC20 (MiImageProtoChargedCommit.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDriverPageIsDangling @ 0x1402C3D14 (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  __int64 v10; // r15
  int v11; // r9d
  char v12; // si
  char v13; // r8
  unsigned __int64 v14; // r12
  __int64 DeepFreezeStartTime; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // di
  _KPROCESS *CurrentThread; // rcx
  BOOL v20; // r14d
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // edi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  _KPROCESS *Process; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  BOOL IsContended; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  bool v42; // zf
  _QWORD *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  _QWORD *v48; // r15
  __int64 v49; // rdi
  __int64 v50; // r10
  _QWORD *v51; // rax
  __int64 v52; // r10
  signed __int32 v53[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v54; // [rsp+30h] [rbp-D0h]
  _QWORD *v55; // [rsp+38h] [rbp-C8h]
  __int64 v56; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+48h] [rbp-B8h]
  __int64 valid; // [rsp+50h] [rbp-B0h]
  BOOL v59; // [rsp+58h] [rbp-A8h]
  int v60; // [rsp+5Ch] [rbp-A4h]
  BOOL v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  int v63; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v64[3]; // [rsp+78h] [rbp-88h] BYREF
  char v65[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h]
  __int64 v67; // [rsp+A0h] [rbp-60h]
  char v68[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v69[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v70; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v71; // [rsp+C4h] [rbp-3Ch]
  __int16 v72; // [rsp+C6h] [rbp-3Ah]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  _BYTE v76[152]; // [rsp+E0h] [rbp-20h] BYREF

  v55 = a6;
  v67 = a2;
  v72 = 0;
  memset(v76, 0, sizeof(v76));
  v61 = 0;
  if ( a2 )
    v61 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v10 = 0LL;
  valid = 0LL;
  v59 = 0;
  v11 = 0;
  v12 = a5;
  v13 = *(_BYTE *)(a1 + 184) & 7;
  v66 = 0LL;
  v60 = 0;
  if ( (unsigned __int8)(v13 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
      v59 = dword_140466368 != 0;
    v11 = 2;
    v60 = 2;
  }
  v62 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v73 = 20LL;
  v57 = a5 & 8;
  v70 = v11;
  v71 = 0;
  v74 = 0LL;
  v75 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v64[2] = (unsigned int)a4;
    v64[0] = 0LL;
    v64[1] = (__int64)(a3 << 25) >> 16;
    if ( v13 == 4 )
    {
      v64[0] = 6LL;
    }
    else if ( v13 == 3 )
    {
      v64[0] = 4LL;
    }
    else
    {
      v64[0] = v64[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v69[1] = 24LL;
    v69[0] = v64;
    EtwTraceKernelEvent((unsigned int)v69, 1, 536870913, 633, 289413890);
  }
  v14 = a3 + 8 * a4;
  v54 = MiLockWorkingSetShared(a1);
  v18 = v54;
  while ( a3 < v14 )
  {
    if ( v10 )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_9;
      MiFlushTbList(&v70, DeepFreezeStartTime, v16, v17);
      MiUnlockPageTableInternal(a1);
    }
    valid = MiLockLowestValidPageTable(a1, a3, v68);
    v10 = valid;
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(a1);
      v10 = 0LL;
      valid = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      continue;
    }
LABEL_9:
    v20 = MiPteInShadowRange(a3);
    if ( v20 )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        CurrentThread = (_KPROCESS *)KeGetCurrentThread();
        DeepFreezeStartTime = CurrentThread->Affinity.Bitmap[12];
        if ( *(_BYTE *)(DeepFreezeStartTime + 648) != 1 && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          CurrentThread = KeGetCurrentThread()->ApcState.Process;
          DeepFreezeStartTime = CurrentThread[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v44 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a3 >> 3) & 0x1FF));
            DeepFreezeStartTime = v17 | 0x20;
            CurrentThread = (_KPROCESS *)(unsigned __int8)v44;
            LOBYTE(CurrentThread) = v44 & 0x20;
            if ( (v44 & 0x20) == 0 )
              DeepFreezeStartTime = v17;
            v17 = DeepFreezeStartTime;
            if ( (v44 & 0x42) != 0 )
              v17 = DeepFreezeStartTime | 0x42;
          }
        }
      }
    }
    v56 = v17;
    if ( !v17 )
      goto LABEL_30;
    if ( (v17 & 1) != 0 )
    {
      v21 = (__int64)((a3 << 25) - v66) >> 16;
      v22 = MI_READ_PTE_LOCK_FREE(&v56);
      v25 = v24 + 48 * ((v22 >> 12) & 0xFFFFFFFFFLL);
      v26 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v25 + 40) >> 40) & 0x3FFLL));
      if ( v57 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v25) )
        {
          v63 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v63);
            while ( *(__int64 *)(v25 + 24) < 0 );
          }
          *(_BYTE *)(v25 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v42 = v26 == v62;
          v12 = a5;
          if ( v42 )
            ++v55[1];
        }
        else
        {
          v12 = a5;
        }
        goto LABEL_29;
      }
      v27 = 0;
      if ( MiPteInShadowRange((v23 & (v21 >> 9)) - 0x98000000000LL)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        v45 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 8 * ((v29 >> 3) & 0x1FF));
          v47 = v28 | 0x20;
          if ( (v46 & 0x20) == 0 )
            v47 = v28;
          v28 = v47;
          if ( (v46 & 0x42) != 0 )
            v28 = v47 | 0x42;
        }
      }
      v30 = HIBYTE(v28) & 0xFu | (unsigned __int8)(16 * ((v28 >> 60) & 7));
      LOBYTE(v30) = HIBYTE(v28) & 0xF;
      if ( (HIBYTE(v28) & 0xF) == 9 )
      {
        MiWriteWsle(v30, v21, (unsigned __int8)(16 * ((v28 >> 60) & 7)) | 0xAu);
      }
      else
      {
        if ( (_BYTE)v30 == 8 )
          v27 = 1;
        if ( v59 )
          MI_WSLE_LOG_ACCESS(a1, a3);
        MiTerminateWsle(a1, v21, 1LL, v65);
        if ( !v27 )
        {
LABEL_20:
          v12 = a5;
          MiDeleteValidSystemPage(a1, a3, a5 & 4 | 0x10, (__int64)v55);
          if ( (a5 & 1) != 0 )
            goto LABEL_55;
          v56 = 0LL;
          _InterlockedOr(v53, 0);
          MiSwizzleInvalidPte((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32, v31, v32, v33);
          if ( !MiPteInShadowRange((unsigned __int64)&v56) )
            goto LABEL_22;
          if ( (unsigned int)MiPteHasShadow(Process) )
          {
            if ( !HIBYTE(word_140465BEC) && (v34 & 1) != 0 )
              v34 |= 0x8000000000000000uLL;
            v56 = v34;
            MiWritePteShadow(&v56, v34);
          }
          else
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 && (v34 & 1) != 0 )
              v34 |= 0x8000000000000000uLL;
LABEL_22:
            v56 = v34;
          }
          v36 = v56;
          if ( v20 )
          {
            if ( !(unsigned int)MiPteHasShadow(Process) )
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v36 & 1) != 0 )
              {
                v36 |= 0x8000000000000000uLL;
              }
              goto LABEL_24;
            }
            if ( !HIBYTE(word_140465BEC) && (v36 & 1) != 0 )
              v36 |= 0x8000000000000000uLL;
            *(_QWORD *)a3 = v36;
            MiWritePteShadow(a3, v36);
          }
          else
          {
LABEL_24:
            *(_QWORD *)a3 = v36;
          }
          DeepFreezeStartTime = qword_140465B00;
          v37 = v56;
          if ( qword_140465B00 && (v56 & 0x10) == 0 )
            v37 = v56 & ~qword_140465B00;
          if ( (v37 & 0xFFFFFFFF00000000uLL) == 0 )
LABEL_55:
            MiInsertTbFlushEntry(&v70, v21, 1LL);
LABEL_29:
          v18 = v54;
          goto LABEL_30;
        }
      }
      ++*v55;
      if ( v60 == 2 )
        MiReturnSystemCharges(v62, 1LL, 1LL);
      goto LABEL_20;
    }
    if ( (v17 & 0x400) != 0 )
    {
      if ( !v57 )
      {
        if ( (v17 & 2) != 0 )
        {
          ++v55[3];
        }
        else if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v17) )
        {
          v48 = v55;
          ++v55[3];
          if ( qword_140465B00 && (v17 & 0x10) == 0 )
            v17 &= ~qword_140465B00;
          v49 = **(_QWORD **)((((v17 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
          if ( (unsigned int)MiDecrementCombinedPte(a1, v17 >> 16) == 3 )
          {
            v42 = v49 == v62;
            v18 = v54;
            if ( v42 )
              ++v48[1];
          }
          else
          {
            v18 = v54;
          }
        }
        else if ( v61 )
        {
          ++v55[3];
        }
        else
        {
          if ( qword_140465B00 && (v17 & 0x10) == 0 )
            v17 &= ~qword_140465B00;
          if ( (unsigned int)MiImageProtoChargedCommit(v67, v17 >> 16) )
            ++v55[3];
        }
        DeepFreezeStartTime = ZeroPte;
        if ( v20 )
        {
          if ( (unsigned int)MiPteHasShadow(CurrentThread) )
          {
            if ( !HIBYTE(word_140465BEC) && (DeepFreezeStartTime & 1) != 0 )
              DeepFreezeStartTime |= 0x8000000000000000uLL;
            *(_QWORD *)a3 = DeepFreezeStartTime;
            MiWritePteShadow(a3, DeepFreezeStartTime);
            goto LABEL_30;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (DeepFreezeStartTime & 1) != 0 )
          {
            DeepFreezeStartTime |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = DeepFreezeStartTime;
      }
LABEL_30:
      a3 += 8LL;
      if ( a3 == v14 || (a3 & 0x78) != 0 )
      {
        v10 = valid;
      }
      else
      {
        IsContended = MiWorkingSetIsContended(a1);
        v10 = valid;
        if ( IsContended || (unsigned int)MiPageTableLockIsContended(a1, valid) || KeShouldYieldProcessor() )
        {
          MiFlushTbList(&v70, DeepFreezeStartTime, v16, v17);
          MiUnlockPageTableInternal(a1);
          MiUnlockWorkingSetShared(a1, v18);
          v10 = 0LL;
          valid = 0LL;
          MiLockWorkingSetShared(a1);
        }
      }
      continue;
    }
    if ( (v17 & 0x800) == 0 )
    {
      if ( (v17 & 0x3E0) == 0 || (v12 & 8) != 0 )
        goto LABEL_30;
      MiReleasePageFileSpace(v62, v17, 1LL);
      DeepFreezeStartTime = ZeroPte;
      if ( v20 )
      {
        if ( !(unsigned int)MiPteHasShadow(v40) )
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (DeepFreezeStartTime & 1) != 0 )
          {
            DeepFreezeStartTime |= 0x8000000000000000uLL;
          }
          goto LABEL_53;
        }
        if ( !HIBYTE(word_140465BEC) && (DeepFreezeStartTime & 1) != 0 )
          DeepFreezeStartTime |= 0x8000000000000000uLL;
        *(_QWORD *)a3 = DeepFreezeStartTime;
        MiWritePteShadow(a3, DeepFreezeStartTime);
      }
      else
      {
LABEL_53:
        *(_QWORD *)a3 = DeepFreezeStartTime;
      }
      ++v55[3];
      goto LABEL_30;
    }
    v41 = MiLockTransitionLeafPage(a3);
    if ( v41 )
    {
      if ( v57 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v41) )
        {
          v51 = v55;
          *(_BYTE *)(v50 + 35) &= ~0x20u;
          ++v51[1];
        }
        _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v12 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v41) )
        {
          MiDriverPageIsDangling();
          *(_BYTE *)(v52 + 35) &= ~0x20u;
        }
        v42 = (unsigned int)MiDeleteTransitionPte(a3) == 3;
        v43 = v55;
        if ( v42 )
          ++v55[1];
        ++v43[3];
      }
      goto LABEL_30;
    }
  }
  MiFlushTbList(&v70, DeepFreezeStartTime, v16, v17);
  if ( v10 )
    MiUnlockPageTableInternal(a1);
  return MiUnlockWorkingSetShared(a1, v18);
}
