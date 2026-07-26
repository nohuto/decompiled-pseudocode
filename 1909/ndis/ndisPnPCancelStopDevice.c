/*
 * XREFs of ndisPnPCancelStopDevice @ 0x1C009FB9C
 * Callers:
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3E3C (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C009FAA8 (ndisPnPCancelRemoveDevice.c)
 */

__int64 __fastcall ndisPnPCancelStopDevice(__int64 a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      83,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  result = ndisPnPCancelRemoveDevice(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             13,
             84,
             (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  return result;
}
