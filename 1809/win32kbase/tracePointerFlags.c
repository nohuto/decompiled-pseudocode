/*
 * XREFs of tracePointerFlags @ 0x1C0122BA8
 * Callers:
 *     traceFrame @ 0x1C0122AD8 (traceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C010B84C (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall tracePointerFlags(int a1)
{
  __int64 result; // rax

  if ( (a1 & 1) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x1Cu,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"NEW");
  if ( (a1 & 2) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x1Du,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"INRANGE");
  if ( (a1 & 4) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x1Eu,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"INCONTACT");
  if ( (a1 & 0x10) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x1Fu,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"FIRSTBUTTON");
  if ( (a1 & 0x20) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x20u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"SECONDBUTTON");
  if ( (a1 & 0x40) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x21u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"THIRDBUTTON");
  if ( (a1 & 0x2000) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x22u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"PRIMARY");
  if ( (a1 & 0x4000) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x23u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"CONFIDENCE");
  if ( (a1 & 0x8000) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x24u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"CANCELED");
  if ( (a1 & 0x10000) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x25u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"DOWN");
  if ( (a1 & 0x20000) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x26u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"UPDATE");
  if ( (a1 & 0x40000) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x27u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"UP");
  if ( (a1 & 0x80000) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x28u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"WHEEL");
  if ( (a1 & 0x100000) != 0 )
    result = WPP_RECORDER_SF_s(
               gRimLog,
               3u,
               0x16u,
               0x29u,
               (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
               (const struct _MCGEN_TRACE_CONTEXT *)"HWHEEL");
  if ( (a1 & 0x200000) != 0 )
    return WPP_RECORDER_SF_s(
             gRimLog,
             3u,
             0x16u,
             0x2Au,
             (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids,
             (const struct _MCGEN_TRACE_CONTEXT *)"CAPTURECHANGED");
  return result;
}
