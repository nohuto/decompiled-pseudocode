/*
 * XREFs of ?Clear@FxIoTargetRemoveOpenParams@@QEAAXXZ @ 0x1C0068BC0
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0068CE4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00691B4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 */

void __fastcall FxIoTargetRemoveOpenParams::Clear(FxIoTargetRemoveOpenParams *this)
{
  FX_POOL_TRACKER *EaBuffer; // rcx
  wchar_t *Buffer; // rcx

  EaBuffer = (FX_POOL_TRACKER *)this->EaBuffer;
  if ( EaBuffer )
    FxPoolFree(EaBuffer);
  Buffer = this->TargetDeviceName.Buffer;
  if ( Buffer )
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
  memset(this, 0, sizeof(FxIoTargetRemoveOpenParams));
}
