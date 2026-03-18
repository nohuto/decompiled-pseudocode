/*
 * XREFs of MiProtectAweRegion @ 0x1402D7184
 * Callers:
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140053910 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiMakeTransitionPteValid @ 0x140120AD0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiGetAweNode @ 0x1402D6468 (MiGetAweNode.c)
 *     MiLockAweVadsShared @ 0x1402D6EDC (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1402D7C70 (MiUnlockAweVadsShared.c)
 *     MiRewritePteWithLockBit @ 0x1402D8F30 (MiRewritePteWithLockBit.c)
 *     MiGetVadCacheAttribute @ 0x1402E55D4 (MiGetVadCacheAttribute.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // r14
  int v10; // r13d
  unsigned __int64 v11; // rdi
  _QWORD *AweNode; // rax
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // r15d
  int VadCacheAttribute; // r8d
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // r12d
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned __int64 v24; // r8
  int v25; // r8d
  int v26; // eax
  unsigned int v27; // r8d
  int v29; // ecx
  __int64 v30; // rbx
  unsigned __int64 v31; // rsi
  unsigned __int8 v32; // al
  unsigned __int64 valid; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // r10d
  int v39; // r11d
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  unsigned __int64 ValidPte; // r11
  __int64 v44; // rdx
  int v45; // r8d
  BOOL v46; // ebx
  int v47; // r9d
  __int64 v48; // r8
  __int64 v49; // rdx
  unsigned __int8 v50; // r8
  int v51; // r11d
  unsigned __int64 TransitionPteValid; // rax
  int v53; // r9d
  __int64 v54; // rdx
  unsigned __int8 v55; // r11
  bool v56; // zf
  unsigned __int8 v57; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+24h] [rbp-DCh]
  __int64 TransitionPte; // [rsp+28h] [rbp-D8h] BYREF
  int v60; // [rsp+30h] [rbp-D0h]
  unsigned int v61; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v62; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+40h] [rbp-C0h]
  unsigned int v64; // [rsp+48h] [rbp-B8h]
  __int64 v65; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v66; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  _KPROCESS *Process; // [rsp+70h] [rbp-90h]
  int *v70; // [rsp+78h] [rbp-88h]
  unsigned __int64 v71; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v72[24]; // [rsp+90h] [rbp-70h] BYREF

  v70 = a5;
  memset(v72, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v63 = 0LL;
  v10 = 1;
  Process = CurrentThread->ApcState.Process;
  v67 = &Process[1].IdealNode[6];
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v72[0]) = 0;
  v72[2] = 0LL;
  v72[3] = 0LL;
  v62 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v72[0]) = 1;
  LODWORD(v72[1]) = 20;
  MiLockAweVadsShared((__int64)CurrentThread);
  AweNode = MiGetAweNode(a1);
  v14 = AweNode[3];
  v15 = AweNode[4];
  v65 = v14;
  if ( a3 != 24 )
  {
    v16 = a3 & 7;
    if ( v16 != 1 && v16 != 4 )
      goto LABEL_30;
    VadCacheAttribute = MiGetVadCacheAttribute();
    if ( VadCacheAttribute )
    {
      v19 = 0;
      if ( VadCacheAttribute == 2 )
        v19 = v18;
    }
    else
    {
      v19 = 8;
    }
    v14 = v65;
    a3 = v19 | v16;
  }
  if ( (*(_DWORD *)v15 & 1) != 0 )
  {
    v20 = 4;
    goto LABEL_11;
  }
  v20 = (*(_DWORD *)(v14 + 48) >> 7) & 0x1F;
  if ( ((*(_DWORD *)(v14 + 48) >> 7) & 7) == 1 && (a3 & 7) != 1 )
    goto LABEL_30;
  if ( !a4 )
    goto LABEL_11;
  v25 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v14);
  v26 = a4 & 0x20000;
  if ( (v25 & 0x20000) != 0 )
  {
    if ( !v26 )
      goto LABEL_30;
    goto LABEL_26;
  }
  if ( v26 )
  {
LABEL_30:
    MiUnlockAweVadsShared(CurrentThread, v13);
    return 3221225496LL;
  }
LABEL_26:
  v27 = v25 & 0xFFFDFFFF;
  if ( (v27 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v27 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v27 == 2048 && (a4 & 0xFFFDF7FF) != 0 )
  {
    goto LABEL_30;
  }
LABEL_11:
  MiUnlockAweVadsShared(CurrentThread, v13);
  v21 = *(_QWORD *)(v15 + 8);
  v60 = *(_DWORD *)(v65 + 48) & 0x300000;
  v22 = v21;
  v58 = 0;
  if ( v21 == 512 )
    v22 = 1LL;
  v68 = v22;
  v23 = (v60 != 3145728 ? 0x80000000 : 0) | 0x4000000;
  v64 = v21 == 512;
  if ( v21 != 512 )
    v23 = v60 != 3145728 ? 0x80000000 : 0;
  v61 = v23;
  if ( v21 == 1 )
  {
    v24 = v62;
  }
  else
  {
    if ( ((v11 >> 3) & 0x1FF) % v21 )
      return 3221225496LL;
    v24 = v62;
    if ( (((__int64)(v62 - v11) >> 3) + 1) % v21 )
      return 3221225496LL;
  }
  v29 = v21 == 512;
  if ( v21 == 512 )
  {
    do
    {
      v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v29;
    }
    while ( v29 );
    v62 = v24;
  }
  v30 = (__int64)v67;
  v31 = 0LL;
  v66 = v11;
  v32 = MiLockWorkingSetShared((__int64)v67);
  v35 = v11;
  v57 = v32;
  if ( v11 <= v62 )
  {
    valid = 0LL;
    while ( !valid || (v11 & 0xFFF) == 0 )
    {
      MiFlushTbList((int *)v72, valid, v34, v35);
      if ( v63 )
      {
        MiUnlockPageTableInternal(v30, v63);
        MiUnlockWorkingSetShared(v30, v57);
        MiLockWorkingSetShared(v30);
        v31 = 0LL;
      }
      valid = MiLockLowestValidPageTable(v30, v11, &v71);
      v63 = valid;
      if ( valid == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v11 = v11 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_109:
      v35 = v66;
      v11 += 8LL;
      if ( v11 > v62 )
        goto LABEL_110;
    }
    if ( v60 == 3145728 && v68 != 1 )
      v58 &= -(((v11 >> 3) & 0x1FF) % v21 != 0);
    v36 = MI_READ_PTE_LOCK_FREE(v11);
    TransitionPte = v36;
    if ( !v36 )
    {
LABEL_108:
      valid = v63;
      goto LABEL_109;
    }
    if ( (v36 & 1) != 0 )
    {
      if ( !v31 )
        v31 = v11;
      if ( v11 == v37 )
      {
        v10 = (v36 & 0x800) != 0 ? 4 : 2;
        if ( v20 >> 3 == 1 )
        {
          v10 |= 0x200u;
        }
        else if ( v20 >> 3 == 3 && (v20 & 7) != 0 )
        {
          v10 |= 0x400u;
        }
      }
      if ( v38 == 3145728 && !v39 && (v36 & 0x42) != 0 )
      {
        LeafVa = MiGetLeafVa(v11);
        MiCaptureWriteWatchDirtyBit((__int64)Process, LeafVa, v65);
        v58 = 1;
      }
      v41 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
      if ( a3 == 24 )
      {
        TransitionPte = MiMakeTransitionPte(v41, 24);
        ValidPte = TransitionPte;
        if ( v21 != 512 )
        {
          if ( MiPteInShadowRange(v11) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v45 = v42;
              if ( !HIBYTE(word_140465BEC) && ((unsigned __int8)ValidPte & (unsigned __int8)v42) != 0 )
                v44 |= 0x8000000000000000uLL;
            }
            else
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && ((unsigned __int8)ValidPte & (unsigned __int8)v42) != 0 )
              {
                v44 |= 0x8000000000000000uLL;
              }
              ValidPte = TransitionPte;
            }
          }
          *(_QWORD *)v11 = v44;
          if ( v45 )
            MiWritePteShadow(v11);
        }
      }
      else
      {
        ValidPte = MiMakeValidPte(v11, v41, a3 | v61);
        if ( v21 != 512 )
          MiWriteValidPteNewProtection(v11);
      }
      if ( (a3 & 4) != 0 && v60 != 3145728 )
        ValidPte |= 0x42uLL;
      if ( v21 == 512 )
      {
        MiRewritePteWithLockBit(v30, v11, ValidPte, v42);
        MiInsertLargeTbFlushEntry((__int64)v72, v64, v11);
      }
      else
      {
        MiInsertTbFlushEntry((__int64)v72, (__int64)(v11 << 25) >> 16, 1LL, 0);
      }
      goto LABEL_108;
    }
    if ( v11 == v37 )
      v10 = 1;
    if ( a3 == 24 )
      goto LABEL_108;
    TransitionPte = v36 ^ ((unsigned __int16)v36 ^ (unsigned __int16)(32 * a3)) & 0x3E0;
    v46 = MiPteInShadowRange(v11);
    v49 = v48;
    if ( v46 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v47 = v51;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_92;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        goto LABEL_92;
      }
      if ( (v50 & (unsigned __int8)v51) != 0 )
        v49 |= 0x8000000000000000uLL;
    }
LABEL_92:
    *(_QWORD *)v11 = v49;
    if ( v47 )
      MiWritePteShadow(v11);
    TransitionPteValid = MiMakeTransitionPteValid(v11);
    v34 = TransitionPteValid;
    TransitionPte = TransitionPteValid;
    if ( (v61 & 0x4000000) != 0 )
    {
      v34 = TransitionPteValid | 0x80;
      TransitionPte = TransitionPteValid | 0x80;
    }
    v53 = 0;
    v54 = v34;
    if ( !v46 )
      goto LABEL_104;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v55 = ++v53;
      if ( !HIBYTE(word_140465BEC) )
      {
        v56 = ((unsigned __int8)v34 & v55) == 0;
        goto LABEL_102;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v56 = (v34 & 1) == 0;
LABEL_102:
      if ( !v56 )
        v54 |= 0x8000000000000000uLL;
    }
LABEL_104:
    *(_QWORD *)v11 = v54;
    if ( v53 )
      MiWritePteShadow(v11);
    v30 = (__int64)v67;
    if ( !v31 )
      v31 = v11;
    goto LABEL_108;
  }
LABEL_110:
  MiFlushTbList((int *)v72, valid, v34, v35);
  if ( v63 )
    MiUnlockPageTableInternal(v30, v63);
  MiUnlockWorkingSetShared(v30, v57);
  *v70 = v10;
  return 0LL;
}
