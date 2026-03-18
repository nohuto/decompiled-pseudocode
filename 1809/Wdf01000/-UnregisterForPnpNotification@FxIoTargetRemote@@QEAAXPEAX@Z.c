/*
 * XREFs of ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C006A508
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0068CE4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00691B4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoTargetRemote::UnregisterForPnpNotification(FxIoTargetRemote *this, void *Handle)
{
  if ( Handle )
  {
    if ( *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters )
      (*(void (__fastcall **)(void *))&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters)(Handle);
    else
      IoUnregisterPlugPlayNotification(Handle);
  }
}
