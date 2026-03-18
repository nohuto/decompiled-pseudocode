/*
 * XREFs of tracePointerFlags @ 0x1C014EEE8
 * Callers:
 *     traceFrame @ 0x1C014EDD4 (traceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0135B98 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall tracePointerFlags(int a1, int a2)
{
  __int64 result; // rax

  if ( (a1 & 1) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               28,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"NEW");
  if ( (a1 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               29,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"INRANGE");
  if ( (a1 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               30,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"INCONTACT");
  if ( (a1 & 0x10) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               31,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"FIRSTBUTTON");
  if ( (a1 & 0x20) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               32,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"SECONDBUTTON");
  if ( (a1 & 0x40) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               33,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"THIRDBUTTON");
  if ( (a1 & 0x2000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               34,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"PRIMARY");
  if ( (a1 & 0x4000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               35,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"CONFIDENCE");
  if ( (a1 & 0x8000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               36,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"CANCELED");
  if ( (a1 & 0x10000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               37,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"DOWN");
  if ( (a1 & 0x20000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               38,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"UPDATE");
  if ( (a1 & 0x40000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               39,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"UP");
  if ( (a1 & 0x80000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               40,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"WHEEL");
  if ( (a1 & 0x100000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_s(
               (_DWORD)gRimLog,
               a2,
               1,
               41,
               (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
               (__int64)"HWHEEL");
  if ( (a1 & 0x200000) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_s(
             (_DWORD)gRimLog,
             a2,
             1,
             42,
             (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
             (__int64)"CAPTURECHANGED");
  return result;
}
