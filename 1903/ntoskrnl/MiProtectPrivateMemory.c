/*
 * XREFs of MiProtectPrivateMemory @ 0x140020F60
 * Callers:
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F4A0 (MiIncreaseUsedPtesCount.c)
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x14002DAB0 (MiGetUsedPtesHandle.c)
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiSanitizePfnProtection @ 0x14004FF70 (MiSanitizePfnProtection.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140053910 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x1400C5F50 (MiGetPageProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiRotatedToFrameBuffer @ 0x1400E0420 (MiRotatedToFrameBuffer.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x1401284F4 (MiMakeProtoLeafValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x14012AD00 (MiSetProtectionOnTransitionPte.c)
 *     MiMakeVaRangeNoAccess @ 0x140131404 (MiMakeVaRangeNoAccess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFaultInPagedPool @ 0x1402BCD00 (MiFaultInPagedPool.c)
 *     MiMakeProtoPrivate @ 0x1402D1AF4 (MiMakeProtoPrivate.c)
 *     MiReturnFullProcessCommitment @ 0x1405EC7B0 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  ULONG_PTR v12; // r12
  unsigned int v13; // edi
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  ULONG_PTR v21; // rsi
  ULONG_PTR v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rdx
  int PageProtection; // eax
  unsigned __int64 DeepFreezeStartTime; // rdx
  unsigned __int64 v27; // r9
  ULONG_PTR v28; // rbx
  int v29; // r8d
  int v30; // ecx
  int v31; // eax
  __int64 v32; // r8
  ULONG_PTR v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r11d
  __int64 v38; // r10
  unsigned __int64 v39; // rdx
  ULONG_PTR v40; // r10
  __int64 v41; // r15
  char v42; // bl
  unsigned int v43; // edi
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // rdi
  volatile signed __int32 *v46; // rbx
  unsigned __int64 v47; // r9
  __int64 result; // rax
  unsigned __int16 *v49; // rbx
  ULONG_PTR v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  unsigned __int64 v55; // rbx
  __int64 v56; // rdx
  int v57; // eax
  __int64 UsedPtesHandle; // rax
  unsigned __int8 v59; // al
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  int ProtoPrivate; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+34h] [rbp-CCh]
  unsigned __int16 *v68; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v69; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+58h] [rbp-A8h]
  __int64 v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h] BYREF
  int v75; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v76; // [rsp+80h] [rbp-80h]
  _QWORD v77[2]; // [rsp+88h] [rbp-78h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  int v81; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v82; // [rsp+B4h] [rbp-4Ch]
  __int16 v83; // [rsp+B6h] [rbp-4Ah]
  __int64 v84; // [rsp+B8h] [rbp-48h]
  __int64 v85; // [rsp+C0h] [rbp-40h]
  __int64 v86; // [rsp+C8h] [rbp-38h]
  _BYTE v87[152]; // [rsp+D0h] [rbp-30h] BYREF

  v80 = a8;
  v83 = 0;
  memset(v87, 0, sizeof(v87));
  v84 = 20LL;
  v82 = 0;
  v81 = 1;
  v85 = 0LL;
  v86 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v68 = &Process[1].IdealNode[6];
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v70 = v12;
  v73 = 1LL;
  v69 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 3;
  v14 = *(_DWORD *)(a1 + 48);
  if ( (v14 & 0x500000) == 0x500000 )
  {
    v15 = (v14 >> 18) & 3;
    v16 = MiVadPageSizes[v15];
    v13 = MiVadPageIndices[v15];
    v17 = 16LL;
    v72 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v73 = v17;
  }
  else
  {
    v72 = 1LL;
  }
  v66 = 0;
  v77[1] = (v14 >> 12) & 0x3F;
  v65 = MiLockWorkingSetShared(&Process[1].IdealNode[6]);
  v18 = MiComputePageCommitment(a2, a3, a1, v65, 0, &v74);
  v19 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v18 != ((__int64)(v69 - v12) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v68, v65);
    return 3221225517LL;
  }
  v20 = v74;
  if ( v74 )
  {
    MiUnlockWorkingSetShared(v68, v65);
    result = MiChargeFullProcessCommitment(Process, v20);
    if ( (int)result < 0 )
      return result;
    v59 = MiLockWorkingSetShared(v68);
    v19 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v65 = v59;
  }
  v21 = v12;
  if ( v13 <= 1 )
  {
    v60 = 2 - v13;
    do
    {
      v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v60;
    }
    while ( v60 );
    v69 = v19;
  }
  v22 = a1;
  v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v21, 0);
    if ( !MI_READ_PTE_LOCK_FREE(v21) )
      break;
    PageProtection = MiGetPageProtection(a1, v21);
    v28 = BugCheckParameter2;
    if ( !BugCheckParameter2 )
    {
      v29 = MmProtectToValue[PageProtection];
      v30 = 1;
      v31 = v71;
      v66 = 1;
      goto LABEL_12;
    }
    MiUnlockPageTableInternal(v68);
    MiUnlockWorkingSetShared(v68, v65);
    MiFaultInPagedPool(v28);
    MiLockWorkingSetShared(v68);
  }
  v31 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1, v24, (unsigned int)MmProtectToValue[(*(_DWORD *)(a1 + 48) >> 7) & 0x1F]);
  v30 = 0;
LABEL_12:
  v32 = v31 | (unsigned int)v29;
  *a7 = v32;
  if ( v21 <= v69 )
  {
    DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
    v27 = 0xFFFFFA8000000000uLL;
    do
    {
      if ( (v21 & 0xFFF) == 0 || v30 == 1 )
      {
        v66 = 0;
        if ( v23 )
        {
          MiFlushTbList(&v81, 0xFFFFF6FB7DBED7F8uLL, v32, 0xFFFFFA8000000000uLL);
          v49 = v68;
          MiUnlockPageTableInternal(v68);
        }
        else
        {
          v49 = v68;
        }
        if ( (unsigned int)MiWorkingSetIsContended(v49) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v49, v65);
          MiLockWorkingSetShared(v49);
        }
        v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v21, 0);
        v27 = 0xFFFFFA8000000000uLL;
        DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
      }
      v33 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v61 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v21 >> 3) & 0x1FF));
          DeepFreezeStartTime = v33 | 0x20;
          if ( (v61 & 0x20) == 0 )
            DeepFreezeStartTime = *(_QWORD *)v21;
          v33 = DeepFreezeStartTime;
          if ( (v61 & 0x42) != 0 )
            v33 = DeepFreezeStartTime | 0x42;
        }
      }
      v77[0] = v33;
      if ( (v33 & 1) == 0 )
      {
        if ( (v33 & 0x400) != 0 )
        {
          MiFlushTbList(&v81, DeepFreezeStartTime, v32, 0xFFFFFA8000000000uLL);
          if ( (int)MiMakeProtoLeafValid(v21) < 0 )
          {
            v12 += 8LL;
            v70 = v12;
            v21 += 8LL;
          }
          v66 = 1;
          goto LABEL_37;
        }
        if ( (v33 & 0x800) != 0 )
        {
          v57 = MiSetProtectionOnTransitionPte(v22, v21, a4, 1LL);
          if ( v72 != 1 )
          {
            v12 += 8 * v72;
            v70 = v12;
            v21 += 8 * v73;
            goto LABEL_37;
          }
          if ( v57 )
            goto LABEL_37;
        }
        else
        {
          if ( v72 != 1 )
            KeBugCheckEx(0x1Au, 0x44000uLL, v12, v33, 0LL);
          if ( v33 )
          {
            v50 = v33 >> 5;
          }
          else
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v12 << 25) >> 16);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
            LODWORD(v50) = *(_DWORD *)(v22 + 48) >> 7;
          }
          a4 = MiSanitizePfnProtection(v22, v50 & 0x1F, a4, v27);
          v54 = 32LL * (a4 & 0x1F);
          if ( v33 )
            v55 = v54 | v33 & 0xFFFFFFFFFFFFFC1FuLL;
          else
            v55 = MiSwizzleInvalidPte(v54, v51, v52, v53);
          v77[0] = v55;
          if ( (unsigned int)MiPteInShadowRange(v12, v55, v52, v53) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140465BEC) && (v55 & 1) != 0 )
                v56 |= 0x8000000000000000uLL;
              *(_QWORD *)v12 = v56;
              MiWritePteShadow(v12, v56);
            }
            else
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
              {
                if ( (v55 & 1) != 0 )
                  v56 |= 0x8000000000000000uLL;
                goto LABEL_58;
              }
              *(_QWORD *)v12 = v55;
            }
          }
          else
          {
LABEL_58:
            *(_QWORD *)v12 = v56;
          }
        }
        v12 += 8LL;
        v70 = v12;
        v21 += 8LL;
        goto LABEL_37;
      }
      v34 = MI_READ_PTE_LOCK_FREE(v77);
      v39 = v38 & (v34 >> 12);
      v76 = v39;
      v40 = a1;
      v41 = v36 + 48 * v39;
      v42 = 0;
      v43 = *(_DWORD *)(a1 + 48);
      if ( (v43 & 0x70) == 0x40 )
      {
        v62 = MiRotatedToFrameBuffer(v21);
        v39 = v76;
        v40 = a1;
        if ( v62 == 1 )
          goto LABEL_22;
        v37 = v69;
      }
      if ( (*(_QWORD *)(v41 + 40) & 0x200000000000000LL) != 0 )
      {
        MiFlushTbList(&v81, v39, v35, v36);
        ProtoPrivate = MiMakeProtoPrivate(v68, v65, v21);
        if ( ProtoPrivate )
        {
          if ( ProtoPrivate == 1 )
          {
            --v74;
          }
          else
          {
            v23 = 0LL;
            v66 = 1;
            MiLockWorkingSetShared(v68);
          }
        }
        goto LABEL_36;
      }
      if ( (a5 & 0x101) != 0 )
      {
        v22 = a1;
        if ( (unsigned int)MiMakeVaRangeNoAccess(v40, v21, v37, (unsigned int)&v81, BugCheckParameter4, v80) )
        {
          v12 += 8 * v72;
          v70 = v12;
          v21 += 8 * v73;
        }
        goto LABEL_37;
      }
      v42 = 1;
LABEL_22:
      if ( v42 )
      {
        if ( (v43 & 0x500000) != 0x500000 || (v44 = MiVadPageSizes[((unsigned __int64)v43 >> 18) & 3], v44 == 16) )
          v44 = 1LL;
        v45 = 0LL;
        if ( v44 )
        {
          v46 = (volatile signed __int32 *)(v41 + 24);
          do
          {
            v75 = 0;
            if ( _interlockedbittestandset64(v46, 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v75);
                while ( *(__int64 *)v46 < 0 );
              }
              while ( _interlockedbittestandset64(v46, 0x3FuLL) );
              v40 = a1;
            }
            v47 = *((_QWORD *)v46 - 1);
            if ( !v45 )
              a4 = MiSanitizePfnProtection(v40, (v47 >> 5) & 0x1F, a4, v47);
            if ( v47 )
              *((_QWORD *)v46 - 1) = (32LL * (a4 & 0x1F)) | v47 & 0xFFFFFFFFFFFFFC1FuLL;
            else
              *((_QWORD *)v46 - 1) = MiSwizzleInvalidPte(32LL * (a4 & 0x1F), v39, v35, 0LL);
            _InterlockedAnd64((volatile signed __int64 *)v46, 0x7FFFFFFFFFFFFFFFuLL);
            v46 += 12;
            ++v45;
          }
          while ( v45 < v44 );
          LODWORD(v39) = v76;
        }
        v12 = v70;
      }
      MiRevertValidPte(v40, v21, a4, v39, (__int64)&v81);
      v12 += 8 * v72;
      v70 = v12;
      v21 += 8 * v73;
LABEL_36:
      v22 = a1;
LABEL_37:
      v30 = v66;
      v27 = 0xFFFFFA8000000000uLL;
      DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( v21 <= v69 );
  }
  MiFlushTbList(&v81, DeepFreezeStartTime, v32, v27);
  if ( v23 )
    MiUnlockPageTableInternal(v68);
  MiUnlockWorkingSetShared(v68, v65);
  if ( v74 )
    MiReturnFullProcessCommitment(Process, v74);
  return 0LL;
}
