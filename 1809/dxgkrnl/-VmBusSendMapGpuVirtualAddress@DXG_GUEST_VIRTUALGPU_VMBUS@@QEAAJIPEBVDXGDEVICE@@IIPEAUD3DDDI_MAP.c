/*
 * XREFs of ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C01F520C
 * Callers:
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C00B1AD8 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01093F0 (DxgkMapGpuVirtualAddress.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E4EC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        const struct DXGDEVICE *a3,
        int a4,
        unsigned int a5,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a6)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  struct _MDL *v16; // [rsp+28h] [rbp-91h]
  unsigned int v17[4]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v18; // [rsp+40h] [rbp-79h] BYREF
  int v19; // [rsp+48h] [rbp-71h]
  int v20; // [rsp+4Ch] [rbp-6Dh]
  int v21; // [rsp+50h] [rbp-69h]
  __int128 v22; // [rsp+58h] [rbp-61h]
  __int128 v23; // [rsp+68h] [rbp-51h]
  __int128 v24; // [rsp+78h] [rbp-41h]
  __int128 v25; // [rsp+88h] [rbp-31h]
  __int128 v26; // [rsp+98h] [rbp-21h]
  __int128 v27; // [rsp+A8h] [rbp-11h]
  UINT64 PagingFenceValue; // [rsp+B8h] [rbp-1h]
  int v29; // [rsp+C0h] [rbp+7h]
  _QWORD v30[2]; // [rsp+D0h] [rbp+17h] BYREF
  int v31; // [rsp+E0h] [rbp+27h]

  v18 = 0LL;
  v20 = 0;
  v19 = a2;
  v21 = 17;
  v6 = *(_OWORD *)&a6->MinimumAddress;
  v22 = *(_OWORD *)&a6->hPagingQueue;
  LODWORD(v22) = a4;
  v7 = *(_OWORD *)&a6->hAllocation;
  v23 = v6;
  v8 = *(_OWORD *)&a6->SizeInPages;
  v24 = v7;
  LODWORD(v24) = a5;
  v9 = *(_OWORD *)&a6->DriverProtection;
  v25 = v8;
  v10 = *(_OWORD *)&a6->Reserved1;
  v26 = v9;
  PagingFenceValue = a6->PagingFenceValue;
  v27 = v10;
  if ( a3 )
    v11 = *((_DWORD *)a3 + 84);
  else
    v11 = 0;
  v29 = v11;
  v17[0] = 24;
  v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v18, 0x88u, v30, v17, v16);
  if ( v13 < 0
    || (v13 = -1073741823, v17[0] < 0x18)
    || (v13 = v31, a6->VirtualAddress = v30[0], a6->PagingFenceValue = v30[1], v13 < 0) )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v13;
}
