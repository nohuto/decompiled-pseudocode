/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x140645CD0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140645B30 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140104560 (ObReferenceObjectSafe.c)
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     AlpcpReadMessageData @ 0x140645FCC (AlpcpReadMessageData.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CB4E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885AD8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(_QWORD *a1, unsigned __int64 a2, __int64 *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v8; // r12
  _DWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // r15
  unsigned int v14; // r14d
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rdx
  void **v18; // rdi
  _DWORD *v19; // [rsp+30h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v22; // [rsp+48h] [rbp-60h]
  void *v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  struct _KTHREAD *v25; // [rsp+B0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  v8 = CurrentThread->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  v21 = 0LL;
  v9 = (_DWORD *)*a1;
  v19 = (_DWORD *)*a1;
  v22 = (_DWORD *)*a1;
  if ( v8 )
  {
    if ( a3 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a3;
      v24 = *(_QWORD *)v12;
      v21 = v24;
      a3 = &v21;
    }
    if ( a2 )
    {
      v10 = a2;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 39) = *(_BYTE *)(v10 + 39);
    }
    if ( a4 )
    {
      v11 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
  }
  else
  {
    v8 = (CurrentThread->MiscFlags & 0x400) != 0;
  }
  v13 = 0LL;
  v23 = 0LL;
  if ( (v9[104] & 6) == 6 )
  {
    v18 = (void **)*((_QWORD *)v9 + 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v18 - 2), 0LL);
    v13 = *v18;
    v23 = v13;
    if ( v13 && ObReferenceObjectSafe((__int64)v13) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v18 - 2);
      KeAbPostRelease((ULONG_PTR)(v18 - 2));
      v19 = v13;
      v22 = v13;
      *a1 = v13;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v18 - 2);
    KeAbPostRelease((ULONG_PTR)(v18 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_17:
    while ( 1 )
    {
      v14 = AlpcpReceiveMessagePort(a1, v8, (__int64)a3, &BugCheckParameter2, 0);
      if ( v14 )
        break;
      v15 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 200) = v25;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v15 + 240);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v15 + 256);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v15 + 272);
          if ( (v19[64] & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) &= 0xC00Fu;
          v16 = a2 + 40;
          if ( *(_QWORD *)(v15 + 176) )
            AlpcpGetDataFromUserVaSafe(v15, v16);
          else
            AlpcpReadMessageData(v15, v16);
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v15 + 120);
        if ( a2 )
        {
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v15);
          AlpcpUnlockBlob(v15);
        }
        else
        {
          *(_QWORD *)(v15 + 200) = 0LL;
          AlpcpCancelMessage(v19, v15, 0x10000LL);
        }
        break;
      }
      if ( *(_DWORD **)(BugCheckParameter2 + 64) == v19 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      AlpcpCancelMessage(v19, v15, 0x10000LL);
      BugCheckParameter2 = 0LL;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
    return v14;
  }
}
