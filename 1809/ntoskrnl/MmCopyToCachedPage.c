/*
 * XREFs of MmCopyToCachedPage @ 0x140033050
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7B00 (MiMakeSystemCachePteValid.c)
 *     MiUnlinkStandbyPfn @ 0x140120514 (MiUnlinkStandbyPfn.c)
 *     MiDirtySystemCachePte @ 0x140128FD4 (MiDirtySystemCachePte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1401C5DE0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiMapFrame @ 0x1402ABFA4 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x1402AC0B0 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x1402CED80 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x1402CF164 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402CF2C0 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x140850258 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(
        ULONG_PTR BugCheckParameter2,
        const void *a2,
        unsigned int a3,
        ULONG_PTR a4,
        unsigned int a5)
{
  ULONG_PTR v5; // r14
  ULONG_PTR BugCheckParameter4; // r9
  const void *v7; // r13
  ULONG_PTR v8; // r11
  ULONG_PTR v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned int v17; // r10d
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int8 v24; // r9
  int v25; // r10d
  ULONG_PTR v26; // r11
  int PageAvoidRead; // eax
  __int64 v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // r14d
  int v34; // r15d
  _SLIST_ENTRY *v35; // rdi
  int v36; // ebx
  __int64 v37; // rcx
  int v38; // edi
  void *v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  int v52; // eax
  unsigned __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // rax
  char v56; // bl
  __int64 v57; // r9
  __int64 v58; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v60[4]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v61; // [rsp+44h] [rbp-84h] BYREF
  __int64 v62; // [rsp+48h] [rbp-80h]
  __int64 v63; // [rsp+50h] [rbp-78h]
  __int64 v64; // [rsp+58h] [rbp-70h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-68h]
  unsigned __int64 v66; // [rsp+68h] [rbp-60h] BYREF
  __int64 v67; // [rsp+70h] [rbp-58h]
  __int64 v68; // [rsp+78h] [rbp-50h]
  __int64 v69[9]; // [rsp+80h] [rbp-48h] BYREF

  v5 = a4;
  BugCheckParameter4 = a3;
  v7 = a2;
  v8 = BugCheckParameter2;
  v63 = 0LL;
  ListEntry = 0LL;
  v9 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v10 = *(_QWORD *)v9;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL
    && v9 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v40 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 8 * ((v9 >> 3) & 0x1FF));
      v42 = v10 | 0x20;
      if ( (v41 & 0x20) == 0 )
        v42 = v10;
      v10 = v42;
      if ( (v41 & 0x42) != 0 )
        v10 = v42 | 0x42;
    }
  }
  v66 = v10;
  if ( (unsigned __int64)&v66 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v66 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v43 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v43 )
    {
      v44 = *(_QWORD *)(v43 + 8 * (((unsigned __int64)&v66 >> 3) & 0x1FF));
      v45 = v10 | 0x20;
      if ( (v44 & 0x20) == 0 )
        v45 = v10;
      v10 = v45;
      if ( (v44 & 0x42) != 0 )
        v10 = v45 | 0x42;
    }
  }
  v11 = *(_QWORD *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v11 )
    v11 += 48 * ((v8 >> 18) & 7);
  v12 = *(__int64 **)(v11 + 24);
  v13 = (__int64 *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
    v13 = v12;
  v14 = *v13;
  v67 = v14;
  v15 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v14 + 60) & 0x3FF)) + 7424LL;
  v68 = v15;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v8, v5, BugCheckParameter4);
  v16 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = a5;
  if ( (a5 & 4) != 0 && ((BugCheckParameter4 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v18 = MiReservePtes(&qword_14043C060, 1LL);
    v62 = v18;
    if ( !v18 )
      return 3221225626LL;
    v17 = a5;
    v8 = BugCheckParameter2;
    BugCheckParameter4 = a3;
  }
  else
  {
    v18 = 0LL;
    v62 = 0LL;
  }
  v19 = *(_QWORD *)v16;
  if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      v46 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v46 )
      {
        v47 = *(_QWORD *)(v46 + 8 * ((v16 >> 3) & 0x1FF));
        LOBYTE(v46) = v19 | 0x20;
        if ( (v47 & 0x20) == 0 )
          v46 = *(_QWORD *)v16;
        LOBYTE(v19) = v46;
        if ( (v47 & 0x42) != 0 )
          LOBYTE(v19) = v46 | 0x42;
      }
    }
    v18 = v62;
  }
  if ( (v19 & 1) == 0 )
  {
LABEL_15:
    v20 = *(_QWORD *)v16;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v20 & 1) != 0
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        v48 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v48 )
        {
          v49 = *(_QWORD *)(v48 + 8 * ((v16 >> 3) & 0x1FF));
          v50 = v20 | 0x20;
          if ( (v49 & 0x20) == 0 )
            v50 = *(_QWORD *)v16;
          v20 = v50;
          if ( (v49 & 0x42) != 0 )
            v20 = v50 | 0x42;
        }
      }
      v18 = v62;
    }
    if ( (v20 & 1) != 0 )
    {
      if ( !v18 )
      {
        v37 = v63;
        goto LABEL_65;
      }
      v37 = MiMapSystemCachePage(v18, v16, v17, BugCheckParameter4);
      v63 = v37;
      LOBYTE(v17) = a5;
      v8 = BugCheckParameter2;
      if ( v37 )
      {
        LODWORD(BugCheckParameter4) = a3;
        goto LABEL_65;
      }
    }
    if ( qword_14043B180 )
    {
      if ( (v20 & 0x10) != 0 )
        v20 &= ~0x10uLL;
      else
        v20 &= ~qword_14043B180;
    }
    v21 = v20 >> 16;
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = 0LL;
        v60[0] = 17;
        v23 = MI_READ_PTE_LOCK_FREE(v21);
        v64 = v23;
        if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 )
          goto LABEL_23;
        while ( 1 )
        {
          v22 = MiLockProtoPoolPage(v21, v60);
          if ( v22 )
            break;
          MmAccessFault(2uLL, v21);
        }
        v29 = MiLockLeafPage(v21, 0LL);
        v30 = MI_READ_PTE_LOCK_FREE(v21);
        v64 = v30;
        if ( v29 )
          break;
        v24 = v60[0];
        v7 = a2;
LABEL_23:
        if ( v22 )
          MiUnlockProtoPoolPage(v22, v24);
        if ( MiControlAreaUsingExtents(v14) )
        {
          v38 = MmAccessFault(0LL, v26);
          v61 = v38;
          if ( v38 < 0 )
            goto LABEL_60;
        }
        else
        {
          PageAvoidRead = MiMakePageAvoidRead(v21, v7, a3, v5, v25, &v64, &v61);
          if ( !PageAvoidRead )
            return v61;
          v51 = PageAvoidRead - 1;
          if ( v51 )
          {
            v52 = v51 - 2;
            if ( v52 )
            {
              if ( v52 != 1 )
                goto LABEL_52;
LABEL_64:
              v37 = v63;
              LODWORD(BugCheckParameter4) = a3;
              v8 = BugCheckParameter2;
              LOBYTE(v17) = a5;
              goto LABEL_65;
            }
            v36 = 0;
LABEL_53:
            MiMakeSystemCachePteValid(v68, v16, v64, a5);
            LOBYTE(v17) = a5;
            v8 = BugCheckParameter2;
            LODWORD(BugCheckParameter4) = a3;
            v37 = v63;
            goto LABEL_54;
          }
        }
      }
      if ( (v30 & 1) != 0 )
        break;
      v31 = *(_QWORD *)(v29 + 16);
      if ( (v31 & 0x400) != 0 )
        v32 = v31 >> 11;
      else
        v32 = v31 >> 3;
      if ( (v32 & 1) != 0
        && (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v29, 0LL, 0LL), ListEntry == (PSLIST_ENTRY)-1LL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v22, v60[0]);
        MiReplenishTransitionPageHeatList();
        ListEntry = 0LL;
        v7 = a2;
      }
      else
      {
        v33 = MiUnlinkStandbyPfn(v21, a5);
        if ( !v33 )
          v64 = MI_READ_PTE_LOCK_FREE(v21);
LABEL_43:
        v61 = 0;
        v34 = 0;
        if ( v62 && !v33 && !(unsigned int)MiAddLockedPageCharge(v29, 0) )
        {
          v61 = -1073741670;
          v34 = -1073741670;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v22, v60[0]);
        v35 = ListEntry;
        if ( ListEntry )
        {
          MiProcessTransitionHeatBatch(ListEntry);
          MiFreeTransitionPageHeatList(v35);
          ListEntry = 0LL;
        }
        if ( v34 < 0 )
        {
          v38 = v61;
          goto LABEL_60;
        }
        v14 = v67;
        v7 = a2;
        if ( v33 != 1 )
        {
          if ( v33 != 2 )
          {
            if ( v62 )
            {
              v53 = MI_READ_PTE_LOCK_FREE(&v64);
              v63 = MiMapFrame(v54, (v53 >> 12) & 0xFFFFFFFFFLL);
            }
            v7 = a2;
            v5 = a4;
LABEL_52:
            v36 = 1;
            goto LABEL_53;
          }
          v38 = MmAccessFault(0LL, BugCheckParameter2);
          v61 = v38;
          if ( v38 < 0 )
            goto LABEL_60;
          v7 = a2;
        }
        v5 = a4;
      }
    }
    *(_QWORD *)(v29 + 24) ^= (*(_QWORD *)(v29 + 24) ^ ((*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    v33 = 0;
    goto LABEL_43;
  }
  if ( !v18 )
  {
    MiDirtySystemCachePte(v15, v16);
    goto LABEL_64;
  }
  v37 = MiMapSystemCachePage(v18, v16, v17, BugCheckParameter4);
  v63 = v37;
  v17 = a5;
  v8 = BugCheckParameter2;
  BugCheckParameter4 = a3;
  if ( !v37 )
  {
    v18 = v62;
    goto LABEL_15;
  }
LABEL_65:
  v36 = 1;
LABEL_54:
  v38 = 0;
  v61 = 0;
  if ( v36 )
  {
    if ( !v37 )
      v37 = v8;
    v39 = (void *)((unsigned int)BugCheckParameter4 + v37);
    if ( (v17 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v39, v7, v5);
    else
      memmove(v39, v7, v5);
  }
LABEL_60:
  if ( v62 )
  {
    v55 = MI_READ_PTE_LOCK_FREE(v62);
    v56 = v55;
    v69[0] = v55;
    MiReleasePtes(&qword_14043C060, v57, 1LL);
    if ( (v56 & 1) != 0 )
    {
      v58 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v69) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v60[0] = MiLockPageInline(v58);
      MiRemoveLockedPageChargeAndDecRef(v58);
      _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v60[0] < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v60[0]);
      return v61;
    }
  }
  return (unsigned int)v38;
}
