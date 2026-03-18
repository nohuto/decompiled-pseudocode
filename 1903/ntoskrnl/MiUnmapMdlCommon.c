/*
 * XREFs of MiUnmapMdlCommon @ 0x1402C0C64
 * Callers:
 *     MmUnmapReservedMapping @ 0x1402C1100 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x140887C70 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWriteValidPteNewPage @ 0x1400F6568 (MiWriteValidPteNewPage.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR a1, __int64 a2, unsigned int a3, __int64 a4, ULONG_PTR a5)
{
  _QWORD *v7; // rbx
  ULONG_PTR v8; // rsi
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  KIRQL v13; // al
  _QWORD *v14; // r13
  unsigned int v15; // r8d
  KIRQL v16; // bl
  _QWORD *v17; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v19; // rbp
  unsigned __int8 v20; // r15
  __int64 v21; // rdi
  unsigned __int8 v22; // al
  unsigned __int8 v23; // bl
  struct _KPRCB *v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  __int64 ValidPte; // [rsp+38h] [rbp-130h] BYREF
  _QWORD *v29; // [rsp+40h] [rbp-128h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-120h]
  ULONG_PTR v31; // [rsp+50h] [rbp-118h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-110h]
  _QWORD v33[24]; // [rsp+60h] [rbp-108h] BYREF

  BugCheckParameter2 = a1;
  BugCheckParameter4 = a5;
  memset(v33, 0, 0xB8uLL);
  v7 = (_QWORD *)(a4 + 48);
  v33[3] = 0LL;
  v29 = v7;
  LODWORD(v33[1]) = 20;
  v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = v8 + 8 * a5;
  v9 = (__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v9) & 0x80u) == 0LL )
  {
    v14 = 0LL;
  }
  else
  {
    v13 = ExAcquireSpinLockExclusive(&dword_140466700);
    v14 = (_QWORD *)qword_140466710;
    v15 = 0;
    v16 = v13;
    v17 = (_QWORD *)qword_140466710;
    if ( a5 >> 9 != 1 )
    {
      do
      {
        v17 = (_QWORD *)*v17;
        ++v15;
      }
      while ( v15 < (a5 >> 9) - 1 );
    }
    qword_140466710 = *v17;
    *v17 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466700);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v16);
    v7 = v29;
  }
  v19 = 0LL;
  if ( a2 )
    v20 = MiLockWorkingSetShared(a2);
  else
    v20 = 17;
  while ( v8 < v31 )
  {
    if ( v20 == 17 )
      goto LABEL_20;
    if ( v19 )
    {
      if ( (v8 & 0xFFF) != 0 )
        goto LABEL_20;
      MiUnlockPageTableInternal(a2, v19);
    }
    v19 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(a2, v19, 0LL);
LABEL_20:
    if ( !v14 )
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v8);
      if ( (ValidPte & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a3, BugCheckParameter4);
      MiInsertTbFlushEntry((__int64)v33, (__int64)(v8 << 25) >> 16, 1LL, 0);
      if ( MiPteInShadowRange(v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v11 = 1LL;
          if ( !HIBYTE(word_140465BEC) )
          {
            v26 = (v10 & 1) == 0;
LABEL_36:
            if ( !v26 )
              v10 |= 0x8000000000000000uLL;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v26 = (v10 & 1) == 0;
          goto LABEL_36;
        }
      }
      *(_QWORD *)v8 = v10;
      if ( (_DWORD)v11 )
        MiWritePteShadow(v8);
      v25 = 8LL;
      goto LABEL_41;
    }
    ValidPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
    if ( (ValidPte & 0x80u) == 0LL
      || *v7 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL) )
    {
      KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a3, BugCheckParameter4);
    }
    v21 = (__int64)v14;
    v14 = (_QWORD *)*v14;
    MiInsertLargeTbFlushEntry((__int64)v33, 1u, (unsigned __int64)v9);
    ValidPte = MiMakeValidPte(v8, (v21 + 0x58000000000LL) / 48, -1342177274);
    v22 = MiLockPageInline(v21);
    *(_QWORD *)v21 = 0LL;
    v23 = v22;
    *(_QWORD *)(v21 + 8) = v9;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v24);
    }
    __writecr8(v23);
    MiWriteValidPteNewPage(v9, ValidPte, 0);
    v7 = v29;
    ++v9;
    v25 = 4096LL;
LABEL_41:
    v7 = (_QWORD *)((char *)v7 + v25);
    v8 += v25;
    v29 = v7;
  }
  MiFlushTbList((int *)v33, v10, v11, v12);
  if ( v20 != 17 )
  {
    if ( v19 )
      MiUnlockPageTableInternal(a2, v19);
    MiUnlockWorkingSetShared(a2, v20);
  }
}
