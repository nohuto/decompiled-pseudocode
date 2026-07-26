/*
 * XREFs of NdisReadEisaSlotInformationEx @ 0x1C009FFB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 */

_UNKNOWN **__fastcall NdisReadEisaSlotInformationEx(_DWORD *a1, char a2)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4,
                            7,
                            12,
                            (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
                            a2);
  *a1 = -1073741637;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          4,
                          7,
                          13,
                          (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
                          a2,
                          187);
  return result;
}
