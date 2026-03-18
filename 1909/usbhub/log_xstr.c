/*
 * XREFs of log_xstr @ 0x1C0050D60
 * Callers:
 *     UsbhIoctlTraceOutput @ 0x1C0050580 (UsbhIoctlTraceOutput.c)
 *     UsbhExceptionTrace @ 0x1C0055D60 (UsbhExceptionTrace.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall log_xstr(_OWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _OWORD *result; // rax
  __int128 v4; // [rsp+0h] [rbp-18h]

  *(_QWORD *)&v4 = a3;
  *((_QWORD *)&v4 + 1) = 0x7FFFLL;
  result = a1;
  if ( a2 < 0x7FFF )
    WORD4(v4) = a2;
  *a1 = v4;
  return result;
}
