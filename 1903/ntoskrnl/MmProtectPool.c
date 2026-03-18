/*
 * XREFs of MmProtectPool @ 0x140124AE4
 * Callers:
 *     ExProtectPoolEx @ 0x14012496C (ExProtectPoolEx.c)
 * Callees:
 *     MiTbFlushType @ 0x140023DD0 (MiTbFlushType.c)
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140050400 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DF18 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400F7114 (MI_TIGHTER_PERMISSIONS.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiFindLargeMapping @ 0x140158C44 (MiFindLargeMapping.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiLockNonPagedPoolPte @ 0x1402CF3D4 (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r12d
  int v8; // r13d
  int v9; // ebx
  unsigned __int64 v10; // rsi
  int v11; // edx
  unsigned __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // di
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r11
  signed __int64 v24; // rbx
  char v25; // cl
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r11
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  int v34; // r9d
  bool v35; // zf
  unsigned __int64 SessionVm; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // r11
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // r10
  signed __int64 TransitionPte; // rax
  __int64 v45; // r9
  signed __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // r8d
  bool v49; // zf
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r11
  __int64 v55; // rcx
  int v56; // eax
  unsigned int v57; // ebx
  int v58; // eax
  __int64 v59; // r9
  __int64 v60; // r11
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // rbx
  __int64 v64; // r10
  bool v65; // zf
  __int64 v66; // r15
  unsigned int v67; // r9d
  unsigned __int64 v68; // rdx
  __int64 v69; // r12
  __int64 v70; // rdx
  __int64 v71; // r14
  unsigned __int64 ValidPte; // rdi
  struct _KPRCB *v73; // rcx
  struct _KPRCB *v74; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  bool v76; // zf
  int v77; // ebx
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // r11
  char v81; // r9
  bool v82; // zf
  __int64 v83; // r10
  bool v84; // zf
  unsigned __int8 v85; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v86; // [rsp+21h] [rbp-DFh]
  __int64 v87; // [rsp+28h] [rbp-D8h] BYREF
  int v88; // [rsp+30h] [rbp-D0h]
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-C8h]
  unsigned int v90; // [rsp+40h] [rbp-C0h]
  unsigned int v91; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v92; // [rsp+48h] [rbp-B8h]
  int v93; // [rsp+50h] [rbp-B0h] BYREF
  int v94; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v95; // [rsp+58h] [rbp-A8h]
  __int64 v96; // [rsp+60h] [rbp-A0h]
  __int64 v97; // [rsp+68h] [rbp-98h]
  _QWORD v98[24]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v99[24]; // [rsp+140h] [rbp+40h] BYREF

  memset(v98, 0, 0xB8uLL);
  memset(v99, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v91 = ProtectionMask;
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v8 = 0;
  v88 = 0;
  v9 = 0;
  v92 = a1 + a2 - 1;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v14 = (__int64)AnyMultiplexedVm;
  if ( v11 != 6 )
  {
    if ( v11 == 5 )
    {
      if ( (unsigned int)MiFindLargeMapping(a1, v12) )
        return 0LL;
      v8 = 1;
      v88 = 1;
      SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(5);
      v12 = v92;
    }
    else
    {
      if ( v11 != 1 )
        return 0LL;
      v9 = v13;
      SessionVm = MiGetSessionVm();
    }
    AnyMultiplexedVm = (char *)SessionVm;
    v14 = SessionVm;
  }
  v15 = 0LL;
  v95 = 0LL;
  v98[2] = 0LL;
  v98[3] = 0LL;
  LODWORD(v98[0]) = v9;
  WORD2(v98[0]) = 0;
  LODWORD(v98[1]) = 20;
  v16 = *(unsigned __int16 *)(v14 + 174);
  v92 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v97 = *(_QWORD *)(qword_140466188 + 8 * v16);
  v18 = MiLockWorkingSetShared(v14);
  v85 = v18;
  if ( v10 <= v92 )
  {
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_7;
      if ( (v10 & 0xFFF) == 0 )
        break;
LABEL_8:
      v21 = MI_READ_PTE_LOCK_FREE(v10);
      v24 = v21;
      v25 = *(_BYTE *)(v14 + 184) & 7;
      v87 = v21;
      if ( v7 == 24 )
      {
        v37 = v21 & 1;
        if ( v25 != 7 )
        {
          if ( v37 )
          {
            v50 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v87);
            v55 = 0x200000000000000LL;
            if ( (*(_QWORD *)(48 * (v54 & (v50 >> 12)) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) != 0 )
            {
              MiFlushTbList((int *)v98, v51, v52, v53);
              v56 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
              v10 -= 8LL;
              v57 = v56;
              if ( v56 < 0 )
              {
                MiUnlockPageTableInternal(v14, v15);
                MiUnlockWorkingSetShared(v14, v18);
                MiCopyOnWriteCheckConditions(v14, v57);
                MiLockWorkingSetShared(v14);
                MiLockPageTableInternal(v14, v15, 0LL);
              }
              goto LABEL_22;
            }
            if ( dword_140466368 )
              MI_WSLE_LOG_ACCESS(v14, (_BYTE *)v10);
            if ( (MiGetWsleContents(v55, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
              goto LABEL_22;
            v58 = MiTbFlushType(v14);
            v99[2] = 0LL;
            v99[3] = 0LL;
            LODWORD(v99[0]) = v58;
            WORD2(v99[0]) = 4;
            v99[1] = 20LL;
            MiInsertTbFlushEntry((__int64)v99, (__int64)(v10 << 25) >> 16, 1LL, 0);
            if ( MiFreeWsleList(v14, (__int64)v99, 0) )
              goto LABEL_22;
            goto LABEL_78;
          }
          if ( (v24 & 0x400) == 0 )
          {
            if ( (v24 & 0x800) == 0 )
            {
              v63 = v24 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
              v87 = v63;
              if ( MiPteInShadowRange(v10) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v19 = 1LL;
                  if ( !HIBYTE(word_140465BEC) )
                  {
                    v65 = (v63 & 1) == 0;
LABEL_91:
                    if ( !v65 )
                      v17 |= v64;
                  }
                }
                else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
                {
                  v65 = (v63 & 1) == 0;
                  goto LABEL_91;
                }
              }
              v35 = (_DWORD)v19 == 0;
LABEL_35:
              *(_QWORD *)v10 = v17;
              if ( !v35 )
                MiWritePteShadow(v10);
              goto LABEL_22;
            }
            if ( MiLockTransitionLeafPage(v10, 0LL) )
            {
              v59 = MI_READ_PTE_LOCK_FREE(v10);
              v61 = *(_QWORD *)(v60 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
              v62 = v59 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
              goto LABEL_156;
            }
            goto LABEL_78;
          }
LABEL_83:
          MiFlushTbList((int *)v98, v17, v19, v22);
          MiUnlockPageTableInternal(v14, v15);
          MiUnlockWorkingSetShared(v14, v18);
          MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
LABEL_84:
          MiLockWorkingSetShared(v14);
          MiLockPageTableInternal(v14, v15, 0LL);
          goto LABEL_78;
        }
        if ( v8 == 1 )
        {
          if ( !v37 )
            goto LABEL_22;
          v38 = MiLockNonPagedPoolPte(v10);
          v24 = MI_READ_PTE_LOCK_FREE(v10);
          v87 = v24;
        }
        else
        {
          if ( !v37 )
            goto LABEL_22;
          v39 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v87);
          v38 = v41 + 48 * (v40 & (v39 >> 12));
          v86 = MiLockPageInline(v38);
        }
        *(_QWORD *)(v38 + 16) = *(_QWORD *)(v38 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        while ( 1 )
        {
          v42 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v87);
          TransitionPte = MiMakeTransitionPte(v43 & (v42 >> 12), 24);
          if ( v8 != 1 )
            break;
          v46 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, TransitionPte, v24);
          v24 = v46;
          if ( v46 == v45 )
          {
            if ( (v45 & 0x200) != 0 )
              *(_QWORD *)(v38 + 24) = *(_QWORD *)(v38 + 24) & 0xC000000000000000uLL | 0x10000;
            goto LABEL_67;
          }
          v87 = v46;
        }
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v48 = 1;
            if ( !HIBYTE(word_140465BEC) )
            {
              v49 = (v47 & 1) == 0;
LABEL_63:
              if ( !v49 )
                v47 |= 0x8000000000000000uLL;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v49 = (v47 & 1) == 0;
            goto LABEL_63;
          }
        }
        *(_QWORD *)v10 = v47;
        if ( v48 )
          MiWritePteShadow(v10);
LABEL_67:
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertTbFlushEntry((__int64)v98, (__int64)(v10 << 25) >> 16, 1LL, 0);
        goto LABEL_21;
      }
      if ( v25 != 7 )
      {
        if ( (v21 & 1) == 0 )
        {
          if ( (v21 & 0x400) == 0 )
          {
            if ( (v21 & 0x800) == 0 )
            {
              v87 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
              if ( !MiPteInShadowRange(v10) )
              {
LABEL_34:
                v35 = v34 == 0;
                goto LABEL_35;
              }
              if ( (unsigned int)MiPteHasShadow() )
              {
                v34 = 1;
                if ( HIBYTE(word_140465BEC) )
                  goto LABEL_34;
                v84 = (v19 & 1) == 0;
              }
              else
              {
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
                  goto LABEL_34;
                v84 = (v19 & 1) == 0;
              }
              if ( !v84 )
                v17 |= v83;
              goto LABEL_34;
            }
            if ( MiLockTransitionLeafPage(v10, 0LL) )
            {
              v78 = MI_READ_PTE_LOCK_FREE(v10);
              v79 = 32LL * (v7 & 0x1F);
              v61 = v79 | *(_QWORD *)(v60 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
              v62 = v79 | v78 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_156:
              *(_QWORD *)(v60 + 16) = v61;
              v87 = v62;
              if ( MiPteInShadowRange(v10) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v19 = 1LL;
                  if ( !HIBYTE(word_140465BEC) )
                  {
                    v82 = (v81 & 1) == 0;
LABEL_162:
                    if ( !v82 )
                      v17 |= 0x8000000000000000uLL;
                  }
                }
                else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
                {
                  v82 = (v81 & 1) == 0;
                  goto LABEL_162;
                }
              }
              *(_QWORD *)v10 = v17;
              if ( (_DWORD)v19 )
                MiWritePteShadow(v10);
              _InterlockedAnd64((volatile signed __int64 *)(v80 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_22;
            }
            goto LABEL_78;
          }
          goto LABEL_83;
        }
        v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v87);
        v30 = v29 & (v26 >> 12);
        v31 = v28 + 48 * v30;
        if ( (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) != 0 )
        {
          MiFlushTbList((int *)v98, v30, v27, v28);
          v77 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
          if ( v77 < 0 )
          {
            MiUnlockPageTableInternal(v14, v15);
            v18 = v85;
            MiUnlockWorkingSetShared(v14, v85);
            MiCopyOnWriteCheckConditions(v14, (unsigned int)v77);
            goto LABEL_84;
          }
          v18 = v85;
LABEL_78:
          v10 -= 8LL;
          goto LABEL_22;
        }
        v17 = v24 & 0xF00000000000000LL | v24 & 0x7000000000000000LL | MiMakeValidPte(v10, v30, v7 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, v17, v24) == v24 )
        {
          if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v87, v17) )
            MiInsertTbFlushEntry((__int64)v98, (__int64)(v10 << 25) >> 16, 1LL, 0);
          v32 = 0LL;
          v94 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v94);
            while ( *(__int64 *)(v31 + 24) < 0 );
          }
          *(_QWORD *)(v31 + 16) ^= (*(_DWORD *)(v31 + 16) ^ (32 * v7)) & 0x3E0;
          if ( (v87 & 0x42) != 0 )
            v32 = MiCaptureDirtyBitToPfn(v31);
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v32 )
            MiReleasePageFileInfo(v97, v32, 1);
        }
        else
        {
          v10 -= 8LL;
        }
        goto LABEL_21;
      }
      v66 = v21;
      v67 = v7 | 0x80000000;
      v90 = v7 | 0x80000000;
      while ( 1 )
      {
        if ( (v66 & 1) != 0 )
        {
          v68 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v87);
        }
        else
        {
          v68 = v66;
          if ( qword_140465B00 && (v66 & 0x10) == 0 )
            v68 = v66 & ~qword_140465B00;
        }
        v69 = v66;
        v70 = v23 & (v68 >> 12);
        v96 = v66;
        v71 = 48 * v70 - 0x58000000000LL;
        ValidPte = MiMakeValidPte(v10, v70, v67);
        if ( (v66 & 1) == 0 )
          break;
        v8 = v88;
        if ( v88 != 1 )
        {
          v86 = 17;
          MiWriteValidPteNewProtection(v10);
          goto LABEL_120;
        }
        v71 = MiLockNonPagedPoolPte(v10);
        v66 = MI_READ_PTE_LOCK_FREE(v10);
        if ( v66 == v69 )
        {
          if ( (v69 & 0x200) != 0 )
            ValidPte |= 0x200uLL;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, ValidPte, v24);
          v66 = v24;
          if ( v24 == v96 )
          {
            v24 = v87;
LABEL_120:
            v7 = v91;
            *(_QWORD *)(v71 + 16) ^= (*(_DWORD *)(v71 + 16) ^ (32 * v91)) & 0x3E0;
            if ( v8 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v86 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              __writecr8(v86);
              v24 = v87;
            }
            if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v24, ValidPte) )
              MiInsertTbFlushEntry((__int64)v98, (__int64)(v10 << 25) >> 16, 1LL, 0);
            goto LABEL_130;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v86 < 2u )
          {
            v74 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v74);
          }
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v86 < 2u )
          {
            v73 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v73->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v73);
          }
          v24 = v66;
        }
        __writecr8(v86);
        v67 = v90;
        v23 = 0xFFFFFFFFFLL;
        v87 = v24;
      }
      if ( (*(_QWORD *)(v71 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      {
        v93 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v93);
          while ( *(__int64 *)(v71 + 24) < 0 );
        }
        *(_QWORD *)(v71 + 24) = *(_QWORD *)(v71 + 24) & 0xC000000000000000uLL | 1;
        _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ValidPte |= 0x200uLL;
      }
      v7 = v91;
      *(_QWORD *)(v71 + 16) ^= (*(_DWORD *)(v71 + 16) ^ (32 * v91)) & 0x3E0;
      if ( MiPteInShadowRange(v10) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v17 = 1LL;
          if ( HIBYTE(word_140465BEC) )
            goto LABEL_144;
          v76 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_144;
          v76 = (ValidPte & 1) == 0;
        }
        if ( !v76 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_144:
      *(_QWORD *)v10 = ValidPte;
      if ( (_DWORD)v17 )
        MiWritePteShadow(v10);
      v8 = v88;
LABEL_130:
      v14 = (__int64)AnyMultiplexedVm;
LABEL_21:
      v18 = v85;
LABEL_22:
      v15 = v95;
      v10 += 8LL;
      v20 = 0xFFFFFA8000000000uLL;
      if ( v10 > v92 )
        goto LABEL_23;
    }
    MiFlushTbList((int *)v98, v17, v19, 0xFFFFFA8000000000uLL);
    MiUnlockPageTableInternal(v14, v15);
LABEL_7:
    v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v95 = v15;
    MiLockPageTableInternal(v14, v15, 0LL);
    goto LABEL_8;
  }
LABEL_23:
  MiFlushTbList((int *)v98, v17, v19, v20);
  if ( v15 )
    MiUnlockPageTableInternal(v14, v15);
  MiUnlockWorkingSetShared(v14, v18);
  return 1LL;
}
