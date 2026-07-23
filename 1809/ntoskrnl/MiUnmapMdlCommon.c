/*
 * XREFs of MiUnmapMdlCommon @ 0x1402A9614
 * Callers:
 *     MmUnmapReservedMapping @ 0x1402A9A10 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x14084D970 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
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
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // rdi
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  KIRQL v12; // al
  _QWORD *v13; // r15
  unsigned int v14; // r9d
  KIRQL v15; // bl
  _QWORD *v16; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v18; // rax
  _QWORD *v19; // r9
  __int64 v20; // rdi
  unsigned __int8 v21; // al
  unsigned __int8 v22; // bl
  struct _KPRCB *v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rdx
  bool v26; // zf
  __int64 ValidPte; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v30; // [rsp+48h] [rbp-B8h]
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v32; // [rsp+54h] [rbp-ACh]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]

  v33 = 20LL;
  v31 = 0;
  v32 = 0;
  v29 = a3 + 48;
  v34 = 0LL;
  v35 = 0LL;
  v6 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v6 + 8 * a4;
  v30 = v7;
  v8 = (__int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 0x80u) == 0LL )
  {
    v13 = 0LL;
  }
  else
  {
    v12 = ExAcquireSpinLockExclusive(&dword_14043BD40);
    v13 = (_QWORD *)qword_14043BD50;
    v14 = 0;
    v15 = v12;
    v16 = (_QWORD *)qword_14043BD50;
    if ( a4 >> 9 != 1 )
    {
      do
      {
        v16 = (_QWORD *)*v16;
        ++v14;
      }
      while ( v14 < (a4 >> 9) - 1 );
    }
    qword_14043BD50 = *v16;
    *v16 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BD40);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v15);
    v11 = v29;
  }
  if ( v6 < v7 )
  {
    while ( v13 )
    {
      ValidPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
      if ( (ValidPte & 0x80u) == 0LL
        || (v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte), *v19 != ((v18 >> 12) & 0xFFFFFFFFFLL)) )
      {
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a2, a4);
      }
      v20 = (__int64)v13;
      v13 = (_QWORD *)*v13;
      MiInsertLargeTbFlushEntry((__int64)&v31, 1u, (unsigned __int64)v8);
      ValidPte = MiMakeValidPte(v6, (v20 + 0x58000000000LL) / 48, -1342177274);
      v21 = MiLockPageInline(v20);
      *(_QWORD *)v20 = 0LL;
      v22 = v21;
      *(_QWORD *)(v20 + 8) = v8;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
      {
        v23 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
      __writecr8(v22);
      MiWriteValidPteNewPage(v8, ValidPte, 0);
      v7 = v30;
      ++v8;
      v9 = 4096LL;
LABEL_33:
      v11 = v9 + v29;
      v6 += v9;
      v29 += v9;
      if ( v6 >= v7 )
        goto LABEL_37;
    }
    ValidPte = MI_READ_PTE_LOCK_FREE(v6);
    if ( (ValidPte & 1) == 0 )
      KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a2, a4);
    MiInsertTbFlushEntry((__int64)&v31, (__int64)((v6 << 25) - (v24 << 25)) >> 16, 1LL, 0);
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v10 = 1LL;
        if ( !HIBYTE(word_14043B26C) )
        {
          v26 = (v25 & 1) == 0;
          goto LABEL_28;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v26 = (v25 & 1) == 0;
LABEL_28:
        if ( !v26 )
          v25 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v6 = v25;
    if ( (_DWORD)v10 )
      MiWritePteShadow(v6, v25);
    v9 = 8LL;
    goto LABEL_33;
  }
LABEL_37:
  MiFlushTbList(&v31, v9, v10, v11);
}
