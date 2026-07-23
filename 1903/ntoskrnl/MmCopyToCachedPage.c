/*
 * XREFs of MmCopyToCachedPage @ 0x14006E830
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiControlAreaUsingExtents @ 0x14006ED70 (MiControlAreaUsingExtents.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x1400DC870 (MiLockLeafPage.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiUnlinkStandbyPfn @ 0x140120950 (MiUnlinkStandbyPfn.c)
 *     MiDirtySystemCachePte @ 0x14012A16C (MiDirtySystemCachePte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1401CC2A0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     MiMapFrame @ 0x1402C4FF4 (MiMapFrame.c)
 *     MiMapSystemCachePage @ 0x1402C5100 (MiMapSystemCachePage.c)
 *     MiFreeTransitionPageHeatList @ 0x1402EBBF8 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x1402EBC7C (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBFE8 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402EC248 (MiReplenishTransitionPageHeatList.c)
 *     MiMapCacheExceptionFilter @ 0x14088B0AC (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(ULONG_PTR a1, void *a2, unsigned int a3, ULONG_PTR a4, unsigned int a5)
{
  ULONG_PTR v5; // r14
  ULONG_PTR BugCheckParameter4; // rbx
  void *v7; // r13
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  ULONG_PTR v11; // r11
  unsigned __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned int v17; // r10d
  ULONG_PTR v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  ULONG_PTR v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int8 v26; // r9
  char v27; // r10
  ULONG_PTR v28; // r11
  int PageAvoidRead; // eax
  __int64 v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // r14d
  int v36; // r15d
  _SLIST_ENTRY *v37; // rdi
  __int64 v38; // rax
  int v39; // edi
  void *v40; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // rax
  char v54; // bl
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v58[4]; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v59; // [rsp+44h] [rbp-94h] BYREF
  ULONG_PTR v60; // [rsp+48h] [rbp-90h]
  __int64 v61; // [rsp+50h] [rbp-88h]
  int v62; // [rsp+58h] [rbp-80h]
  __int64 v63; // [rsp+60h] [rbp-78h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+68h] [rbp-70h]
  __int64 v65; // [rsp+70h] [rbp-68h]
  __int64 v66; // [rsp+78h] [rbp-60h]
  __int64 v67; // [rsp+80h] [rbp-58h] BYREF
  __int64 v68[10]; // [rsp+88h] [rbp-50h] BYREF

  v5 = a4;
  BugCheckParameter4 = a3;
  v7 = a2;
  v61 = 0LL;
  v62 = 1;
  ListEntry = 0LL;
  v8 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v9 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v42 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v8 >> 3) & 0x1FF));
      v43 = v9 | 0x20;
      if ( (v42 & 0x20) == 0 )
        v43 = *(_QWORD *)v8;
      v9 = v43;
      if ( (v42 & 0x42) != 0 )
        v9 = v43 | 0x42;
    }
  }
  v67 = v9;
  v10 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v67) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v10 )
    v10 += 40 * ((v11 >> 18) & 7);
  v12 = *(_QWORD *)(v10 + 24);
  v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v12 & 1) == 0 )
    v13 = (__int64 *)v12;
  v14 = *v13;
  v65 = v14;
  v15 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v14 + 60) & 0x3FF)) + 0x2000LL;
  v66 = v15;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x776uLL, v11, v5, BugCheckParameter4);
  v16 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = a5;
  if ( (a5 & 4) != 0 && ((BugCheckParameter4 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v18 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
    v60 = v18;
    if ( !v18 )
      return 3221225626LL;
    v17 = a5;
    v11 = a1;
    v15 = v66;
  }
  else
  {
    v18 = 0LL;
    v60 = 0LL;
  }
  v19 = *(_QWORD *)v16;
  if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      v44 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 8 * ((v16 >> 3) & 0x1FF));
        LOBYTE(v44) = v19 | 0x20;
        if ( (v45 & 0x20) == 0 )
          v44 = *(_QWORD *)v16;
        LOBYTE(v19) = v44;
        if ( (v45 & 0x42) != 0 )
          LOBYTE(v19) = v44 | 0x42;
      }
    }
    v18 = v60;
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
        v46 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 8 * ((v16 >> 3) & 0x1FF));
          v48 = v20 | 0x20;
          if ( (v47 & 0x20) == 0 )
            v48 = *(_QWORD *)v16;
          v20 = v48;
          if ( (v47 & 0x42) != 0 )
            v20 = v48 | 0x42;
        }
      }
      v18 = v60;
    }
    if ( (v20 & 1) == 0 )
      goto LABEL_18;
    if ( v18 )
    {
      v38 = MiMapSystemCachePage(v18, v16, v17);
      v61 = v38;
      LOBYTE(v17) = a5;
      v11 = a1;
      if ( !v38 )
      {
LABEL_18:
        if ( qword_140465B00 )
        {
          if ( (v20 & 0x10) != 0 )
            v20 &= ~0x10uLL;
          else
            v20 &= ~qword_140465B00;
        }
        v21 = v20 >> 16;
        while ( 1 )
        {
          while ( 1 )
          {
            v22 = 0LL;
            v58[0] = 17;
            v23 = MI_READ_PTE_LOCK_FREE(v21);
            v63 = v23;
            if ( (v23 & 1) == 0 && (v23 & 0x400) != 0 )
              goto LABEL_24;
            while ( 1 )
            {
              v22 = MiLockProtoPoolPage(v21, v58);
              if ( v22 )
                break;
              MmAccessFault(2uLL, v21);
            }
            v31 = MiLockLeafPage(v21, 0LL);
            v32 = MI_READ_PTE_LOCK_FREE(v21);
            v63 = v32;
            if ( v31 )
              break;
            v26 = v58[0];
            v7 = a2;
LABEL_24:
            if ( v22 )
              MiUnlockProtoPoolPage(v22, v26);
            if ( (unsigned int)MiControlAreaUsingExtents(v14, v24, v25) )
            {
              v39 = MmAccessFault(0LL, v28);
              v59 = v39;
              if ( v39 < 0 )
                goto LABEL_54;
            }
            else
            {
              PageAvoidRead = MiMakePageAvoidRead(v21, v7, a3, v5, v27, (unsigned __int64)&v63, &v59);
              if ( !PageAvoidRead )
                return v59;
              v49 = PageAvoidRead - 1;
              if ( v49 )
              {
                v52 = v49 - 2;
                if ( !v52 )
                {
                  v62 = 0;
LABEL_47:
                  MiMakeSystemCachePteValid(v66, v16, v63, a5);
                  LOBYTE(v17) = a5;
                  v11 = a1;
                  LODWORD(BugCheckParameter4) = a3;
                  v38 = v61;
                  goto LABEL_48;
                }
                if ( v52 != 1 )
                  goto LABEL_47;
                LODWORD(BugCheckParameter4) = a3;
LABEL_58:
                v38 = v61;
                v11 = a1;
                LOBYTE(v17) = a5;
                goto LABEL_48;
              }
            }
          }
          if ( (v32 & 1) != 0 )
            break;
          v33 = *(_QWORD *)(v31 + 16);
          if ( (v33 & 0x400) != 0 )
            v34 = v33 >> 11;
          else
            v34 = v33 >> 3;
          if ( (v34 & 1) != 0
            && (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v31, 0LL, 0LL), ListEntry == (PSLIST_ENTRY)-1LL) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v22, v58[0]);
            MiReplenishTransitionPageHeatList();
            ListEntry = 0LL;
            v7 = a2;
          }
          else
          {
            v35 = MiUnlinkStandbyPfn(v21, a5);
            if ( !v35 )
              v63 = MI_READ_PTE_LOCK_FREE(v21);
LABEL_38:
            v59 = 0;
            v36 = 0;
            if ( v60 && !v35 && !(unsigned int)MiAddLockedPageCharge(v31, 0LL) )
            {
              v59 = -1073741670;
              v36 = -1073741670;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v22, v58[0]);
            v37 = ListEntry;
            if ( ListEntry )
            {
              MiProcessTransitionHeatBatch(ListEntry);
              MiFreeTransitionPageHeatList(v37);
              ListEntry = 0LL;
            }
            if ( v36 < 0 )
            {
              v39 = v59;
              goto LABEL_54;
            }
            v14 = v65;
            v7 = a2;
            if ( v35 != 1 )
            {
              if ( v35 != 2 )
              {
                if ( v60 )
                {
                  v50 = MI_READ_PTE_LOCK_FREE(&v63);
                  v61 = MiMapFrame(v51, (v50 >> 12) & 0xFFFFFFFFFLL);
                }
                v7 = a2;
                v5 = a4;
                goto LABEL_47;
              }
              v39 = MmAccessFault(0LL, a1);
              v59 = v39;
              if ( v39 < 0 )
                goto LABEL_54;
              v7 = a2;
            }
            v5 = a4;
          }
        }
        *(_QWORD *)(v31 + 24) ^= (((*(_QWORD *)(v31 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v31 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        v35 = 0;
        goto LABEL_38;
      }
    }
    else
    {
      v38 = v61;
    }
    LODWORD(BugCheckParameter4) = a3;
    goto LABEL_48;
  }
  if ( !v18 )
  {
    MiDirtySystemCachePte(v15, v16);
    goto LABEL_58;
  }
  v38 = MiMapSystemCachePage(v18, v16, v17);
  v61 = v38;
  v17 = a5;
  v11 = a1;
  if ( !v38 )
  {
    v18 = v60;
    goto LABEL_15;
  }
LABEL_48:
  v39 = 0;
  v59 = 0;
  if ( v62 )
  {
    if ( v38 )
      v40 = (void *)(v38 + (unsigned int)BugCheckParameter4);
    else
      v40 = (void *)(v11 + (unsigned int)BugCheckParameter4);
    if ( (v17 & 4) != 0 )
      RtlCopyMemoryNonTemporal(v40, v7, v5);
    else
      memmove(v40, v7, v5);
  }
LABEL_54:
  if ( v60 )
  {
    v53 = MI_READ_PTE_LOCK_FREE(v60);
    v54 = v53;
    v68[0] = v53;
    MiReleasePtes((__int64)&qword_1404669C0, v55, 1u);
    if ( (v54 & 1) != 0 )
    {
      v56 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v68) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v58[0] = MiLockPageInline(v56);
      MiRemoveLockedPageChargeAndDecRef(v56);
      _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v58[0] < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v58[0]);
      return v59;
    }
  }
  return (unsigned int)v39;
}
