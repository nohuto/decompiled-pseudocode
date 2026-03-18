/*
 * XREFs of UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C003AD70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_RemoveDeviceFromControllerDeviceList @ 0x1C0010018 (Controller_RemoveDeviceFromControllerDeviceList.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003963C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_FreeResources @ 0x1C00396C8 (XilUsbDevice_FreeResources.c)
 *     WPP_RECORDER_SF_dqqq @ 0x1C003E1AC (WPP_RECORDER_SF_dqqq.c)
 *     Etw_DeviceDelete @ 0x1C003E7F8 (Etw_DeviceDelete.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C0048B84 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_EvtUsbDeviceCleanupCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rcx

  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1,
             off_1C00562C0);
  v3 = result;
  if ( *(_QWORD *)result == a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      XilCoreUsbDevice_GetInputContextBufferVA(result + (*(_BYTE *)(result + 657) != 0 ? 616LL : 608LL));
      WPP_RECORDER_SF_dqqq(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), *(unsigned __int8 *)(v3 + 135), v4, v5);
    }
    if ( *(_BYTE *)(v3 + 657) )
      XilUsbDevice_DestroySecureObject((_QWORD *)(v3 + 608));
    XilUsbDevice_FreeResources(v3 + 608);
    if ( *(_QWORD *)(v3 + 72) || *(_QWORD *)(v3 + 80) )
      Controller_RemoveDeviceFromControllerDeviceList(*(_QWORD *)(v3 + 8), *(_QWORD *)v3, (_QWORD *)(v3 + 72));
    return Etw_DeviceDelete(v6, v3);
  }
  return result;
}
