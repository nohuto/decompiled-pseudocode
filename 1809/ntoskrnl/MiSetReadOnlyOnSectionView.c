/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x140085AF0
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140619664 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x140093AF8 (MiSetProtectionOnTransitionPte.c)
 *     MiRevertValidPte @ 0x1400B22A0 (MiRevertValidPte.c)
 *     MiGetWsleProtection @ 0x1400B5B60 (MiGetWsleProtection.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiUpdatePfnProtection @ 0x1402BF74C (MiUpdatePfnProtection.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  unsigned int updated; // ebp
  int v9; // esi
  __int64 v10; // r12
  ULONG_PTR v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 Process; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // bl
  BOOL v18; // eax
  _KPROCESS *v19; // r8
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v25; // rcx
  unsigned __int8 WsleContents; // al
  int WsleProtection; // eax
  __int64 v28; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  unsigned __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // r8
  unsigned __int8 v47; // [rsp+30h] [rbp-148h]
  unsigned int v48; // [rsp+34h] [rbp-144h]
  __int64 v49; // [rsp+38h] [rbp-140h]
  unsigned int v50; // [rsp+40h] [rbp-138h]
  unsigned __int64 v51; // [rsp+48h] [rbp-130h] BYREF
  unsigned __int64 v52; // [rsp+50h] [rbp-128h]
  unsigned __int64 v53; // [rsp+58h] [rbp-120h]
  __int64 v54; // [rsp+60h] [rbp-118h] BYREF
  int v55; // [rsp+70h] [rbp-108h] BYREF
  __int16 v56; // [rsp+74h] [rbp-104h]
  __int64 v57; // [rsp+78h] [rbp-100h]
  __int64 v58; // [rsp+80h] [rbp-F8h]
  __int64 v59; // [rsp+88h] [rbp-F0h]

  v53 = a3;
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  updated = 1;
  v9 = 4;
  v10 = 0LL;
  v48 = 4;
  v50 = 0;
  v57 = 20LL;
  v55 = 1;
  v56 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v52 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v52;
  v12 = v7 + 1280;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = v7 + 1280;
  v47 = MiLockWorkingSetShared(v7 + 1280);
  v17 = v47;
  if ( v52 > v13 )
    goto LABEL_18;
  do
  {
    if ( (v11 & 0xFFF) == 0 )
    {
      if ( v10 )
      {
        MiFlushTbList(&v55, Process, 0x8000000000000000uLL, v16);
        MiUnlockPageTableInternal(v12, v10);
      }
LABEL_23:
      MiMakeSystemAddressValid(v11, 0);
      v10 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      goto LABEL_5;
    }
    if ( !v10 )
      goto LABEL_23;
LABEL_5:
    v18 = MiPteInShadowRange(v11);
    v16 = v18;
    if ( v18 && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (Process & 1) != 0
        && ((Process & 0x20) == 0 || (Process & 0x42) == 0) )
      {
        v30 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 8 * ((v11 >> 3) & 0x1FF));
          v32 = Process | 0x20;
          if ( (v31 & 0x20) == 0 )
            v32 = Process;
          Process = v32;
          if ( (v31 & 0x42) != 0 )
            Process = v32 | 0x42;
        }
      }
      v19 = (_KPROCESS *)0x8000000000000000LL;
    }
    v51 = Process;
    if ( !Process )
      goto LABEL_26;
    if ( (Process & 1) != 0 )
    {
      v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v51) >> 12) & 0xFFFFFFFFFLL;
      v23 = v21 + 48 * v22;
      if ( *(_WORD *)(v23 + 32) <= 1u || (updated & 7) == 4 )
      {
        if ( (v20 & *(_QWORD *)(v23 + 40)) != 0 )
        {
          ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 0, &v54);
          v19 = (_KPROCESS *)0x8000000000000000LL;
          v25 = *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL;
          if ( v25 == ProtoPteAddress )
          {
            WsleContents = MiGetWsleContents(v25, (__int64)(v11 << 25) >> 16);
            WsleProtection = MiGetWsleProtection((__int64)(v11 << 25) >> 16, WsleContents);
            if ( WsleProtection == v48 )
            {
              v9 = v48;
LABEL_13:
              MiGetWsleContents(v28, (__int64)(v11 << 25) >> 16);
              MiWriteValidPteVolatile(
                (((unsigned __int64)((__int64)(v11 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                0x80000000LL);
              goto LABEL_14;
            }
            if ( !WsleProtection )
            {
              v33 = MI_READ_PTE_LOCK_FREE(v23 + 16);
              v9 = v48;
              if ( ((v33 >> 5) & 0x1F) == v48 )
                goto LABEL_13;
            }
          }
        }
        else if ( ((*(_DWORD *)(v23 + 16) >> 5) & 0x1F) == (unsigned __int64)v48 )
        {
          v9 = v48;
          updated = MiUpdatePfnProtection(a2, v21 + 48 * v22, updated);
LABEL_14:
          MiRevertValidPte(a2, v11, updated, v22, (__int64)&v55);
          v12 = v49;
          goto LABEL_15;
        }
      }
      v12 = v49;
      goto LABEL_26;
    }
    if ( (Process & 0x400) != 0 )
    {
      if ( (updated & 7) == 4 )
      {
        if ( MiIsPrototypePteVadLookup(Process) )
        {
          Process = v34 & 0xFFFFFFFFFFFFFC1FuLL;
          v36 = Process | (32LL * (updated & 0x1F));
          v51 = v36;
          v37 = v36;
          if ( (_DWORD)v16 )
          {
            if ( (unsigned int)MiPteHasShadow(v35, Process) )
            {
              v39 = v36;
              if ( !HIBYTE(word_14043B26C) && (v36 & 1) != 0 )
                v39 = v38 | v36;
              goto LABEL_55;
            }
            v37 = v36;
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( (*(_DWORD *)(Process + 1740) & 0x1000) != 0 && (v36 & 1) != 0 )
              v37 = v38 | v36;
          }
          goto LABEL_83;
        }
        v40 = MiSwizzleInvalidPte(32 * (updated & 0x1F | 0xFFFFFFFFF8000020uLL));
        v51 = v40;
        Process = v40;
        if ( (_DWORD)v16 )
        {
          v42 = (unsigned int)MiPteHasShadow(v41, v40) == 0;
          v40 = Process;
          if ( !v42 )
          {
            if ( !HIBYTE(word_14043B26C) && (Process & 1) != 0 )
              v40 = v43 | Process;
            *(_QWORD *)v11 = v40;
            MiWritePteShadow(v11);
            goto LABEL_26;
          }
          v19 = KeGetCurrentThread()->ApcState.Process;
          if ( (v19[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (Process & 1) != 0 )
            v40 = Process | 0x8000000000000000uLL;
        }
        *(_QWORD *)v11 = v40;
      }
LABEL_26:
      if ( v10 != ((v53 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        MiFlushTbList(&v55, Process, (__int64)v19, v16);
        if ( v10 )
        {
          MiUnlockPageTableInternal(v12, v10);
          v10 = 0LL;
        }
      }
      v9 = 1;
      v50 = -1073741755;
      v13 = v11 - 8;
      v48 = 1;
      v11 = v52;
      updated = 4;
      goto LABEL_16;
    }
    if ( (Process & 0x800) == 0 )
    {
      v45 = (Process >> 5) & 0x1F;
      if ( v45 == v9 )
      {
        v51 = Process ^ ((unsigned __int16)Process ^ (unsigned __int16)(32 * updated)) & 0x3E0;
        v37 = v51;
        if ( (_DWORD)v16 )
        {
          if ( (unsigned int)MiPteHasShadow(v45, Process) )
          {
            v39 = v46;
            if ( !HIBYTE(word_14043B26C) && (v46 & 1) != 0 )
              v39 = v46 | 0x8000000000000000uLL;
LABEL_55:
            *(_QWORD *)v11 = v39;
            MiWritePteShadow(v11);
LABEL_15:
            v11 += 8LL;
            goto LABEL_16;
          }
          v37 = v46;
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 1740) & 0x1000) != 0 && (v46 & 1) != 0 )
            v37 = v46 | 0x8000000000000000uLL;
        }
LABEL_83:
        *(_QWORD *)v11 = v37;
        goto LABEL_15;
      }
      goto LABEL_26;
    }
    v44 = MiSetProtectionOnTransitionPte(a2, v11, updated, (updated & 7) == 4);
    if ( !v44 )
      goto LABEL_15;
    if ( v44 != 2 )
      goto LABEL_26;
LABEL_16:
    v15 = 0x8000000000000000uLL;
  }
  while ( v11 <= v13 );
  v17 = v47;
LABEL_18:
  MiFlushTbList(&v55, Process, v15, v16);
  if ( v10 )
    MiUnlockPageTableInternal(v12, v10);
  MiUnlockWorkingSetShared(v12, v17);
  return v50;
}
