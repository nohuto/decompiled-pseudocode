/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x1C0032B20
 * Callers:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002E058 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C00326B0 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001220 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009E00 (VidSchiReleaseSyncObjectReference.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqxxqpp @ 0x1C003238C (McTemplateK0pqxxqpp.c)
 *     VidSchControlVSyncAdapter @ 0x1C007CE40 (VidSchControlVSyncAdapter.c)
 */

void __fastcall VidSchDestroyPeriodicFrameNotification(_DWORD *P, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // [rsp+28h] [rbp-19h]
  int v21; // [rsp+40h] [rbp-1h]
  __int64 v22; // [rsp+58h] [rbp+17h] BYREF
  __int64 *v23; // [rsp+60h] [rbp+1Fh]
  char v24; // [rsp+68h] [rbp+27h]
  _QWORD v25[4]; // [rsp+70h] [rbp+2Fh] BYREF
  __int16 v26; // [rsp+90h] [rbp+4Fh]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    v21 = P[6];
    v20 = P[2];
    McTemplateK0pqxxqpp(
      (__int64)P,
      &EventDestroyPeriodicFrameNotification,
      a3,
      *(_QWORD *)P,
      v20,
      *((_QWORD *)P + 2),
      *((_QWORD *)P + 6),
      v21,
      *((_QWORD *)P + 4),
      *((_QWORD *)P + 5));
  }
  v4 = *((_QWORD *)P + 5);
  if ( v4 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    ExDeleteTimer(v4, a2, a3, 0LL);
  }
  v5 = *((_QWORD *)P + 4);
  if ( v5 )
  {
    v23 = 0LL;
    v22 = v5;
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[66])(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 16LL) + 2552LL),
           &v22);
    v9 = v6;
    if ( v6 < 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v10 + 24) = v9;
      WdLogEvent5_WdAssertion(v10);
    }
  }
  if ( (int)VidSchControlVSyncAdapter(*(_QWORD *)(*(_QWORD *)P + 8LL), 3LL, 0LL) < 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(_QWORD *)(*(_QWORD *)P + 8LL);
  v26 = 0;
  v25[0] = v14 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v25);
  v15 = *(_QWORD *)P;
  v23 = &v22;
  v24 = 0;
  v22 = (__int64)&v22;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL * (unsigned int)P[2] + 2576) + 66448LL)
            + 8LL * (unsigned __int8)P[6]) = 0LL;
  _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(*(_VIDSCH_SYNC_OBJECT **)P, (struct HwQueueStagingList *)&v22, 1);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v22);
  AcquireSpinLock::Release((AcquireSpinLock *)v25);
  VidSchiReleaseSyncObjectReference(*(char **)P);
  v18 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_DWORD *)(v18 + 192) != 6 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v19 + 24) = 350LL;
    WdLogEvent5_WdAssertion(v19);
  }
  *(_QWORD *)(v18 + 160) = 0LL;
  ExFreePoolWithTag(P, 0x62616956u);
}
