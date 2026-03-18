/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F0140
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rcx
  PERESOURCE *Global; // rax
  __int64 v8; // r13
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v19; // r9
  char v20; // al
  int v21; // ecx
  _BYTE v23[16]; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v25[32]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v27[32]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v28[88]; // [rsp+88h] [rbp-1h] BYREF
  int v29; // [rsp+F0h] [rbp+67h] BYREF
  struct ADAPTER_RENDER **v30; // [rsp+F8h] [rbp+6Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v25,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
    if ( !v5 )
      goto LABEL_22;
    v30 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 5) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, (struct DXGADAPTER *const)v30, 0LL);
    v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26);
    if ( v29 < 0 )
    {
LABEL_21:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v29, 4u);
      v3 = 1;
      COREACCESS::~COREACCESS((COREACCESS *)v28);
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      goto LABEL_22;
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v6);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v24, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v24);
    v8 = *((_QWORD *)a1 + 6);
    v9 = *(_DWORD *)(v5 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 208));
    v10 = (v9 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v10 < *(_DWORD *)(v8 + 248) )
    {
      v11 = *(_QWORD *)(v8 + 232);
      v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
      if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
      {
        v13 = v12 & 0x1F;
        if ( (_BYTE)v13 == 8 )
        {
          v15 = *(_QWORD *)(v11 + 16LL * (unsigned int)v10);
          goto LABEL_12;
        }
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = 316LL;
        WdLogEvent5_WdError(v14);
      }
    }
    v15 = 0LL;
LABEL_12:
    ExReleasePushLockSharedEx(v8 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v15 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(v15 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v15, v30[316]);
      v20 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v19 + 8) + 872LL))(VidSchSyncObject);
      v21 = v29;
      if ( !v20 )
        v21 = -1071775484;
      v29 = v21;
      if ( v23[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v8;
      *(_QWORD *)(v17 + 32) = *(unsigned int *)(v5 + 24);
      WdLogEvent5_WdError(v17);
      v29 = -1073741811;
    }
    if ( v24[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v24);
    goto LABEL_21;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 3333LL;
  WdLogEvent5_WdError(v4);
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return v3;
}
