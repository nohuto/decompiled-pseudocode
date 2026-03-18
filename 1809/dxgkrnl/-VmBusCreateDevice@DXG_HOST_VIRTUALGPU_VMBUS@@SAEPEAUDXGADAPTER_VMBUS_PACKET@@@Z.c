/*
 * XREFs of ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ECC90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E7F78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E84F0 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rsi
  int Device; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rcx
  D3DKMT_HANDLE v18; // eax
  struct VMBPACKETCOMPLETION__ *v19; // rcx
  __int64 v20; // rax
  struct DXGK_VIRTUAL_GPU_PARAV *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rsi
  struct VMBPACKETCOMPLETION__ *v25; // rcx
  _BYTE v27[8]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v28[32]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v29[40]; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v30[32]; // [rsp+A0h] [rbp-29h] BYREF
  _D3DKMT_CREATEDEVICE v31; // [rsp+C0h] [rbp-9h] BYREF
  D3DKMT_HANDLE hDevice; // [rsp+130h] [rbp+67h] BYREF
  GUID v33; // [rsp+138h] [rbp+6Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v30,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( !v5 )
      goto LABEL_26;
    hDevice = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 88LL);
    v7 = operator new(0x10uLL, 0x4B677844u, 0, (POOL_TYPE)512);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v5 + 32);
      v7[1] = v8;
      *v7 = v6;
    }
    else
    {
      v7 = 0LL;
    }
    *(_QWORD *)&v33.Data1 = v7;
    if ( !v7 )
    {
      v4 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v4 + 24) = 668LL;
      goto LABEL_3;
    }
    v9 = *((_QWORD *)a1 + 6);
    if ( *(_BYTE *)(v5 + 28) )
    {
      if ( !*(_BYTE *)(v9 + 320) )
      {
        v10 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v10 + 24) = 676LL;
LABEL_24:
        WdLogEvent5_WdError(v10);
        goto LABEL_25;
      }
      v11 = v9 + 184;
      v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 2528LL);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11, 0LL);
      v13 = v12 + 40;
      *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
      *(_QWORD *)(v12 + 48) = KeGetCurrentThread();
      COREADAPTERACCESS::COREADAPTERACCESS(
        (COREADAPTERACCESS *)v27,
        *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 5) + 16LL),
        0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27) < 0 )
      {
LABEL_14:
        COREACCESS::~COREACCESS((COREACCESS *)v29);
        COREACCESS::~COREACCESS((COREACCESS *)v28);
        *(_QWORD *)(v13 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v11 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
LABEL_25:
        operator delete(*(void **)&v33.Data1);
        goto LABEL_26;
      }
      Device = ADAPTER_RENDER::CreateDevice(
                 (DXGADAPTER **)v12,
                 (__int64 *)v33.Data4,
                 0,
                 2,
                 0LL,
                 0,
                 0,
                 *((_QWORD *)a1 + 5),
                 (__int64)&v33);
      v16 = Device;
      if ( Device < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v20 + 24) = v16;
        *(_QWORD *)(v20 + 32) = 710LL;
        WdLogEvent5_WdError(v20);
        goto LABEL_14;
      }
      v17 = *(_QWORD *)v33.Data4;
      *(_QWORD *)(*(_QWORD *)v33.Data4 + 80LL) = *((_QWORD *)a1 + 5);
      v18 = *(_DWORD *)(v17 + 332);
      v19 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      hDevice = v18;
      VmBusCompletePacket(v19, &hDevice, 4u);
      COREACCESS::~COREACCESS((COREACCESS *)v29);
      COREACCESS::~COREACCESS((COREACCESS *)v28);
      *(_QWORD *)(v13 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v13, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v11 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      if ( *(_BYTE *)(v9 + 320) )
      {
        v10 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v10 + 24) = 716LL;
        goto LABEL_24;
      }
      memset(&v31, 0, sizeof(v31));
      v21 = (struct DXGK_VIRTUAL_GPU_PARAV *)*((_QWORD *)a1 + 5);
      v31.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v5 + 24);
      v22 = DxgkCreateDeviceImpl(&v31, v21, &v33, 0);
      v24 = v22;
      if ( v22 < 0 )
      {
        v10 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v10 + 24) = v24;
        *(_QWORD *)(v10 + 32) = 732LL;
        goto LABEL_24;
      }
      v25 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      hDevice = v31.hDevice;
      VmBusCompletePacket(v25, &hDevice, 4u);
    }
    v3 = 1;
    goto LABEL_26;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 656LL;
LABEL_3:
  WdLogEvent5_WdError(v4);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return v3;
}
