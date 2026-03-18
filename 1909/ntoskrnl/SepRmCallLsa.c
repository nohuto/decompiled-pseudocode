/*
 * XREFs of SepRmCallLsa @ 0x140133120
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     SepRmDispatchDataToLsa @ 0x14013335C (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     NtWaitForSingleObject @ 0x1405FE090 (NtWaitForSingleObject.c)
 *     AdtpWriteToEtw @ 0x1406E1AC8 (AdtpWriteToEtw.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140778C20 (SepAdtOpenEtwReadyEvent.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1)
{
  char v2; // r15
  int v3; // r14d
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rax
  signed __int32 v8; // r14d
  void *v9; // rcx
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v14; // eax
  NTSTATUS v15; // ebx
  struct _KEVENT *v16; // rcx
  _QWORD *v17; // rdx
  __int64 *v18; // rcx
  struct _KEVENT *v19; // rcx
  __int64 v20; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Object; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  Object = 0LL;
  v2 = SepRmAuditingEnabled;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 1;
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Object);
    if ( (int)result < 0 )
      return result;
    v15 = NtWaitForSingleObject(Object, 1u, 0LL);
    NtClose(Object);
    if ( v15 < 0 )
      return (unsigned int)v15;
  }
  if ( v2 )
    KeStackAttachProcess(SepRmLsaCallProcess, &ApcState);
  do
  {
    v4 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_46;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v6 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v16 = (struct _KEVENT *)a1[24];
      if ( v16 )
        KeSetEvent(v16, 0, 0);
    }
    else if ( *((_DWORD *)v6 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v4 = *a1;
      if ( (__int64 **)v6[1] != a1 || (v7 = (__int64 *)*v6, *(__int64 **)(*v6 + 8) != v6) )
LABEL_43:
        __fastfail(3u);
      *a1 = v7;
      v7[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegion();
    if ( !v4 )
    {
LABEL_46:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v17 = a1 + 2;
      v18 = a1[2];
      if ( v18 == (__int64 *)(a1 + 2) )
      {
        v19 = (struct _KEVENT *)a1[25];
        if ( v19 )
          KeSetEvent(v19, 0, 0);
      }
      else if ( *((_DWORD *)v18 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v4 = a1[2];
        if ( (_QWORD *)v18[1] != v17 )
          goto LABEL_43;
        v20 = *v18;
        if ( *(__int64 **)(*v18 + 8) != v18 )
          goto LABEL_43;
        *v17 = v20;
        *(_QWORD *)(v20 + 8) = v17;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v4 )
        continue;
    }
    if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
    {
      if ( v2 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v11 = KeGetCurrentThread();
      v12 = (struct _LIST_ENTRY *)v4[7];
      v21[0] = 0;
      Blink = v11[1].WaitBlock[3].WaitListEntry.Blink;
      v11[1].WaitBlock[3].WaitListEntry.Blink = v12;
      v14 = AdtpWriteToEtw(v4[3], v21);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v14 < 0 )
      {
        SepAdtLastAuditFailStatus = v14;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v21[0] )
          SepAuditFailed((unsigned int)v14);
      }
      if ( (unsigned int)(*((_DWORD *)v4 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v4[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v9 = (void *)v4[7];
    v3 = v8 - 1;
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x69416553u);
      v4[7] = 0LL;
    }
    ((void (__fastcall *)(__int64 *))a1[27])(v4);
  }
  while ( v3 );
  if ( v2 )
    KeUnstackDetachProcess(&ApcState);
  return 0LL;
}
