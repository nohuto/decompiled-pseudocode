/*
 * XREFs of MiMapMdlCommon @ 0x14018EC34
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x14018EA60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x14084D8E0 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteValidPteNewPage @ 0x1400EEBAC (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiAssignInitialPageAttribute @ 0x14018D314 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiShowBadMapper @ 0x1402A5C34 (MiShowBadMapper.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r10
  BOOL v11; // r15d
  __int64 *v12; // r13
  int v13; // r14d
  unsigned __int64 v14; // rbx
  ULONG_PTR v15; // rcx
  int ProtectionPfnCompatible; // r8d
  __int64 v17; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // r8d
  __int64 *v23; // r11
  __int64 v24; // r14
  __int64 v25; // r13
  __int16 v26; // cx
  unsigned __int64 v28; // rax
  __int64 v29; // r11
  __int64 v30; // r12
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // r13
  _QWORD *v35; // r12
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  unsigned __int64 v38; // rsi
  __int64 v39; // rdi
  _QWORD *v40; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rax
  KIRQL v44; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v46; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v47; // [rsp+28h] [rbp-D8h]
  int v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+34h] [rbp-CCh]
  __int64 *v50; // [rsp+38h] [rbp-C8h]
  __int64 v51; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  int v57; // [rsp+70h] [rbp-90h] BYREF
  __int16 v58; // [rsp+74h] [rbp-8Ch]
  __int64 v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]

  v10 = *(unsigned int *)(a1 + 44);
  v4 = *(unsigned int *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 32);
  v48 = a3;
  v49 = a4;
  v7 = (v10 + v6) & 0xFFF;
  v53 = a1;
  v47 = (__int64 *)(a1 + 48);
  v50 = (__int64 *)(a1 + 48);
  v8 = (unsigned __int64)(v7 + v4 + 4095) >> 12;
  v52 = v8;
  v56 = v7;
  v51 = 0LL;
  v9 = v10 + ((__int64)(a2 << 25) >> 16);
  LODWORD(v10) = 0;
  v54 = v9;
  v11 = 0;
  if ( (a2 & 0xFFF) == 0 && (v8 & 0x1FF) == 0 )
    v11 = (*(_DWORD *)(a1 + 48) & 0x1FFLL) == 0;
  v12 = v50;
  v13 = v48;
  v14 = 0LL;
  v55 = -48 - a1;
  v46 = 0LL;
  do
  {
    v15 = *v12;
    ProtectionPfnCompatible = v13;
    if ( (unsigned __int64)*v12 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
    {
      v17 = 48 * v15 - 0x58000000000LL;
      if ( *(_WORD *)(v17 + 32) == (_WORD)v10 && dword_14043B82C == (_DWORD)v10 )
      {
        MiShowBadMapper(v15);
        LOBYTE(a4) = v49;
      }
      if ( (*(_BYTE *)(v17 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v17, a4);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v13, v17);
    }
    else if ( a4 )
    {
      if ( a4 == 2 )
        ProtectionPfnCompatible = v13 | 0x18;
    }
    else
    {
      ProtectionPfnCompatible = v13 | 8;
    }
    ValidPte = MiMakeValidPte(a2, *v12, ProtectionPfnCompatible | 0xA0000000);
    v19 = 1LL;
    v20 = ValidPte;
    if ( !v11 )
      goto LABEL_10;
    v23 = v47;
    if ( v12 == v47 )
    {
      v14 = ValidPte;
LABEL_29:
      v46 = v14;
      goto LABEL_57;
    }
    v28 = v14 ^ (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    v46 = v28;
    v14 = v28;
    if ( (v28 & 0xFFFFFFFFF000LL) != 0 && v28 == v20 )
      goto LABEL_57;
    if ( ((v28 | v20) & 0x1FF000) == 0 )
    {
      v14 = v28 ^ (v20 ^ v28) & 0xFFFFFFFFF000LL;
      goto LABEL_29;
    }
    v11 = 0;
    v29 = ((__int64)v12 + v55) >> 3;
    v30 = v29;
    if ( v29 )
    {
      do
      {
        a2 -= 8LL;
        v14 ^= (v14 ^ (((v14 >> 12) - v19) << 12)) & 0xFFFFFFFFF000LL;
        v46 = v14;
        if ( MiPteInShadowRange(a2) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v32 = v19;
            if ( !HIBYTE(word_14043B26C) && ((unsigned __int8)v14 & (unsigned __int8)v19) != 0 )
              v31 |= 0x8000000000000000uLL;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && ((unsigned __int8)v14 & (unsigned __int8)v19) != 0 )
            {
              v31 |= 0x8000000000000000uLL;
            }
            v14 = v46;
          }
        }
        *(_QWORD *)a2 = v31;
        if ( v32 )
        {
          MiWritePteShadow(a2, v31);
          v19 = 1LL;
        }
        v30 -= v19;
      }
      while ( v30 );
      v12 = v50;
      v13 = v48;
    }
    v8 = v52;
    a2 += 8 * v29;
LABEL_10:
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v22 = v19;
        if ( HIBYTE(word_14043B26C) == (_BYTE)v10 && ((unsigned __int8)v20 & (unsigned __int8)v19) != 0 )
          v21 |= 0x8000000000000000uLL;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && ((unsigned __int8)v20 & (unsigned __int8)v19) != 0 )
        {
          v21 |= 0x8000000000000000uLL;
        }
        v14 = v46;
      }
    }
    *(_QWORD *)a2 = v21;
    if ( !v22 )
    {
      v23 = v47;
      goto LABEL_13;
    }
    MiWritePteShadow(a2, v21);
    v23 = v47;
    v19 = 1LL;
LABEL_57:
    v10 = 0LL;
LABEL_13:
    ++v12;
    a2 += 8LL;
    v8 -= v19;
    v50 = v12;
    a4 = v49;
    v52 = v8;
  }
  while ( v8 );
  v24 = v53;
  v25 = v54;
  if ( v11 )
  {
    v33 = *(unsigned int *)(v53 + 40);
    v34 = v10;
    v35 = (_QWORD *)v10;
    v58 = 0;
    v59 = 20LL;
    v36 = (unsigned __int64)(v33 + v56 + 4095) >> 12;
    v57 = v10;
    v60 = v10;
    v61 = v10;
    v37 = v51;
    v38 = (((a2 - 8 * v36) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = v20 | 0x80;
    do
    {
      v40 = v35;
      v39 ^= (v39 ^ (*v23 << 12)) & 0xFFFFFFFFF000LL;
      v46 = MI_READ_PTE_LOCK_FREE(v38);
      MiWriteValidPteNewPage((__int64 *)v38, v39, 0);
      MiInsertTbFlushEntry((__int64)&v57, (__int64)((v38 << 25) - v37) >> 16, 1LL, 0);
      v35 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v46) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL);
      v43 = v35;
      if ( v40 )
        v35 = v40;
      v38 += 8LL;
      v23 = v47 + 512;
      *v43 = v34;
      v34 = (__int64)v43;
      v47 = v23;
      v36 -= 512LL;
    }
    while ( v36 );
    MiFlushTbList(&v57, 0xFFFFFFFFF000LL, v41, v42);
    v44 = ExAcquireSpinLockExclusive(&dword_14043BD40);
    *v35 = qword_14043BD50;
    qword_14043BD50 = v34;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BD40);
    v24 = v53;
    v25 = v54;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v44);
  }
  v26 = *(_WORD *)(v24 + 10) | 1;
  *(_QWORD *)(v24 + 24) = v25;
  *(_WORD *)(v24 + 10) = v26;
  if ( (v26 & 0x10) != 0 )
    *(_WORD *)(v24 + 10) = v26 | 0x20;
  return v25;
}
