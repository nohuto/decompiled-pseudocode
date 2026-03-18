/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0228F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CAB4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int *v8; // rbx
  char v9; // bl
  struct DXGPROCESS *Current; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned int v17; // r12d
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  ULONG_PTR v30; // r9
  ULONG_PTR Count; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGDEVICE *v39; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGDEVICE *v40; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v41[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v42[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v43[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v44[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v45[88]; // [rsp+C8h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v42,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v5 + 24) = 1273LL;
    WdLogEvent5_WdError(v5);
LABEL_4:
    v9 = 0;
    goto LABEL_34;
  }
  v8 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v8 )
    goto LABEL_4;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, v8[6], (struct _KTHREAD **)Current, &v40);
  v14 = v40;
  if ( v40 )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41,
      v40);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v14, 0, v16, 0);
    v37 = COREDEVICEACCESS::AcquireShared((__int64)v43, 0xFFFFFFFF, 0LL);
    if ( v37 < 0 )
    {
LABEL_30:
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      COREACCESS::~COREACCESS((COREACCESS *)v44);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
      goto LABEL_31;
    }
    v17 = v8[7];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = *((_DWORD *)Current + 50);
        if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v18, &EventBlockThread, v19, v20);
      }
      ExAcquirePushLockSharedEx((char *)Current + 184, 0LL);
    }
    v21 = (v17 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)Current + 56) )
    {
      v22 = *((_QWORD *)Current + 26);
      v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
      if ( ((v17 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
      {
        v24 = v23 & 0x1F;
        if ( (_BYTE)v24 == 5 )
        {
          v26 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * (unsigned int)v21);
          goto LABEL_21;
        }
        v25 = WdLogNewEntry5_WdError(v24, 2LL * (unsigned int)v21, v22);
        *(_QWORD *)(v25 + 24) = 267LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v26 = 0LL;
LABEL_21:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v26);
    ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( v38 && (v30 = v38[3].Count) != 0 )
    {
      Count = v38[1].Count;
      v32 = (_QWORD *)*((_QWORD *)v14 + 2);
      v33 = *(_QWORD *)(Count + 16);
      if ( *(_QWORD *)(v33 + 16) == v32[2] )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v32[68] + 8LL) + 1192LL))(
                v32[69],
                v30,
                v8[8]);
LABEL_29:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38, v35);
        goto LABEL_30;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdError(Count, v33, v32);
      v34[3] = v14;
      v34[4] = v38;
      v34[5] = -1073741811LL;
    }
    else
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
      v34[3] = v8[7];
    }
    WdLogEvent5_WdError(v34);
    v37 = -1073741811;
    goto LABEL_29;
  }
  v15 = WdLogNewEntry5_WdError(v12, v11, v13);
  *(_QWORD *)(v15 + 24) = v8[6];
  WdLogEvent5_WdError(v15);
  v37 = -1073741811;
LABEL_31:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v37, 4u);
  v9 = 1;
  if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
LABEL_34:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
  return v9;
}
