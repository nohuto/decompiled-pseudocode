/*
 * XREFs of ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C3CC
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00C2180 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0153448 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkCheckSharedResourceAccess @ 0x1C0208B90 (DxgkCheckSharedResourceAccess.c)
 *     DxgkGetSharedResourceAdapterLuid @ 0x1C0209720 (DxgkGetSharedResourceAdapterLuid.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C026A384 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0286388 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetObjectA(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = a2;
  if ( *(struct _KTHREAD **)(a1 + 152) != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 1029LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 192) )
  {
    v7 = *(_QWORD *)(a1 + 176);
    v8 = *(_DWORD *)(v7 + 16 * v6 + 8);
    if ( ((v4 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
    {
      v9 = v8 & 0x1F;
      if ( a3 == (_DWORD)v9 )
        return *(_QWORD *)(v7 + 16LL * (unsigned int)v6);
      v12 = WdLogNewEntry5_WdError(v9, 2LL * (unsigned int)v6, v7);
      *(_QWORD *)(v12 + 24) = 267LL;
      WdLogEvent5_WdError(v12);
    }
  }
  return 0LL;
}
