/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x1C00322D0
 * Callers:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002D948 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C0031E60 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001218 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqxxqpp @ 0x1C0031B3C (McTemplateK0pqxxqpp.c)
 *     VidSchControlVSyncAdapter @ 0x1C007C410 (VidSchControlVSyncAdapter.c)
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
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // [rsp+28h] [rbp-19h]
  int v21; // [rsp+40h] [rbp-1h]
  __int64 v22; // [rsp+58h] [rbp+17h] BYREF
  __int64 *v23; // [rsp+60h] [rbp+1Fh]
  char v24; // [rsp+68h] [rbp+27h]
  _BYTE v25[40]; // [rsp+70h] [rbp+2Fh] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
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
  if ( *((_QWORD *)P + 4) )
  {
    v22 = *((_QWORD *)P + 4);
    v5 = *(_QWORD *)P;
    v23 = 0LL;
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[66])(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2520LL),
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
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v14);
  }
  AcquireSpinLock::AcquireSpinLock(
    (AcquireSpinLock *)v25,
    (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 1648LL),
    v13,
    0);
  v15 = (unsigned int)P[2];
  v23 = &v22;
  v24 = 0;
  v22 = (__int64)&v22;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 8 * v15 + 2576) + 66432LL)
            + 8LL * (unsigned __int8)P[6]) = 0LL;
  _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(*(_VIDSCH_SYNC_OBJECT **)P, (struct HwQueueStagingList *)&v22, 1);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v22);
  AcquireSpinLock::Release((AcquireSpinLock *)v25);
  VidSchiReleaseSyncObjectReference(*(char **)P);
  v18 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_DWORD *)(v18 + 168) != 6 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v19 + 24) = 354LL;
    WdLogEvent5_WdAssertion(v19);
  }
  *(_QWORD *)(v18 + 160) = 0LL;
  ExFreePoolWithTag(P, 0x62616956u);
}
