/*
 * XREFs of ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF740
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // si
  struct _KTHREAD **v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v18[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v19[72]; // [rsp+88h] [rbp+Fh] BYREF
  int v20; // [rsp+E0h] [rbp+67h] BYREF
  struct DXGDEVICE *v21; // [rsp+E8h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v22; // [rsp+F0h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v16,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v3 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v3 + 24) = 2502LL;
    WdLogEvent5_WdError(v3);
LABEL_4:
    v6 = 0;
    goto LABEL_18;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  v7 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
  v20 = -1073741811;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, *(_DWORD *)(v4 + 24), v7, &v21);
  v6 = 1;
  if ( v21 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 28) - 1) <= 5 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15, v21);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, (__int64)v21, 0, v11, 0);
      v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v17);
      if ( v20 >= 0 )
      {
        DXGDEVICE::FlushScheduler(v21, *(_DWORD *)(v5 + 28));
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v13 + 24) = v20;
        WdLogEvent5_WdError(v13);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v19);
      COREACCESS::~COREACCESS((COREACCESS *)v18);
      if ( v15[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15);
      goto LABEL_15;
    }
    v9 = WdLogNewEntry5_WdError(v8);
    v10 = *(int *)(v5 + 28);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8);
    v10 = *(unsigned int *)(v5 + 24);
  }
  *(_QWORD *)(v9 + 24) = v10;
  WdLogEvent5_WdError(v9);
LABEL_15:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v20, 4u);
  if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
LABEL_18:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v6;
}
