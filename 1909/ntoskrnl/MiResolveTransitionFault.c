/*
 * XREFs of MiResolveTransitionFault @ 0x1400B2260
 * Callers:
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiIsAddressGlobal @ 0x14006DA60 (MiIsAddressGlobal.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1400B2FD0 (MiHandleTransitionFault.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiUpdatePfnPriority @ 0x1400CAF14 (MiUpdatePfnPriority.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeInPageSupportBlock @ 0x1400CEFD0 (MiFreeInPageSupportBlock.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiHandleCollidedFault @ 0x1401096A8 (MiHandleCollidedFault.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiUserPdeOrAbove @ 0x140118C20 (MiUserPdeOrAbove.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14011A8B8 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012AC6C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiBadRefCount @ 0x1401BF4D4 (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x1402C7B08 (MiMakeProtoReadOnly.c)
 */

__int64 __fastcall MiResolveTransitionFault(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r11
  __int64 v6; // r9
  ULONG_PTR v9; // rbx
  int v10; // r10d
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // ebx
  char v23; // cl
  __int64 v24; // rax
  volatile signed __int64 *v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r11
  int v45; // r10d
  __int64 v46; // rdx
  bool v47; // zf
  unsigned __int64 v48; // r14
  __int64 v49; // rax
  int v50; // r15d
  unsigned __int64 v51; // rdx
  char v52; // al
  int v53; // ecx
  __int64 v54; // r14
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v56; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v58; // eax
  PVOID v59; // rdi
  _BYTE *v60; // rcx
  __int64 v61; // rcx
  char v62; // r14
  unsigned __int64 v63; // rdi
  __int64 v64; // rax
  char v65; // dl
  unsigned __int16 v66; // ax
  __int16 v67; // ax
  char v68; // cl
  int v69; // [rsp+40h] [rbp-78h] BYREF
  int v70; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v71; // [rsp+48h] [rbp-70h] BYREF
  int v72; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v73; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h] BYREF
  __int64 v75; // [rsp+60h] [rbp-58h] BYREF
  __int64 v76; // [rsp+68h] [rbp-50h]
  __int64 v77; // [rsp+70h] [rbp-48h]
  __int64 v78; // [rsp+78h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  v6 = (__int64)a5;
  v78 = *(_QWORD *)(a1 + 56);
  v73 = v5;
  *a5 = 0LL;
  P = 0LL;
  if ( a3 )
  {
    v14 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v19 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
        v20 = v14 | 0x20;
        if ( (v19 & 0x20) == 0 )
          v20 = v14;
        v14 = v20;
        if ( (v19 & 0x42) != 0 )
          v14 = v20 | 0x42;
      }
    }
    v21 = v14;
    if ( qword_140465800 && (v14 & 0x10) == 0 )
      v21 = v14 & ~qword_140465800;
    v12 = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
LABEL_49:
    if ( (*(_BYTE *)(v12 + 35) & 0x10) != 0 )
    {
      v22 = -1073740023;
LABEL_62:
      v25 = (volatile signed __int64 *)(v12 + 24);
      if ( a3 )
      {
        _InterlockedAnd64(v25, 0x7FFFFFFFFFFFFFFFuLL);
        v25 = (volatile signed __int64 *)(a3 + 24);
        v70 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v70);
          while ( *(__int64 *)v25 < 0 );
        }
        *(_BYTE *)(a3 + 34) &= ~0x20u;
        MiRemoveLockedPageChargeAndDecRef(a3);
      }
      _InterlockedAnd64(v25, 0x7FFFFFFFFFFFFFFFuLL);
      return v22;
    }
    v77 = v5 & 1;
    if ( (v5 & 1) != 0 && *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriority(v12, *(_DWORD *)((v5 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
      v22 = 0;
      goto LABEL_62;
    }
    __incgsdword(0x2E98u);
    v23 = *(_BYTE *)(v12 + 34);
    if ( (v23 & 8) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 && (v24 = *(_QWORD *)(v12 + 16) >> 5, (v24 & 0x1F) == 0) && (v24 & 2) != 0
        || (v5 & 1) != 0
        && *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) == 5
        && (*(_DWORD *)((v5 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0x20) != 0 )
      {
        v22 = -1073741801;
        *(_DWORD *)(a1 + 80) |= 0x80u;
        goto LABEL_62;
      }
    }
    if ( (v23 & 0x20) != 0 )
    {
      result = MiHandleCollidedFault(a1, a2, a3, v12, v6, (__int64)&v71);
      if ( v71 <= 1 || (int)result < 0 )
        return result;
    }
    else
    {
      result = MiHandleTransitionFault(a1, a2, a3, (void *)v12, (__int64)&v75, v14, (__int64)&P);
      if ( (int)result < 0 )
        return result;
      if ( v75 )
        v12 = v75;
    }
    v29 = *(_QWORD *)(a1 + 16);
    v30 = a4;
    if ( (v29 & 1) != 0 && *(_BYTE *)(v29 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v14 = -865LL;
      *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    if ( ((v14 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(a2, v12);
    v31 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v26)
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v32 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 8 * ((a2 >> 3) & 0x1FF));
        v34 = v31 | 0x20;
        if ( (v33 & 0x20) == 0 )
          v34 = v31;
        v31 = v34;
        if ( (v33 & 0x42) != 0 )
          v31 = v34 | 0x42;
      }
    }
    v35 = v31;
    if ( qword_140465800 && (v31 & 0x10) == 0 )
      v35 = v31 & ~qword_140465800;
    v36 = v35 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v31 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v37 = v36 | 0x100;
    }
    else
    {
      if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
          v36 |= 0x8000000000000000uLL;
        else
          v36 &= ~0x8000000000000000uLL;
        if ( (unsigned int)MiUserPdeOrAbove(a2) )
          v36 |= 4uLL;
      }
      if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
        v36 |= 4uLL;
      v37 = v36 | 0x100;
      if ( !(unsigned int)MiIsAddressGlobal((__int64)(a2 << 25) >> 16) )
        v37 = (__int64)v27;
    }
    v38 = ZeroPte;
    v39 = v37 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v40 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL));
    v41 = *(_QWORD *)(v12 + 16);
    v76 = v40;
    if ( (v41 & 0x400) == 0 && (v41 & 4) != 0 && (unsigned __int16)v41 >> 12 == *(_DWORD *)(v40 + 1140) )
      v38 = MiCaptureDirtyBitToPfn(v12);
    v42 = *(_QWORD *)(v12 + 16);
    if ( (v42 & 0x400) == 0 && (v42 & 0x4000000) != 0 )
      v39 |= 0x40uLL;
    if ( (v39 & 0x800) != 0 )
    {
      v27 = (_QWORD *)a1;
      if ( a4 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v39, *(_QWORD *)a1) )
        v30 = 0LL;
      if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 )
      {
        if ( v30 || *v27 >= 0xFFFF800000000000uLL )
          goto LABEL_127;
      }
      else if ( v30 && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
      {
        v38 = MiCaptureDirtyBitToPfn(v12);
LABEL_127:
        v39 |= 0x42uLL;
      }
    }
    if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_140;
    v43 = v39;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0x200000000000000LL) )
      {
        if ( !HIBYTE(word_1404658EC) && (v39 & 1) != 0 )
          v43 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v43;
        MiWritePteShadow(a2, v43);
LABEL_140:
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v44 = 1LL;
        if ( !a3 )
          goto LABEL_188;
        v45 = 0;
        v72 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v72);
            while ( *(__int64 *)(a3 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
          v45 = 0;
          v44 = 1LL;
        }
        *(_BYTE *)(a3 + 34) &= ~0x20u;
        v46 = *(unsigned __int16 *)(a3 + 32);
        if ( !(_WORD)v46 )
          MiBadRefCount(a3);
        v47 = (_WORD)v46 == 1;
        LOWORD(v46) = v46 - 1;
        *(_WORD *)(a3 + 32) = v46;
        if ( v47 && (unsigned int)MiIsPfnFileOnly(a3, v46, v27, v28) )
          goto LABEL_186;
        v48 = *(_QWORD *)(a3 + 40);
        if ( (v48 & 0x10000000000000LL) != 0 )
        {
LABEL_187:
          _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_188:
          if ( v38 )
            MiReleasePageFileInfo(v76, v38, 1);
          v59 = P;
          if ( P )
          {
            if ( *((int *)P + 44) > 1 )
              KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
            MiFreeInPageSupportBlock(v59);
          }
          if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
          {
            result = MiCompleteProtoPteFault(a1, v39, a4, 0, v73);
            if ( (int)result < 0 )
              return result;
            return 272LL;
          }
          v60 = (_BYTE *)(v73 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( !v77 || *v60 != 4 )
          {
            v62 = 0;
            v63 = 0LL;
            if ( v77 )
            {
              if ( *v60 == 3 )
              {
                v39 &= ~0x20uLL;
                v62 = 1;
              }
              else if ( *v60 == 5 )
              {
                v63 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
              }
            }
            if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
            {
              v64 = *(_QWORD *)(a1 + 16);
              if ( (v64 & 1) == 0 || *(_BYTE *)(v64 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                v39 &= ~0x20uLL;
            }
            v65 = *(_BYTE *)(a1 + 69);
            if ( (v65 & 5) == 4 )
            {
              v66 = *(_WORD *)(a1 + 66);
              if ( v66
                && (v66 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)a2 >> 3) & 0x1FF) || (v65 & 0x10) == 0) )
              {
                MiEmptyDeferredWorkingSetEntries(a1 + 56);
              }
              v67 = *(_WORD *)(a1 + 66);
              if ( v67 )
              {
                *(_WORD *)(a1 + 66) = v67 + 1;
              }
              else
              {
                v68 = *(_BYTE *)(a1 + 69);
                *(_WORD *)(a1 + 66) = 1;
                *(_WORD *)(a1 + 64) = ((unsigned int)a2 >> 3) & 0x1FF;
                if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
                  *(_BYTE *)(a1 + 69) = v68 & 0xEF;
                else
                  *(_BYTE *)(a1 + 69) = v68 | 0x10;
              }
              v62 |= 4u;
            }
            if ( !(unsigned int)MiAllocateWsle(v78, a2, (_QWORD *)v12, 0, v39, v62, v63) )
            {
              MiLockAndDecrementShareCount(v12, 0LL);
              return 3221225495LL;
            }
            return 272LL;
          }
          if ( MiPteInShadowRange(a2) )
          {
            if ( (unsigned int)MiPteHasShadow(v61) )
            {
              if ( !HIBYTE(word_1404658EC) && (v39 & 1) != 0 )
                v39 |= 0x8000000000000000uLL;
              *(_QWORD *)a2 = v39;
              MiWritePteShadow(a2, v39);
              return 272LL;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v39 & 1) != 0 )
            {
              v39 |= 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)a2 = v39;
          return 272LL;
        }
        v49 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !(_WORD)v46 )
        {
          v50 = v44;
LABEL_158:
          v51 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
          if ( v51 > 0xFFFFF6BFFFFFFF78uLL || v51 < 0xFFFFF68000000000uLL )
          {
            v52 = *(_BYTE *)(a3 + 35);
            if ( (v52 & 0x20) != 0 )
            {
              *(_BYTE *)(a3 + 35) = v52 & 0xDF;
              goto LABEL_185;
            }
          }
          v53 = v45;
          if ( (v48 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
          {
            v53 = v44;
          }
          else if ( v51 <= 0xFFFFF6BFFFFFFF78uLL && v51 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
          {
            v53 = v44;
          }
          else if ( v50 == 1 && (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
          {
            v53 = v44;
          }
          v54 = *(_QWORD *)(qword_140465E88 + 8 * ((v48 >> 40) & 0x3FF));
          if ( v53 == 1 )
            MiReturnCommit(v54, v44);
          if ( (ULONG_PTR *)v54 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v56 = 1LL;
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                while ( 1 )
                {
                  v58 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v47 = (_DWORD)CachedResidentAvailable == v58;
                  LODWORD(CachedResidentAvailable) = v58;
                  if ( v47 )
                    break;
                  if ( v58 == -1 || (unsigned __int64)(v58 + 1LL) > 0x100 )
                    goto LABEL_180;
                }
LABEL_185:
                if ( v50 )
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
                v56 = (int)CachedResidentAvailable - 192 + 1LL;
              }
            }
            _InterlockedExchangeAdd64(&qword_14046A180, v56);
            goto LABEL_185;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 8128), 1uLL);
          goto LABEL_185;
        }
        if ( (_WORD)v46 == 1 )
        {
          if ( v49 )
          {
LABEL_156:
            v50 = v45;
            goto LABEL_158;
          }
        }
        else if ( (_WORD)v46 != 2 || !v49 )
        {
          goto LABEL_187;
        }
        if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
          goto LABEL_187;
        goto LABEL_156;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v39 & 1) != 0 )
      {
        v43 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v43;
    goto LABEL_140;
  }
  v9 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v9 & 0x800) == 0 )
    return 3221226548LL;
  while ( 1 )
  {
    if ( (v9 & 1) != 0 || v9 && qword_140465800 && (qword_140465800 & v9) == 0 )
      goto LABEL_16;
    v11 = v9;
    if ( qword_140465800 && (v9 & 0x10) == 0 )
      v11 = v9 & ~qword_140465800;
    if ( (*(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      goto LABEL_16;
    v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v69 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v69);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    if ( MI_READ_PTE_LOCK_FREE(a2) == v9 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_16:
    v9 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v9 & 0x800) == 0 )
      return 3221226548LL;
  }
  if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a2 )
    KeBugCheckEx(0x1Au, 0x411uLL, a2, v9, *(_QWORD *)(v12 + 8));
  if ( v12 )
  {
    v14 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v15 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8 * ((a2 >> 3) & 0x1FF));
        v17 = v14 | 0x20;
        if ( (v16 & 0x20) == 0 )
          v17 = *(_QWORD *)a2;
        v14 = v17;
        if ( (v16 & 0x42) != 0 )
          v14 = v17 | 0x42;
      }
    }
    v6 = (__int64)a5;
    v5 = v73;
    goto LABEL_49;
  }
  return 3221226548LL;
}
