/*
 * XREFs of MiMakeOutswappedPageResident @ 0x1402A4558
 * Callers:
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x140022E18 (MiIsRetryIoStatus.c)
 *     MiInitializePfnForOtherProcess @ 0x140026C2C (MiInitializePfnForOtherProcess.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiInitializeInPageSupport @ 0x14002C6B0 (MiInitializeInPageSupport.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoPageReadEx @ 0x1400DE7C0 (IoPageReadEx.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiSetPageTablePfnBuddy @ 0x14013DAA8 (MiSetPageTablePfnBuddy.c)
 *     MiIsPteInStore @ 0x140141908 (MiIsPteInStore.c)
 *     SmPageRead @ 0x14014F88C (SmPageRead.c)
 *     MiStoreFaultComplete @ 0x140157D60 (MiStoreFaultComplete.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     MiValidatePagefilePageHash @ 0x1402CC704 (MiValidatePagefilePageHash.c)
 */

__int64 __fastcall MiMakeOutswappedPageResident(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 *v5; // r12
  struct _KEVENT *v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  ULONG_PTR v13; // rdi
  unsigned __int8 v14; // r14
  char v15; // al
  struct _KPRCB *CurrentPrcb; // rcx
  char v17; // al
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // r11
  unsigned int v24; // r11d
  __int16 v25; // cx
  unsigned int v26; // edi
  __int64 Page; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  int v30; // r8d
  bool v31; // zf
  __int64 *v32; // r13
  CSHORT v33; // di
  ULONG v34; // ebx
  __int64 v35; // rdx
  int IsPteInStore; // eax
  int v37; // r9d
  __int64 v38; // r15
  unsigned int PagingFileOffset; // eax
  __int16 v40; // r10
  __int64 v41; // r13
  NTSTATUS v42; // eax
  unsigned int v43; // eax
  char v44; // bl
  unsigned __int8 v45; // bl
  struct _KPRCB *v46; // rcx
  int Status; // edi
  unsigned __int8 v48; // al
  unsigned __int64 v49; // rbx
  unsigned __int8 v50; // di
  __int64 v51; // rax
  char v52; // cl
  struct _KPRCB *v53; // rcx
  __int64 v55; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT *v56; // [rsp+50h] [rbp-B8h]
  __int64 v57; // [rsp+58h] [rbp-B0h]
  __int64 v58; // [rsp+60h] [rbp-A8h]
  void *v59; // [rsp+68h] [rbp-A0h]
  volatile signed __int32 *v60; // [rsp+70h] [rbp-98h] BYREF
  __int16 v61; // [rsp+78h] [rbp-90h]
  unsigned __int16 v62; // [rsp+7Ah] [rbp-8Eh]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+80h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK v65; // [rsp+D0h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter4[11]; // [rsp+E0h] [rbp-28h] BYREF
  int v67; // [rsp+138h] [rbp+30h]
  unsigned int v68; // [rsp+140h] [rbp+38h]
  struct _MDL MemoryDescriptorList; // [rsp+190h] [rbp+88h] BYREF
  __int64 v70; // [rsp+1C0h] [rbp+B8h]

  v5 = (__int64 *)(a1 + 1088);
  v6 = *(struct _KEVENT **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  v56 = v6;
  while ( 1 )
  {
    do
      v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
    while ( !MiInvalidPteConforms(v7) );
    if ( (v8 & 0x800) == 0 )
      break;
    v11 = v8;
    if ( qword_14043B180 )
    {
      if ( (v7 & 0x10) != 0 )
        v11 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v11 = v8 & ~qword_14043B180;
    }
    v12 = v10 & (v11 >> 12);
    if ( (*(_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
    {
      v13 = v9 + 48 * v12;
      v14 = MiLockPageInline(v13);
      if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v5) != v7 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = KiIrqlFlags;
        if ( !KiIrqlFlags )
          goto LABEL_19;
LABEL_15:
        if ( (v15 & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        goto LABEL_19;
      }
      if ( (*(_BYTE *)(v13 + 34) & 7) == 6 )
      {
        v18 = *(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_22:
        *(_QWORD *)(v13 + 24) = v18;
        v19 = MiCaptureDirtyBitToPfn(v13);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
        {
          v20 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v20);
        }
        __writecr8(v14);
        if ( v19 )
          MiReleasePageFileInfo(v6, v19, 0);
        goto LABEL_29;
      }
      if ( (unsigned int)MiUnlinkPageFromList(v13, 0) )
      {
        v17 = *(_BYTE *)(v13 + 34);
        ++*(_WORD *)(v13 + 32);
        *(_BYTE *)(v13 + 34) = v17 & 0xF8 | 6;
        v18 = *(_QWORD *)(v13 + 24) & 0xC000000000000000uLL | 1;
        goto LABEL_22;
      }
      MiDiscardTransitionPte(v13);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 = KiIrqlFlags;
      if ( KiIrqlFlags )
        goto LABEL_15;
LABEL_19:
      __writecr8(v14);
    }
  }
  MiInitializePageColorBase(0LL, a5 + 1, (__int64)&v60);
  v25 = _InterlockedExchangeAdd(v60, v24);
  v26 = (unsigned __int16)(v61 & v25) | v62;
  while ( 1 )
  {
    Page = MiGetPage((__int64)v6, v26, 0x200u);
    v12 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v6);
  }
  v28 = 48 * Page - 0x58000000000LL;
  MiSwizzleInvalidPte(32 * (((Page & 0xFFFFFFFFFLL) << 7) | (v7 >> 5) & 0x1F | 0x40));
  if ( MiPteInShadowRange((unsigned __int64)v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v30 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v31 = (v29 & 1) == 0;
LABEL_42:
        if ( !v31 )
          v29 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v31 = (v29 & 1) == 0;
      goto LABEL_42;
    }
  }
  *v5 = v29;
  if ( v30 )
    MiWritePteShadow((__int64)v5, v29);
  MiInitializePfnForOtherProcess(v12, 0xFFFFF6FB7DBEDF68uLL, v12, 2560);
  v32 = (__int64 *)(v28 + 16);
  *(_QWORD *)(v28 + 16) = v7;
  v59 = (void *)0xFFFFF6FB7DBED000LL;
  v33 = 56;
  v34 = 0;
  v58 = 56LL;
  v57 = 0LL;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v35 = *v32;
    v68 |= 0x200000u;
    IsPteInStore = MiIsPteInStore((__int64)v56, v35);
    v38 = (unsigned __int8)HIBYTE(*(_WORD *)v32) >> 4;
    v68 = v37 & 0xFFFFFEFF | (IsPteInStore != 0 ? 0x100 : 0);
    PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)v32);
    if ( (v40 & 0x100) != 0 )
      BugCheckParameter4[0] = PagingFileOffset | ((unsigned __int64)(unsigned int)v38 << 60);
    else
      BugCheckParameter4[0] = (unsigned __int64)PagingFileOffset << 12;
    MiSetPageTablePfnBuddy(v28, 0xFFFF800000000030uLL, 0);
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.StartVa = v59;
    MemoryDescriptorList.Size = v33;
    MemoryDescriptorList.MdlFlags = 16386;
    MemoryDescriptorList.ByteOffset = v34;
    MemoryDescriptorList.ByteCount = 4096;
    v67 = 4096;
    v70 = v12;
    v41 = *((_QWORD *)&v56[297].Header.WaitListHead.Flink + v38);
    if ( (v68 & 0x100) != 0 )
    {
      v65.Status = 0;
      v65.Information = 0LL;
      v42 = SmPageRead((union _MM_STORE_KEY *)BugCheckParameter4, (unsigned __int64)&MemoryDescriptorList);
    }
    else
    {
      v42 = IoPageReadEx(
              *(struct _FILE_OBJECT **)(v41 + 56),
              &MemoryDescriptorList,
              BugCheckParameter4,
              &Event,
              &v65,
              0,
              0LL);
    }
    if ( v42 < 0 )
    {
      v65.Status = v42;
      v65.Information = 0LL;
      KeSetEvent(&Event, 0, 0);
    }
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    v43 = v68;
    v44 = 0;
    LODWORD(v55) = 0;
    if ( (v68 & 0x100) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v55);
      v45 = MiLockPageInline(v28);
      if ( WORD1(v55) )
        LODWORD(v55) = (unsigned __int16)v55 | ((WORD1(v55) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
      {
        v46 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v46);
      }
      __writecr8(v45);
      v43 = v68;
      v44 = v55;
    }
    Status = v65.Status;
    if ( v65.Status >= 0 && *(_QWORD *)(v41 + 216) )
    {
      v68 = v43 | 0x400000;
      Status = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
    MiSetPageTablePfnBuddy(v28, 0LL, 0);
    if ( Status >= 0 )
      break;
    if ( !MiIsRetryIoStatus(Status, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, Status, Status, (unsigned int)v38, LODWORD(BugCheckParameter4[0]));
    }
    if ( (v44 & 1) != 0 )
    {
      v33 = v58;
      v32 = (__int64 *)(v28 + 16);
      v31 = (v44 & 2) == 0;
      v34 = v57;
      if ( v31 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v34 = v57;
    v32 = (__int64 *)(v28 + 16);
    v33 = v58;
  }
  if ( v65.Information != 4096 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, Status, (unsigned int)v38, LODWORD(BugCheckParameter4[0]));
  }
  v48 = MiLockPageInline(v28);
  v49 = *(_QWORD *)(v28 + 16);
  v50 = v48;
  v51 = MiSwizzleInvalidPte(128LL);
  v52 = *(_BYTE *)(v28 + 34);
  *(_QWORD *)(v28 + 16) = v51;
  *(_BYTE *)(v28 + 34) = v52 | 0x10;
  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v50 < 2u )
  {
    v53 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v53);
  }
  __writecr8(v50);
  MiReleasePageFileInfo(v56, v49, 0);
LABEL_29:
  MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v12, -2147483644);
  if ( MiPteInShadowRange((unsigned __int64)v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v22 = 1;
      if ( !HIBYTE(word_14043B26C) )
        goto LABEL_84;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
LABEL_84:
      if ( (v23 & 1) != 0 )
        v21 |= 0x8000000000000000uLL;
    }
  }
  *v5 = v21;
  if ( v22 )
    MiWritePteShadow((__int64)v5, v21);
  return v23;
}
