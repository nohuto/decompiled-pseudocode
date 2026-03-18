/*
 * XREFs of ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0229C30
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0039D70 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E63F0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E77D0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C01E848C (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C022A9E4 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1C0259CD4 (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C025A9D4 (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C025AA7C (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C025AEA8 (-UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::InitializeVirtualMachine(struct DXGPROCESSVMWP **this, void *a2, char a3)
{
  __int64 v3; // rbx
  struct VMBCHANNEL__ **v7; // rcx
  int VmBusChannel; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rax
  DXGVAILOBJECT *v15; // rcx
  int updated; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  DxgkCompositionObject *v19; // [rsp+38h] [rbp+10h] BYREF

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
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = v3;
      WdLogEvent5_WdError(v10);
    }
  }
  if ( DXGVAILOBJECT::IsFeatureEnabled() )
  {
    if ( (int)v3 < 0 )
      return (unsigned int)v3;
    if ( !this[30] && a3 )
    {
      v19 = 0LL;
      v11 = DXGVAILOBJECT::Create(&v19);
      v3 = v11;
      if ( v11 < 0 )
      {
        v14 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v14 + 24) = v3;
        WdLogEvent5_WdError(v14);
      }
      else
      {
        DXGVIRTUALMACHINE::SetVailObject((DXGVIRTUALMACHINE *)this, v19);
        DxgkCompositionObject::Release(v19);
      }
    }
    if ( (int)v3 < 0 )
      return (unsigned int)v3;
    if ( a2 )
    {
      v15 = this[30];
      if ( v15 )
      {
        if ( *((_QWORD *)v15 + 13) )
          updated = DXGVAILOBJECT::UpdateVmBus(v15, a2);
        else
          updated = DXGVAILOBJECT::InitializeVmBus(v15, a2);
        v3 = updated;
        if ( updated >= 0 )
          goto LABEL_22;
        v18 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v18 + 24) = v3;
        WdLogEvent5_WdError(v18);
      }
    }
  }
  if ( (int)v3 >= 0 )
LABEL_22:
    *((_BYTE *)this + 249) = 0;
  return (unsigned int)v3;
}
