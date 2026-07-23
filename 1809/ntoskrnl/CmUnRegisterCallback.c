/*
 * XREFs of CmUnRegisterCallback @ 0x1407EC210
 * Callers:
 *     VrpDecrementSiloCount @ 0x140808C1C (VrpDecrementSiloCount.c)
 *     EtwpRegTraceEnableCallback @ 0x1408BDBD0 (EtwpRegTraceEnableCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectSafe @ 0x14010C190 (ObReferenceObjectSafe.c)
 *     ExBlockOnAddressPushLock @ 0x140111A80 (ExBlockOnAddressPushLock.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rdi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rdx
  char **v6; // rax
  __int64 v7; // rcx
  char **v8; // rax
  char v9; // si
  struct _KTHREAD *v10; // rax
  char *v11; // r13
  char *v12; // rax
  char *v13; // rbx
  char *v14; // r15
  char *v15; // r14
  __int64 v16; // rdx
  char **v17; // rcx
  __int64 v18; // rcx
  char **v19; // rax
  char **v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rcx
  PVOID *v23; // rbx
  struct _KTHREAD *v24; // rax
  char *v25; // rbx
  PSLIST_ENTRY v26; // rbx
  PSLIST_ENTRY v27; // rcx
  void *v28; // rcx
  _QWORD *v30; // [rsp+30h] [rbp-98h] BYREF
  char *v31; // [rsp+38h] [rbp-90h]
  __int64 *v32; // [rsp+40h] [rbp-88h]
  char *v33; // [rsp+48h] [rbp-80h]
  __int64 *v34; // [rsp+50h] [rbp-78h] BYREF
  char *v35; // [rsp+58h] [rbp-70h]
  PVOID v36[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v37; // [rsp+70h] [rbp-58h] BYREF
  __int64 v38; // [rsp+78h] [rbp-50h]
  __int64 v39; // [rsp+80h] [rbp-48h]
  __int64 v40; // [rsp+E0h] [rbp+18h] BYREF
  char *v41; // [rsp+E8h] [rbp+20h] BYREF

  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  CmpInitializeThreadInfo(v36);
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  NextElement = CmListGetNextElement((_QWORD **)&CallbackListHead, &v30, 0);
  v31 = NextElement;
  if ( !NextElement )
  {
LABEL_42:
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    CmCleanupThreadInfo(v36);
    return -1073741811;
  }
  while ( 1 )
  {
    if ( *((_QWORD *)NextElement + 3) != Cookie.QuadPart )
      goto LABEL_41;
    LODWORD(v40) = *((_DWORD *)NextElement + 4);
    if ( !(_DWORD)v40 )
      break;
    if ( (v40 & 0x80000000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)NextElement + 4, 0x80000000);
      ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      while ( 1 )
      {
        LODWORD(v40) = *((_DWORD *)NextElement + 4);
        if ( (_DWORD)v40 == 0x80000000 )
          break;
        ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)NextElement + 2, &v40, 4uLL, 0LL);
      }
      v4 = KeGetCurrentThread();
      --v4->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
      v5 = *(_QWORD *)NextElement;
      v6 = (char **)*((_QWORD *)NextElement + 1);
      if ( *(char **)(*(_QWORD *)NextElement + 8LL) == NextElement && *v6 == NextElement )
      {
        *v6 = (char *)v5;
        *(_QWORD *)(v5 + 8) = v6;
        goto LABEL_14;
      }
LABEL_40:
      __fastfail(3u);
    }
LABEL_41:
    NextElement = CmListGetNextElement((_QWORD **)&CallbackListHead, &v30, 0);
    v31 = NextElement;
    if ( !NextElement )
      goto LABEL_42;
  }
  v7 = *(_QWORD *)NextElement;
  v8 = (char **)*((_QWORD *)NextElement + 1);
  if ( *(char **)(*(_QWORD *)NextElement + 8LL) != NextElement || *v8 != NextElement )
    goto LABEL_40;
  *v8 = (char *)v7;
  *(_QWORD *)(v7 + 8) = v8;
LABEL_14:
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v35 = (char *)&v34;
  v34 = (__int64 *)&v34;
  v9 = 0;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v11 = NextElement + 64;
  v12 = (char *)*((_QWORD *)NextElement + 8);
  v41 = v12;
  v33 = NextElement + 64;
  if ( v12 != NextElement + 64 )
  {
    v13 = v12;
    do
    {
      v14 = *(char **)v12;
      v15 = v12 - 16;
      if ( ObReferenceObjectSafe(*((_QWORD *)v12 + 4)) )
      {
        v16 = *((_QWORD *)v15 + 2);
        v17 = (char **)*((_QWORD *)v15 + 3);
        if ( *(char **)(v16 + 8) != v15 + 16 )
          goto LABEL_40;
        if ( *v17 != v15 + 16 )
          goto LABEL_40;
        *v17 = (char *)v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = *(_QWORD *)v15;
        v19 = (char **)*((_QWORD *)v15 + 1);
        if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
          goto LABEL_40;
        if ( *v19 != v15 )
          goto LABEL_40;
        *v19 = (char *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = (char **)v35;
        if ( *(__int64 ***)v35 != &v34 )
          goto LABEL_40;
        *(_QWORD *)v13 = &v34;
        *((_QWORD *)v13 + 1) = v20;
        *v20 = v13;
        v35 = v13;
      }
      else
      {
        v9 = 1;
      }
      v12 = v14;
      v41 = v14;
      v13 = v14;
    }
    while ( v14 != v11 );
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    v21 = v34;
    if ( v34 == (__int64 *)&v34 )
      break;
    v22 = (__int64 *)*v34;
    if ( (__int64 **)v34[1] != &v34 || (__int64 *)v22[1] != v34 )
      goto LABEL_40;
    v34 = (__int64 *)*v34;
    v22[1] = (__int64)&v34;
    v23 = (PVOID *)(v21 - 2);
    v32 = v21 - 2;
    v37 = v21[4];
    v38 = v21[5];
    (*((void (__fastcall **)(_QWORD, __int64, __int64 *))NextElement + 5))(*((_QWORD *)NextElement + 4), 40LL, &v37);
    ObfDereferenceObject(v23[6]);
    ExFreePoolWithTag(v23, 0x63634D43u);
  }
  while ( v9 )
  {
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
    v41 = (char *)*((_QWORD *)NextElement + 8);
    v25 = v41;
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v25 == v11 )
      v9 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)NextElement + 8, &v41, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v26 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v26 )
    {
      v27 = v26;
      v26 = v26->Next;
      ExFreePoolWithTag(v27, 0);
    }
  }
  v28 = (void *)*((_QWORD *)NextElement + 7);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  ExFreePoolWithTag(NextElement, 0);
  CmCleanupThreadInfo(v36);
  return 0;
}
