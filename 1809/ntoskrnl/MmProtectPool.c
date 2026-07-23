/*
 * XREFs of MmProtectPool @ 0x14000E16C
 * Callers:
 *     ExProtectPoolEx @ 0x14000DED8 (ExProtectPoolEx.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140086738 (MI_TIGHTER_PERMISSIONS.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiFindLargeMapping @ 0x140156B04 (MiFindLargeMapping.c)
 *     MiVaIsSessionSpecialPool @ 0x14015FD04 (MiVaIsSessionSpecialPool.c)
 *     MiLockNonPagedPoolPte @ 0x140162570 (MiLockNonPagedPoolPte.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // r12d
  int v7; // edi
  int v8; // ebx
  ULONG_PTR v9; // rsi
  __int64 v10; // r9
  int v11; // r10d
  unsigned __int64 v12; // r11
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  char v19; // r13
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r11
  signed __int64 v23; // rbx
  char v24; // cl
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r11
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rdx
  int v35; // r9d
  bool v36; // zf
  __int64 v37; // r9
  int v38; // r10d
  __int64 v39; // r11
  __int64 SessionVm; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // r11
  __int64 v45; // r9
  __int64 v46; // rax
  signed __int64 v47; // rax
  int v48; // r9d
  signed __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // r8d
  bool v52; // zf
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r11
  __int64 v58; // rcx
  int v59; // eax
  unsigned int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // r9
  __int64 v67; // r11
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // r9
  unsigned __int64 v70; // rbx
  __int64 v71; // r10
  bool v72; // zf
  __int64 v73; // r15
  unsigned int v74; // r9d
  unsigned __int64 v75; // rdx
  __int64 v76; // r12
  unsigned __int64 v77; // rdx
  __int64 v78; // r14
  __int64 ValidPte; // rax
  __int64 v80; // r8
  signed __int64 v81; // rdi
  int v82; // r13d
  bool v83; // zf
  int v84; // ebx
  __int64 v85; // rdx
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r11
  char v89; // r9
  bool v90; // zf
  __int64 v91; // r10
  bool v92; // zf
  unsigned __int8 v93; // [rsp+20h] [rbp-E0h]
  char v94; // [rsp+21h] [rbp-DFh]
  signed __int64 v95; // [rsp+28h] [rbp-D8h] BYREF
  int v96; // [rsp+30h] [rbp-D0h]
  __int64 AnyMultiplexedVm; // [rsp+38h] [rbp-C8h]
  unsigned int v98; // [rsp+40h] [rbp-C0h]
  unsigned int v99; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v100; // [rsp+48h] [rbp-B8h]
  int v101; // [rsp+50h] [rbp-B0h] BYREF
  int v102; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v103; // [rsp+58h] [rbp-A8h]
  __int64 v104; // [rsp+60h] [rbp-A0h]
  __int64 v105; // [rsp+68h] [rbp-98h]
  int v106; // [rsp+80h] [rbp-80h] BYREF
  __int16 v107; // [rsp+84h] [rbp-7Ch]
  __int64 v108; // [rsp+88h] [rbp-78h]
  __int64 v109; // [rsp+90h] [rbp-70h]
  __int64 v110; // [rsp+98h] [rbp-68h]
  int v111; // [rsp+140h] [rbp+40h] BYREF
  __int16 v112; // [rsp+144h] [rbp+44h]
  int v113; // [rsp+148h] [rbp+48h]
  int v114; // [rsp+14Ch] [rbp+4Ch]
  __int64 v115; // [rsp+150h] [rbp+50h]
  __int64 v116; // [rsp+158h] [rbp+58h]

  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v99 = ProtectionMask;
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v96 = 0;
  v7 = 0;
  v100 = v5 + v4 - 1;
  v8 = 0;
  v9 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(v4);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  v13 = AnyMultiplexedVm;
  if ( v11 != 6 )
  {
    if ( v11 == 7 || v11 == 13 )
    {
      if ( ((v12 ^ v10) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        if ( v11 == 7 )
          goto LABEL_5;
        SessionVm = MiGetAnyMultiplexedVm(5LL);
        goto LABEL_50;
      }
    }
    else
    {
      if ( !(unsigned int)MiVaIsSessionSpecialPool(v10) )
      {
        if ( v38 != 5 || (unsigned int)MiFindLargeMapping(v37, v39) )
          return 0LL;
        v7 = 1;
        v96 = 1;
        SessionVm = MiGetAnyMultiplexedVm(5LL);
        v12 = v100;
LABEL_50:
        v13 = SessionVm;
        AnyMultiplexedVm = SessionVm;
        goto LABEL_5;
      }
      if ( ((v39 ^ v37) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        v8 = 2;
        SessionVm = MiGetSessionVm();
        goto LABEL_50;
      }
    }
    return 0LL;
  }
LABEL_5:
  v103 = 0LL;
  v14 = 0LL;
  v108 = 20LL;
  v106 = v8;
  v107 = 0;
  v109 = 0LL;
  v110 = 0LL;
  v15 = *(unsigned __int16 *)(v13 + 174);
  v100 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v105 = *(_QWORD *)(qword_14043B808 + 8 * v15);
  v19 = MiLockWorkingSetShared(v13);
  v94 = v19;
  if ( v9 <= v100 )
  {
    v18 = 0xFFFFFA8000000000uLL;
    while ( 1 )
    {
      if ( !v14 )
        goto LABEL_8;
      if ( (v9 & 0xFFF) == 0 )
        break;
LABEL_9:
      v20 = MI_READ_PTE_LOCK_FREE(v9);
      v23 = v20;
      v24 = *(_BYTE *)(v13 + 184) & 7;
      v95 = v20;
      if ( v6 != 24 )
      {
        if ( v24 == 7 )
        {
          v73 = v20;
          v74 = v6 | 0x80000000;
          v98 = v6 | 0x80000000;
          while ( 1 )
          {
            if ( (v73 & 1) != 0 )
            {
              v75 = MI_READ_PTE_LOCK_FREE(&v95);
            }
            else
            {
              v75 = v73;
              if ( qword_14043B180 && (v73 & 0x10) == 0 )
                v75 = v73 & ~qword_14043B180;
            }
            v76 = v73;
            v77 = v22 & (v75 >> 12);
            v104 = v73;
            v78 = 48 * v77 - 0x58000000000LL;
            ValidPte = MiMakeValidPte(v9, v77, v74);
            v81 = ValidPte;
            if ( (v73 & 1) == 0 )
              break;
            v82 = v96;
            if ( v96 != 1 )
            {
              v93 = 17;
              MiWriteValidPteNewProtection(v9, ValidPte);
              goto LABEL_125;
            }
            v78 = MiLockNonPagedPoolPte(v9);
            v73 = MI_READ_PTE_LOCK_FREE(v9);
            if ( v73 == v76 )
            {
              if ( (v76 & 0x200) != 0 )
                v81 |= 0x200uLL;
              v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v81, v23);
              v73 = v23;
              if ( v23 == v104 )
              {
                v23 = v95;
LABEL_125:
                v6 = v99;
                *(_QWORD *)(v78 + 16) ^= (*(_DWORD *)(v78 + 16) ^ (32 * v99)) & 0x3E0;
                if ( v82 == 1 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v93 < 2u )
                  {
                    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick();
                  }
                  __writecr8(v93);
                  v23 = v95;
                }
                if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v23, v81) )
                  MiInsertTbFlushEntry(&v106, (__int64)(v9 << 25) >> 16, 1LL);
                goto LABEL_135;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v93 < 2u )
              {
                _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick();
              }
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags
                && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v82) != 0
                && KeGetCurrentIrql() >= 2u
                && v93 < 2u )
              {
                _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick();
              }
              v23 = v73;
            }
            __writecr8(v93);
            v74 = v98;
            v22 = 0xFFFFFFFFFLL;
            v95 = v23;
          }
          if ( (*(_QWORD *)(v78 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            v101 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v101);
              while ( *(__int64 *)(v78 + 24) < 0 );
            }
            *(_QWORD *)(v78 + 24) = *(_QWORD *)(v78 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v81 |= 0x200uLL;
          }
          v6 = v99;
          *(_QWORD *)(v78 + 16) ^= (*(_DWORD *)(v78 + 16) ^ (32 * v99)) & 0x3E0;
          if ( (unsigned int)MiPteInShadowRange(v9, 0LL, v80) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v16 = 1LL;
              if ( !HIBYTE(word_14043B26C) )
              {
                v83 = (v81 & 1) == 0;
LABEL_147:
                if ( !v83 )
                  v81 |= 0x8000000000000000uLL;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
            {
              v83 = (v81 & 1) == 0;
              goto LABEL_147;
            }
          }
          *(_QWORD *)v9 = v81;
          if ( (_DWORD)v16 )
            MiWritePteShadow(v9);
LABEL_135:
          v19 = v94;
          v13 = AnyMultiplexedVm;
          goto LABEL_22;
        }
        if ( (v20 & 1) == 0 )
        {
          if ( (v20 & 0x400) == 0 )
          {
            if ( (v20 & 0x800) == 0 )
            {
              v95 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(32 * v6)) & 0x3E0;
              if ( !(unsigned int)MiPteInShadowRange(v9, v95, v95) )
              {
LABEL_31:
                v36 = v35 == 0;
                goto LABEL_32;
              }
              if ( (unsigned int)MiPteHasShadow() )
              {
                v35 = 1;
                if ( HIBYTE(word_14043B26C) )
                  goto LABEL_31;
                v92 = (v17 & 1) == 0;
              }
              else
              {
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
                  goto LABEL_31;
                v92 = (v17 & 1) == 0;
              }
              if ( !v92 )
                v16 |= v91;
              goto LABEL_31;
            }
            if ( MiLockTransitionLeafPage(v9) )
            {
              v86 = MI_READ_PTE_LOCK_FREE(v9);
              v87 = 32LL * (v6 & 0x1F);
              v68 = v87 | *(_QWORD *)(v67 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
              v69 = v87 | v86 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_159:
              *(_QWORD *)(v67 + 16) = v68;
              v95 = v69;
              if ( (unsigned int)MiPteInShadowRange(v9, v69, 0LL) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v17 = 1LL;
                  if ( !HIBYTE(word_14043B26C) )
                  {
                    v90 = (v89 & 1) == 0;
LABEL_165:
                    if ( !v90 )
                      v16 |= 0x8000000000000000uLL;
                  }
                }
                else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
                {
                  v90 = (v89 & 1) == 0;
                  goto LABEL_165;
                }
              }
              *(_QWORD *)v9 = v16;
              if ( (_DWORD)v17 )
                MiWritePteShadow(v9);
              _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_22;
            }
            goto LABEL_85;
          }
          goto LABEL_83;
        }
        v25 = MI_READ_PTE_LOCK_FREE(&v95);
        v29 = v28 & (v25 >> 12);
        v30 = v27 + 48 * v29;
        if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) == 0 )
        {
          v31 = v6;
          LODWORD(v31) = v6 | 0x80000000;
          v16 = v23 & 0x7000000000000000LL | v23 & 0xF00000000000000LL | MiMakeValidPte(v9, v29, v31) & 0x80FFFFFFFFFFFFFFuLL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, v16, v23) == v23 )
          {
            if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v95, v16) )
              MiInsertTbFlushEntry(&v106, (__int64)(v9 << 25) >> 16, 1LL);
            v32 = 0LL;
            v102 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v102);
              while ( *(__int64 *)(v30 + 24) < 0 );
            }
            *(_QWORD *)(v30 + 16) ^= (*(_DWORD *)(v30 + 16) ^ (32 * v6)) & 0x3E0;
            if ( (v95 & 0x42) != 0 )
              v32 = MiCaptureDirtyBitToPfn(v30);
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v32 )
              MiReleasePageFileInfo(v105, v32, 1LL);
            goto LABEL_22;
          }
          goto LABEL_85;
        }
        MiFlushTbList(&v106, v29, v26, v27);
        v84 = MiCopyOnWrite((__int64)(v9 << 25) >> 16);
        if ( v84 < 0 )
        {
          MiUnlockPageTableInternal(v13, v14);
          LOBYTE(v85) = v19;
          MiUnlockWorkingSetShared(v13, v85);
          MiCopyOnWriteCheckConditions(v13, (unsigned int)v84);
          goto LABEL_84;
        }
        goto LABEL_85;
      }
      v41 = v20 & 1;
      if ( v24 != 7 )
      {
        if ( v41 )
        {
          v53 = MI_READ_PTE_LOCK_FREE(&v95);
          v58 = 0x200000000000000LL;
          if ( (*(_QWORD *)(48 * (v57 & (v53 >> 12)) - 0x57FFFFFFFD8LL) & 0x200000000000000LL) != 0 )
          {
            MiFlushTbList(&v106, v54, v55, v56);
            v59 = MiCopyOnWrite((__int64)(v9 << 25) >> 16);
            v9 -= 8LL;
            v60 = v59;
            if ( v59 < 0 )
            {
              MiUnlockPageTableInternal(v13, v14);
              LOBYTE(v61) = v19;
              MiUnlockWorkingSetShared(v13, v61);
              MiCopyOnWriteCheckConditions(v13, v60);
              MiLockWorkingSetShared(v13);
              MiLockPageTableInternal(v13, v14, 0LL, v62);
            }
            goto LABEL_22;
          }
          if ( dword_14043B9A8 )
            MI_WSLE_LOG_ACCESS(v13, v9);
          if ( (MiGetWsleContents(v58, (__int64)(v9 << 25) >> 16) & 0xF) == 8 )
            goto LABEL_22;
          v63 = MiTbFlushType(v13);
          v114 = 0;
          v115 = 0LL;
          v116 = 0LL;
          v111 = v63;
          v112 = 4;
          v113 = 20;
          MiInsertTbFlushEntry(&v111, (__int64)(v9 << 25) >> 16, 1LL);
          if ( MiFreeWsleList(v13, &v111, 0LL) )
            goto LABEL_22;
          goto LABEL_85;
        }
        if ( (v23 & 0x400) == 0 )
        {
          if ( (v23 & 0x800) == 0 )
          {
            v70 = v23 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            v95 = v70;
            if ( (unsigned int)MiPteInShadowRange(v9, v70, 0LL) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v17 = 1LL;
                if ( !HIBYTE(word_14043B26C) )
                {
                  v72 = (v70 & 1) == 0;
LABEL_96:
                  if ( !v72 )
                    v16 |= v71;
                }
              }
              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
              {
                v72 = (v70 & 1) == 0;
                goto LABEL_96;
              }
            }
            v36 = (_DWORD)v17 == 0;
LABEL_32:
            *(_QWORD *)v9 = v16;
            if ( !v36 )
              MiWritePteShadow(v9);
            goto LABEL_22;
          }
          if ( MiLockTransitionLeafPage(v9) )
          {
            v66 = MI_READ_PTE_LOCK_FREE(v9);
            v68 = *(_QWORD *)(v67 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            v69 = v66 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            goto LABEL_159;
          }
          goto LABEL_85;
        }
LABEL_83:
        MiFlushTbList(&v106, v16, v17, v21);
        MiUnlockPageTableInternal(v13, v14);
        LOBYTE(v64) = v19;
        MiUnlockWorkingSetShared(v13, v64);
        MmAccessFault(0LL, (__int64)(v9 << 25) >> 16);
LABEL_84:
        MiLockWorkingSetShared(v13);
        MiLockPageTableInternal(v13, v14, 0LL, v65);
LABEL_85:
        v9 -= 8LL;
        goto LABEL_22;
      }
      if ( v7 == 1 )
      {
        if ( v41 )
        {
          v42 = MiLockNonPagedPoolPte(v9);
          v23 = MI_READ_PTE_LOCK_FREE(v9);
          v95 = v23;
LABEL_57:
          *(_QWORD *)(v42 + 16) = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          while ( 1 )
          {
            v46 = MI_READ_PTE_LOCK_FREE(&v95);
            v47 = MiSwizzleInvalidPte(v46 & 0xFFFFFFFFF000LL | 0xB00);
            if ( v48 != 1 )
              break;
            v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v47, v23);
            v36 = v23 == v49;
            v23 = v49;
            if ( v36 )
            {
              if ( (v95 & 0x200) != 0 )
                *(_QWORD *)(v42 + 24) = *(_QWORD *)(v42 + 24) & 0xC000000000000000uLL | 0x10000;
              goto LABEL_73;
            }
            v95 = v49;
          }
          if ( (unsigned int)MiPteInShadowRange(v9, v47, 0LL) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v51 = 1;
              if ( !HIBYTE(word_14043B26C) )
              {
                v52 = (v50 & 1) == 0;
LABEL_69:
                if ( !v52 )
                  v50 |= 0x8000000000000000uLL;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
            {
              v52 = (v50 & 1) == 0;
              goto LABEL_69;
            }
          }
          *(_QWORD *)v9 = v50;
          if ( v51 )
            MiWritePteShadow(v9);
LABEL_73:
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertTbFlushEntry(&v106, (__int64)(v9 << 25) >> 16, 1LL);
        }
      }
      else if ( v41 )
      {
        v43 = MI_READ_PTE_LOCK_FREE(&v95);
        v42 = v45 + 48 * (v44 & (v43 >> 12));
        v93 = MiLockPageInline(v42);
        goto LABEL_57;
      }
LABEL_22:
      v14 = v103;
      v9 += 8LL;
      v7 = v96;
      v18 = 0xFFFFFA8000000000uLL;
      if ( v9 > v100 )
        goto LABEL_23;
    }
    MiFlushTbList(&v106, v16, v17, 0xFFFFFA8000000000uLL);
    MiUnlockPageTableInternal(v13, v14);
LABEL_8:
    v14 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v103 = v14;
    MiLockPageTableInternal(v13, v14, 0LL, v18);
    goto LABEL_9;
  }
LABEL_23:
  MiFlushTbList(&v106, v16, v17, v18);
  if ( v14 )
    MiUnlockPageTableInternal(v13, v14);
  LOBYTE(v33) = v19;
  MiUnlockWorkingSetShared(v13, v33);
  return 1LL;
}
