/*
 * XREFs of MiMakeOutswappedPageResident @ 0x1402BB4A8
 * Callers:
 *     KiInSwapProcesses @ 0x140074BE8 (KiInSwapProcesses.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MiInitializeInPageSupport @ 0x14005A840 (MiInitializeInPageSupport.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     MiGetPagingFileOffset @ 0x140076424 (MiGetPagingFileOffset.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiSetPageTablePfnBuddy @ 0x140090FDC (MiSetPageTablePfnBuddy.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     MiInitializePfnForOtherProcess @ 0x1400966C4 (MiInitializePfnForOtherProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiInvalidPteConforms @ 0x1400BD280 (MiInvalidPteConforms.c)
 *     MiIsRetryIoStatus @ 0x1400BF9D0 (MiIsRetryIoStatus.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiIsPteInStore @ 0x140158E7C (MiIsPteInStore.c)
 *     MiValidatePagefilePageHash @ 0x140164C9C (MiValidatePagefilePageHash.c)
 *     MiStoreFaultComplete @ 0x140165AAC (MiStoreFaultComplete.c)
 *     SmPageRead @ 0x140165CEC (SmPageRead.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3960 (MiFlushAllFilesystemPages.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiMakeOutswappedPageResident(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v6; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  ULONG_PTR v13; // rdi
  unsigned __int8 v14; // r14
  struct _KPRCB *v15; // rcx
  char v16; // al
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  struct _KPRCB *v19; // rcx
  __int64 v20; // rcx
  signed __int32 v21; // eax
  unsigned int v22; // edi
  __int64 Page; // rax
  __int64 v24; // r14
  __int64 v25; // rdx
  int v26; // r8d
  __int64 *v27; // r13
  __int16 v28; // di
  int v29; // ebx
  __int64 v30; // rdx
  int IsPteInStore; // eax
  int v32; // r9d
  __int64 v33; // r15
  unsigned int PagingFileOffset; // eax
  __int16 v35; // r10
  __int64 v36; // r13
  int v37; // eax
  int v38; // eax
  char v39; // bl
  unsigned __int8 v40; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS v42; // edi
  bool v43; // zf
  unsigned __int8 v44; // al
  unsigned __int8 v45; // di
  __int64 v46; // rax
  char v47; // cl
  struct _KPRCB *v48; // rcx
  __int64 v49; // rdx
  int v50; // r8d
  __int64 v51; // r11
  __int64 v53; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B8h]
  __int64 v55; // [rsp+58h] [rbp-B0h]
  __int64 v56; // [rsp+60h] [rbp-A8h]
  volatile signed __int32 *v57; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-98h]
  unsigned __int64 v59; // [rsp+78h] [rbp-90h]
  _BYTE BugCheckParameter2[448]; // [rsp+80h] [rbp-88h] BYREF

  LODWORD(v53) = 0;
  v57 = 0LL;
  v58 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v6 = (_QWORD *)(a1 + 1088);
  v7 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  v54 = v7;
  while ( 1 )
  {
    do
    {
      do
        v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
      while ( !MiInvalidPteConforms(v8) );
      if ( (v9 & 0x800) == 0 )
      {
        MiInitializePageColorBase(0LL, a5, (__int64)&v57);
        v21 = _InterlockedExchangeAdd(v57, 1u);
        v22 = v58 & v21 | HIDWORD(v58);
        while ( 1 )
        {
          Page = MiGetPage(v7, v22, 512LL);
          v12 = Page;
          if ( Page != -1 )
            break;
          MiWaitForFreePage(v7);
        }
        v24 = 48 * Page - 0x58000000000LL;
        MiMakeTransitionPte(Page, (v8 >> 5) & 0x1F);
        if ( MiPteInShadowRange((unsigned __int64)v6) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v26 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
LABEL_36:
              if ( (v25 & 1) != 0 )
                v25 |= 0x8000000000000000uLL;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            goto LABEL_36;
          }
        }
        *v6 = v25;
        if ( v26 )
          MiWritePteShadow((__int64)v6);
        MiInitializePfnForOtherProcess(v12, 0xFFFFF6FB7DBEDF68uLL, v12, 2560);
        v27 = (__int64 *)(v24 + 16);
        *(_QWORD *)(v24 + 16) = v8;
        v59 = 0xFFFFF6FB7DBED000uLL;
        v28 = 56;
        v29 = 0;
        v56 = 56LL;
        v55 = 0LL;
        while ( 1 )
        {
          MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
          v30 = *v27;
          *(_DWORD *)&BugCheckParameter2[192] |= 0x200000u;
          IsPteInStore = MiIsPteInStore(v7, v30);
          v33 = (unsigned __int8)HIBYTE(*(_WORD *)v27) >> 4;
          *(_DWORD *)&BugCheckParameter2[192] = v32 & 0xFFFFFEFF | (IsPteInStore != 0 ? 0x100 : 0);
          PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)v27);
          if ( (v35 & 0x100) != 0 )
            *(_QWORD *)&BugCheckParameter2[96] = PagingFileOffset | ((unsigned __int64)(unsigned int)v33 << 60);
          else
            *(_QWORD *)&BugCheckParameter2[96] = (unsigned __int64)PagingFileOffset << 12;
          MiSetPageTablePfnBuddy(v24, 0xFFFF800000000030uLL, 0);
          *(_QWORD *)&BugCheckParameter2[272] = 0LL;
          *(_QWORD *)&BugCheckParameter2[304] = v59;
          *(_WORD *)&BugCheckParameter2[280] = v28;
          *(_WORD *)&BugCheckParameter2[282] = 16386;
          *(_DWORD *)&BugCheckParameter2[316] = v29;
          *(_DWORD *)&BugCheckParameter2[312] = 4096;
          *(_DWORD *)&BugCheckParameter2[184] = 4096;
          *(_QWORD *)&BugCheckParameter2[320] = v12;
          v36 = *(_QWORD *)(v54 + 8 * v33 + 7904);
          if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
          {
            *(_DWORD *)&BugCheckParameter2[80] = 0;
            *(_QWORD *)&BugCheckParameter2[88] = 0LL;
            v37 = SmPageRead((union _MM_STORE_KEY *)&BugCheckParameter2[96], (unsigned __int64)&BugCheckParameter2[272]);
          }
          else
          {
            v37 = IoPageReadEx(
                    *(PFILE_OBJECT *)(v36 + 56),
                    (struct _MDL *)&BugCheckParameter2[272],
                    &BugCheckParameter2[96],
                    (struct _KEVENT *)&BugCheckParameter2[32],
                    (struct _IO_STATUS_BLOCK *)&BugCheckParameter2[80],
                    0,
                    0LL);
          }
          if ( v37 < 0 )
          {
            *(_DWORD *)&BugCheckParameter2[80] = v37;
            *(_QWORD *)&BugCheckParameter2[88] = 0LL;
            KeSetEvent((PRKEVENT)&BugCheckParameter2[32], 0, 0);
          }
          KeWaitForSingleObject(&BugCheckParameter2[32], WrPageIn, 0, 0, 0LL);
          v38 = *(_DWORD *)&BugCheckParameter2[192];
          v39 = 0;
          LODWORD(v53) = 0;
          if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
          {
            MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v53);
            v40 = MiLockPageInline(v24);
            if ( WORD1(v53) )
              LODWORD(v53) = (unsigned __int16)v53 | ((WORD1(v53) - 1) << 16);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v40 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(v40);
            v39 = v53;
            v38 = *(_DWORD *)&BugCheckParameter2[192];
          }
          v42 = *(_DWORD *)&BugCheckParameter2[80];
          if ( *(int *)&BugCheckParameter2[80] >= 0 && *(_QWORD *)(v36 + 216) )
          {
            *(_DWORD *)&BugCheckParameter2[192] = v38 | 0x400000;
            v42 = MiValidatePagefilePageHash((__int64)BugCheckParameter2);
          }
          if ( (BugCheckParameter2[282] & 1) != 0 )
            MmUnmapLockedPages(*(PVOID *)&BugCheckParameter2[296], (PMDL)&BugCheckParameter2[272]);
          MiSetPageTablePfnBuddy(v24, 0LL, 0);
          if ( v42 >= 0 )
            break;
          if ( !MiIsRetryIoStatus(v42, 0x1000uLL) )
          {
            MiFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x77u, v42, v42, (unsigned int)v33, *(unsigned int *)&BugCheckParameter2[96]);
          }
          if ( (v39 & 1) != 0 )
          {
            v28 = v56;
            v27 = (__int64 *)(v24 + 16);
            v7 = v54;
            v43 = (v39 & 2) == 0;
            v29 = v55;
            if ( v43 )
              continue;
          }
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
          v29 = v55;
          v27 = (__int64 *)(v24 + 16);
          v28 = v56;
          v7 = v54;
        }
        if ( *(_QWORD *)&BugCheckParameter2[88] != 4096LL )
        {
          MiFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x77u, 2uLL, v42, (unsigned int)v33, *(unsigned int *)&BugCheckParameter2[96]);
        }
        v44 = MiLockPageInline(v24);
        v18 = *(_QWORD *)(v24 + 16);
        v45 = v44;
        v46 = MiSwizzleInvalidPte(128LL);
        v47 = *(_BYTE *)(v24 + 34);
        *(_QWORD *)(v24 + 16) = v46;
        *(_BYTE *)(v24 + 34) = v47 | 0x10;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
        {
          v48 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v48);
        }
        __writecr8(v45);
        v20 = v54;
        goto LABEL_77;
      }
      v11 = v9;
      if ( qword_140465800 )
      {
        if ( (v8 & 0x10) != 0 )
          v11 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v11 = v9 & ~qword_140465800;
      }
      v12 = (v11 >> 12) & 0xFFFFFFFFFLL;
    }
    while ( (*(_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
    v13 = v10 + 48 * v12;
    v14 = MiLockPageInline(v13);
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v6) == v8 )
      break;
LABEL_13:
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
    {
      v15 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
    __writecr8(v14);
  }
  if ( (*(_BYTE *)(v13 + 34) & 7) == 6 )
  {
    v17 = *(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    goto LABEL_21;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(v13, 0) )
  {
    MiDiscardTransitionPteEx(v13, 0);
    goto LABEL_13;
  }
  v16 = *(_BYTE *)(v13 + 34);
  ++*(_WORD *)(v13 + 32);
  *(_BYTE *)(v13 + 34) = v16 & 0xF8 | 6;
  v17 = *(_QWORD *)(v13 + 24) & 0xC000000000000000uLL | 1;
LABEL_21:
  *(_QWORD *)(v13 + 24) = v17;
  v18 = MiCaptureDirtyBitToPfn(v13);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v19);
  }
  __writecr8(v14);
  if ( v18 )
  {
    v20 = v7;
LABEL_77:
    MiReleasePageFileInfo(v20, v18, 0);
  }
  MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v12, -2147483644);
  if ( MiPteInShadowRange((unsigned __int64)v6) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v50 = 1;
      if ( !HIBYTE(word_1404658EC) )
        goto LABEL_83;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
LABEL_83:
      if ( (v51 & 1) != 0 )
        v49 |= 0x8000000000000000uLL;
    }
  }
  *v6 = v49;
  if ( v50 )
    MiWritePteShadow((__int64)v6);
  return v51;
}
