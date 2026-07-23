/*
 * XREFs of MiResolveTransitionFault @ 0x14003AC00
 * Callers:
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 * Callees:
 *     MiHandleCollidedFault @ 0x140003C24 (MiHandleCollidedFault.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiIsAddressGlobal @ 0x1400B2220 (MiIsAddressGlobal.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14011A15C (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x1402B00E8 (MiMakeProtoReadOnly.c)
 */

__int64 __fastcall MiResolveTransitionFault(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v7; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 CurrentPrcb; // r8
  int v27; // r13d
  unsigned __int64 v28; // rdx
  char v29; // r11
  __int16 v30; // dx
  bool v31; // zf
  __int16 v32; // dx
  unsigned __int64 v33; // rcx
  __int64 v34; // r11
  __int64 v35; // rax
  int v36; // r10d
  unsigned __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // r13
  unsigned __int64 v41; // r9
  __int64 v42; // rdx
  signed __int32 v43; // eax
  char *v44; // rdi
  unsigned __int64 v45; // rax
  int v46; // r9d
  __int64 v47; // r10
  __int64 v48; // r11
  ULONG_PTR v49; // rbx
  _BYTE *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  unsigned int v53; // r13d
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int16 v56; // ax
  __int16 v57; // ax
  __int64 v58; // rax
  char v59; // cl
  char v60; // cl
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  int v69; // [rsp+40h] [rbp-78h] BYREF
  __int64 v70; // [rsp+48h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-68h] BYREF
  __int64 v72; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT *v73; // [rsp+60h] [rbp-58h]
  __int64 v74; // [rsp+68h] [rbp-50h]
  __int64 v75; // [rsp+70h] [rbp-48h]
  int v76; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v77; // [rsp+D0h] [rbp+18h] BYREF
  _QWORD *v78; // [rsp+D8h] [rbp+20h]

  v78 = a4;
  v5 = (__int64)a5;
  v7 = *(_QWORD *)(a1 + 16);
  v75 = *(_QWORD *)(a1 + 56);
  *a5 = 0LL;
  v70 = v7;
  P = 0LL;
  if ( a3 )
  {
    v10 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      v64 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v64 )
      {
        v65 = *(_QWORD *)(v64 + 8 * ((a2 >> 3) & 0x1FF));
        v66 = v10 | 0x20;
        if ( (v65 & 0x20) == 0 )
          v66 = v10;
        v10 = v66;
        if ( (v65 & 0x42) != 0 )
          v10 = v66 | 0x42;
      }
    }
    v11 = v10;
    if ( qword_14043B180 && (v10 & 0x10) == 0 )
      v11 = v10 & ~qword_14043B180;
    v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v45 = MI_READ_PTE_LOCK_FREE(a2);
        v49 = v45;
        if ( (v45 & 0x800) == 0 )
          return 3221226548LL;
        if ( (v45 & 1) == 0 && (!v45 || !qword_14043B180 || (qword_14043B180 & v45) != 0) )
        {
          if ( qword_14043B180 )
          {
            if ( (v45 & 0x10) != 0 )
              v45 &= ~0x10uLL;
            else
              v45 &= ~qword_14043B180;
          }
          if ( (*(_QWORD *)(v48 + 48 * ((v45 >> 12) & 0xFFFFFFFFFLL)) & 0x20000000000000LL) != 0 )
            break;
        }
      }
      v12 = v47 + 48 * ((v45 >> 12) & 0xFFFFFFFFFLL);
      v76 = v46;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v76);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      if ( MI_READ_PTE_LOCK_FREE(a2) == v49 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x411uLL, a2, v49, *(_QWORD *)(v12 + 8));
    v10 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      v61 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v61 )
      {
        v62 = *(_QWORD *)(v61 + 8 * ((a2 >> 3) & 0x1FF));
        v63 = v10 | 0x20;
        if ( (v62 & 0x20) == 0 )
          v63 = *(_QWORD *)a2;
        v10 = v63;
        if ( (v62 & 0x42) != 0 )
          v10 = v63 | 0x42;
      }
    }
    v7 = v70;
  }
  if ( (*(_BYTE *)(v12 + 35) & 0x10) != 0 )
  {
    v53 = -1073740023;
    goto LABEL_115;
  }
  v74 = v7 & 1;
  if ( (v7 & 1) == 0 || *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    __incgsdword(0x2E98u);
    if ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
    {
      result = MiHandleCollidedFault(a1, a2, a3, v12, v5, &v77);
      if ( v77 <= 1 || (int)result < 0 )
        return result;
    }
    else
    {
      result = MiHandleTransitionFault(a1, a2, a3, (void *)v12, (__int64)&v72, v10, (__int64)&P);
      if ( (int)result < 0 )
        return result;
      if ( v72 )
        v12 = v72;
    }
    a5 = v78;
    v15 = *(_QWORD *)(a1 + 16);
    if ( (v15 & 1) != 0 && *(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v10 = -865LL;
      *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    if ( ((v10 >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(a2, v12);
    v16 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v14 )
      {
        v67 = *(_QWORD *)(v14 + 8 * ((a2 >> 3) & 0x1FF));
        v14 = v16 | 0x20;
        if ( (v67 & 0x20) == 0 )
          v14 = *(_QWORD *)a2;
        v16 = v14;
        if ( (v67 & 0x42) != 0 )
          v16 = v14 | 0x42;
      }
    }
    v17 = qword_14043B180;
    v18 = v16;
    if ( qword_14043B180 && (v16 & 0x10) == 0 )
      v18 = v16 & ~qword_14043B180;
    v19 = v18 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v16 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_21;
    if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v19 = a2 == 0xFFFFF6FB7DBEDF68uLL
          ? v18 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v16 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
          : v18 & 0xFFFFFFFFF000LL | MmProtectToPteMask[(v16 >> 5) & 0x1F] & 0x7FFF000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(a2) )
        v19 |= 4uLL;
    }
    if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
      v19 |= 4uLL;
    if ( (unsigned int)MiIsAddressGlobal((__int64)(a2 << 25) >> 16, v17, v14) )
LABEL_21:
      v19 |= 0x100uLL;
    v20 = ZeroPte;
    v21 = v19 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v22 = (*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL;
    v23 = *(_QWORD *)(qword_14043B808 + 8 * v22);
    v24 = *(_QWORD *)(v12 + 16);
    v73 = (struct _KEVENT *)v23;
    if ( (v24 & 0x400) == 0 )
    {
      v22 = (unsigned __int8)v24;
      LOBYTE(v22) = (unsigned __int8)v24 >> 2;
      if ( (v24 & 4) != 0 && (unsigned __int16)v24 >> 12 == *(_DWORD *)(v23 + 1140) )
        v20 = MiCaptureDirtyBitToPfn(v12);
    }
    v25 = *(_QWORD *)(v12 + 16);
    if ( (v25 & 0x400) == 0 && (v25 & 0x4000000) != 0 )
      v21 |= 0x40uLL;
    CurrentPrcb = 0x200000000000000LL;
    if ( (v21 & 0x800) == 0 )
    {
      v27 = 0;
      goto LABEL_26;
    }
    if ( v78 )
    {
      v27 = 0;
      if ( !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v21, *(_QWORD *)a1) )
      {
        v22 = 0LL;
LABEL_68:
        if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 )
        {
          if ( v22 || *(_QWORD *)a1 >= 0xFFFF800000000000uLL )
            v21 |= 0x42uLL;
        }
        else if ( v22 )
        {
          if ( (CurrentPrcb & *(_QWORD *)(v12 + 40)) != 0 )
            goto LABEL_27;
          v20 = MiCaptureDirtyBitToPfn(v12);
          v21 |= 0x42uLL;
          CurrentPrcb = 0x200000000000000LL;
        }
LABEL_26:
        if ( (CurrentPrcb & *(_QWORD *)(v12 + 40)) == 0 )
          goto LABEL_29;
LABEL_27:
        v28 = v21;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v22, v21) )
          {
            if ( !HIBYTE(word_14043B26C) )
              v28 |= 0x8000000000000000uLL;
            *(_QWORD *)a2 = v28;
            MiWritePteShadow(a2);
LABEL_29:
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v29 = 1;
            if ( !a3 )
              goto LABEL_52;
            CurrentPrcb = 0LL;
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
              CurrentPrcb = 0LL;
              v29 = 1;
            }
            *(_BYTE *)(a3 + 34) &= ~0x20u;
            v30 = *(_WORD *)(a3 + 32);
            if ( !v30 )
              KeBugCheckEx(0x4Eu, 0x9AuLL, (__int64)(a3 + 0x58000000000LL) / 48, *(_BYTE *)(a3 + 34) & 7, 0LL);
            v31 = v30 == 1;
            v32 = v30 - 1;
            *(_WORD *)(a3 + 32) = v32;
            if ( v31 && (unsigned int)MiIsPfnFileOnly(a3) )
              goto LABEL_209;
            v33 = *(_QWORD *)(a3 + 40);
            if ( (v33 & 0x10000000000000LL) != 0 )
            {
LABEL_51:
              _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v27 = 0;
LABEL_52:
              if ( v20 )
                MiReleasePageFileInfo(v73, v20, v29);
              v44 = (char *)P;
              if ( P )
              {
                if ( *((int *)P + 44) > 1 )
                  KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
                MiFreeInPageSupportBlock(v44);
              }
              if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
              {
                result = MiCompleteProtoPteFault(a1, v21, (_DWORD)v78, 0, v70);
                if ( (int)result < 0 )
                  return result;
                return 272LL;
              }
              v50 = (_BYTE *)(v70 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( v74 && *v50 == 4 )
              {
                if ( (unsigned int)MiPteInShadowRange(a2, v70, CurrentPrcb) )
                {
                  if ( (unsigned int)MiPteHasShadow(v55, v54) )
                  {
                    if ( !HIBYTE(word_14043B26C) )
                      v21 |= 0x8000000000000000uLL;
                    *(_QWORD *)a2 = v21;
                    MiWritePteShadow(a2);
                    return 272LL;
                  }
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
                    v21 |= 0x8000000000000000uLL;
                }
                *(_QWORD *)a2 = v21;
                return 272LL;
              }
              v51 = 0LL;
              if ( v74 )
              {
                if ( *v50 == 3 )
                {
                  v21 &= ~0x20uLL;
                  v27 = 1;
                  goto LABEL_101;
                }
              }
              else
              {
                v50 = (_BYTE *)(v70 & 0xFFFFFFFFFFFFFFFEuLL);
              }
              if ( v74 && *v50 == 5 )
                v51 = (__int64)v50;
LABEL_101:
              if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
              {
                v58 = *(_QWORD *)(a1 + 16);
                if ( (v58 & 1) == 0 || *(_BYTE *)(v58 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                  v21 &= ~0x20uLL;
              }
              v52 = *(unsigned __int8 *)(a1 + 69);
              if ( (v52 & 5) == 4 )
              {
                v56 = *(_WORD *)(a1 + 66);
                if ( v56
                  && (v56 + *(unsigned __int16 *)(a1 + 64) != (((unsigned int)a2 >> 3) & 0x1FF) || (v52 & 0x10) == 0) )
                {
                  MiEmptyDeferredWorkingSetEntries(a1 + 56, v52, 511LL);
                }
                v57 = *(_WORD *)(a1 + 66);
                if ( v57 )
                {
                  *(_WORD *)(a1 + 66) = v57 + 1;
                  v27 |= 4u;
                }
                else
                {
                  v59 = *(_BYTE *)(a1 + 69);
                  *(_WORD *)(a1 + 66) = 1;
                  *(_WORD *)(a1 + 64) = ((unsigned int)a2 >> 3) & 0x1FF;
                  if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
                    v60 = v59 & 0xEF;
                  else
                    v60 = v59 | 0x10;
                  *(_BYTE *)(a1 + 69) = v60;
                  v27 |= 4u;
                }
              }
              if ( !(unsigned int)MiAllocateWsle(v75, a2, v12, 0, v21, v27, v51) )
              {
                MiLockAndDecrementShareCount(v12, 0LL);
                return 3221225495LL;
              }
              return 272LL;
            }
            v34 = *(_QWORD *)(a3 + 24);
            v35 = v34 & 0x3FFFFFFFFFFFFFFFLL;
            if ( v32 )
            {
              if ( v32 == 1 )
              {
                if ( !v35 && (*(_BYTE *)(a3 + 34) & 8) == 0 )
                  goto LABEL_145;
              }
              else if ( v32 != 2 || !v35 || (*(_BYTE *)(a3 + 34) & 8) == 0 )
              {
                goto LABEL_145;
              }
              v36 = CurrentPrcb;
            }
            else
            {
              v36 = 1;
            }
            LODWORD(a5) = v36;
            v37 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
            if ( v37 > 0xFFFFF6BFFFFFFF78uLL || v37 < 0xFFFFF68000000000uLL )
            {
              v38 = *(_BYTE *)(a3 + 35);
              if ( (v38 & 0x20) != 0 )
              {
                v29 = 1;
                *(_BYTE *)(a3 + 35) = v38 & 0xDF;
                goto LABEL_50;
              }
            }
            if ( (v33 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
            {
              v29 = 1;
              CurrentPrcb = 1LL;
            }
            else if ( v37 <= 0xFFFFF6BFFFFFFF78uLL && v37 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0 )
            {
              v29 = 1;
              CurrentPrcb = 1LL;
            }
            else if ( v36 == 1 )
            {
              v31 = (v34 & 0x4000000000000000LL) == 0;
              v29 = 1;
              if ( !v31 )
                CurrentPrcb = 1LL;
            }
            else
            {
              v29 = 1;
            }
            v39 = (v33 >> 40) & 0x3FF;
            v40 = *(_QWORD *)(qword_14043B808 + 8 * v39);
            if ( (_DWORD)CurrentPrcb == 1 )
            {
              MiReturnCommit(*(_QWORD *)(qword_14043B808 + 8 * v39), 1LL);
              v36 = (int)a5;
              v29 = 1;
            }
            if ( (ULONG_PTR *)v40 == &MiSystemPartition )
            {
              CurrentPrcb = (__int64)KeGetCurrentPrcb();
              v41 = 1LL;
              v42 = *(int *)(CurrentPrcb + 24604);
              if ( (_DWORD)v42 != -1 )
              {
                if ( (unsigned __int64)(v42 + 1) <= 0x100 )
                {
                  while ( 1 )
                  {
                    v43 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24604), v42 + 1, v42);
                    v31 = (_DWORD)v42 == v43;
                    LODWORD(v42) = v43;
                    if ( v31 )
                      break;
                    if ( v43 == -1 || (unsigned __int64)(v43 + 1LL) > 0x100 )
                      goto LABEL_156;
                  }
LABEL_50:
                  if ( v36 )
                  {
LABEL_209:
                    MiPfnReferenceCountIsZero(a3, (__int64)(a3 + 0x58000000000LL) / 48);
LABEL_145:
                    v29 = 1;
                    goto LABEL_51;
                  }
                  goto LABEL_51;
                }
LABEL_156:
                if ( (int)v42 > 192
                  && (_DWORD)v42 == _InterlockedCompareExchange(
                                      (volatile signed __int32 *)(CurrentPrcb + 24604),
                                      192,
                                      v42) )
                {
                  v41 = (int)v42 - 192 + 1LL;
                }
              }
              _InterlockedExchangeAdd64(&qword_14043F6C0, v41);
              goto LABEL_50;
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 7360), 1uLL);
            goto LABEL_50;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
            v28 |= 0x8000000000000000uLL;
        }
        *(_QWORD *)a2 = v28;
        goto LABEL_29;
      }
    }
    else
    {
      v27 = 0;
    }
    v22 = (__int64)a5;
    goto LABEL_68;
  }
  MiUpdatePfnPriority(v12, *(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
  v53 = 0;
LABEL_115:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
    MiUnlockProtoPoolPage(a3, 0x11u);
  return v53;
}
