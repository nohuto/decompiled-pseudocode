/*
 * XREFs of WmipReceiveNotifications @ 0x1401381D8
 * Callers:
 *     WmipIoControl @ 0x140695760 (WmipIoControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     WmipCompleteGuidIrpWithError @ 0x1400EDCE4 (WmipCompleteGuidIrpWithError.c)
 *     WmipClearIrpObjectList @ 0x14013C6FC (WmipClearIrpObjectList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     WmipEnterSMCritSection @ 0x14032B5A8 (WmipEnterSMCritSection.c)
 *     WmipLeaveSMCritSection @ 0x14032B5D4 (WmipLeaveSMCritSection.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     WmipCopyFromEventQueues @ 0x14071E198 (WmipCopyFromEventQueues.c)
 */

__int64 __fastcall WmipReceiveNotifications(unsigned int *a1, int *a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned int v4; // r14d
  _DWORD *v6; // r15
  int v7; // r13d
  PVOID *PoolWithTag; // rsi
  HANDLE *v9; // r9
  int v10; // r8d
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rdi
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  PVOID *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  char v20; // r12
  __int64 v21; // rdx
  unsigned int v22; // r8d
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  bool v27; // r14
  PVOID *v28; // rbx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ebx
  int v33; // r14d
  __int64 *v34; // r12
  __int64 v35; // r13
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v37; // [rsp+44h] [rbp-BCh]
  unsigned int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h]
  int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+54h] [rbp-ACh]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int *v43; // [rsp+60h] [rbp-A0h]
  int *v44; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[256]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *a1;
  v4 = *a2;
  v44 = a2;
  v6 = a1;
  v37 = -1073741811;
  v7 = 1;
  v43 = a1 + 2;
  if ( (unsigned int)v3 > 0x10 )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 16 * v3, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = (PVOID *)P;
  }
  WmipEnterSMCritSection();
  v10 = 0;
  LOBYTE(v41) = 0;
  v11 = 0;
  v39 = 0;
  v38 = 0;
  LOBYTE(v7) = 0;
  LOBYTE(v12) = 0;
  LODWORD(v42) = v7;
  v13 = 0LL;
  v36 = v12;
  v40 = 0;
  if ( (_DWORD)v3 )
  {
    v9 = (HANDLE *)(v6 + 2);
    while ( 1 )
    {
      v37 = ObReferenceObjectByHandle(*v9, 4u, WmipGuidObjectType, 1, &Object, 0LL);
      if ( v37 < 0 )
        break;
      v14 = Object;
      v15 = 0;
      if ( (_DWORD)v13 )
      {
        v16 = PoolWithTag;
        while ( Object != *v16 )
        {
          ++v15;
          v16 += 2;
          if ( v15 >= (unsigned int)v13 )
            goto LABEL_10;
        }
        ObfDereferenceObject(Object);
        LOBYTE(v12) = v36;
        v10 = v39;
        v11 = v40;
      }
      else
      {
LABEL_10:
        v12 = (unsigned __int8)v36;
        if ( *((_QWORD *)Object + 9) )
          v12 = 1;
        v17 = 2LL * (unsigned int)v13;
        v13 = (unsigned int)(v13 + 1);
        v36 = v12;
        PoolWithTag[v17] = Object;
        if ( *((_QWORD *)v14 + 12) )
        {
          v7 = (unsigned __int8)v7;
          if ( v14[29] )
            v7 = 1;
          LODWORD(v42) = v7;
        }
        if ( *((_QWORD *)v14 + 16) )
        {
          v30 = (unsigned __int8)v41;
          if ( v14[37] )
            v30 = 1;
          v41 = v30;
        }
        v10 = ((v14[29] + 7) & 0xFFFFFFF8) + v39;
        v18 = (v14[37] + 7) & 0xFFFFFFF8;
        v39 = v10;
        v11 = v18 + v40;
        v40 += v18;
      }
      v9 = (HANDLE *)(v43 + 2);
      ++v38;
      v43 += 2;
      if ( v38 >= (unsigned int)v3 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v19 = v10 + v11;
    v38 = v19;
    if ( (_BYTE)v12 == 1 && (_DWORD)v13 )
    {
      v34 = (__int64 *)PoolWithTag;
      v35 = (unsigned int)v13;
      do
      {
        if ( *(_QWORD *)(*v34 + 72) )
          WmipCompleteGuidIrpWithError(*v34);
        v34 += 2;
        --v35;
      }
      while ( v35 );
      v19 = v38;
      LOBYTE(v7) = v42;
    }
    v20 = v41;
    if ( (unsigned __int8)v41 | (unsigned __int8)v7 )
    {
      if ( v19 > v4 )
      {
        v33 = 56;
        v6[11] = 32;
        *v6 = 56;
        v6[12] = v19;
      }
      else
      {
        v31 = 0LL;
        v32 = v4;
        v42 = 0LL;
        if ( (_BYTE)v7 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v13, (_DWORD)v6, (_DWORD)v9, (__int64)&v36, (__int64)&v42, 1);
          LODWORD(v6) = v36 + (_DWORD)v6;
          v31 = v42;
          v32 = v4 - v36;
        }
        if ( v20 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v13, (_DWORD)v6, (_DWORD)v9, (__int64)&v36, (__int64)&v42, 0);
          v32 -= v36;
          v31 = v42;
        }
        if ( v31 )
          *(_DWORD *)(v31 + 12) = 0;
        v33 = v4 - v32;
      }
      *v44 = v33;
    }
    else
    {
      v21 = a3 + 120;
      v22 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      *(_QWORD *)(a3 + 128) = a3 + 120;
      *(_QWORD *)(a3 + 120) = a3 + 120;
      if ( (_DWORD)v13 )
      {
        do
        {
          v23 = PoolWithTag[2 * v22];
          v23[9] = a3;
          v24 = v23 + 10;
          v25 = *(_QWORD **)(a3 + 128);
          if ( *v25 != v21 )
            __fastfail(3u);
          *v24 = v21;
          ++v22;
          v24[1] = v25;
          *v25 = v24;
          *(_QWORD *)(a3 + 128) = v24;
        }
        while ( v22 < (unsigned int)v13 );
      }
      v26 = *(_QWORD *)(a3 + 184);
      v37 = 259;
      v27 = 0;
      *(_BYTE *)(v26 + 3) |= 1u;
      KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)&WmipNotificationIrpCancel);
      if ( *(_BYTE *)(a3 + 68) )
      {
        WmipClearIrpObjectList(a3);
        v37 = -1073741536;
        v27 = _InterlockedExchange64((volatile __int64 *)(a3 + 104), 0LL) != 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v27 )
      {
        *(_QWORD *)(a3 + 56) = 0LL;
        *(_DWORD *)(a3 + 48) = -1073741536;
        IofCompleteRequest((PIRP)a3, 0);
      }
      *v44 = 0;
    }
  }
  WmipLeaveSMCritSection();
  if ( (_DWORD)v13 )
  {
    v28 = PoolWithTag;
    do
    {
      ObfDereferenceObject(*v28);
      v28 += 2;
      --v13;
    }
    while ( v13 );
  }
  if ( PoolWithTag != (PVOID *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v37;
}
