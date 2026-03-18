/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF520
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r8d
  unsigned int v12; // r13d
  unsigned int v13; // esi
  __int64 v14; // r15
  __int64 v15; // r13
  _QWORD **v16; // r15
  _QWORD *i; // rbx
  DXGADAPTER *v19; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v22[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v23[40]; // [rsp+88h] [rbp+Fh] BYREF
  int v24; // [rsp+E0h] [rbp+67h] BYREF
  struct DXGADAPTER *v25; // [rsp+E8h] [rbp+6Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v3 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v3 + 24) = 2542LL;
    WdLogEvent5_WdError(v3);
LABEL_4:
    v6 = 0;
    goto LABEL_26;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  v7 = *((_QWORD *)a1 + 5);
  v24 = -1073741811;
  v6 = 1;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v19,
    *(_DWORD *)(v4 + 24),
    *(struct _KTHREAD ***)(v7 + 88),
    &v25,
    1);
  if ( !v25 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    v10 = *(unsigned int *)(v5 + 24);
LABEL_22:
    *(_QWORD *)(v9 + 24) = v10;
    goto LABEL_23;
  }
  if ( (unsigned int)(*(_DWORD *)(v5 + 28) - 1) > 9 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    v10 = *(int *)(v5 + 28);
    goto LABEL_22;
  }
  if ( *((_QWORD *)v25 + 316) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v21, v25, 0LL);
    v12 = v11 + 2;
    if ( (int)COREADAPTERACCESS::AcquireExclusive(&v21, (unsigned int)(v11 + 2)) < 0 )
    {
LABEL_11:
      COREACCESS::~COREACCESS((COREACCESS *)v23);
      COREACCESS::~COREACCESS((COREACCESS *)v22);
      goto LABEL_24;
    }
    v13 = 3;
    v14 = *((_QWORD *)a1 + 5);
    if ( *(_DWORD *)(v5 + 28) == 3 )
    {
      v13 = v12;
    }
    else if ( *(_DWORD *)(v5 + 28) != 4 )
    {
      if ( *(_DWORD *)(v5 + 28) != 5 )
        goto LABEL_11;
      v13 = 4;
    }
    v15 = v14 + 56;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v14 + 56));
    v16 = (_QWORD **)(v14 + 240);
    for ( i = *v16; i != v16; i = (_QWORD *)*i )
      DXGDEVICE::FlushScheduler(i - 11, v13);
    *(_QWORD *)(v15 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_11;
  }
  v9 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v9 + 24) = 2565LL;
LABEL_23:
  WdLogEvent5_WdError(v9);
LABEL_24:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v24, 4u);
  if ( v19 )
    DXGADAPTER::ReleaseReference(v19);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v6;
}
