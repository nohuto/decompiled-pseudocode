/*
 * XREFs of MiSetSystemCodeProtection @ 0x1400862D0
 * Callers:
 *     MiSetImageProtection @ 0x1400DA5A4 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x14072C854 (MiProtectSystemImage.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140086738 (MI_TIGHTER_PERMISSIONS.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // r14
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbx
  int SystemRegionType; // edx
  __int64 v12; // rcx
  void *SessionVm; // rdi
  int v14; // eax
  unsigned __int64 v15; // r12
  __int64 Process; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rbx
  _KPROCESS *CurrentThread; // rcx
  BOOL v22; // edi
  __int64 v23; // rbp
  unsigned __int64 v24; // rcx
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v26; // rdi
  unsigned int v27; // ebx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // r11
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int8 v42; // [rsp+20h] [rbp-158h]
  __int64 i; // [rsp+28h] [rbp-150h]
  void *v45; // [rsp+30h] [rbp-148h]
  int v46; // [rsp+38h] [rbp-140h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-138h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-130h]
  unsigned __int64 v49; // [rsp+50h] [rbp-128h]
  unsigned __int64 v50; // [rsp+58h] [rbp-120h]
  __int64 v51; // [rsp+60h] [rbp-118h] BYREF
  __int64 v52; // [rsp+68h] [rbp-110h]
  int v53; // [rsp+70h] [rbp-108h] BYREF
  __int16 v54; // [rsp+74h] [rbp-104h]
  __int64 v55; // [rsp+78h] [rbp-100h]
  __int64 v56; // [rsp+80h] [rbp-F8h]
  __int64 v57; // [rsp+88h] [rbp-F0h]

  v48 = a3;
  v5 = a3;
  v6 = a2;
  v52 = a1;
  v8 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
    return 1LL;
  v9 = a4;
  if ( a4 == 256 )
  {
    v50 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v10 = 0LL;
    v49 = 0LL;
  }
  else
  {
    v49 = v5;
    v50 = 0LL;
    if ( (a4 & 5) == 5 )
      v9 = a4 & 0xFFFFFFFE;
    if ( (int)MiMakeDriverPagesPrivate(a1, v6, v5, (v9 >> 1) & 2) < 0 )
      return 0LL;
    v10 = v5;
  }
  SystemRegionType = MiGetSystemRegionType(v8);
  if ( SystemRegionType == 1 )
    SessionVm = (void *)MiGetSessionVm(v12);
  else
    SessionVm = &unk_14043C250;
  v45 = SessionVm;
  v14 = 2;
  v55 = 20LL;
  if ( SystemRegionType != 1 )
    v14 = 0;
  v54 = 0;
  v53 = v14;
  v56 = 0LL;
  v15 = 0LL;
  v57 = 0LL;
  v42 = MiLockWorkingSetShared((__int64)SessionVm);
  if ( v6 > v5 )
  {
LABEL_36:
    v27 = 1;
    goto LABEL_37;
  }
  v19 = 0LL;
  for ( i = 0LL; ; v19 = i )
  {
    if ( !v15 )
      goto LABEL_35;
    if ( (v6 & 0xFFF) == 0 )
    {
      MiFlushTbList(&v53, Process, v19, v18);
      MiUnlockPageTableInternal(SessionVm, v15);
LABEL_35:
      v15 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((__int64)SessionVm, v15, 0);
      v19 = i;
    }
    if ( v6 > v10 )
    {
      v29 = v8 - *(_QWORD *)(v52 + 48);
      if ( v19 )
      {
        v31 = *(_QWORD *)(v19 + 16);
        v30 = 0LL;
        i = v31;
        v51 = 0LL;
      }
      else
      {
        MiFlushTbList(&v53, Process, 0LL, v18);
        MiUnlockPageTableInternal(SessionVm, v15);
        MiUnlockWorkingSetShared((__int64)SessionVm, v42);
        i = MiOffsetToProtos(v50, v29, &v51);
        MiLockWorkingSetShared((__int64)SessionVm);
        MiLockPageTableInternal((__int64)SessionVm, v15, 0);
        v30 = v51;
        v31 = i;
      }
      v9 = (*(unsigned __int16 *)(v31 + 32) >> 1) & 0x1F;
      v49 = v6 + 8 * (*(unsigned int *)(v31 + 44) - (unsigned __int64)(*(_DWORD *)(v31 + 52) & 0x3FFFFFFF) - v30 - 1);
      if ( (v9 & 5) == 5 )
        v9 &= ~1u;
    }
    v20 = *(_QWORD *)v6;
    v22 = MiPteInShadowRange(v6);
    if ( v22 )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        CurrentThread = (_KPROCESS *)KeGetCurrentThread();
        Process = CurrentThread->Affinity.Bitmap[12];
        if ( *(_BYTE *)(Process + 640) != 1 && (v20 & 1) != 0 && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          CurrentThread = KeGetCurrentThread()->ApcState.Process;
          Process = CurrentThread[2].Affinity.Bitmap[0];
          if ( Process )
          {
            v32 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
            Process = v20 | 0x20;
            CurrentThread = (_KPROCESS *)(unsigned __int8)v32;
            LOBYTE(CurrentThread) = v32 & 0x20;
            if ( (v32 & 0x20) == 0 )
              Process = v20;
            v20 = Process;
            if ( (v32 & 0x42) != 0 )
              v20 = Process | 0x42;
          }
        }
      }
    }
    v47 = v20;
    if ( (v20 & 1) != 0 )
      break;
    if ( (v20 & 0x400) != 0 )
      goto LABEL_30;
    if ( (v20 & 0x800) == 0 )
    {
      if ( a4 != 256 )
      {
        v17 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
        v47 = v17;
        v40 = v17;
        if ( v22 )
        {
          if ( (unsigned int)MiPteHasShadow(CurrentThread, Process) )
          {
            v41 = v17;
            if ( !HIBYTE(word_14043B26C) && (v17 & 1) != 0 )
              v41 = v17 | 0x8000000000000000uLL;
            *(_QWORD *)v6 = v41;
            MiWritePteShadow(v6);
            goto LABEL_30;
          }
          v40 = v17;
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(Process + 1740) & 0x1000) != 0 && (v17 & 1) != 0 )
            v40 = v17 | 0x8000000000000000uLL;
        }
        *(_QWORD *)v6 = v40;
      }
LABEL_30:
      v6 += 8LL;
      v8 += 4096LL;
      goto LABEL_31;
    }
    if ( MiLockTransitionLeafPage(v6) )
    {
      v33 = MI_READ_PTE_LOCK_FREE(v6);
      v34 = v33;
      if ( qword_14043B180 )
      {
        if ( (v33 & 0x10) != 0 )
          v34 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v34 = v33 & ~qword_14043B180;
      }
      v35 = 48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v36 = 32LL * (v9 & 0x1F);
      v18 = v36 | v33 & 0xFFFFFFFFFFFFFC1FuLL;
      v37 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
      v47 = v18;
      *(_QWORD *)(v35 + 16) = v36 | v37;
      v38 = v18;
      if ( v22 )
      {
        if ( (unsigned int)MiPteHasShadow(v36, Process) )
        {
          v39 = v18;
          if ( !HIBYTE(word_14043B26C) && (v18 & 1) != 0 )
            v39 = v18 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v39;
          MiWritePteShadow(v6);
          goto LABEL_84;
        }
        v38 = v18;
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( (*(_DWORD *)(Process + 1740) & 0x1000) != 0 && (v18 & 1) != 0 )
          v38 = v18 | 0x8000000000000000uLL;
      }
      *(_QWORD *)v6 = v38;
LABEL_84:
      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_30;
    }
LABEL_31:
    SessionVm = v45;
    if ( v6 > v5 )
      goto LABEL_36;
    v10 = v49;
  }
  Process = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47) >> 12) & 0xFFFFFFFFFLL;
  v23 = 48 * Process - 0x58000000000LL;
  v24 = *(_QWORD *)(v23 + 40);
  if ( (v24 & 0x200000000000000LL) != 0 )
  {
LABEL_29:
    v5 = v48;
    goto LABEL_30;
  }
  if ( (MiFlags & 0x10000) == 0 || (a4 & 4) == 0 || ((v24 >> 54) & 7) != 3 )
  {
    ValidPte = MiMakeValidPte(v6, Process, v9);
    if ( (v9 & 5) == 4 && (v20 & 0x42) != 0 )
      ValidPte |= 0x42uLL;
    MiWriteValidPteNewProtection(v6, ValidPte);
    if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v20, ValidPte) )
      MiInsertTbFlushEntry(&v53, v8, 1LL);
    v46 = 0;
    v26 = 0LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v46, Process, v17);
      while ( *(__int64 *)(v23 + 24) < 0 );
    }
    *(_QWORD *)(v23 + 16) ^= (*(_DWORD *)(v23 + 16) ^ (32 * v9)) & 0x3E0;
    if ( (v20 & 0x42) != 0 )
      v26 = MiCaptureDirtyBitToPfn(v23);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v26 )
      MiReleasePageFileInfo(
        *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v23 + 40) >> 40) & 0x3FFLL)),
        v26,
        1);
    goto LABEL_29;
  }
  SessionVm = v45;
  v27 = 0;
LABEL_37:
  MiFlushTbList(&v53, Process, v17, v18);
  if ( v15 )
    MiUnlockPageTableInternal(SessionVm, v15);
  MiUnlockWorkingSetShared((__int64)SessionVm, v42);
  return v27;
}
