/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021FC40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C904 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  PERESOURCE *Global; // rax
  __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v26; // r9
  char v27; // al
  int v28; // ecx
  __int64 v30; // [rsp+28h] [rbp-E0h] BYREF
  struct ADAPTER_RENDER **v31; // [rsp+30h] [rbp-D8h]
  _BYTE v32[16]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v33[16]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v34[32]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v35[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v36[64]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v37[72]; // [rsp+C0h] [rbp-48h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v34,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
    if ( !v7 )
      goto LABEL_22;
    v31 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 5) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, (struct DXGADAPTER *const)v31, 0LL);
    LODWORD(v30) = COREADAPTERACCESS::AcquireShared((__int64)v35, 0xFFFFFFFFLL, v8);
    if ( (int)v30 < 0 )
    {
LABEL_21:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v30, 4u);
      v5 = 1;
      COREACCESS::~COREACCESS((COREACCESS *)v37);
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      goto LABEL_22;
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10, v9);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v33, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v33);
    v12 = *((_QWORD *)a1 + 6);
    v13 = *(_DWORD *)(v7 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 184));
    v15 = (v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *(_DWORD *)(v12 + 224) )
    {
      v16 = *(_QWORD *)(v12 + 208);
      v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      {
        v18 = v17 & 0x1F;
        if ( (_BYTE)v18 == 8 )
        {
          v20 = *(_QWORD *)(v16 + 16LL * (unsigned int)v15);
          goto LABEL_12;
        }
        v19 = WdLogNewEntry5_WdError(v18, v16, v14);
        *(_QWORD *)(v19 + 24) = 267LL;
        WdLogEvent5_WdError(v19);
      }
    }
    v20 = 0LL;
LABEL_12:
    ExReleasePushLockSharedEx(v12 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( v20 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)(v20 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v20, v31[320]);
      v27 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v26 + 8) + 872LL))(VidSchSyncObject);
      v28 = v30;
      if ( !v27 )
        v28 = -1071775484;
      LODWORD(v30) = v28;
      if ( v32[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v22, v21, v23);
      *(_QWORD *)(v24 + 24) = v12;
      *(_QWORD *)(v24 + 32) = *(unsigned int *)(v7 + 24);
      WdLogEvent5_WdError(v24);
      LODWORD(v30) = -1073741811;
    }
    if ( v33[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v33);
    goto LABEL_21;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 3271LL;
  WdLogEvent5_WdError(v6);
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  return v5;
}
