/*
 * XREFs of CmpCallCallBacksEx @ 0x1405E6AE0
 * Callers:
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x1405CC2E0 (CmpSecurityMethod.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     CmpCallCallBacks @ 0x1405D2A60 (CmpCallCallBacks.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotificationEx @ 0x140640AC0 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x1406C1210 (NtFlushKey.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407EB5F0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpFreeCallbackContext @ 0x14026C0BC (CmpFreeCallbackContext.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCallbackFillObjectContext @ 0x1405E7060 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFatalFilter @ 0x1407EC698 (CmpCallbackFatalFilter.c)
 */

__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int64 a2,
        _SLIST_ENTRY *a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        _SLIST_ENTRY *a7)
{
  char v7; // r14
  _SLIST_ENTRY *v8; // r12
  struct _KTHREAD *CurrentThread; // rax
  PVOID Object; // rcx
  __int64 *v13; // r12
  struct _KTHREAD *v14; // rax
  int v15; // esi
  struct _KTHREAD *v16; // rcx
  bool v17; // zf
  _QWORD *v18; // r14
  struct _KTHREAD *v20; // rcx
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v22; // rdx
  _SLIST_ENTRY **v23; // rax
  _SLIST_ENTRY *v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  _SLIST_ENTRY *v27; // rbx
  _SLIST_ENTRY **v28; // rax
  _SLIST_ENTRY *v29; // rsi
  _SLIST_ENTRY *v30; // r8
  PVOID *v31; // rax
  unsigned int v32; // ecx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v34; // rax
  PVOID *v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-108h] BYREF
  char v39; // [rsp+20h] [rbp-E8h]
  char v40; // [rsp+21h] [rbp-E7h]
  int v41; // [rsp+24h] [rbp-E4h]
  _SLIST_ENTRY *v42; // [rsp+30h] [rbp-D8h]
  _QWORD *v43; // [rsp+38h] [rbp-D0h]
  __int64 *v44; // [rsp+40h] [rbp-C8h]
  _SLIST_ENTRY *v45; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *v46; // [rsp+50h] [rbp-B8h]
  _SLIST_ENTRY *v47; // [rsp+58h] [rbp-B0h]
  _QWORD v48[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+70h] [rbp-98h]
  __int64 v50; // [rsp+78h] [rbp-90h]
  _SLIST_ENTRY *v51; // [rsp+80h] [rbp-88h]
  _QWORD v52[16]; // [rsp+88h] [rbp-80h] BYREF

  v7 = a4;
  v8 = a3;
  v51 = a7;
  v47 = a3;
  v50 = a2;
  v49 = a6;
  v41 = 0;
  v43 = 0LL;
  v45 = 0LL;
  v39 = 0;
  CurrentThread = KeGetCurrentThread();
  v46 = CurrentThread;
  if ( a4 != 1 )
  {
    v15 = v41;
    goto LABEL_11;
  }
  Object = CurrentThread[1].WaitBlock[0].Object;
  if ( Object )
    v13 = (__int64 *)*((_QWORD *)Object + 1);
  else
    v13 = &CallbackListHead;
  while ( 1 )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    do
    {
      v13 = (__int64 *)*v13;
      v44 = v13;
      v40 = 1;
      if ( v13 == &CallbackListHead )
        goto LABEL_6;
    }
    while ( *((int *)v13 + 4) < 0 );
    _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    v20 = KeGetCurrentThread();
    v17 = v20->KernelApcDisable++ == -1;
    if ( v17
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v20);
    }
    v40 = 0;
    PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
    if ( !PoolWithTag )
      PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
    v42 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)v13 + 4) == 0x80000000 )
      {
        _InterlockedOr(v38, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      v15 = -1073741670;
      v41 = -1073741670;
      v39 = 1;
      v7 = 0;
      goto LABEL_7;
    }
    *((_QWORD *)&PoolWithTag[1].Next + 1) = v13;
    PoolWithTag[2].Next = 0LL;
    v22 = v46;
    PoolWithTag[1].Next = (_SLIST_ENTRY *)v46[1].WaitBlock[0].Object;
    v22[1].WaitBlock[0].Object = &PoolWithTag[1];
    v23 = (_SLIST_ENTRY **)*((_QWORD *)&a7->Next + 1);
    if ( *v23 != a7 )
      goto LABEL_98;
    PoolWithTag->Next = a7;
    *((_QWORD *)&PoolWithTag->Next + 1) = v23;
    *v23 = PoolWithTag;
    *((_QWORD *)&a7->Next + 1) = PoolWithTag;
    CmpCallbackFillObjectContext(a1, a2, v13 + 3);
    v24 = a3;
    if ( !a3 || (*((_DWORD *)v13 + 5) & 1) == 0 )
      v24 = (_SLIST_ENTRY *)a2;
    v25 = ((__int64 (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *))v13[5])(v13[4], (int)a1, v24);
    v41 = v25;
    if ( a1 == 14 )
    {
      v41 = 0;
      goto LABEL_25;
    }
    if ( v25 < 0 )
      break;
LABEL_25:
    switch ( a1 )
    {
      case 0x1Cu:
LABEL_48:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
        *(_QWORD *)(a2 + 80) = 0LL;
        break;
      case 8u:
LABEL_56:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
        *(_QWORD *)(a2 + 48) = 0LL;
        break;
      case 7u:
LABEL_55:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
        *(_QWORD *)(a2 + 40) = 0LL;
        break;
      case 0xEu:
LABEL_29:
        PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = 0LL;
        break;
      default:
        switch ( a1 )
        {
          case 0u:
          case 0x1Eu:
            goto LABEL_29;
          case 1u:
          case 5u:
          case 6u:
            goto LABEL_55;
          case 2u:
          case 4u:
          case 0x22u:
            PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 16);
            *(_QWORD *)(a2 + 16) = 0LL;
            break;
          case 3u:
          case 0x24u:
          case 0x2Fu:
            PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 32);
            *(_QWORD *)(a2 + 32) = 0LL;
            break;
          case 9u:
            goto LABEL_56;
          case 0xFu:
          case 0x10u:
          case 0x11u:
          case 0x12u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x16u:
          case 0x17u:
          case 0x18u:
          case 0x19u:
          case 0x1Bu:
          case 0x1Du:
          case 0x1Fu:
          case 0x21u:
          case 0x23u:
          case 0x25u:
          case 0x27u:
          case 0x2Au:
          case 0x2Cu:
          case 0x2Eu:
          case 0x30u:
            *(_QWORD *)(a2 + 32) = PoolWithTag[2].Next;
            break;
          case 0x1Au:
            goto LABEL_48;
          case 0x20u:
            PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 64);
            *(_QWORD *)(a2 + 64) = 0LL;
            break;
          case 0x26u:
          case 0x29u:
          case 0x2Bu:
          case 0x2Du:
            PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 24);
            *(_QWORD *)(a2 + 24) = 0LL;
            break;
          default:
            continue;
        }
        break;
    }
  }
  Next = PoolWithTag->Next;
  v34 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
  if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v34 != PoolWithTag )
LABEL_98:
    __fastfail(3u);
  *v34 = Next;
  *((_QWORD *)&Next->Next + 1) = v34;
  v35 = (PVOID *)v46[1].WaitBlock[0].Object;
  if ( v35 )
    v46[1].WaitBlock[0].Object = *v35;
  CmpFreeCallbackContext(PoolWithTag);
  if ( _InterlockedDecrement((volatile signed __int32 *)v13 + 4) == 0x80000000 )
  {
    _InterlockedOr(v38, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  v7 = 0;
  v39 = 1;
LABEL_6:
  v15 = v41;
LABEL_7:
  if ( v40 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable++ == -1;
    if ( v17
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v16);
    }
    v15 = v41;
  }
  v8 = a3;
LABEL_11:
  if ( v7 )
  {
    v18 = v43;
  }
  else
  {
    if ( v39 == 1 )
    {
      memset(v52, 0, 0x38uLL);
      v18 = v52;
      v43 = v52;
      v26 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        v52[0] = v49;
      }
      else
      {
        if ( v15 == -1073740541 )
          v36 = **(_QWORD **)(a2 + 72);
        else
          v36 = 0LL;
        v52[0] = v36;
      }
      if ( v15 == -1073740541 )
      {
        v37 = 0;
        if ( ((a1 - 26) & 0xFFFFFFFD) == 0 )
          v37 = *((_DWORD *)&v8->Next + 2);
        LODWORD(v52[1]) = v37;
      }
      else
      {
        LODWORD(v52[1]) = v15;
        v37 = v15;
      }
      LODWORD(v52[3]) = v37;
      v52[2] = v50;
      if ( v8 )
      {
        v45 = (_SLIST_ENTRY *)v48;
        v48[0] = v52;
        v48[1] = v47;
      }
    }
    else
    {
      v18 = (_QWORD *)a2;
      v43 = (_QWORD *)a2;
      v45 = v8;
      v26 = a1;
      a5 = a1;
    }
    while ( a7->Next != v51 )
    {
      v27 = (_SLIST_ENTRY *)*((_QWORD *)&a7->Next + 1);
      v47 = v27;
      v28 = (_SLIST_ENTRY **)*((_QWORD *)&v27->Next + 1);
      if ( v27->Next != a7 || *v28 != v27 )
        goto LABEL_98;
      *((_QWORD *)&a7->Next + 1) = v28;
      *v28 = a7;
      v42 = (_SLIST_ENTRY *)*((_QWORD *)&v27[1].Next + 1);
      v29 = v42;
      v18[4] = v27[2].Next;
      CmpCallbackFillObjectContext(v26, v18, &v29[1].Next + 1);
      if ( v8 && (HIDWORD(v29[1].Next) & 1) != 0 )
        v30 = v45;
      else
        v30 = (_SLIST_ENTRY *)v18;
      v41 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _SLIST_ENTRY *))&v29[2].Next + 1))(
              v29[2].Next,
              (int)a5,
              v30);
      v31 = (PVOID *)v46[1].WaitBlock[0].Object;
      if ( v31 )
        v46[1].WaitBlock[0].Object = *v31;
      v32 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v32 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v32 )
        ExFreePoolWithTag(v27, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v27);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v29[1]) == 0x80000000 )
      {
        _InterlockedOr(v38, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v41 == -1073740541 )
        *((_DWORD *)v18 + 2) = *((_DWORD *)v18 + 6);
      v15 = 0;
      v41 = 0;
      v26 = a5;
    }
  }
  if ( v39 == 1 )
  {
    if ( v18 )
    {
      v15 = *((_DWORD *)v18 + 6);
      if ( v15 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v15;
}
