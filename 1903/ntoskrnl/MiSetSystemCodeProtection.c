/*
 * XREFs of MiSetSystemCodeProtection @ 0x1400F6CD8
 * Callers:
 *     MiSetImageProtection @ 0x1400F6C8C (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x14074E730 (MiProtectSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400F7114 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v7; // r12
  unsigned int v8; // edi
  int v9; // ebx
  unsigned int v10; // r15d
  __int64 SessionVm; // rax
  int v12; // edx
  unsigned __int64 v13; // r8
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int64 v24; // rcx
  __int64 v25; // r11
  unsigned __int64 v26; // rbx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  unsigned int *v31; // r8
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // r11
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // rcx
  unsigned __int8 v41; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+28h] [rbp-D8h]
  unsigned int *i; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+58h] [rbp-A8h]
  _DWORD *v49; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-90h]
  _QWORD v52[24]; // [rsp+80h] [rbp-80h] BYREF

  v51 = a3;
  v47 = a1;
  memset(v52, 0, 0xB8uLL);
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 1LL;
  v8 = 1;
  v9 = 2;
  v10 = a4;
  if ( a4 == 256 )
  {
    v49 = (_DWORD *)MiSectionControlArea(*(_QWORD *)(v47 + 112));
    v48 = v28;
  }
  else
  {
    v49 = 0LL;
    v48 = a3;
    v10 = a4 & 0xFFFFFFFE;
    if ( (a4 & 5) != 5 )
      v10 = a4;
    if ( (int)MiMakeDriverPagesPrivate(v47, a2, a3, (v10 >> 1) & 2) < 0 )
      return 0LL;
  }
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v42 = SessionVm;
  v52[2] = v13;
  if ( v12 != 1 )
    v9 = v13;
  LODWORD(v52[1]) = 20;
  WORD2(v52[0]) = 0;
  v14 = SessionVm;
  LODWORD(v52[0]) = v9;
  v15 = v13;
  v52[3] = v13;
  v41 = MiLockWorkingSetShared(SessionVm);
  if ( a2 <= v51 )
  {
    v19 = 0LL;
    v20 = 0LL;
    for ( i = 0LL; ; v20 = (__int64)i )
    {
      if ( !v15 )
        goto LABEL_33;
      if ( (a2 & 0xFFF) == 0 )
        break;
LABEL_14:
      if ( a2 > v48 )
      {
        v29 = v7 - *(_QWORD *)(v47 + 48);
        if ( v20 )
        {
          v31 = *(unsigned int **)(v20 + 16);
          v30 = v19;
          i = v31;
          v50 = v19;
        }
        else
        {
          MiFlushTbList((int *)v52, v16, 0LL, v18);
          MiUnlockPageTableInternal(v14);
          MiUnlockWorkingSetShared(v14, v41);
          i = MiOffsetToProtos(v49, v29, &v50);
          MiLockWorkingSetShared(v14);
          MiLockPageTableInternal(v14, v15, 0LL);
          v30 = v50;
          v31 = i;
        }
        v10 = (*((unsigned __int16 *)v31 + 16) >> 1) & 0x1F;
        v48 = a2 + 8 * (v31[11] - (unsigned __int64)(v31[13] & 0x3FFFFFFF) - v30 - 1);
        if ( (v10 & 5) == 5 )
          v10 &= ~1u;
      }
      v21 = MI_READ_PTE_LOCK_FREE(a2);
      v45 = v21;
      v22 = v21;
      if ( (v21 & 1) != 0 )
      {
        v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL;
        v23 = 48 * v16 - 0x58000000000LL;
        v24 = *(_QWORD *)(v23 + 40);
        if ( (v24 & 0x200000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x10000) != 0 && (a4 & 4) != 0 && ((v24 >> 54) & 7) == 3 )
          {
            v8 = v19;
            goto LABEL_34;
          }
          MiMakeValidPte(a2, v16, v10);
          MiWriteValidPteNewProtection(a2);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v22, v25) )
            MiInsertTbFlushEntry((__int64)v52, v7, 1LL, 0);
          v26 = 0LL;
          v46 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v46);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          *(_QWORD *)(v23 + 16) ^= (*(_DWORD *)(v23 + 16) ^ (32 * v10)) & 0x3E0;
          if ( (v45 & 0x42) != 0 )
            v26 = MiCaptureDirtyBitToPfn(v23);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v19 = 0LL;
          if ( v26 )
          {
            MiReleasePageFileInfo(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v23 + 40) >> 40) & 0x3FFLL)), v26, 1);
            v19 = 0LL;
          }
        }
        v14 = v42;
        goto LABEL_28;
      }
      if ( (v21 & 0x400) != 0 )
        goto LABEL_28;
      if ( (v21 & 0x800) == 0 )
      {
        if ( v21 && a4 != 256 )
        {
          v45 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(32 * v10)) & 0x3E0;
          if ( MiPteInShadowRange(a2) )
          {
            if ( (unsigned int)MiPteHasShadow(v40) )
            {
              v18 = 1LL;
              if ( HIBYTE(word_140465BEC) != (_BYTE)v19 )
                goto LABEL_77;
LABEL_75:
              if ( (v17 & 1) != 0 )
                v16 |= 0x8000000000000000uLL;
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
            {
              goto LABEL_75;
            }
          }
LABEL_77:
          *(_QWORD *)a2 = v16;
          if ( (_DWORD)v18 )
          {
            MiWritePteShadow(a2, v16);
            v19 = 0LL;
          }
        }
LABEL_28:
        a2 += 8LL;
        v7 += 4096LL;
        goto LABEL_29;
      }
      v32 = MiLockTransitionLeafPage(a2, 0LL);
      v19 = 0LL;
      if ( v32 )
      {
        v33 = MI_READ_PTE_LOCK_FREE(a2);
        v34 = v33;
        if ( qword_140465B00 )
        {
          if ( (v33 & 0x10) != 0 )
            v34 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v34 = v33 & ~qword_140465B00;
        }
        v35 = 48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v36 = 32LL * (v10 & 0x1F);
        v37 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
        v45 = v36 | v33 & 0xFFFFFFFFFFFFFC1FuLL;
        *(_QWORD *)(v35 + 16) = v36 | v37;
        if ( !MiPteInShadowRange(a2) )
          goto LABEL_65;
        if ( (unsigned int)MiPteHasShadow(v38) )
        {
          v17 = 1LL;
          if ( HIBYTE(word_140465BEC) != (_BYTE)v19 )
            goto LABEL_65;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
LABEL_65:
          *(_QWORD *)a2 = v16;
          if ( (_DWORD)v17 )
          {
            MiWritePteShadow(a2, v16);
            v19 = 0LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_28;
        }
        if ( (v18 & 1) != 0 )
          v16 |= 0x8000000000000000uLL;
        goto LABEL_65;
      }
LABEL_29:
      if ( a2 > v51 )
        goto LABEL_34;
    }
    MiFlushTbList((int *)v52, v16, v20, v18);
    MiUnlockPageTableInternal(v14);
LABEL_33:
    v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v14, v15, 0LL);
    v20 = (__int64)i;
    v19 = 0LL;
    goto LABEL_14;
  }
LABEL_34:
  MiFlushTbList((int *)v52, v16, v17, v18);
  if ( v15 )
    MiUnlockPageTableInternal(v42);
  MiUnlockWorkingSetShared(v42, v41);
  return v8;
}
