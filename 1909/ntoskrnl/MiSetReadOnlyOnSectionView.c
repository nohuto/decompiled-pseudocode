/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x14002EA90
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     MiGetWsleProtection @ 0x14005A670 (MiGetWsleProtection.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiWriteValidPteVolatile @ 0x1400FA460 (MiWriteValidPteVolatile.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiSetProtectionOnTransitionPte @ 0x14012B720 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiUpdatePfnProtection @ 0x1402D198C (MiUpdatePfnProtection.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int updated; // r12d
  unsigned int v9; // esi
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int8 v17; // r14
  BOOL v18; // eax
  unsigned __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r9
  int WsleProtection; // eax
  char v28; // dl
  char v29; // rdx^7
  unsigned __int64 v30; // r9
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  char v40; // r8^7
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  unsigned __int8 v52; // [rsp+30h] [rbp-148h]
  __int64 v53; // [rsp+38h] [rbp-140h]
  int v54; // [rsp+40h] [rbp-138h]
  unsigned int v55; // [rsp+44h] [rbp-134h]
  unsigned __int64 v56; // [rsp+48h] [rbp-130h] BYREF
  unsigned __int64 v57; // [rsp+50h] [rbp-128h]
  unsigned __int64 v58; // [rsp+58h] [rbp-120h]
  char v59[16]; // [rsp+60h] [rbp-118h] BYREF
  int v60; // [rsp+70h] [rbp-108h] BYREF
  __int16 v61; // [rsp+74h] [rbp-104h]
  __int16 v62; // [rsp+76h] [rbp-102h]
  __int64 v63; // [rsp+78h] [rbp-100h]
  __int64 v64; // [rsp+80h] [rbp-F8h]
  __int64 v65; // [rsp+88h] [rbp-F0h]
  _BYTE v66[152]; // [rsp+90h] [rbp-E8h] BYREF

  v58 = a3;
  v62 = 0;
  memset(v66, 0, sizeof(v66));
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  updated = 1;
  v9 = 4;
  v60 = 1;
  v10 = 0LL;
  v54 = 4;
  v55 = 0;
  v63 = 20LL;
  v61 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v57 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v57;
  v12 = a1 + 1280;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = v12;
  v52 = MiLockWorkingSetShared(v12);
  v17 = v52;
  if ( v57 <= v13 )
  {
    while ( (v11 & 0xFFF) != 0 )
    {
      if ( !v10 )
        goto LABEL_23;
LABEL_5:
      v18 = MiPteInShadowRange(v11);
      v16 = v18;
      if ( v18 && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v14 & 1) != 0
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v33 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v11 >> 3) & 0x1FF));
            v34 = v14 | 0x20;
            if ( (v33 & 0x20) == 0 )
              v34 = v14;
            v14 = v34;
            if ( (v33 & 0x42) != 0 )
              v14 = v34 | 0x42;
          }
        }
        v19 = 0x8000000000000000uLL;
      }
      v56 = v14;
      if ( !v14 )
        goto LABEL_25;
      if ( (v14 & 1) != 0 )
      {
        v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v56) >> 12) & 0xFFFFFFFFFLL;
        v23 = v21 + 48 * v22;
        if ( *(_WORD *)(v23 + 32) > 1u && (updated & 7) != 4 )
          goto LABEL_24;
        if ( (v20 & *(_QWORD *)(v23 + 40)) != 0 )
        {
          ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 0LL, v59);
          v19 = 0x8000000000000000uLL;
          if ( (*(_QWORD *)(v23 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
            goto LABEL_24;
          if ( MiPteInShadowRange((((unsigned __int64)((__int64)(v11 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v25 & 1) != 0
            && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
          {
            v35 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v35 )
            {
              v36 = *(_QWORD *)(v35 + 8 * ((v26 >> 3) & 0x1FF));
              v37 = v25 | 0x20;
              if ( (v36 & 0x20) == 0 )
                v37 = v25;
              v25 = v37;
              if ( (v36 & 0x42) != 0 )
                v25 = v37 | 0x42;
            }
          }
          WsleProtection = MiGetWsleProtection(
                             (__int64)(v11 << 25) >> 16,
                             (unsigned __int8)((16 * ((v25 >> 60) & 7)) | HIBYTE(v25) & 0xF));
          v9 = v54;
          if ( WsleProtection != v54
            && (WsleProtection || (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v23 + 16) >> 5) & 0x1F) != v54) )
          {
LABEL_24:
            v12 = v53;
            v17 = v52;
            goto LABEL_25;
          }
          if ( MiPteInShadowRange(v16)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v38 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 8 * ((v30 >> 3) & 0x1FF));
              v40 = v29;
              if ( (v39 & 0x20) == 0 )
                v40 = v29;
              v29 = v40;
              if ( (v39 & 0x42) != 0 )
                v29 = v40;
            }
          }
          MiWriteValidPteVolatile(v30, 0x80000000LL, v29 & 0xFu | (unsigned __int8)(16 * (updated & 7)));
        }
        else
        {
          if ( ((*(_DWORD *)(v23 + 16) >> 5) & 0x1F) != (unsigned __int64)v9 )
            goto LABEL_24;
          updated = MiUpdatePfnProtection(a2, v21 + 48 * v22, updated);
        }
        MiRevertValidPte(a2, v11, updated, v22, (__int64)&v60);
        v12 = v53;
        v17 = v52;
        goto LABEL_16;
      }
      if ( (v14 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_25;
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v14) )
        {
          v46 = MiSwizzleInvalidPte(32 * (updated & 0x1F | 0xFFFFFFFFF8000020uLL), v14, v42, v16);
          v56 = v46;
          v14 = v46;
          if ( (_DWORD)v16 )
          {
            if ( (unsigned int)MiPteHasShadow(v47) )
            {
              v48 = v14;
              if ( !HIBYTE(word_1404658EC) && (v14 & 1) != 0 )
                v48 = v19 | v14;
              *(_QWORD *)v11 = v48;
              MiWritePteShadow(v11, v48);
              goto LABEL_25;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            {
              *(_QWORD *)v11 = v14;
              goto LABEL_25;
            }
            v46 = v14;
            if ( (v14 & 1) != 0 )
              v46 = v19 | v14;
          }
          *(_QWORD *)v11 = v46;
LABEL_25:
          if ( v10 != ((v58 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
          {
            MiFlushTbList(&v60, v14, v19, v16);
            if ( v10 )
            {
              MiUnlockPageTableInternal(v12);
              v10 = 0LL;
            }
          }
          v9 = 1;
          v55 = -1073741755;
          v13 = v11 - 8;
          v54 = 1;
          v11 = v57;
          updated = 4;
          goto LABEL_17;
        }
        v56 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
        v43 = v56;
        if ( !(_DWORD)v16 )
          goto LABEL_106;
        if ( (unsigned int)MiPteHasShadow(v41) )
        {
          v45 = v44;
          if ( !HIBYTE(word_1404658EC) && (v44 & 1) != 0 )
            goto LABEL_75;
          goto LABEL_76;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          *(_QWORD *)v11 = v44;
          goto LABEL_16;
        }
        v43 = v44;
        if ( (v44 & 1) == 0 )
          goto LABEL_106;
        goto LABEL_105;
      }
      if ( (v14 & 0x800) == 0 )
      {
        v50 = (v14 >> 5) & 0x1F;
        if ( v50 != v9 )
          goto LABEL_25;
        v56 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
        v43 = v56;
        if ( !(_DWORD)v16 )
          goto LABEL_106;
        if ( (unsigned int)MiPteHasShadow(v50) )
        {
          v45 = v51;
          if ( !HIBYTE(word_1404658EC) && (v51 & 1) != 0 )
LABEL_75:
            v45 |= 0x8000000000000000uLL;
LABEL_76:
          *(_QWORD *)v11 = v45;
          MiWritePteShadow(v11, v45);
LABEL_16:
          v11 += 8LL;
          goto LABEL_17;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          *(_QWORD *)v11 = v51;
          goto LABEL_16;
        }
        v43 = v51;
        if ( (v51 & 1) == 0 )
        {
LABEL_106:
          *(_QWORD *)v11 = v43;
          goto LABEL_16;
        }
LABEL_105:
        v43 |= 0x8000000000000000uLL;
        goto LABEL_106;
      }
      v49 = MiSetProtectionOnTransitionPte(a2, v11, updated, (updated & 7) == 4);
      if ( !v49 )
        goto LABEL_16;
      if ( v49 != 2 )
        goto LABEL_25;
LABEL_17:
      v15 = 0x8000000000000000uLL;
      if ( v11 > v13 )
        goto LABEL_18;
    }
    if ( v10 )
    {
      MiFlushTbList(&v60, v14, 0x8000000000000000uLL, v16);
      MiUnlockPageTableInternal(v12);
    }
LABEL_23:
    MiMakeSystemAddressValid(v11, (__int64)&v60, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v17, 0);
    v10 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    goto LABEL_5;
  }
LABEL_18:
  MiFlushTbList(&v60, v14, v15, v16);
  if ( v10 )
    MiUnlockPageTableInternal(v12);
  MiUnlockWorkingSetShared(v12, v17);
  return v55;
}
