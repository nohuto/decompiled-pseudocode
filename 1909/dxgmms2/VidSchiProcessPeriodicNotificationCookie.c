/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x1C002F1BC
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0004330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002DCC0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00081E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     McTemplateK0pqqiix @ 0x1C002CA4C (McTemplateK0pqqiix.c)
 *     McTemplateK0qqix @ 0x1C002DA08 (McTemplateK0qqix.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C002DF4C (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C0031E10 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiProcessPeriodicNotificationCookie(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v6; // rdi
  union _SLIST_HEADER *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONGLONG Alignment; // rbx
  _QWORD *v11; // rbx
  unsigned __int64 Region; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rsi
  unsigned __int64 *v23; // [rsp+28h] [rbp-29h]
  __int64 v24; // [rsp+30h] [rbp-21h]
  _QWORD v25[2]; // [rsp+58h] [rbp+7h] BYREF
  char v26; // [rsp+68h] [rbp+17h]
  _QWORD v27[4]; // [rsp+70h] [rbp+1Fh] BYREF
  __int16 v28; // [rsp+90h] [rbp+3Fh]
  int v29; // [rsp+B8h] [rbp+67h] BYREF
  unsigned __int64 v30; // [rsp+C0h] [rbp+6Fh] BYREF

  v4 = *(unsigned int *)(a2 + 48);
  v6 = *(unsigned int *)(a2 + 52);
  v7 = *(union _SLIST_HEADER **)(a1 + 8 * v4 + 2576);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    McTemplateK0qqix(a1, v4, a3, v4, v6, v7[2074].Region, v7[2074].Alignment);
  ExpInterlockedPushEntrySList(v7 + 4154, (PSLIST_ENTRY)(a2 + 16));
  v28 = 0;
  v27[0] = a1 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v27);
  v26 = 0;
  v25[1] = v25;
  v25[0] = v25;
  Alignment = v7[4153].Alignment;
  if ( !Alignment
    || (v9 = (unsigned __int8)v6, (v11 = *(_QWORD **)(Alignment + 8LL * (unsigned __int8)v6)) == 0LL)
    || *((_DWORD *)v11 + 6) != (_DWORD)v6 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8);
    v17[3] = v6;
    goto LABEL_18;
  }
  Region = v7[2074].Region;
  v13 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)v11, Region, v7[2074].Alignment, &v29);
  v30 = v13;
  if ( v11[7] == v13 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15, v14);
    v17[3] = v30;
LABEL_18:
    WdLogEvent5_WdAssertion(v17);
    goto LABEL_19;
  }
  if ( v11[7] > v13 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v15, &EventPerformanceWarning, v16, 25);
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15, v14);
    v17[3] = v30;
    v17[4] = v11[7];
    goto LABEL_18;
  }
  v18 = VidSchiSignalSyncObjectsFromCpu(
          (struct HwQueueStagingList *)v25,
          1u,
          (struct _VIDSCH_SYNC_OBJECT **)v11,
          0,
          &v30);
  v22 = v18;
  if ( v18 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v20, v19);
    v17[3] = *((unsigned int *)v11 + 2);
    v17[4] = v6;
    v17[5] = v22;
    goto LABEL_18;
  }
  v11[7] = v30;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    LODWORD(v24) = v6;
    LODWORD(v23) = *((_DWORD *)v11 + 2);
    McTemplateK0pqqiix(v20, v19, v21, *v11, v23, v24, Region, 0LL, v30);
  }
LABEL_19:
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v25);
  AcquireSpinLock::Release((AcquireSpinLock *)v27);
}
