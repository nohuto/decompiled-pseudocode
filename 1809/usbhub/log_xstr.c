/*
 * XREFs of log_xstr @ 0x1C004F048
 * Callers:
 *     UsbhIoctlTraceOutput @ 0x1C004E930 (UsbhIoctlTraceOutput.c)
 *     UsbhExceptionTrace @ 0x1C0053C20 (UsbhExceptionTrace.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall log_xstr(_OWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _OWORD *result; // rax
  __int128 v4; // [rsp+0h] [rbp-18h]

  *(_QWORD *)&v4 = a3;
  WORD4(v4) = 0x7FFF;
  if ( a2 < 0x7FFF )
    WORD4(v4) = a2;
  result = a1;
  *a1 = v4;
  return result;
}
