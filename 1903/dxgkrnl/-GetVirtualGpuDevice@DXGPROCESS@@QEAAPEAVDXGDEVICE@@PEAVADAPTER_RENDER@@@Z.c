/*
 * XREFs of ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C025E404
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0215F30 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 * Callees:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0678 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00FAAFC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

struct DXGDEVICE *__fastcall DXGPROCESS::GetVirtualGpuDevice(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  unsigned int *v2; // r9
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 *v13; // rbx
  int Device; // eax
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = (unsigned int *)*((_QWORD *)a2 + 2);
  v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v2[52]);
  if ( !v5 )
  {
    v6 = DXGADAPTER::CreateHandle((DXGADAPTER *)v2, this, &v15);
    v10 = v6;
    if ( v6 < 0 )
    {
LABEL_3:
      v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v11 + 24) = v10;
      WdLogEvent5_WdWarning(v11);
      return 0LL;
    }
    v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 2) + 208LL));
  }
  v13 = (__int64 *)(v5 + 40);
  if ( !*(_QWORD *)(v5 + 40) )
  {
    Device = ADAPTER_RENDER::CreateDevice(*(_QWORD *)(v5 + 48), v13, 0, 1, 0LL, 0, 0, 0LL, 0LL);
    v10 = Device;
    if ( Device < 0 )
      goto LABEL_3;
  }
  return (struct DXGDEVICE *)*v13;
}
