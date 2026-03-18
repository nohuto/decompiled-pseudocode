/*
 * XREFs of ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C025EC70
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0040170 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0215EA0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02175B0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C0218270 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C025F8F8 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1C02903B4 (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C02910C8 (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C0291170 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C0291598 (-UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::InitializeVirtualMachine(struct DXGPROCESSVMWP **this, void *a2, char a3)
{
  __int64 v3; // rbx
  struct VMBCHANNEL__ **v7; // rcx
  int VmBusChannel; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  DXGVAILOBJECT *v19; // rcx
  int updated; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  DxgkCompositionObject *v25; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v3) = 0;
  if ( a2 )
  {
    v7 = this + 11;
    if ( *v7 )
      return 0LL;
    VmBusChannel = DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(v7, (__int64)a2, this[7]);
    v3 = VmBusChannel;
    if ( VmBusChannel < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = v3;
      WdLogEvent5_WdError(v12);
    }
  }
  if ( DXGVAILOBJECT::IsFeatureEnabled() )
  {
    if ( (int)v3 < 0 )
      return (unsigned int)v3;
    if ( !this[30] && a3 )
    {
      v25 = 0LL;
      v13 = DXGVAILOBJECT::Create(&v25);
      v3 = v13;
      if ( v13 < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v15, v14, v16);
        *(_QWORD *)(v18 + 24) = v3;
        WdLogEvent5_WdError(v18);
      }
      else
      {
        DXGVIRTUALMACHINE::SetVailObject((DXGVIRTUALMACHINE *)this, v25);
        DxgkCompositionObject::Release(v25);
      }
    }
    if ( (int)v3 < 0 )
      return (unsigned int)v3;
    if ( a2 )
    {
      v19 = this[30];
      if ( v19 )
      {
        if ( *((_QWORD *)v19 + 13) )
          updated = DXGVAILOBJECT::UpdateVmBus(v19, a2);
        else
          updated = DXGVAILOBJECT::InitializeVmBus(v19, a2);
        v3 = updated;
        if ( updated >= 0 )
          goto LABEL_22;
        v24 = WdLogNewEntry5_WdError(v22, v21, v23);
        *(_QWORD *)(v24 + 24) = v3;
        WdLogEvent5_WdError(v24);
      }
    }
  }
  if ( (int)v3 >= 0 )
LABEL_22:
    *((_BYTE *)this + 249) = 0;
  return (unsigned int)v3;
}
