/*
 * XREFs of MiMapMdlCommon @ 0x140198F04
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x140198D30 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1408873F0 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiWriteValidPteNewPage @ 0x1400FA008 (MiWriteValidPteNewPage.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiAssignInitialPageAttribute @ 0x140197040 (MiAssignInitialPageAttribute.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiShowBadMapper @ 0x1402BCB38 (MiShowBadMapper.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // r15
  int v8; // edi
  __int64 v9; // r8
  __int16 v10; // dx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r12d
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r14
  char v16; // al
  __int64 v17; // rcx
  __int64 *v18; // r13
  ULONG_PTR v19; // rcx
  int ProtectionPfnCompatible; // r8d
  __int64 v21; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v23; // r10
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // r13
  __int64 result; // rax
  __int16 v29; // cx
  unsigned __int64 v30; // rax
  __int64 v31; // r11
  __int64 v32; // r15
  __int64 v33; // rdx
  int v34; // r8d
  char v35; // r9
  char v36; // r9
  _QWORD *v37; // r15
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // rsi
  _QWORD *v41; // r13
  __int64 *v42; // rax
  __int64 v43; // rdi
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // r12
  KIRQL v49; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v51; // [rsp+20h] [rbp-E0h]
  __int64 v52; // [rsp+28h] [rbp-D8h] BYREF
  int v53; // [rsp+30h] [rbp-D0h]
  __int64 *v54; // [rsp+38h] [rbp-C8h]
  __int64 *v55; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  __int64 v59; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h]
  _QWORD v64[24]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a3;
  v56 = a3;
  v58 = a1;
  v53 = a4;
  v8 = a4;
  memset(v64, 0, 0xB8uLL);
  v9 = *(unsigned int *)(a1 + 44);
  v10 = v9 + *(_QWORD *)(a1 + 32);
  v54 = (__int64 *)(a1 + 48);
  v55 = (__int64 *)(a1 + 48);
  v11 = *(unsigned int *)(a1 + 40) + 4095LL;
  v61 = v10 & 0xFFF;
  v12 = (unsigned __int64)(v11 + v61) >> 12;
  v57 = v12;
  v62 = 0LL;
  v13 = 0;
  v63 = v9 + ((__int64)(a2 << 25) >> 16);
  if ( (a2 & 0xFFF) == 0 && !v5 && (v12 & 0x1FF) == 0 )
    v13 = (*(_DWORD *)(a1 + 48) & 0x1FFLL) == 0;
  v14 = 0LL;
  v15 = 0LL;
  v52 = 0LL;
  if ( v5 )
    v16 = MiLockWorkingSetShared(v5);
  else
    v16 = 17;
  v51 = v16;
  v17 = -48 - a1;
  v18 = v55;
  v59 = v17;
  while ( 1 )
  {
    if ( v16 != 17 )
    {
      if ( !v15 )
        goto LABEL_30;
      if ( (a2 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v5, v15);
LABEL_30:
        v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v5, v15, 0LL);
      }
    }
    v19 = *v18;
    ProtectionPfnCompatible = v8;
    if ( (unsigned __int64)*v18 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
    {
      v21 = 48 * v19 - 0x58000000000LL;
      if ( !*(_WORD *)(v21 + 32) && !dword_140465F0C )
        MiShowBadMapper(v19);
      if ( (*(_BYTE *)(v21 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v21, a5);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v53, v21);
    }
    else if ( a5 )
    {
      if ( a5 == 2 )
        ProtectionPfnCompatible = v8 | 0x18;
    }
    else
    {
      ProtectionPfnCompatible = v8 | 8;
    }
    ValidPte = MiMakeValidPte(a2, *v18, ProtectionPfnCompatible | 0xA0000000);
    v23 = 1LL;
    v60 = ValidPte;
    v24 = ValidPte;
    if ( v13 != 1 )
      goto LABEL_14;
    if ( v18 == v54 )
    {
      v14 = ValidPte;
LABEL_40:
      v52 = v14;
      goto LABEL_17;
    }
    v30 = v14 ^ (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    v52 = v30;
    v14 = v30;
    if ( (v30 & 0xFFFFFFFFF000LL) == 0 || v30 != v24 )
    {
      if ( ((v30 | v24) & 0x1FF000) == 0 )
      {
        v14 = v30 ^ (v24 ^ v30) & 0xFFFFFFFFF000LL;
        goto LABEL_40;
      }
      v13 = 0;
      v31 = ((__int64)v18 + v59) >> 3;
      v32 = v31;
      if ( v31 )
      {
        do
        {
          a2 -= 8LL;
          v14 ^= (v14 ^ (((v14 >> 12) - v23) << 12)) & 0xFFFFFFFFF000LL;
          v52 = v14;
          if ( MiPteInShadowRange(a2) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v34 = v23;
              if ( HIBYTE(word_1404658EC) == v35 && ((unsigned __int8)v14 & (unsigned __int8)v23) != 0 )
                v33 |= 0x8000000000000000uLL;
            }
            else
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && ((unsigned __int8)v14 & (unsigned __int8)v23) != 0 )
              {
                v33 |= 0x8000000000000000uLL;
              }
              v14 = v52;
            }
          }
          *(_QWORD *)a2 = v33;
          if ( v34 )
          {
            MiWritePteShadow(a2);
            v23 = 1LL;
          }
          v32 -= v23;
        }
        while ( v32 );
        v24 = v60;
        v18 = v55;
      }
      v5 = v56;
      a2 += 8 * v31;
LABEL_14:
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v26 = v23;
          if ( HIBYTE(word_1404658EC) == v36 && ((unsigned __int8)v24 & (unsigned __int8)v23) != 0 )
            v25 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && ((unsigned __int8)v24 & (unsigned __int8)v23) != 0 )
          {
            v25 |= 0x8000000000000000uLL;
          }
          v14 = v52;
        }
      }
      *(_QWORD *)a2 = v25;
      if ( v26 )
      {
        MiWritePteShadow(a2);
        v23 = 1LL;
      }
    }
LABEL_17:
    v16 = v51;
    ++v18;
    a2 += 8LL;
    v55 = v18;
    v57 -= v23;
    if ( !v57 )
      break;
    v8 = v53;
  }
  v27 = v58;
  if ( v51 != 17 )
  {
    if ( v15 )
      MiUnlockPageTableInternal(v5, v15);
    MiUnlockWorkingSetShared(v5, v51);
    LODWORD(v23) = 1;
  }
  if ( v13 == (_DWORD)v23 )
  {
    v37 = 0LL;
    v64[3] = 0LL;
    v38 = *(unsigned int *)(v58 + 40) + v61 + 4095;
    LODWORD(v64[1]) = 20;
    v39 = v38 >> 12;
    v40 = (((a2 - 8 * v39) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v41 = 0LL;
    v42 = v54;
    v43 = v24 | 0x80;
    do
    {
      v44 = v37;
      v43 ^= (v43 ^ (*v42 << 12)) & 0xFFFFFFFFF000LL;
      v52 = MI_READ_PTE_LOCK_FREE(v40);
      MiWriteValidPteNewPage((__int64 *)v40, v43, 0);
      MiInsertTbFlushEntry((__int64)v64, (__int64)((v40 << 25) - v62) >> 16, 1LL, 0);
      v37 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL);
      v48 = v37;
      if ( v44 )
        v37 = v44;
      v40 += 8LL;
      v42 = v54 + 512;
      *v48 = v41;
      v41 = v48;
      v54 = v42;
      v39 -= 512LL;
    }
    while ( v39 );
    MiFlushTbList((int *)v64, v45, v46, v47);
    v49 = ExAcquireSpinLockExclusive(&dword_140466400);
    *v37 = qword_140466410;
    qword_140466410 = (__int64)v48;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466400);
    LOWORD(v23) = 1;
    v27 = v58;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v49 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      LOWORD(v23) = 1;
    }
    __writecr8(v49);
  }
  result = v63;
  v29 = v23 | *(_WORD *)(v27 + 10);
  *(_QWORD *)(v27 + 24) = v63;
  *(_WORD *)(v27 + 10) = v29;
  if ( (v29 & 0x10) != 0 )
    *(_WORD *)(v27 + 10) = v29 | 0x20;
  return result;
}
