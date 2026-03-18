/*
 * XREFs of ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021C610
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C954 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00DFCEC (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0678 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r15
  __int64 v26; // rdx
  struct VMBPACKETCOMPLETION__ *v27; // rcx
  __int64 v28; // rax
  struct DXGADAPTER **v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rsi
  struct VMBPACKETCOMPLETION__ *v35; // rcx
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  GUID v38; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v39[24]; // [rsp+70h] [rbp-98h] BYREF
  _D3DKMT_CREATEDEVICE v40; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v41[8]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v42[64]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v43[72]; // [rsp+110h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v39,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( !v7 )
      goto LABEL_26;
    v8 = *((_QWORD *)a1 + 5);
    LODWORD(v37) = 0;
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 88LL);
    v10 = operator new(0x10uLL, 0x4B677844u, 0, (POOL_TYPE)512);
    if ( v10 )
    {
      v12 = *(_QWORD *)(v7 + 32);
      v10[1] = v12;
      *v10 = v9;
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)&v38.Data1 = v10;
    if ( !v10 )
    {
      v6 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v6 + 24) = 669LL;
      goto LABEL_3;
    }
    v14 = *((_QWORD *)a1 + 6);
    v15 = *(_BYTE *)(v14 + 296);
    if ( *(_BYTE *)(v7 + 28) )
    {
      if ( !v15 )
      {
        v16 = WdLogNewEntry5_WdError(v12, v11, v13);
        *(_QWORD *)(v16 + 24) = 677LL;
LABEL_24:
        WdLogEvent5_WdError(v16);
        goto LABEL_25;
      }
      v17 = v14 + 160;
      v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 2560LL);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v17, 0LL);
      v19 = v18 + 40;
      *(_QWORD *)(v17 + 8) = KeGetCurrentThread();
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v18 + 40, 0LL);
      *(_QWORD *)(v18 + 48) = KeGetCurrentThread();
      COREADAPTERACCESS::COREADAPTERACCESS(
        (COREADAPTERACCESS *)v41,
        *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 5) + 16LL),
        0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v41, 0xFFFFFFFFLL, v20) < 0 )
      {
LABEL_14:
        COREACCESS::~COREACCESS((COREACCESS *)v43);
        COREACCESS::~COREACCESS((COREACCESS *)v42);
        *(_QWORD *)(v19 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v19, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v17 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v17, 0LL);
        KeLeaveCriticalRegion();
LABEL_25:
        operator delete(*(void **)&v38.Data1);
        goto LABEL_26;
      }
      v21 = ADAPTER_RENDER::CreateDevice(v18, (__int64 *)v38.Data4, 0, 2, 0LL, 0, 0, *((_QWORD *)a1 + 5), &v38);
      v25 = v21;
      if ( v21 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v23, v22, v24);
        *(_QWORD *)(v28 + 24) = v25;
        *(_QWORD *)(v28 + 32) = 711LL;
        WdLogEvent5_WdError(v28);
        goto LABEL_14;
      }
      v26 = *(_QWORD *)v38.Data4;
      *(_QWORD *)(*(_QWORD *)v38.Data4 + 80LL) = *((_QWORD *)a1 + 5);
      v27 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      LODWORD(v37) = *(_DWORD *)(v26 + 332);
      VmBusCompletePacket(v27, &v37, 4u);
      COREACCESS::~COREACCESS((COREACCESS *)v43);
      COREACCESS::~COREACCESS((COREACCESS *)v42);
      *(_QWORD *)(v19 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v17 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v17, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      if ( v15 )
      {
        v16 = WdLogNewEntry5_WdError(v12, v11, v13);
        *(_QWORD *)(v16 + 24) = 717LL;
        goto LABEL_24;
      }
      memset(&v40, 0, sizeof(v40));
      v29 = (struct DXGADAPTER **)*((_QWORD *)a1 + 5);
      v40.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v7 + 24);
      v30 = DxgkCreateDeviceImpl(&v40, v29, &v38, 0);
      v34 = v30;
      if ( v30 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v32, v31, v33);
        *(_QWORD *)(v16 + 24) = v34;
        *(_QWORD *)(v16 + 32) = 733LL;
        goto LABEL_24;
      }
      v35 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      LODWORD(v37) = v40.hDevice;
      VmBusCompletePacket(v35, &v37, 4u);
    }
    v5 = 1;
    goto LABEL_26;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 657LL;
LABEL_3:
  WdLogEvent5_WdError(v6);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
  return v5;
}
