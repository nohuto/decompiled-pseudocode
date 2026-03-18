/*
 * XREFs of ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E824C (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C01E9B24 (-GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z.c)
 *     ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C01F49D0 (-VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNA.c)
 *     ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ @ 0x1C01F53C4 (-VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ.c)
 *     ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x1C01F61B0 (-VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0208B08 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C020F330 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C020FD68 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTER::InitializeParavirtualizedAdapter(DXGADAPTER *this)
{
  DXG_GUEST_VIRTUALGPU_VMBUS *v1; // rsi
  int VmBusChannel; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int InternalAdapterInfo; // eax
  __int64 v12; // rcx
  char v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  DXG_GUEST_GLOBAL_VMBUS *v20; // rdi
  int MmioSpaceInfo; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  struct DXGGLOBAL *v25; // rax
  int v26; // eax
  DXGADAPTER *v27; // rcx
  int v28; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+24h] [rbp-24h]
  int v30; // [rsp+28h] [rbp-20h]
  int v31; // [rsp+2Ch] [rbp-1Ch]
  __int64 v32; // [rsp+30h] [rbp-18h]
  unsigned __int64 v33; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp+10h] BYREF

  v1 = (DXGADAPTER *)((char *)this + 4152);
  *((_BYTE *)this + 185) = 1;
  VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 519, this);
  v5 = VmBusChannel;
  if ( VmBusChannel < 0 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v4);
LABEL_3:
    v6[4] = v5;
    v6[3] = this;
LABEL_4:
    WdLogEvent5_WdError(v6);
    return (unsigned int)v5;
  }
  v8 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(v1);
  *((_DWORD *)this + 1054) = v8;
  if ( !v8 )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return 3221225473LL;
  }
  InternalAdapterInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
                          v1,
                          (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)&v28);
  v5 = InternalAdapterInfo;
  if ( InternalAdapterInfo < 0 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v6[3] = v5;
    v6[4] = 5991LL;
    goto LABEL_4;
  }
  v13 = v31;
  *((_DWORD *)this + 77) ^= ((unsigned __int8)v28 ^ (unsigned __int8)*((_DWORD *)this + 77)) & 0x18;
  *((_BYTE *)this + 186) = v13 & 1;
  *((_BYTE *)this + 187) = (v13 & 4) != 0;
  v14 = 2;
  if ( v29 < 2 )
    v14 = v29;
  *((_DWORD *)this + 621) = v14;
  v15 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  *(_DWORD *)(*(_QWORD *)(v15 + 40) + 28LL) = v30;
  *(_QWORD *)((char *)this + 4228) = v32;
  if ( (v13 & 2) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v15);
    DXGGLOBAL::HandleVirtualMachineReset(Global);
  }
  v17 = DXGGLOBAL::GetGlobal(v15);
  v18 = DXGGLOBAL::EnsureVmBusInterface(v17);
  v5 = v18;
  if ( v18 < 0 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v6[5] = 6028LL;
    goto LABEL_3;
  }
  v20 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19) + 168);
  MmioSpaceInfo = DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(v20, &v34, &v33);
  v23 = MmioSpaceInfo;
  if ( MmioSpaceInfo < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v24 + 32) = 6037LL;
LABEL_17:
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  v25 = DXGGLOBAL::GetGlobal(v22);
  v26 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(v20, v34, v33, *((_DWORD *)v25 + 343));
  v23 = v26;
  if ( v26 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v24 + 32) = 6044LL;
    goto LABEL_17;
  }
  return DXGADAPTER::CopyDriverStore(v27);
}
