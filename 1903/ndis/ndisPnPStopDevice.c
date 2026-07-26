/*
 * XREFs of ndisPnPStopDevice @ 0x1C009FB80
 * Callers:
 *     ndisPnPIrpStopDevice @ 0x1C00A4DBC (ndisPnPIrpStopDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 */

__int64 __fastcall ndisPnPStopDevice(char a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      85,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  result = ndisPnPRemoveDevice(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             13,
             86,
             (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  return result;
}
