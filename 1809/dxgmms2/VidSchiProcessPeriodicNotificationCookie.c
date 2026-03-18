/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x1C002EA14
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002D5AC (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     McTemplateK0pqqiix @ 0x1C002C1BC (McTemplateK0pqqiix.c)
 *     McTemplateK0qqix @ 0x1C002D2F4 (McTemplateK0qqix.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C002D838 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiProcessPeriodicNotificationCookie(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v6; // rdi
  union _SLIST_HEADER *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONGLONG Alignment; // rbx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  const GUID *v16; // r8
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rsi
  unsigned __int64 *v24; // [rsp+20h] [rbp-39h]
  __int64 v25; // [rsp+28h] [rbp-31h]
  _QWORD v26[2]; // [rsp+50h] [rbp-9h] BYREF
  char v27; // [rsp+60h] [rbp+7h]
  _BYTE v28[72]; // [rsp+68h] [rbp+Fh] BYREF
  int v29; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp+6Fh] BYREF

  v4 = *(unsigned int *)(a2 + 48);
  v6 = *(unsigned int *)(a2 + 52);
  v7 = *(union _SLIST_HEADER **)(a1 + 8 * v4 + 2576);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    McTemplateK0qqix(a1, v4, a3, v4, v6, v7[2074].Alignment, v7[2073].Region);
  ExpInterlockedPushEntrySList(v7 + 4153, (PSLIST_ENTRY)(a2 + 16));
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v28, (unsigned __int64 *)(a1 + 1648), v8, 0);
  v27 = 0;
  v26[1] = v26;
  v26[0] = v26;
  Alignment = v7[4152].Alignment;
  if ( !Alignment
    || (v10 = (unsigned __int8)v6, (v12 = *(_QWORD **)(Alignment + 8LL * (unsigned __int8)v6)) == 0LL)
    || *((_DWORD *)v12 + 6) != (_DWORD)v6 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, v9);
    v18[3] = v6;
    goto LABEL_18;
  }
  v13 = v7[2074].Alignment;
  v14 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)v12, v13, v7[2073].Region, &v29);
  v30 = v14;
  v17 = v12[7];
  if ( v17 == v14 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v15);
    v18[3] = v30;
LABEL_18:
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_19;
  }
  if ( v17 > v14 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v17, &EventPerformanceWarning, v16, 25);
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v15);
    v18[3] = v30;
    v18[4] = v12[7];
    goto LABEL_18;
  }
  v19 = VidSchiSignalSyncObjectsFromCpu(
          (struct HwQueueStagingList *)v26,
          1u,
          (struct _VIDSCH_SYNC_OBJECT **)v12,
          0,
          &v30);
  v23 = v19;
  if ( v19 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21, v20);
    v18[3] = *((unsigned int *)v12 + 2);
    v18[4] = v6;
    v18[5] = v23;
    goto LABEL_18;
  }
  v12[7] = v30;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v25) = v6;
    LODWORD(v24) = *((_DWORD *)v12 + 2);
    McTemplateK0pqqiix(v21, v20, v22, *v12, v24, v25, v13, 0LL, v30);
  }
LABEL_19:
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v26);
  AcquireSpinLock::Release((AcquireSpinLock *)v28);
}
