/*
 * XREFs of ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0010FE0
 * Callers:
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C00B2078 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F5BEC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C025EE38 (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  bool v2; // zf
  struct _KEVENT *v3; // rcx
  struct _KEVENT *v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rbx

  v2 = *(_DWORD *)(*(_QWORD *)this + 328LL) == 2;
  v3 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
  if ( v2 )
    v4 = v3 + 4;
  else
    v4 = v3 + 3;
  v5 = 0;
  if ( KeReadStateEvent(v4) )
  {
    v6 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 104), 0) )
      v5 = 1;
    else
      KeLeaveCriticalRegion();
    *((_DWORD *)this + 2) = v5;
  }
  else
  {
    return *((unsigned int *)this + 2);
  }
  return v5;
}
