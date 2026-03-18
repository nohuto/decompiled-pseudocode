/*
 * XREFs of MiResolveTransitionFault @ 0x1400D23E0
 * Callers:
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiIsAddressGlobal @ 0x14006D7F0 (MiIsAddressGlobal.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiUpdatePfnPriority @ 0x14008DD04 (MiUpdatePfnPriority.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiHandleCollidedFault @ 0x140100C88 (MiHandleCollidedFault.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiUserPdeOrAbove @ 0x14011A7F0 (MiUserPdeOrAbove.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14011BE28 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012A24C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiBadRefCount @ 0x1401BE9E4 (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x1402C7DA8 (MiMakeProtoReadOnly.c)
 */

__int64 __fastcall MiResolveTransitionFault(
        __int64 a1,
        unsigned __int64 DeepFreezeStartTime,
        ULONG_PTR a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r11
  __int64 v6; // r9
  unsigned __int64 v8; // r13
  ULONG_PTR v9; // rbx
  int v10; // r10d
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  char v20; // cl
  __int64 v21; // rax
  volatile signed __int64 *v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r11
  int v42; // r10d
  __int64 v43; // rdx
  bool v44; // zf
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  int v47; // r15d
  unsigned __int64 v48; // rdx
  char v49; // al
  int v50; // ecx
  __int64 v51; // r14
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v53; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v55; // eax
  char *v56; // rdi
  _BYTE *v57; // rcx
  __int64 v58; // rcx
  char v59; // r14
  unsigned __int64 v60; // rdi
  __int64 v61; // rax
  char v62; // dl
  unsigned __int16 v63; // ax
  __int16 v64; // ax
  char v65; // cl
  int v66; // [rsp+40h] [rbp-78h] BYREF
  int v67; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v68; // [rsp+48h] [rbp-70h] BYREF
  int v69; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v70; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h] BYREF
  __int64 v72; // [rsp+60h] [rbp-58h] BYREF
  __int64 v73; // [rsp+68h] [rbp-50h]
  unsigned __int64 v74; // [rsp+70h] [rbp-48h]
  __int64 v75; // [rsp+78h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  v6 = (__int64)a5;
  v8 = DeepFreezeStartTime;
  v75 = *(_QWORD *)(a1 + 56);
  v70 = v5;
  *a5 = 0LL;
  P = 0LL;
  if ( a3 )
  {
    v14 = *(_QWORD *)DeepFreezeStartTime;
    v15 = 511LL;
    if ( DeepFreezeStartTime >= 0xFFFFF6FB7DBED000uLL
      && DeepFreezeStartTime <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v17 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v8 >> 3) & 0x1FF));
        DeepFreezeStartTime = v14 | 0x20;
        if ( (v17 & 0x20) == 0 )
          DeepFreezeStartTime = v14;
        v14 = DeepFreezeStartTime;
        if ( (v17 & 0x42) != 0 )
          v14 = DeepFreezeStartTime | 0x42;
      }
    }
    v18 = v14;
    if ( qword_140465B00 && (v14 & 0x10) == 0 )
      v18 = v14 & ~qword_140465B00;
    v12 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
LABEL_49:
    if ( (*(_BYTE *)(v12 + 35) & 0x10) != 0 )
    {
      v19 = -1073740023;
LABEL_62:
      v22 = (volatile signed __int64 *)(v12 + 24);
      if ( a3 )
      {
        _InterlockedAnd64(v22, 0x7FFFFFFFFFFFFFFFuLL);
        v22 = (volatile signed __int64 *)(a3 + 24);
        v67 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v67);
          while ( *(__int64 *)v22 < 0 );
        }
        *(_BYTE *)(a3 + 34) &= ~0x20u;
        MiRemoveLockedPageChargeAndDecRef(a3, DeepFreezeStartTime, v15, v6);
      }
      _InterlockedAnd64(v22, 0x7FFFFFFFFFFFFFFFuLL);
      return v19;
    }
    DeepFreezeStartTime = v5 & 1;
    v74 = DeepFreezeStartTime;
    if ( (v5 & 1) != 0 && *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriority(v12, *(_DWORD *)((v5 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0);
      v19 = 0;
      goto LABEL_62;
    }
    __incgsdword(0x2E98u);
    v20 = *(_BYTE *)(v12 + 34);
    if ( (v20 & 8) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 && (v21 = *(_QWORD *)(v12 + 16) >> 5, (v21 & 0x1F) == 0) && (v21 & 2) != 0
        || (v5 & 1) != 0
        && *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 5
        && (*(_DWORD *)((v5 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0x20) != 0 )
      {
        v19 = -1073741801;
        *(_DWORD *)(a1 + 80) |= 0x80u;
        goto LABEL_62;
      }
    }
    if ( (v20 & 0x20) != 0 )
    {
      result = MiHandleCollidedFault(a1, v8, a3, v12, v6, (__int64)&v68);
      if ( v68 <= 1 || (int)result < 0 )
        return result;
    }
    else
    {
      result = MiHandleTransitionFault(a1, v8, a3, (void *)v12, (__int64)&v72, v14, (__int64)&P);
      if ( (int)result < 0 )
        return result;
      if ( v72 )
        v12 = v72;
    }
    v26 = *(_QWORD *)(a1 + 16);
    v27 = a4;
    if ( (v26 & 1) != 0 && *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v14 = -865LL;
      *(_QWORD *)v8 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    if ( ((v14 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v8, v12);
    v28 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v23)
      && (v28 & 1) != 0
      && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
    {
      v29 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 8 * ((v8 >> 3) & 0x1FF));
        v31 = v28 | 0x20;
        if ( (v30 & 0x20) == 0 )
          v31 = v28;
        v28 = v31;
        if ( (v30 & 0x42) != 0 )
          v28 = v31 | 0x42;
      }
    }
    v32 = v28;
    if ( qword_140465B00 && (v28 & 0x10) == 0 )
      v32 = v28 & ~qword_140465B00;
    v33 = v32 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v28 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v34 = v33 | 0x100;
    }
    else
    {
      if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
          v33 |= 0x8000000000000000uLL;
        else
          v33 &= ~0x8000000000000000uLL;
        if ( (unsigned int)MiUserPdeOrAbove(v8) )
          v33 |= 4uLL;
      }
      if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
        v33 |= 4uLL;
      v34 = v33 | 0x100;
      if ( !(unsigned int)MiIsAddressGlobal((__int64)(v8 << 25) >> 16) )
        v34 = (__int64)v24;
    }
    v35 = ZeroPte;
    v36 = v34 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v37 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL));
    v38 = *(_QWORD *)(v12 + 16);
    v73 = v37;
    if ( (v38 & 0x400) == 0 && (v38 & 4) != 0 && (unsigned __int16)v38 >> 12 == *(_DWORD *)(v37 + 1140) )
      v35 = MiCaptureDirtyBitToPfn(v12);
    v39 = *(_QWORD *)(v12 + 16);
    if ( (v39 & 0x400) == 0 && (v39 & 0x4000000) != 0 )
      v36 |= 0x40uLL;
    if ( (v36 & 0x800) != 0 )
    {
      v24 = (_QWORD *)a1;
      if ( a4 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v36, *(_QWORD *)a1) )
        v27 = 0LL;
      if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 )
      {
        if ( v27 || *v24 >= 0xFFFF800000000000uLL )
          goto LABEL_127;
      }
      else if ( v27 && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
      {
        v35 = MiCaptureDirtyBitToPfn(v12);
LABEL_127:
        v36 |= 0x42uLL;
      }
    }
    if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_140;
    v40 = v36;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0x200000000000000LL) )
      {
        if ( !HIBYTE(word_140465BEC) && (v36 & 1) != 0 )
          v40 |= 0x8000000000000000uLL;
        *(_QWORD *)v8 = v40;
        MiWritePteShadow(v8, v40);
LABEL_140:
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v41 = 1LL;
        if ( !a3 )
          goto LABEL_188;
        v42 = 0;
        v69 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v69);
            while ( *(__int64 *)(a3 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
          v42 = 0;
          v41 = 1LL;
        }
        *(_BYTE *)(a3 + 34) &= ~0x20u;
        v43 = *(unsigned __int16 *)(a3 + 32);
        if ( !(_WORD)v43 )
          MiBadRefCount(a3);
        v44 = (_WORD)v43 == 1;
        LOWORD(v43) = v43 - 1;
        *(_WORD *)(a3 + 32) = v43;
        if ( v44 && (unsigned int)MiIsPfnFileOnly(a3, v43, v24, v25) )
          goto LABEL_186;
        v45 = *(_QWORD *)(a3 + 40);
        if ( (v45 & 0x10000000000000LL) != 0 )
        {
LABEL_187:
          _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_188:
          if ( v35 )
            MiReleasePageFileInfo(v73, v35, 1);
          v56 = (char *)P;
          if ( P )
          {
            if ( *((int *)P + 44) > 1 )
              KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
            MiFreeInPageSupportBlock(v56);
          }
          if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
          {
            result = MiCompleteProtoPteFault(a1, v36, a4, 0, v70);
            if ( (int)result < 0 )
              return result;
            return 272LL;
          }
          v57 = (_BYTE *)(v70 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( !v74 || *v57 != 4 )
          {
            v59 = 0;
            v60 = 0LL;
            if ( v74 )
            {
              if ( *v57 == 3 )
              {
                v36 &= ~0x20uLL;
                v59 = 1;
              }
              else if ( *v57 == 5 )
              {
                v60 = v70 & 0xFFFFFFFFFFFFFFFEuLL;
              }
            }
            if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
            {
              v61 = *(_QWORD *)(a1 + 16);
              if ( (v61 & 1) == 0 || *(_BYTE *)(v61 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                v36 &= ~0x20uLL;
            }
            v62 = *(_BYTE *)(a1 + 69);
            if ( (v62 & 5) == 4 )
            {
              v63 = *(_WORD *)(a1 + 66);
              if ( v63
                && (v63 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)v8 >> 3) & 0x1FF) || (v62 & 0x10) == 0) )
              {
                MiEmptyDeferredWorkingSetEntries(a1 + 56);
              }
              v64 = *(_WORD *)(a1 + 66);
              if ( v64 )
              {
                *(_WORD *)(a1 + 66) = v64 + 1;
              }
              else
              {
                v65 = *(_BYTE *)(a1 + 69);
                *(_WORD *)(a1 + 66) = 1;
                *(_WORD *)(a1 + 64) = ((unsigned int)v8 >> 3) & 0x1FF;
                if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
                  *(_BYTE *)(a1 + 69) = v65 & 0xEF;
                else
                  *(_BYTE *)(a1 + 69) = v65 | 0x10;
              }
              v59 |= 4u;
            }
            if ( !(unsigned int)MiAllocateWsle(v75, v8, (_QWORD *)v12, 0, v36, v59, v60) )
            {
              MiLockAndDecrementShareCount(v12, 0LL);
              return 3221225495LL;
            }
            return 272LL;
          }
          if ( MiPteInShadowRange(v8) )
          {
            if ( (unsigned int)MiPteHasShadow(v58) )
            {
              if ( !HIBYTE(word_140465BEC) && (v36 & 1) != 0 )
                v36 |= 0x8000000000000000uLL;
              *(_QWORD *)v8 = v36;
              MiWritePteShadow(v8, v36);
              return 272LL;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v36 & 1) != 0 )
            {
              v36 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v8 = v36;
          return 272LL;
        }
        v46 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !(_WORD)v43 )
        {
          v47 = v41;
LABEL_158:
          v48 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
          if ( v48 > 0xFFFFF6BFFFFFFF78uLL || v48 < 0xFFFFF68000000000uLL )
          {
            v49 = *(_BYTE *)(a3 + 35);
            if ( (v49 & 0x20) != 0 )
            {
              *(_BYTE *)(a3 + 35) = v49 & 0xDF;
              goto LABEL_185;
            }
          }
          v50 = v42;
          if ( (v45 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
          {
            v50 = v41;
          }
          else if ( v48 <= 0xFFFFF6BFFFFFFF78uLL && v48 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
          {
            v50 = v41;
          }
          else if ( v47 == 1 && (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
          {
            v50 = v41;
          }
          v51 = *(_QWORD *)(qword_140466188 + 8 * ((v45 >> 40) & 0x3FF));
          if ( v50 == 1 )
            MiReturnCommit(v51, v41);
          if ( (ULONG_PTR *)v51 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v53 = 1LL;
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                while ( 1 )
                {
                  v55 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v44 = (_DWORD)CachedResidentAvailable == v55;
                  LODWORD(CachedResidentAvailable) = v55;
                  if ( v44 )
                    break;
                  if ( v55 == -1 || (unsigned __int64)(v55 + 1LL) > 0x100 )
                    goto LABEL_180;
                }
LABEL_185:
                if ( v47 )
                {
LABEL_186:
                  MiPfnReferenceCountIsZero(a3, (__int64)(a3 + 0x58000000000LL) / 48);
                  goto LABEL_187;
                }
                goto LABEL_187;
              }
LABEL_180:
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v53 = (int)CachedResidentAvailable - 192 + 1LL;
              }
            }
            _InterlockedExchangeAdd64(&qword_14046A440, v53);
            goto LABEL_185;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 8128), 1uLL);
          goto LABEL_185;
        }
        if ( (_WORD)v43 == 1 )
        {
          if ( v46 )
          {
LABEL_156:
            v47 = v42;
            goto LABEL_158;
          }
        }
        else if ( (_WORD)v43 != 2 || !v46 )
        {
          goto LABEL_187;
        }
        if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
          goto LABEL_187;
        goto LABEL_156;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v36 & 1) != 0 )
      {
        v40 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v8 = v40;
    goto LABEL_140;
  }
  v9 = MI_READ_PTE_LOCK_FREE(DeepFreezeStartTime);
  if ( (v9 & 0x800) == 0 )
    return 3221226548LL;
  while ( 1 )
  {
    if ( (v9 & 1) != 0 || v9 && qword_140465B00 && (qword_140465B00 & v9) == 0 )
      goto LABEL_16;
    v11 = v9;
    if ( qword_140465B00 && (v9 & 0x10) == 0 )
      v11 = v9 & ~qword_140465B00;
    if ( (*(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      goto LABEL_16;
    v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v66 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v66);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    if ( MI_READ_PTE_LOCK_FREE(v8) == v9 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_16:
    v9 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v9 & 0x800) == 0 )
      return 3221226548LL;
  }
  DeepFreezeStartTime = 0x8000000000000000uLL;
  if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != v8 )
    KeBugCheckEx(0x1Au, 0x411uLL, v8, v9, *(_QWORD *)(v12 + 8));
  if ( v12 )
  {
    v14 = *(_QWORD *)v8;
    v15 = 511LL;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v16 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v8 >> 3) & 0x1FF));
        DeepFreezeStartTime = v14 | 0x20;
        if ( (v16 & 0x20) == 0 )
          DeepFreezeStartTime = *(_QWORD *)v8;
        v14 = DeepFreezeStartTime;
        if ( (v16 & 0x42) != 0 )
          v14 = DeepFreezeStartTime | 0x42;
      }
    }
    v6 = (__int64)a5;
    v5 = v70;
    goto LABEL_49;
  }
  return 3221226548LL;
}
