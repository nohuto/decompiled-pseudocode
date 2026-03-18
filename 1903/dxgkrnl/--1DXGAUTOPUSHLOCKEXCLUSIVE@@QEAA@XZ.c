/*
 * XREFs of ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000C3D8
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0040010 (DxgkDeviceIoctl.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CB238 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C0122530 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C0122AAC (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0209BB0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkWaitForIdle @ 0x1C02337C0 (DxgkWaitForIdle.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0293B80 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE(DXGAUTOPUSHLOCKEXCLUSIVE *this)
{
  int v1; // eax
  __int64 v2; // rcx

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 1 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
LABEL_3:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v1 == 2 )
  {
    *((_DWORD *)this + 4) = 0;
    v2 = *((_QWORD *)this + 1);
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    goto LABEL_3;
  }
}
