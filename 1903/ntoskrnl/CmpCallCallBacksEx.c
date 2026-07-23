/*
 * XREFs of CmpCallCallBacksEx @ 0x1405F7B50
 * Callers:
 *     CmpParseKey @ 0x1405F8510 (CmpParseKey.c)
 *     CmPostCallbackNotification @ 0x1405FECFC (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1405FEDC8 (CmpCallCallBacks.c)
 *     NtQueryKey @ 0x1405FF6B0 (NtQueryKey.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     NtEnumerateKey @ 0x14064F940 (NtEnumerateKey.c)
 *     CmPostCallbackNotificationEx @ 0x140687860 (CmPostCallbackNotificationEx.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     NtReplaceKey @ 0x140824BF0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140824F70 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140825240 (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpFreeCallbackContext @ 0x14027F8CC (CmpFreeCallbackContext.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpCallbackFillObjectContext @ 0x1405F80F0 (CmpCallbackFillObjectContext.c)
 *     CmpCallbackFatalFilter @ 0x140825FC0 (CmpCallbackFatalFilter.c)
 */

__int64 __fastcall CmpCallCallBacksEx(
        unsigned int a1,
        __int64 a2,
        _SLIST_ENTRY *a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r14
  _SLIST_ENTRY *v8; // r12
  _QWORD *v11; // rax
  struct _KTHREAD *CurrentThread; // rcx
  PVOID Object; // rax
  __int64 *v14; // r12
  struct _KTHREAD *v15; // rax
  _SLIST_ENTRY *v16; // r13
  int v17; // esi
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  _SLIST_ENTRY *v21; // r14
  __int64 v22; // rcx
  _SLIST_ENTRY *v23; // rbx
  _SLIST_ENTRY **v24; // rax
  _SLIST_ENTRY *v25; // rsi
  _SLIST_ENTRY *v26; // r8
  PVOID *v27; // rax
  unsigned int v28; // ecx
  struct _KTHREAD *v29; // rcx
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v31; // rdx
  _SLIST_ENTRY **v32; // rax
  _SLIST_ENTRY *v33; // rcx
  int v34; // ecx
  struct _KTHREAD *v35; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v37; // rax
  PVOID *v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  signed __int32 v41[8]; // [rsp+0h] [rbp-108h] BYREF
  char v42; // [rsp+20h] [rbp-E8h]
  char v43; // [rsp+21h] [rbp-E7h]
  int v44; // [rsp+24h] [rbp-E4h]
  _QWORD *v45; // [rsp+30h] [rbp-D8h]
  _SLIST_ENTRY *v46; // [rsp+38h] [rbp-D0h]
  __int64 *v47; // [rsp+40h] [rbp-C8h]
  _SLIST_ENTRY *v48; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *v49; // [rsp+50h] [rbp-B8h]
  _SLIST_ENTRY *v50; // [rsp+58h] [rbp-B0h]
  _QWORD *v51; // [rsp+60h] [rbp-A8h] BYREF
  _SLIST_ENTRY *v52; // [rsp+68h] [rbp-A0h]
  _QWORD v53[7]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-60h]
  __int64 v55; // [rsp+B0h] [rbp-58h]

  v7 = a4;
  v8 = a3;
  v50 = a3;
  v55 = a2;
  v54 = a6;
  v44 = 0;
  v11 = 0LL;
  memset(v53, 0, sizeof(v53));
  v51 = 0LL;
  v52 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v42 = 0;
  CurrentThread = KeGetCurrentThread();
  v49 = CurrentThread;
  if ( a4 == 1 )
  {
    Object = CurrentThread[1].WaitBlock[0].Object;
    if ( Object )
      v14 = (__int64 *)*((_QWORD *)Object + 1);
    else
      v14 = &CallbackListHead;
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    v16 = (_SLIST_ENTRY *)a7;
    while ( 1 )
    {
      do
      {
        v14 = (__int64 *)*v14;
        v47 = v14;
        v43 = 1;
        if ( v14 == &CallbackListHead )
          goto LABEL_6;
      }
      while ( *((int *)v14 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v14 + 4);
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v29 = KeGetCurrentThread();
      v19 = v29->KernelApcDisable++ == -1;
      if ( v19
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v29->ApcState.ApcListHead[0].Flink != &v29->152
        && !v29->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v29);
      }
      v43 = 0;
      PoolWithTag = RtlpInterlockedPopEntrySList(&CmpCallbackContextSList);
      if ( !PoolWithTag )
        PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
      v46 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = v14;
      PoolWithTag[2].Next = 0LL;
      v31 = v49;
      PoolWithTag[1].Next = (_SLIST_ENTRY *)v49[1].WaitBlock[0].Object;
      v31[1].WaitBlock[0].Object = &PoolWithTag[1];
      v32 = *(_SLIST_ENTRY ***)(a7 + 8);
      if ( *v32 != (_SLIST_ENTRY *)a7 )
        __fastfail(3u);
      PoolWithTag->Next = (_SLIST_ENTRY *)a7;
      *((_QWORD *)&PoolWithTag->Next + 1) = v32;
      *v32 = PoolWithTag;
      *(_QWORD *)(a7 + 8) = PoolWithTag;
      CmpCallbackFillObjectContext(a1, a2, v14 + 3);
      v33 = a3;
      if ( !a3 || (*((_DWORD *)v14 + 5) & 1) == 0 )
        v33 = (_SLIST_ENTRY *)a2;
      v34 = ((__int64 (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *))v14[5])(v14[4], (int)a1, v33);
      v44 = v34;
      if ( a1 == 14 )
      {
        v44 = 0;
      }
      else if ( v34 < 0 )
      {
        Next = PoolWithTag->Next;
        v37 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
        if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v37 != PoolWithTag )
          __fastfail(3u);
        *v37 = Next;
        *((_QWORD *)&Next->Next + 1) = v37;
        v38 = (PVOID *)v49[1].WaitBlock[0].Object;
        if ( v38 )
          v49[1].WaitBlock[0].Object = *v38;
        CmpFreeCallbackContext(PoolWithTag);
        if ( _InterlockedDecrement((volatile signed __int32 *)v14 + 4) == 0x80000000 )
        {
          _InterlockedOr(v41, 0);
          if ( CallbackListDeleteEvent )
            ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
        }
        v7 = 0;
        v42 = 1;
LABEL_6:
        v17 = v44;
        goto LABEL_7;
      }
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
LABEL_51:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
          *(_QWORD *)(a2 + 40) = 0LL;
          break;
        case 0xEu:
LABEL_47:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_47;
            case 1u:
            case 5u:
            case 6u:
              goto LABEL_51;
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
              goto LABEL_49;
          }
          break;
      }
LABEL_49:
      v35 = KeGetCurrentThread();
      --v35->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)v14 + 4) == 0x80000000 )
    {
      _InterlockedOr(v41, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
    v17 = -1073741670;
    v44 = -1073741670;
    v42 = 1;
    v7 = 0;
LABEL_7:
    if ( v43 )
    {
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v18 = KeGetCurrentThread();
      v19 = v18->KernelApcDisable++ == -1;
      if ( v19
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v18->ApcState.ApcListHead[0].Flink != &v18->152
        && !v18->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v18);
      }
      v17 = v44;
    }
    v8 = a3;
    v11 = v45;
  }
  else
  {
    v16 = (_SLIST_ENTRY *)a7;
    v17 = v44;
  }
  if ( !v7 )
  {
    if ( v42 == 1 )
    {
      memset(v53, 0, sizeof(v53));
      v21 = (_SLIST_ENTRY *)v53;
      v45 = v53;
      v22 = a5;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        v53[0] = v54;
      }
      else
      {
        if ( v17 == -1073740541 )
          v39 = **(_QWORD **)(a2 + 72);
        else
          v39 = 0LL;
        v53[0] = v39;
      }
      if ( v17 == -1073740541 )
      {
        v40 = 0;
        if ( ((a1 - 26) & 0xFFFFFFFD) == 0 )
          v40 = *((_DWORD *)&v8->Next + 2);
        LODWORD(v53[1]) = v40;
      }
      else
      {
        LODWORD(v53[1]) = v17;
        v40 = v17;
      }
      LODWORD(v53[3]) = v40;
      v53[2] = v55;
      if ( v8 )
      {
        v48 = (_SLIST_ENTRY *)&v51;
        v51 = v53;
        v52 = v50;
      }
    }
    else
    {
      v21 = (_SLIST_ENTRY *)a2;
      v45 = (_QWORD *)a2;
      v48 = v8;
      v22 = a1;
      a5 = a1;
    }
    while ( v16->Next != v16 )
    {
      v23 = (_SLIST_ENTRY *)*((_QWORD *)&v16->Next + 1);
      v50 = v23;
      v24 = (_SLIST_ENTRY **)*((_QWORD *)&v23->Next + 1);
      if ( v23->Next != v16 || *v24 != v23 )
        __fastfail(3u);
      *((_QWORD *)&v16->Next + 1) = v24;
      *v24 = v16;
      v46 = (_SLIST_ENTRY *)*((_QWORD *)&v23[1].Next + 1);
      v25 = v46;
      v21[2].Next = v23[2].Next;
      CmpCallbackFillObjectContext(v22, v21, &v25[1].Next + 1);
      if ( v8 && (HIDWORD(v25[1].Next) & 1) != 0 )
        v26 = v48;
      else
        v26 = v21;
      v44 = (*((__int64 (__fastcall **)(_SLIST_ENTRY *, _QWORD, _SLIST_ENTRY *))&v25[2].Next + 1))(
              v25[2].Next,
              (int)a5,
              v26);
      v27 = (PVOID *)v49[1].WaitBlock[0].Object;
      if ( v27 )
        v49[1].WaitBlock[0].Object = *v27;
      v28 = CmpCallBackCount * KeNumberProcessors_0;
      if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
        v28 = 64;
      if ( LOWORD(CmpCallbackContextSList.Alignment) >= v28 )
        ExFreePoolWithTag(v23, 0);
      else
        RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, v23);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v25[1]) == 0x80000000 )
      {
        _InterlockedOr(v41, 0);
        if ( CallbackListDeleteEvent )
          ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
      }
      if ( v44 == -1073740541 )
        *((_DWORD *)&v21->Next + 2) = *((_DWORD *)&v21[1].Next + 2);
      v17 = 0;
      v44 = 0;
      v22 = a5;
    }
    v11 = v45;
  }
  if ( v42 == 1 )
  {
    if ( v11 )
    {
      v17 = *((_DWORD *)v11 + 6);
      if ( v17 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v17;
}
