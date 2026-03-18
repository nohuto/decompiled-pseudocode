/*
 * XREFs of MmProtectPool @ 0x1400ECD14
 * Callers:
 *     ExProtectPoolEx @ 0x1400ECB9C (ExProtectPoolEx.c)
 * Callees:
 *     MiTbFlushType @ 0x1400241C0 (MiTbFlushType.c)
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DFB8 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400FABB4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiFindLargeMapping @ 0x1401592E4 (MiFindLargeMapping.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLockNonPagedPoolPte @ 0x1402CF134 (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E54BC (MiCopyOnWriteCheckConditions.c)
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
  __int64 v34; // rcx
  int v35; // r9d
  bool v36; // zf
  unsigned __int64 SessionVm; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // r11
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // r10
  signed __int64 TransitionPte; // rax
  __int64 v46; // r9
  signed __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // r8d
  bool v51; // zf
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r11
  __int64 v57; // rcx
  int v58; // eax
  unsigned int v59; // ebx
  int v60; // eax
  __int64 v61; // r9
  __int64 v62; // r11
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // r10
  bool v68; // zf
  __int64 v69; // r15
  unsigned int v70; // r9d
  unsigned __int64 v71; // rdx
  __int64 v72; // r12
  __int64 v73; // rdx
  __int64 v74; // r14
  unsigned __int64 ValidPte; // rdi
  struct _KPRCB *v76; // rcx
  struct _KPRCB *v77; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v79; // rcx
  bool v80; // zf
  int v81; // ebx
  __int64 v82; // r9
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // r11
  char v86; // r9
  bool v87; // zf
  __int64 v88; // r10
  bool v89; // zf
  unsigned __int8 v90; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v91; // [rsp+21h] [rbp-DFh]
  signed __int64 v92; // [rsp+28h] [rbp-D8h] BYREF
  int v93; // [rsp+30h] [rbp-D0h]
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-C8h]
  unsigned int v95; // [rsp+40h] [rbp-C0h]
  unsigned int v96; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v97; // [rsp+48h] [rbp-B8h]
  int v98; // [rsp+50h] [rbp-B0h] BYREF
  int v99; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v100; // [rsp+58h] [rbp-A8h]
  __int64 v101; // [rsp+60h] [rbp-A0h]
  __int64 v102; // [rsp+68h] [rbp-98h]
  _QWORD v103[24]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v104[24]; // [rsp+140h] [rbp+40h] BYREF

  memset(v103, 0, 0xB8uLL);
  memset(v104, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v96 = ProtectionMask;
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v8 = 0;
  v93 = 0;
  v9 = 0;
  v97 = a1 + a2 - 1;
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
      v93 = 1;
      SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(5);
      v12 = v97;
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
  v100 = 0LL;
  v103[2] = 0LL;
  v103[3] = 0LL;
  LODWORD(v103[0]) = v9;
  WORD2(v103[0]) = 0;
  LODWORD(v103[1]) = 20;
  v16 = *(unsigned __int16 *)(v14 + 174);
  v97 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v102 = *(_QWORD *)(qword_140465E88 + 8 * v16);
  v18 = MiLockWorkingSetShared(v14);
  v90 = v18;
  if ( v10 <= v97 )
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
      v92 = v21;
      if ( v7 == 24 )
      {
        v38 = v21 & 1;
        if ( v25 != 7 )
        {
          if ( v38 )
          {
            v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v92);
            v57 = 0x200000000000000LL;
            if ( (*(_QWORD *)(48 * (v56 & (v52 >> 12)) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) != 0 )
            {
              MiFlushTbList((int *)v103, v53, v54, v55);
              v58 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
              v10 -= 8LL;
              v59 = v58;
              if ( v58 < 0 )
              {
                MiUnlockPageTableInternal(v14);
                MiUnlockWorkingSetShared(v14, v18);
                MiCopyOnWriteCheckConditions(v14, v59);
                MiLockWorkingSetShared(v14);
                MiLockPageTableInternal(v14, v15, 0LL);
              }
              goto LABEL_22;
            }
            if ( dword_140466068 )
              MI_WSLE_LOG_ACCESS(v14, (_BYTE *)v10);
            if ( (MiGetWsleContents(v57, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
              goto LABEL_22;
            v60 = MiTbFlushType(v14);
            v104[2] = 0LL;
            v104[3] = 0LL;
            LODWORD(v104[0]) = v60;
            WORD2(v104[0]) = 4;
            v104[1] = 20LL;
            MiInsertTbFlushEntry((__int64)v104, (__int64)(v10 << 25) >> 16, 1LL, 0);
            if ( MiFreeWsleList(v14, (__int64)v104, 0) )
              goto LABEL_22;
            goto LABEL_78;
          }
          if ( (v24 & 0x400) == 0 )
          {
            if ( (v24 & 0x800) == 0 )
            {
              v65 = v24 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
              v92 = v65;
              if ( MiPteInShadowRange(v10) )
              {
                if ( (unsigned int)MiPteHasShadow(v66) )
                {
                  v19 = 1LL;
                  if ( !HIBYTE(word_1404658EC) )
                  {
                    v68 = (v65 & 1) == 0;
LABEL_91:
                    if ( !v68 )
                      v17 |= v67;
                  }
                }
                else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
                {
                  v68 = (v65 & 1) == 0;
                  goto LABEL_91;
                }
              }
              v36 = (_DWORD)v19 == 0;
LABEL_35:
              *(_QWORD *)v10 = v17;
              if ( !v36 )
                MiWritePteShadow(v10, v17);
              goto LABEL_22;
            }
            if ( MiLockTransitionLeafPage(v10, 0LL) )
            {
              v61 = MI_READ_PTE_LOCK_FREE(v10);
              v63 = *(_QWORD *)(v62 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
              v64 = v61 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
              goto LABEL_156;
            }
            goto LABEL_78;
          }
LABEL_83:
          MiFlushTbList((int *)v103, v17, v19, v22);
          MiUnlockPageTableInternal(v14);
          MiUnlockWorkingSetShared(v14, v18);
          MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
LABEL_84:
          MiLockWorkingSetShared(v14);
          MiLockPageTableInternal(v14, v15, 0LL);
          goto LABEL_78;
        }
        if ( v8 == 1 )
        {
          if ( !v38 )
            goto LABEL_22;
          v39 = MiLockNonPagedPoolPte(v10);
          v24 = MI_READ_PTE_LOCK_FREE(v10);
          v92 = v24;
        }
        else
        {
          if ( !v38 )
            goto LABEL_22;
          v40 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v92);
          v39 = v42 + 48 * (v41 & (v40 >> 12));
          v91 = MiLockPageInline(v39);
        }
        *(_QWORD *)(v39 + 16) = *(_QWORD *)(v39 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        while ( 1 )
        {
          v43 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v92);
          TransitionPte = MiMakeTransitionPte(v44 & (v43 >> 12), 24);
          if ( v8 != 1 )
            break;
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, TransitionPte, v24);
          v24 = v47;
          if ( v47 == v46 )
          {
            if ( (v46 & 0x200) != 0 )
              *(_QWORD *)(v39 + 24) = *(_QWORD *)(v39 + 24) & 0xC000000000000000uLL | 0x10000;
            goto LABEL_67;
          }
          v92 = v47;
        }
        if ( MiPteInShadowRange(v10) )
        {
          if ( (unsigned int)MiPteHasShadow(v49) )
          {
            v50 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v51 = (v48 & 1) == 0;
LABEL_63:
              if ( !v51 )
                v48 |= 0x8000000000000000uLL;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v51 = (v48 & 1) == 0;
            goto LABEL_63;
          }
        }
        *(_QWORD *)v10 = v48;
        if ( v50 )
          MiWritePteShadow(v10, v48);
LABEL_67:
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertTbFlushEntry((__int64)v103, (__int64)(v10 << 25) >> 16, 1LL, 0);
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
              v92 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
              if ( !MiPteInShadowRange(v10) )
              {
LABEL_34:
                v36 = v35 == 0;
                goto LABEL_35;
              }
              if ( (unsigned int)MiPteHasShadow(v34) )
              {
                v35 = 1;
                if ( HIBYTE(word_1404658EC) )
                  goto LABEL_34;
                v89 = (v19 & 1) == 0;
              }
              else
              {
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
                  goto LABEL_34;
                v89 = (v19 & 1) == 0;
              }
              if ( !v89 )
                v17 |= v88;
              goto LABEL_34;
            }
            if ( MiLockTransitionLeafPage(v10, 0LL) )
            {
              v82 = MI_READ_PTE_LOCK_FREE(v10);
              v83 = 32LL * (v7 & 0x1F);
              v63 = v83 | *(_QWORD *)(v62 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
              v64 = v83 | v82 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_156:
              *(_QWORD *)(v62 + 16) = v63;
              v92 = v64;
              if ( MiPteInShadowRange(v10) )
              {
                if ( (unsigned int)MiPteHasShadow(v84) )
                {
                  v19 = 1LL;
                  if ( !HIBYTE(word_1404658EC) )
                  {
                    v87 = (v86 & 1) == 0;
LABEL_162:
                    if ( !v87 )
                      v17 |= 0x8000000000000000uLL;
                  }
                }
                else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
                {
                  v87 = (v86 & 1) == 0;
                  goto LABEL_162;
                }
              }
              *(_QWORD *)v10 = v17;
              if ( (_DWORD)v19 )
                MiWritePteShadow(v10, v17);
              _InterlockedAnd64((volatile signed __int64 *)(v85 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_22;
            }
            goto LABEL_78;
          }
          goto LABEL_83;
        }
        v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v92);
        v30 = v29 & (v26 >> 12);
        v31 = v28 + 48 * v30;
        if ( (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) != 0 )
        {
          MiFlushTbList((int *)v103, v30, v27, v28);
          v81 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
          if ( v81 < 0 )
          {
            MiUnlockPageTableInternal(v14);
            v18 = v90;
            MiUnlockWorkingSetShared(v14, v90);
            MiCopyOnWriteCheckConditions(v14, (unsigned int)v81);
            goto LABEL_84;
          }
          v18 = v90;
LABEL_78:
          v10 -= 8LL;
          goto LABEL_22;
        }
        v17 = v24 & 0xF00000000000000LL | v24 & 0x7000000000000000LL | MiMakeValidPte(v10, v30, v7 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, v17, v24) == v24 )
        {
          if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v92, v17) )
            MiInsertTbFlushEntry((__int64)v103, (__int64)(v10 << 25) >> 16, 1LL, 0);
          v32 = 0LL;
          v99 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v99);
            while ( *(__int64 *)(v31 + 24) < 0 );
          }
          *(_QWORD *)(v31 + 16) ^= (*(_DWORD *)(v31 + 16) ^ (32 * v7)) & 0x3E0;
          if ( (v92 & 0x42) != 0 )
            v32 = MiCaptureDirtyBitToPfn(v31);
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v32 )
            MiReleasePageFileInfo(v102, v32, 1);
        }
        else
        {
          v10 -= 8LL;
        }
        goto LABEL_21;
      }
      v69 = v21;
      v70 = v7 | 0x80000000;
      v95 = v7 | 0x80000000;
      while ( 1 )
      {
        if ( (v69 & 1) != 0 )
        {
          v71 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v92);
        }
        else
        {
          v71 = v69;
          if ( qword_140465800 && (v69 & 0x10) == 0 )
            v71 = v69 & ~qword_140465800;
        }
        v72 = v69;
        v73 = v23 & (v71 >> 12);
        v101 = v69;
        v74 = 48 * v73 - 0x58000000000LL;
        ValidPte = MiMakeValidPte(v10, v73, v70);
        if ( (v69 & 1) == 0 )
          break;
        v8 = v93;
        if ( v93 != 1 )
        {
          v91 = 17;
          MiWriteValidPteNewProtection(v10);
          goto LABEL_120;
        }
        v74 = MiLockNonPagedPoolPte(v10);
        v69 = MI_READ_PTE_LOCK_FREE(v10);
        if ( v69 == v72 )
        {
          if ( (v72 & 0x200) != 0 )
            ValidPte |= 0x200uLL;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, ValidPte, v24);
          v69 = v24;
          if ( v24 == v101 )
          {
            v24 = v92;
LABEL_120:
            v7 = v96;
            *(_QWORD *)(v74 + 16) ^= (*(_DWORD *)(v74 + 16) ^ (32 * v96)) & 0x3E0;
            if ( v8 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v91 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              __writecr8(v91);
              v24 = v92;
            }
            if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v24, ValidPte) )
              MiInsertTbFlushEntry((__int64)v103, (__int64)(v10 << 25) >> 16, 1LL, 0);
            goto LABEL_130;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v91 < 2u )
          {
            v77 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v77->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v77);
          }
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v91 < 2u )
          {
            v76 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v76->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v76);
          }
          v24 = v69;
        }
        __writecr8(v91);
        v70 = v95;
        v23 = 0xFFFFFFFFFLL;
        v92 = v24;
      }
      if ( (*(_QWORD *)(v74 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      {
        v98 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v98);
          while ( *(__int64 *)(v74 + 24) < 0 );
        }
        *(_QWORD *)(v74 + 24) = *(_QWORD *)(v74 + 24) & 0xC000000000000000uLL | 1;
        _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ValidPte |= 0x200uLL;
      }
      v7 = v96;
      *(_QWORD *)(v74 + 16) ^= (*(_DWORD *)(v74 + 16) ^ (32 * v96)) & 0x3E0;
      if ( MiPteInShadowRange(v10) )
      {
        if ( (unsigned int)MiPteHasShadow(v79) )
        {
          v17 = 1LL;
          if ( HIBYTE(word_1404658EC) )
            goto LABEL_144;
          v80 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_144;
          v80 = (ValidPte & 1) == 0;
        }
        if ( !v80 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_144:
      *(_QWORD *)v10 = ValidPte;
      if ( (_DWORD)v17 )
        MiWritePteShadow(v10, ValidPte);
      v8 = v93;
LABEL_130:
      v14 = (__int64)AnyMultiplexedVm;
LABEL_21:
      v18 = v90;
LABEL_22:
      v15 = v100;
      v10 += 8LL;
      v20 = 0xFFFFFA8000000000uLL;
      if ( v10 > v97 )
        goto LABEL_23;
    }
    MiFlushTbList((int *)v103, v17, v19, 0xFFFFFA8000000000uLL);
    MiUnlockPageTableInternal(v14);
LABEL_7:
    v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v100 = v15;
    MiLockPageTableInternal(v14, v15, 0LL);
    goto LABEL_8;
  }
LABEL_23:
  MiFlushTbList((int *)v103, v17, v19, v20);
  if ( v15 )
    MiUnlockPageTableInternal(v14);
  MiUnlockWorkingSetShared(v14, v18);
  return 1LL;
}
