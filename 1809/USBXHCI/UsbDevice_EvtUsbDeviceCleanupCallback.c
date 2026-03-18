/*
 * XREFs of UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0035B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_RemoveDeviceFromControllerDeviceList @ 0x1C000D9BC (Controller_RemoveDeviceFromControllerDeviceList.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003462C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_FreeResources @ 0x1C00346C0 (XilUsbDevice_FreeResources.c)
 *     WPP_RECORDER_SF_dqqq @ 0x1C0038E5C (WPP_RECORDER_SF_dqqq.c)
 *     Etw_DeviceDelete @ 0x1C0039394 (Etw_DeviceDelete.c)
 */

__int64 __fastcall UsbDevice_EvtUsbDeviceCleanupCallback(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1,
             off_1C004F298);
  v5 = result;
  if ( *(_QWORD *)result == a1 )
  {
    v6 = *(_QWORD *)((*(_BYTE *)(result + 649) != 0 ? 8 : 0) + result + 632);
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 16);
    else
      LODWORD(v7) = 0;
    WPP_RECORDER_SF_dqqq(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL), v7, v3, v4);
    if ( *(_BYTE *)(v5 + 649) )
      XilUsbDevice_DestroySecureObject((__int64 *)(v5 + 600));
    XilUsbDevice_FreeResources(v5 + 600);
    if ( *(_QWORD *)(v5 + 72) || *(_QWORD *)(v5 + 80) )
      Controller_RemoveDeviceFromControllerDeviceList(*(_QWORD *)(v5 + 8), *(_QWORD *)v5, (_QWORD *)(v5 + 72));
    return Etw_DeviceDelete(v8, v5);
  }
  return result;
}
