/*
 * XREFs of PipProcessStartPhase2 @ 0x14071A17C
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140145D2C (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x14029DB50 (IoRequestDeviceEject.c)
 *     McTemplateK0dz @ 0x1402A0DD4 (McTemplateK0dz.c)
 *     IopDoDeferredSetInterfaceState @ 0x14071A224 (IopDoDeferredSetInterfaceState.c)
 *     PnpRequestDeviceRemoval @ 0x140733830 (PnpRequestDeviceRemoval.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14086C8F0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x14086C9F0 (PpProfileCommitTransitioningDock.c)
 *     IopAllocateLegacyBootResources @ 0x1409F47C0 (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( (byte_14042BDBB & 0x10) != 0 )
    McTemplateK0dz(a1, &KMPnPEvt_ProcessDeviceStart_Start, a3, 2, *(const wchar_t **)(a1 + 48));
  v4 = *(_DWORD *)(a1 + 392);
  if ( *(_DWORD *)(a1 + 568) )
  {
    if ( v4 < 0 )
      PpProfileCancelHardwareProfileTransition();
    else
      PpProfileCommitTransitioningDock(a1);
  }
  if ( v4 < 0 )
  {
    v8 = 10LL;
    if ( v4 == -1073741102 )
      v8 = 14LL;
    PnpRequestDeviceRemoval(a1, 0LL, v8, (unsigned int)v4);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  else
  {
    IopDoDeferredSetInterfaceState(a1);
    if ( !IopBootConfigsReserved )
    {
      v7 = *(unsigned int *)(a1 + 448);
      if ( (_DWORD)v7 != -1 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          IopAllocateLegacyBootResources(2LL, *(unsigned int *)(a1 + 452));
          v7 = *(unsigned int *)(a1 + 448);
        }
        IopAllocateLegacyBootResources(v7, *(unsigned int *)(a1 + 452));
      }
    }
    PipSetDevNodeState(a1, 775);
  }
  if ( (byte_14042BDBB & 0x10) != 0 )
    McTemplateK0dz(*(_QWORD *)(a1 + 48), &KMPnPEvt_ProcessDeviceStart_Stop, v5, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
