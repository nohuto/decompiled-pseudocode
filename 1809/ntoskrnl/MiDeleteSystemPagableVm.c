/*
 * XREFs of MiDeleteSystemPagableVm @ 0x140079F00
 * Callers:
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x140181240 (MiDeleteBootRange.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC414 (MiDeleteSessionPoolRange.c)
 *     MmFreeSpecialPool @ 0x1402AD368 (MmFreeSpecialPool.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x140850450 (MmReturnChargesToLockPagedPool.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiDeleteValidSystemPage @ 0x14007A850 (MiDeleteValidSystemPage.c)
 *     MiTerminateWsle @ 0x14007AC90 (MiTerminateWsle.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWriteWsle @ 0x1400DB218 (MiWriteWsle.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiReturnSystemCharges @ 0x1401208A4 (MiReturnSystemCharges.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiImageProtoChargedCommit @ 0x14016B030 (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x14016B8F0 (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiDriverPageIsDangling @ 0x1402AB2F4 (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  unsigned __int64 valid; // r13
  char v10; // r14
  char v11; // r8
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // esi
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // di
  __int64 v20; // rdx
  _KPROCESS *CurrentThread; // rcx
  BOOL v22; // edi
  __int64 v23; // r8
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  unsigned __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // r14
  int v32; // edi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  ULONG_PTR v47; // r10
  bool v48; // zf
  _QWORD *v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v62; // rsi
  __int64 v63; // r10
  _QWORD *v64; // rax
  signed __int32 v65[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+34h] [rbp-CCh]
  _QWORD *v68; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v69; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v70; // [rsp+48h] [rbp-B8h]
  int v71; // [rsp+4Ch] [rbp-B4h]
  BOOL v72; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+58h] [rbp-A8h]
  int v74; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v75[3]; // [rsp+68h] [rbp-98h] BYREF
  char v76[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  unsigned __int64 v79; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v80[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v81; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v82; // [rsp+B4h] [rbp-4Ch]
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+C8h] [rbp-38h]

  v78 = a2;
  v68 = a6;
  v72 = 0;
  if ( a2 )
    v72 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  valid = 0LL;
  v70 = 0;
  v10 = a5;
  v11 = *(_BYTE *)(a1 + 184) & 7;
  v12 = 0;
  v77 = 0LL;
  v71 = 0;
  if ( (unsigned __int8)(v11 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
      v70 = dword_14043B9A8 != 0;
    v12 = 2;
    v71 = 2;
  }
  v13 = *(unsigned __int16 *)(a1 + 174);
  v14 = a5 & 8;
  v67 = v14;
  v73 = *(_QWORD *)(qword_14043B808 + 8 * v13);
  v83 = 20LL;
  v81 = v12;
  v82 = 0;
  v84 = 0LL;
  v85 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v75[0] = 0LL;
    v75[1] = (__int64)(a3 << 25) >> 16;
    v75[2] = (unsigned int)a4;
    if ( v11 == 4 )
    {
      v75[0] = 6LL;
    }
    else if ( v11 == 3 )
    {
      v75[0] = 4LL;
    }
    else
    {
      v75[0] = v75[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v80[1] = 24LL;
    v80[0] = v75;
    EtwTraceKernelEvent((unsigned int)v80, 1, 536870913, 633, 289413890);
  }
  v15 = a3 + 8 * a4;
  v66 = MiLockWorkingSetShared(a1);
  v19 = v66;
  while ( a3 < v15 )
  {
    if ( valid )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_9;
      MiFlushTbList(&v81, 0x7FFFFFFFF8LL, 0xFFFFFA8000000000uLL, v18);
      MiUnlockPageTableInternal(a1, valid);
    }
    valid = MiLockLowestValidPageTable(a1, a3, &v79, v18);
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(a1, valid);
      valid = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      goto LABEL_36;
    }
LABEL_9:
    v22 = MiPteInShadowRange(a3);
    if ( v22 && (MiFlags & 0xC00000) != 0 )
    {
      CurrentThread = (_KPROCESS *)KeGetCurrentThread();
      if ( *(_BYTE *)(CurrentThread->Affinity.Bitmap[12] + 640) == 1
        || (v18 & 1) == 0
        || (v18 & 0x20) != 0 && (v18 & 0x42) != 0
        || (CurrentThread = KeGetCurrentThread()->ApcState.Process, (v50 = CurrentThread[2].Affinity.Bitmap[0]) == 0) )
      {
        v20 = 0x7FFFFFFFF8LL;
      }
      else
      {
        v51 = *(_QWORD *)(v50 + 8 * ((a3 >> 3) & 0x1FF));
        v52 = v18 | 0x20;
        CurrentThread = (_KPROCESS *)(unsigned __int8)v51;
        LOBYTE(CurrentThread) = v51 & 0x20;
        if ( (v51 & 0x20) == 0 )
          v52 = v18;
        v18 = v52;
        v20 = 0x7FFFFFFFF8LL;
        if ( (v51 & 0x42) != 0 )
          v18 |= 0x42uLL;
      }
    }
    v69 = v18;
    if ( v18 )
    {
      if ( (v18 & 1) != 0 )
      {
        v24 = (__int64)((a3 << 25) - v77) >> 16;
        if ( MiPteInShadowRange((unsigned __int64)&v69)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v53 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v53 )
          {
            v54 = *(_QWORD *)(v53 + 8 * (((unsigned __int64)&v69 >> 3) & 0x1FF));
            v55 = v27 | 0x20;
            if ( (v54 & 0x20) == 0 )
              v55 = v27;
            v27 = v55;
            if ( (v54 & 0x42) != 0 )
              v27 = v55 | 0x42;
          }
          v25 = 0x7FFFFFFFF8LL;
        }
        v29 = v28 & (v27 >> 12);
        v30 = v26 + 48 * v29;
        v31 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v30 + 40) >> 40) & 0x3FFLL));
        if ( !v67 )
        {
          v32 = 0;
          if ( MiPteInShadowRange((v25 & (v24 >> 9)) - 0x98000000000LL)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v33 & 1) != 0
            && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
          {
            v58 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v58 )
            {
              v59 = *(_QWORD *)(v58 + 8 * ((v34 >> 3) & 0x1FF));
              v60 = v33 | 0x20;
              if ( (v59 & 0x20) == 0 )
                v60 = v33;
              v33 = v60;
              if ( (v59 & 0x42) != 0 )
                v33 = v60 | 0x42;
            }
          }
          v35 = HIBYTE(v33) & 0xFu | (unsigned __int8)(16 * ((v33 >> 60) & 7));
          LOBYTE(v35) = HIBYTE(v33) & 0xF;
          if ( (HIBYTE(v33) & 0xF) == 9 )
          {
            MiWriteWsle(v35, v24, (unsigned __int8)(16 * ((v33 >> 60) & 7)) | 0xAu);
          }
          else
          {
            if ( (_BYTE)v35 == 8 )
              v32 = 1;
            if ( v70 )
              MI_WSLE_LOG_ACCESS(a1, a3);
            MiTerminateWsle(a1, v24, 1LL, v76);
            if ( !v32 )
            {
LABEL_21:
              v10 = a5;
              MiDeleteValidSystemPage(a1, a3, a5 & 4 | 0x10u, v68);
              if ( (a5 & 1) != 0 )
                goto LABEL_31;
              v69 = 0LL;
              _InterlockedOr(v65, 0);
              v36 = MiSwizzleInvalidPte((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32);
              Process = (_KPROCESS *)&v69;
              if ( (unsigned __int64)&v69 < 0xFFFFF6FB7DBED000uLL )
                goto LABEL_24;
              Process = (_KPROCESS *)&v69;
              if ( (unsigned __int64)&v69 > 0xFFFFF6FB7DBED7F8uLL )
                goto LABEL_24;
              if ( (unsigned int)MiPteHasShadow(&v69, v36) )
              {
                if ( !HIBYTE(word_14043B26C) && (v36 & 1) != 0 )
                  v36 |= 0x8000000000000000uLL;
                v69 = v36;
                MiWritePteShadow(&v69);
              }
              else
              {
                Process = KeGetCurrentThread()->ApcState.Process;
                if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v36 & 1) != 0 )
                  v36 |= 0x8000000000000000uLL;
LABEL_24:
                v69 = v36;
              }
              v38 = v69;
              v39 = v69;
              if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow(Process, v69) )
                {
                  if ( !HIBYTE(word_14043B26C) && (v39 & 1) != 0 )
                    v39 |= 0x8000000000000000uLL;
                  *(_QWORD *)a3 = v39;
                  MiWritePteShadow(a3);
LABEL_27:
                  if ( qword_14043B180 && (v38 & 0x10) == 0 )
                    v38 &= ~qword_14043B180;
                  if ( (v38 & 0xFFFFFFFF00000000uLL) == 0 )
LABEL_31:
                    MiInsertTbFlushEntry(&v81, v24, 1LL);
LABEL_32:
                  v14 = v67;
                  goto LABEL_33;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v39 & 1) != 0 )
                {
                  v38 = v69;
                  v39 = v69 | 0x8000000000000000uLL;
                }
                else
                {
                  v38 = v69;
                }
              }
              *(_QWORD *)a3 = v39;
              goto LABEL_27;
            }
          }
          ++*v68;
          if ( v71 == 2 )
            MiReturnSystemCharges(v73, 1LL, 1LL);
          goto LABEL_21;
        }
        if ( (unsigned int)MiIsPfnSystemCharged(v26 + 48 * v29) )
        {
          v74 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v74, v56, v57);
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          *(_BYTE *)(v30 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v48 = v31 == v73;
          v10 = a5;
          if ( v48 )
            ++v68[1];
        }
        else
        {
          v10 = a5;
        }
        goto LABEL_32;
      }
      if ( (v18 & 0x400) != 0 )
      {
        if ( !v14 )
        {
          if ( (v18 & 2) != 0 )
          {
            ++v68[3];
          }
          else if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v18, v20, v23) )
          {
            ++v68[3];
            if ( qword_14043B180 && (v18 & 0x10) == 0 )
              v18 &= ~qword_14043B180;
            v62 = **(_QWORD **)((((v18 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
            if ( (unsigned int)MiDecrementCombinedPte(a1, v18 >> 16) == 3 )
            {
              v48 = v62 == v73;
              v14 = v67;
              if ( v48 )
                ++v68[1];
            }
            else
            {
              v14 = v67;
            }
          }
          else if ( v72 )
          {
            ++v68[3];
          }
          else
          {
            if ( qword_14043B180 && (v18 & 0x10) == 0 )
              v18 &= ~qword_14043B180;
            if ( (unsigned int)MiImageProtoChargedCommit(v78, v18 >> 16) )
              ++v68[3];
          }
          v45 = ZeroPte;
          if ( !v22 )
            goto LABEL_59;
          if ( !(unsigned int)MiPteHasShadow(CurrentThread, ZeroPte) )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v45 & 1) != 0 )
            {
              v45 |= 0x8000000000000000uLL;
            }
LABEL_59:
            *(_QWORD *)a3 = v45;
            goto LABEL_33;
          }
          if ( !HIBYTE(word_14043B26C) && (v45 & 1) != 0 )
            v45 |= 0x8000000000000000uLL;
          *(_QWORD *)a3 = v45;
          MiWritePteShadow(a3);
        }
      }
      else if ( (v18 & 0x800) != 0 )
      {
        v46 = MiLockTransitionLeafPage(a3);
        v47 = v46;
        if ( !v46 )
          goto LABEL_35;
        if ( v14 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v46) )
          {
            v64 = v68;
            *(_BYTE *)(v63 + 35) &= ~0x20u;
            ++v64[1];
          }
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( (v10 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v46) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v47 + 35) &= ~0x20u;
          }
          v48 = (unsigned int)MiDeleteTransitionPte(a3, v47) == 3;
          v49 = v68;
          if ( v48 )
            ++v68[1];
          ++v49[3];
        }
      }
      else if ( (v18 & 0x3E0) != 0 && (v10 & 8) == 0 )
      {
        MiReleasePageFileSpace(v73, v18, 1LL);
        v42 = ZeroPte;
        if ( !v22 )
          goto LABEL_49;
        if ( (unsigned int)MiPteHasShadow(v41, ZeroPte) )
        {
          if ( !HIBYTE(word_14043B26C) && (v42 & 1) != 0 )
            v42 |= 0x8000000000000000uLL;
          *(_QWORD *)a3 = v42;
          MiWritePteShadow(a3);
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v42 & 1) != 0 )
          {
            v42 |= 0x8000000000000000uLL;
          }
LABEL_49:
          *(_QWORD *)a3 = v42;
        }
        ++v68[3];
      }
    }
LABEL_33:
    a3 += 8LL;
    if ( a3 != v15
      && (a3 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(a1)
       || (unsigned int)MiPageTableLockIsContended(a1, valid)
       || KeShouldYieldProcessor()) )
    {
      MiFlushTbList(&v81, v43, v44, v18);
      MiUnlockPageTableInternal(a1, valid);
      v19 = v66;
      MiUnlockWorkingSetShared(a1, v66);
      valid = 0LL;
      MiLockWorkingSetShared(a1);
      goto LABEL_36;
    }
LABEL_35:
    v19 = v66;
LABEL_36:
    v17 = 0xFFFFFA8000000000uLL;
    v16 = 0x7FFFFFFFF8LL;
  }
  MiFlushTbList(&v81, v16, v17, v18);
  if ( valid )
    MiUnlockPageTableInternal(a1, valid);
  return MiUnlockWorkingSetShared(a1, v19);
}
