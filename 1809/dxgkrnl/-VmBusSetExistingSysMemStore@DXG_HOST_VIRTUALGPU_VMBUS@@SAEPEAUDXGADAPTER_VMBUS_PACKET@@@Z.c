/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F8730
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int *v4; // rbx
  char v5; // bl
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v7; // r14
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // r15d
  __int64 v13; // rax
  struct _KTHREAD *v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR v20; // r9
  ULONG_PTR Count; // rcx
  _QWORD *v22; // r8
  _QWORD *v23; // rax
  _BYTE v25[16]; // [rsp+30h] [rbp-69h] BYREF
  char v26[8]; // [rsp+40h] [rbp-59h] BYREF
  char v27[32]; // [rsp+48h] [rbp-51h] BYREF
  char v28[56]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v29[80]; // [rsp+A0h] [rbp+7h] BYREF
  int v30; // [rsp+100h] [rbp+67h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+108h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v32; // [rsp+110h] [rbp+77h] BYREF
  struct DXGDEVICE *v33; // [rsp+118h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v29,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v3 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v3 + 24) = 1278LL;
    WdLogEvent5_WdError(v3);
LABEL_4:
    v5 = 0;
    goto LABEL_28;
  }
  v4 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v30 = 0;
  v7 = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v4[6], Current, &v33);
  v9 = v33;
  if ( v33 )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25,
      v33);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v9, 0, v11, 0);
    v30 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26);
    if ( v30 < 0 )
    {
LABEL_24:
      COREACCESS::~COREACCESS((COREACCESS *)v28);
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25);
      goto LABEL_25;
    }
    v12 = v4[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 26));
    v13 = (v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *((_DWORD *)v7 + 62) )
    {
      v14 = v7[29];
      v15 = *((_DWORD *)v14 + 4 * v13 + 2);
      if ( ((v12 >> 25) & 0x60) == (*((_BYTE *)v14 + 16 * v13 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      {
        v16 = v15 & 0x1F;
        if ( (_BYTE)v16 == 5 )
        {
          v18 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v14 + 2 * (unsigned int)v13);
          goto LABEL_15;
        }
        v17 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v17 + 24) = 316LL;
        WdLogEvent5_WdError(v17);
      }
    }
    v18 = 0LL;
LABEL_15:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v18);
    ExReleasePushLockSharedEx(v7 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( v31 && (v20 = v31[3].Count) != 0 )
    {
      Count = v31[1].Count;
      v22 = (_QWORD *)*((_QWORD *)v9 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) == v22[2] )
      {
        v30 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v22[68] + 8LL) + 1192LL))(
                v22[69],
                v20,
                v4[8]);
LABEL_23:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
        goto LABEL_24;
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdError(Count);
      v23[3] = v9;
      v23[4] = v31;
      v23[5] = -1073741811LL;
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v23[3] = v4[7];
    }
    WdLogEvent5_WdError(v23);
    v30 = -1073741811;
    goto LABEL_23;
  }
  v10 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v10 + 24) = v4[6];
  WdLogEvent5_WdError(v10);
  v30 = -1073741811;
LABEL_25:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v30, 4u);
  v5 = 1;
  if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
LABEL_28:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return v5;
}
