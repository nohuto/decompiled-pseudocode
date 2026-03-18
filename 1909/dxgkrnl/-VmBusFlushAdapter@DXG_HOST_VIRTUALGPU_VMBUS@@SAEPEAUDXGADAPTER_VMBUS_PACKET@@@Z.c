/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021F590
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CAB4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // r14
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r8d
  unsigned int v14; // r13d
  unsigned int v15; // esi
  __int64 v16; // r15
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r13
  _QWORD **v20; // r15
  _QWORD *i; // rbx
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGADAPTER *v24; // [rsp+38h] [rbp-C8h] BYREF
  DXGADAPTER *v25; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v29[72]; // [rsp+B8h] [rbp-48h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v26,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v5 + 24) = 2504LL;
    WdLogEvent5_WdError(v5);
LABEL_4:
    v8 = 0;
    goto LABEL_25;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v7 = v6;
  if ( !v6 )
    goto LABEL_4;
  v9 = *((_QWORD *)a1 + 5);
  v23 = -1073741811;
  v8 = 1;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v25,
    *(unsigned int *)(v6 + 24),
    *(struct _KTHREAD ***)(v9 + 88),
    &v24,
    1);
  if ( v24 )
  {
    if ( (unsigned int)(*(_DWORD *)(v7 + 28) - 1) > 9 )
    {
      v12 = WdLogNewEntry5_WdError(v10, v24, v11);
      *(_QWORD *)(v12 + 24) = *(int *)(v7 + 28);
      goto LABEL_22;
    }
    if ( !*((_QWORD *)v24 + 320) )
    {
      v12 = WdLogNewEntry5_WdError(v10, v24, v11);
      *(_QWORD *)(v12 + 24) = 2527LL;
      goto LABEL_22;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v27, v24, 0LL);
    v14 = v13 + 2;
    if ( (int)COREADAPTERACCESS::AcquireExclusive(&v27, (unsigned int)(v13 + 2)) >= 0 )
    {
      v15 = v14 + 1;
      v16 = *((_QWORD *)a1 + 5);
      v17 = *(_DWORD *)(v7 + 28) - (v14 + 1);
      if ( !v17 )
      {
        v15 = v14;
LABEL_16:
        v19 = v16 + 56;
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v16 + 56));
        v20 = (_QWORD **)(v16 + 240);
        for ( i = *v20; i != v20; i = (_QWORD *)*i )
          DXGDEVICE::FlushScheduler(i - 11, v15);
        *(_QWORD *)(v19 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v19, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_16;
      if ( v18 == 1 )
      {
        v15 = v14 + 2;
        goto LABEL_16;
      }
    }
LABEL_20:
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    goto LABEL_23;
  }
  v12 = WdLogNewEntry5_WdError(v10, 0LL, v11);
  *(_QWORD *)(v12 + 24) = *(unsigned int *)(v7 + 24);
LABEL_22:
  WdLogEvent5_WdError(v12);
LABEL_23:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v23, 4u);
  if ( v25 )
    DXGADAPTER::ReleaseReferenceNoTracking(v25);
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return v8;
}
