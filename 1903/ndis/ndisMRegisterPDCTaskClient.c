/*
 * XREFs of ndisMRegisterPDCTaskClient @ 0x1C011952C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     PdcTaskClientRegister @ 0x1C0129920 (PdcTaskClientRegister.c)
 */

__int64 __fastcall ndisMRegisterPDCTaskClient(__int64 a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      160,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a1);
  result = PdcTaskClientRegister(a1, a1 + 5480);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    result = WPP_RECORDER_SF_q(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               2,
               11,
               161,
               (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
               a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             11,
             162,
             (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
             a1);
  return result;
}
