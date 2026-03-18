/*
 * XREFs of ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01ED514
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02179C0 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C021945C (-GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z.c)
 *     ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C022485C (-VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNA.c)
 *     ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ @ 0x1C02253D8 (-VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ.c)
 *     ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x1C02261E0 (-VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023A678 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0243298 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C0243E60 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTER::InitializeParavirtualizedAdapter(DXGADAPTER *this)
{
  DXG_GUEST_VIRTUALGPU_VMBUS *v1; // rsi
  int VmBusChannel; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  _QWORD *v8; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int InternalAdapterInfo; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  DXG_GUEST_GLOBAL_VMBUS *v29; // rsi
  int MmioSpaceInfo; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGGLOBAL *v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // [rsp+20h] [rbp-20h] BYREF
  __int64 v40; // [rsp+28h] [rbp-18h]
  __int64 v41; // [rsp+30h] [rbp-10h]
  unsigned __int64 v42; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp+28h] BYREF

  v1 = (DXGADAPTER *)((char *)this + 4144);
  *((_BYTE *)this + 185) = 1;
  VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 518, this);
  v7 = VmBusChannel;
  if ( VmBusChannel < 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4, v6);
LABEL_3:
    v8[4] = v7;
    v8[3] = this;
LABEL_4:
    WdLogEvent5_WdError(v8);
    return (unsigned int)v7;
  }
  v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(v1);
  *((_DWORD *)this + 1052) = v10;
  if ( v10 )
  {
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    InternalAdapterInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
                            v1,
                            (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)&v39);
    v7 = InternalAdapterInfo;
    if ( InternalAdapterInfo < 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
      v8[3] = v7;
      v8[4] = 6118LL;
      goto LABEL_4;
    }
    v19 = BYTE4(v40);
    *((_DWORD *)this + 77) ^= ((unsigned __int8)v39 ^ (unsigned __int8)*((_DWORD *)this + 77)) & 0x18;
    *((_BYTE *)this + 186) = v19 & 1;
    *((_BYTE *)this + 187) = (v19 & 4) != 0;
    v20 = 2;
    if ( HIDWORD(v39) < 2 )
      v20 = HIDWORD(v39);
    *((_DWORD *)this + 629) = v20;
    v21 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
    v22 = *(_QWORD *)(v21 + 40);
    *(_DWORD *)(v22 + 28) = v40;
    *(_QWORD *)((char *)this + 4220) = v41;
    if ( (v19 & 2) != 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v21, v22);
      DXGGLOBAL::HandleVirtualMachineReset(Global);
    }
    v24 = DXGGLOBAL::GetGlobal(v21, v22);
    v25 = DXGGLOBAL::EnsureVmBusInterface(v24);
    v7 = v25;
    if ( v25 < 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
      v8[5] = 6155LL;
      goto LABEL_3;
    }
    v29 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 164);
    MmioSpaceInfo = DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(v29, &v43, &v42);
    v7 = MmioSpaceInfo;
    if ( MmioSpaceInfo < 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33);
      v8[3] = v7;
      v8[4] = 6164LL;
      goto LABEL_4;
    }
    v34 = DXGGLOBAL::GetGlobal(v32, v31);
    v35 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(v29, v43, v42, *((_DWORD *)v34 + 335));
    v7 = v35;
    if ( v35 < 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36, v38);
      v8[3] = v7;
      v8[4] = 6171LL;
      goto LABEL_4;
    }
    return DXGADAPTER::CopyDriverStore(this);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3221225473LL;
  }
}
