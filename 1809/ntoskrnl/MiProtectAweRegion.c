/*
 * XREFs of MiProtectAweRegion @ 0x1402B17AC
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeTransitionPteValid @ 0x14002CF4C (MiMakeTransitionPteValid.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiGetAweNode @ 0x1402B0F08 (MiGetAweNode.c)
 *     MiLockAweVadsShared @ 0x1402B1504 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1402B22D0 (MiUnlockAweVadsShared.c)
 *     MiRewritePteWithLockBit @ 0x1402BF86C (MiRewritePteWithLockBit.c)
 *     MiGetVadCacheAttribute @ 0x1402CB2D4 (MiGetVadCacheAttribute.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 valid; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r15
  _QWORD *AweNode; // rax
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rbx
  int v15; // esi
  int VadCacheAttribute; // r8d
  int v17; // r11d
  int v18; // eax
  unsigned __int64 v20; // rcx
  unsigned int v21; // r14d
  unsigned int i; // ecx
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // r9d
  char v34; // r8
  __int64 v35; // r10
  bool v36; // zf
  unsigned __int64 ValidPte; // rax
  int v38; // r9d
  BOOL v39; // r12d
  __int64 v40; // r8
  __int64 v41; // rdx
  char v42; // r8
  __int64 v43; // r10
  bool v44; // zf
  __int64 TransitionPteValid; // rax
  int v46; // r9d
  bool v47; // zf
  unsigned __int8 v48; // [rsp+20h] [rbp-E0h]
  unsigned int v49; // [rsp+24h] [rbp-DCh]
  __int64 v50; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v51; // [rsp+30h] [rbp-D0h]
  _DWORD *v52; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v53; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v56; // [rsp+54h] [rbp-ACh]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h]

  v52 = a4;
  *a4 = 24;
  CurrentThread = KeGetCurrentThread();
  v53 = 0LL;
  valid = 0LL;
  v8 = (__int64)&CurrentThread->ApcState.Process[1].IdealNode[12];
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = 0;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = 0LL;
  v59 = 0LL;
  v57 = 20LL;
  v55 = 1;
  MiLockAweVadsShared((__int64)CurrentThread);
  AweNode = MiGetAweNode(a1);
  v13 = AweNode[3];
  v14 = AweNode[4];
  if ( a3 != 24 )
  {
    v15 = a3 & 7;
    if ( v15 != 1 && v15 != 4 )
      goto LABEL_12;
    VadCacheAttribute = MiGetVadCacheAttribute(AweNode[3]);
    if ( VadCacheAttribute )
    {
      v18 = 0;
      if ( VadCacheAttribute == 2 )
        v18 = v17;
    }
    else
    {
      v18 = 8;
    }
    a3 = v18 | v15;
  }
  if ( (*(_DWORD *)v14 & 1) == 0 && (*(_DWORD *)(v13 + 48) & 0x38) == 8 && (a3 & 7) != 1 )
  {
LABEL_12:
    MiUnlockAweVadsShared(CurrentThread, v12);
    return 3221225496LL;
  }
  MiUnlockAweVadsShared(CurrentThread, v12);
  v20 = *(_QWORD *)(v14 + 8);
  v49 = 0x80000000;
  if ( v20 == 512 )
  {
    if ( a3 == 24 )
      return 3221225496LL;
    v49 = -2080374784;
    v21 = 1;
  }
  else
  {
    v21 = 0;
    if ( v20 == 1 )
      goto LABEL_20;
  }
  if ( ((v9 >> 3) & 0x1FF) % v20 || (((__int64)(v10 - v9) >> 3) + 1) % v20 )
    return 3221225496LL;
LABEL_20:
  for ( i = v21; i; --i )
  {
    v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v51 = v9;
  v23 = 0LL;
  v48 = MiLockWorkingSetShared(v8);
  v26 = v9;
  if ( v9 <= v10 )
  {
    while ( !valid || (v9 & 0xFFF) == 0 )
    {
      MiFlushTbList(&v55, v24, v25, v26);
      if ( valid )
      {
        MiUnlockPageTableInternal(v8, valid);
        MiUnlockWorkingSetShared(v8, v48);
        MiLockWorkingSetShared(v8);
        v23 = 0LL;
      }
      valid = MiLockLowestValidPageTable(v8, v9, &v54, v27);
      v53 = valid;
      if ( valid == ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v9 = v9 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_79:
      v26 = v51;
      v9 += 8LL;
      if ( v9 > v10 )
        goto LABEL_80;
    }
    v28 = MI_READ_PTE_LOCK_FREE(v9);
    v50 = v28;
    if ( !v28 )
      goto LABEL_78;
    if ( (v28 & 1) != 0 )
    {
      if ( !v23 )
        v23 = v9;
      if ( v9 == v29 )
        *v52 = (v28 & 0x800) != 0 ? 4 : 1;
      v30 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFLL;
      if ( a3 == 24 )
      {
        v50 = MiSwizzleInvalidPte((v30 << 12) | 0xB00);
        v31 = v50;
        if ( !v21 )
        {
          if ( MiPteInShadowRange(v9) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v33 = 1;
              if ( !HIBYTE(word_14043B26C) )
              {
                v36 = (v34 & 1) == 0;
                goto LABEL_43;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
            {
              v36 = (v34 & 1) == 0;
LABEL_43:
              if ( !v36 )
                v32 |= v35;
            }
          }
          *(_QWORD *)v9 = v32;
          if ( v33 )
            MiWritePteShadow(v9, v32);
          goto LABEL_50;
        }
      }
      else
      {
        ValidPte = MiMakeValidPte(v9, v30, v49 | a3);
        v31 = ValidPte;
        if ( !v21 )
        {
          MiWriteValidPteNewProtection(v9, ValidPte);
LABEL_50:
          MiInsertTbFlushEntry((__int64)&v55, (__int64)(v9 << 25) >> 16, 1LL, 0);
          goto LABEL_78;
        }
      }
      MiRewritePteWithLockBit(v8, v9, v31);
      MiInsertLargeTbFlushEntry((__int64)&v55, v21, v9);
LABEL_78:
      valid = v53;
      goto LABEL_79;
    }
    if ( v9 == v29 )
      *v52 = 24;
    if ( a3 == 24 )
      goto LABEL_78;
    v50 = v28 ^ ((unsigned __int16)v28 ^ (unsigned __int16)(32 * a3)) & 0x3E0;
    v39 = MiPteInShadowRange(v9);
    v41 = v40;
    if ( v39 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v38 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_62;
        v44 = (v42 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_62;
        v44 = (v42 & 1) == 0;
      }
      if ( !v44 )
        v41 |= v43;
    }
LABEL_62:
    *(_QWORD *)v9 = v41;
    if ( v38 )
      MiWritePteShadow(v9, v41);
    TransitionPteValid = MiMakeTransitionPteValid(v9);
    v25 = TransitionPteValid;
    v50 = TransitionPteValid;
    if ( (v49 & 0x4000000) != 0 )
    {
      v25 = TransitionPteValid | 0x80;
      v50 = TransitionPteValid | 0x80;
    }
    v46 = 0;
    v24 = v25;
    if ( !v39 )
      goto LABEL_74;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v46 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v47 = (v25 & 1) == 0;
        goto LABEL_72;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v47 = (v25 & 1) == 0;
LABEL_72:
      if ( !v47 )
        v24 |= 0x8000000000000000uLL;
    }
LABEL_74:
    *(_QWORD *)v9 = v24;
    if ( v46 )
      MiWritePteShadow(v9, v24);
    if ( !v23 )
      v23 = v9;
    goto LABEL_78;
  }
LABEL_80:
  MiFlushTbList(&v55, v24, v25, v26);
  if ( valid )
    MiUnlockPageTableInternal(v8, valid);
  MiUnlockWorkingSetShared(v8, v48);
  return 0LL;
}
