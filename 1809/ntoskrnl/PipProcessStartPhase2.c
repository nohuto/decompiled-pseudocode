/*
 * XREFs of PipProcessStartPhase2 @ 0x1406FE8C4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x140287EE0 (IoRequestDeviceEject.c)
 *     McTemplateK0dz @ 0x14028AED4 (McTemplateK0dz.c)
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 *     IopDoDeferredSetInterfaceState @ 0x1406FE96C (IopDoDeferredSetInterfaceState.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140833A24 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCommitTransitioningDock @ 0x140833B54 (PpProfileCommitTransitioningDock.c)
 *     IopAllocateLegacyBootResources @ 0x1409C19B8 (IopAllocateLegacyBootResources.c)
 */

__int64 __fastcall PipProcessStartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // rcx
  int v8; // r8d

  if ( (byte_140406847 & 0x10) != 0 )
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
    v8 = 10;
    if ( v4 == -1073741102 )
      v8 = 14;
    PnpRequestDeviceRemoval(a1, 0, v8, v4);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  else
  {
    IopDoDeferredSetInterfaceState(a1);
    if ( !BYTE1(PnpShutdownEvent.Limit) )
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
  if ( (byte_140406847 & 0x10) != 0 )
    McTemplateK0dz(*(_QWORD *)(a1 + 48), &KMPnPEvt_ProcessDeviceStart_Stop, v5, 2, *(const wchar_t **)(a1 + 48));
  return (unsigned int)v4;
}
