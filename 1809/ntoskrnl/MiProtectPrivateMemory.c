/*
 * XREFs of MiProtectPrivateMemory @ 0x140070DB0
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiSanitizePfnProtection @ 0x140074040 (MiSanitizePfnProtection.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiComputePageCommitment @ 0x140083940 (MiComputePageCommitment.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x140093AF8 (MiSetProtectionOnTransitionPte.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiRevertValidPte @ 0x1400B22A0 (MiRevertValidPte.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14012743C (MiMakeProtoLeafValid.c)
 *     MiUnlockVa @ 0x14015E1A0 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiFaultInPagedPool @ 0x1402A5B5C (MiFaultInPagedPool.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // r15d
  ULONG_PTR v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  ULONG_PTR v19; // rbx
  int v20; // edi
  ULONG_PTR v21; // r14
  unsigned __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // r9
  __int64 result; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  char v33; // r12
  unsigned __int64 v34; // rdi
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 UsedPtesHandle; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 CloneAddress; // rax
  __int64 v49; // rcx
  int v50; // edi
  unsigned __int8 v51; // [rsp+30h] [rbp-D0h]
  int v52; // [rsp+34h] [rbp-CCh]
  __int64 v53; // [rsp+38h] [rbp-C8h]
  unsigned int v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+60h] [rbp-A0h] BYREF
  _KPROCESS *Process; // [rsp+68h] [rbp-98h]
  ULONG_PTR v60; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+90h] [rbp-70h] BYREF
  __int16 v64; // [rsp+94h] [rbp-6Ch]
  __int64 v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  int v68; // [rsp+150h] [rbp+50h] BYREF
  __int16 v69; // [rsp+154h] [rbp+54h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  __int64 v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]

  v7 = a2;
  v8 = a3;
  v62 = a7;
  v69 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v9 = a4;
  v70 = 20LL;
  v68 = 1;
  v54 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v53 = (__int64)&Process[1].IdealNode[12];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v65 = 20LL;
  v60 = v12;
  v63 = 1;
  v64 = 4;
  v66 = 0LL;
  v67 = 0LL;
  v52 = 0;
  v51 = MiLockWorkingSetShared(&Process[1].IdealNode[12]);
  if ( MiComputePageCommitment(v7, v8, BugCheckParameter4, v51, 0, (__int64)&v57) != ((__int64)(v12 - v11) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v53, v51);
    return 3221225517LL;
  }
  v13 = v57;
  if ( v57 )
  {
    MiUnlockWorkingSetShared(v53, v51);
    result = MiChargeFullProcessCommitment(Process, v13);
    if ( (int)result < 0 )
      return result;
    v51 = MiLockWorkingSetShared(v53);
  }
  v14 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = v14;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v11, 0);
    if ( !MI_READ_PTE_LOCK_FREE(v11) )
      break;
    LODWORD(v18) = MiGetPageProtection(BugCheckParameter4, v11, &BugCheckParameter2);
    v19 = BugCheckParameter2;
    if ( !BugCheckParameter2 )
    {
      v20 = 1;
      v52 = 1;
      v18 = (unsigned int)v18;
      goto LABEL_7;
    }
    MiUnlockPageTableInternal(v53, v14);
    MiUnlockWorkingSetShared(v53, v51);
    MiFaultInPagedPool(v19);
    MiLockWorkingSetShared(v53);
  }
  v20 = 0;
  v18 = (*(_DWORD *)(BugCheckParameter4 + 48) >> 3) & 0x1F;
LABEL_7:
  *a6 = MmProtectToValue[v18];
  v21 = v60;
  if ( v11 <= v60 )
  {
    v15 = 0xFFFFF6FB7DBED7F8uLL;
    v16 = 0x8000000000000000uLL;
    v17 = 0xFFFFFA8000000000uLL;
    while ( 1 )
    {
      if ( (v11 & 0xFFF) == 0 || v20 == 1 )
      {
        v52 = 0;
        if ( v14 )
        {
          MiFlushTbList(&v68, 0xFFFFF6FB7DBED7F8uLL, 0x8000000000000000uLL, 0xFFFFFA8000000000uLL);
          MiUnlockPageTableInternal(v53, v14);
        }
        v14 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v56 = v14;
        MiMakeSystemAddressValid(v11, 0);
        v17 = 0xFFFFFA8000000000uLL;
        v16 = 0x8000000000000000uLL;
        v15 = 0xFFFFF6FB7DBED7F8uLL;
      }
      v22 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v42 )
        {
          v43 = *(_QWORD *)(v42 + 8 * ((v11 >> 3) & 0x1FF));
          v44 = v22 | 0x20;
          if ( (v43 & 0x20) == 0 )
            v44 = *(_QWORD *)v11;
          v22 = v44;
          v15 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (v43 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
        else
        {
          v15 = 0xFFFFF6FB7DBED7F8uLL;
        }
      }
      v55 = v22;
      if ( (v22 & 1) != 0 )
        break;
      if ( (v22 & 0x400) != 0 )
      {
        MiFlushTbList(&v68, 0xFFFFF6FB7DBED7F8uLL, 0x8000000000000000uLL, 0xFFFFFA8000000000uLL);
        if ( (int)MiMakeProtoLeafValid(v11) < 0 )
          v11 += 8LL;
        v52 = 1;
        goto LABEL_21;
      }
      if ( (v22 & 0x800) != 0 )
      {
        if ( (unsigned int)MiSetProtectionOnTransitionPte(BugCheckParameter4, v11, v9, 1LL) )
          goto LABEL_21;
        goto LABEL_20;
      }
      if ( v22 )
      {
        v27 = v22 >> 5;
      }
      else
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16, 0xFFFFF6FB7DBED7F8uLL, 0x8000000000000000uLL);
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
        LODWORD(v27) = *(_DWORD *)(BugCheckParameter4 + 48) >> 3;
      }
      v54 = MiSanitizePfnProtection(BugCheckParameter4, v27 & 0x1F, v9);
      v28 = 32LL * (v54 & 0x1F);
      if ( v22 )
      {
        v29 = v28 | v22 & 0xFFFFFFFFFFFFFC1FuLL;
        v55 = v29;
      }
      else
      {
        v41 = MiSwizzleInvalidPte(v28);
        LOBYTE(v29) = v41;
        v55 = v41;
      }
      if ( MiPteInShadowRange(v11) )
      {
        if ( (unsigned int)MiPteHasShadow(v31, v30) )
        {
          if ( !HIBYTE(word_14043B26C) && (v29 & 1) != 0 )
            v30 |= 0x8000000000000000uLL;
          *(_QWORD *)v11 = v30;
          MiWritePteShadow(v11);
          goto LABEL_20;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v29 & 1) != 0 )
        {
          v30 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v11 = v30;
LABEL_20:
      v11 += 8LL;
LABEL_21:
      v9 = v54;
      v20 = v52;
      v16 = 0x8000000000000000uLL;
      v14 = v56;
      v17 = 0xFFFFFA8000000000uLL;
      v15 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v11 > v21 )
        goto LABEL_22;
    }
    if ( (unsigned __int64)&v55 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v55 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v15 )
      {
        v45 = *(_QWORD *)(v15 + 8 * (((unsigned __int64)&v55 >> 3) & 0x1FF));
        v15 = v22 | 0x20;
        if ( (v45 & 0x20) == 0 )
          v15 = v22;
        v22 = v15;
        if ( (v45 & 0x42) != 0 )
          v22 = v15 | 0x42;
      }
    }
    v23 = (v22 >> 12) & 0xFFFFFFFFFLL;
    v24 = 48 * v23 - 0x58000000000LL;
    if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(v11) == 1 )
      {
LABEL_19:
        MiRevertValidPte(BugCheckParameter4, v11, v9, v23, (__int64)&v68);
        goto LABEL_20;
      }
      v17 = 0xFFFFFA8000000000uLL;
      v16 = 0x8000000000000000uLL;
    }
    if ( (*(_QWORD *)(v24 + 40) & 0x200000000000000LL) != 0 )
    {
      v46 = *(_QWORD *)(v24 + 8);
      v47 = 0LL;
      if ( v46 < 0 )
      {
        CloneAddress = MiLocateCloneAddress(Process, v46 | 0x8000000000000000uLL);
        v46 = *(_QWORD *)(v49 + 1296);
        v47 = CloneAddress;
        if ( *(_QWORD *)(v46 + 312) <= *(_QWORD *)(CloneAddress + 96) )
          v47 = 0LL;
      }
      MiFlushTbList(&v68, v46, v16, v17);
      v50 = MiCopyOnWrite((__int64)(v11 << 25) >> 16);
      if ( v50 >= 0 )
      {
        if ( v47 )
          --v57;
      }
      else
      {
        MiUnlockPageTableInternal(v53, v14);
        v56 = 0LL;
        MiUnlockWorkingSetShared(v53, v51);
        MiCopyOnWriteCheckConditions(v53, (unsigned int)v50);
        v52 = 1;
        MiLockWorkingSetShared(v53);
      }
      goto LABEL_21;
    }
    if ( (a5 & 0x101) != 0 )
    {
      v32 = v21;
      if ( (v11 & 0xFFFFFFFFFFFFF000uLL) != (v21 & 0xFFFFFFFFFFFFF000uLL) )
        v32 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v33 = 0;
      v34 = v11;
      v35 = (__int64)(v11 << 25) >> 16;
      if ( v11 > v32 )
      {
LABEL_53:
        if ( HIDWORD(v65) )
          MiFreeWsleList(v53, &v63, 0LL);
        goto LABEL_21;
      }
      while ( 2 )
      {
        v55 = MI_READ_PTE_LOCK_FREE(v34);
        if ( (v55 & 1) == 0
          || (v36 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v55),
              v39 = v38 + 48 * (v37 & (v36 >> 12)),
              (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6)
          && (unsigned int)MiRotatedToFrameBuffer(v11) == 1
          || (*(_QWORD *)(v39 + 40) & 0x200000000000000LL) != 0 )
        {
LABEL_52:
          v21 = v60;
          goto LABEL_53;
        }
        if ( (MiGetWsleContents(0x200000000000000LL, v35) & 0xF) == 8 )
        {
          v33 = 1;
          *v62 = 1;
        }
        else
        {
          MiInsertTbFlushEntry(&v63, v35, 1LL);
          if ( HIDWORD(v65) != (_DWORD)v65 )
            goto LABEL_51;
        }
        if ( HIDWORD(v65) )
          MiFreeWsleList(v53, &v63, 0LL);
        if ( v33 == 1 )
        {
          MiUnlockVa(v53, v35);
          v33 = 0;
        }
LABEL_51:
        v34 += 8LL;
        v35 += 4096LL;
        if ( v34 > v32 )
          goto LABEL_52;
        continue;
      }
    }
    v58 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v58, v15, v16);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
    v9 = MiSanitizePfnProtection(BugCheckParameter4, (*(_QWORD *)(v24 + 16) >> 5) & 0x1FLL, v9);
    v54 = v9;
    *(_QWORD *)(v24 + 16) = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_19;
  }
LABEL_22:
  MiFlushTbList(&v68, v15, v16, v17);
  if ( v14 )
    MiUnlockPageTableInternal(v53, v14);
  MiUnlockWorkingSetShared(v53, v51);
  if ( v57 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
