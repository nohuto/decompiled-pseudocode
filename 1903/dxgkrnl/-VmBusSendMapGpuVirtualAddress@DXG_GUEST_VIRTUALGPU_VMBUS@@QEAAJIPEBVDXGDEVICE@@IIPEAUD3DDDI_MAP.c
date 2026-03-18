/*
 * XREFs of ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0225220
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0135D50 (DxgkMapGpuVirtualAddress.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C020CD98 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273804 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // rax
  struct _MDL *v18; // [rsp+28h] [rbp-91h]
  unsigned int v19[4]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  int v21; // [rsp+48h] [rbp-71h]
  int v22; // [rsp+4Ch] [rbp-6Dh]
  int v23; // [rsp+50h] [rbp-69h]
  __int128 v24; // [rsp+58h] [rbp-61h]
  __int128 v25; // [rsp+68h] [rbp-51h]
  __int128 v26; // [rsp+78h] [rbp-41h]
  __int128 v27; // [rsp+88h] [rbp-31h]
  __int128 v28; // [rsp+98h] [rbp-21h]
  __int128 v29; // [rsp+A8h] [rbp-11h]
  UINT64 PagingFenceValue; // [rsp+B8h] [rbp-1h]
  int v31; // [rsp+C0h] [rbp+7h]
  _QWORD v32[2]; // [rsp+D0h] [rbp+17h] BYREF
  int v33; // [rsp+E0h] [rbp+27h]

  v20 = 0LL;
  v22 = 0;
  v21 = a2;
  v23 = 17;
  v6 = *(_OWORD *)&a6->MinimumAddress;
  v24 = *(_OWORD *)&a6->hPagingQueue;
  LODWORD(v24) = a4;
  v7 = *(_OWORD *)&a6->hAllocation;
  v25 = v6;
  v8 = *(_OWORD *)&a6->SizeInPages;
  v26 = v7;
  LODWORD(v26) = a5;
  v9 = *(_OWORD *)&a6->DriverProtection;
  v27 = v8;
  v10 = *(_OWORD *)&a6->Reserved1;
  v28 = v9;
  PagingFenceValue = a6->PagingFenceValue;
  v29 = v10;
  if ( a3 )
    v11 = *((_DWORD *)a3 + 84);
  else
    v11 = 0;
  v31 = v11;
  v19[0] = 24;
  v14 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v20, 0x88u, v32, v19, v18);
  if ( v14 < 0
    || (v14 = -1073741823, v19[0] < 0x18)
    || (v14 = v33, a6->VirtualAddress = v32[0], a6->PagingFenceValue = v32[1], v14 < 0) )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12, v15);
    *(_QWORD *)(v16 + 24) = v14;
    WdLogEvent5_WdError(v16);
  }
  return (unsigned int)v14;
}
