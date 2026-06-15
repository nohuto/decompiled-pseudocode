/*
 * XREFs of ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x14005477C
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140054BF0 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140056860 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140056FF0 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140057220 (-GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140060820 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 */

void __fastcall AEWMILOG_GENERIC(
        __int64 a1,
        void *a2,
        __int64 a3,
        UCHAR a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-69h] BYREF
  void *v15; // [rsp+50h] [rbp-39h]
  int v16; // [rsp+58h] [rbp-31h]
  unsigned __int64 v17; // [rsp+60h] [rbp-29h]
  unsigned __int64 v18; // [rsp+68h] [rbp-21h]
  unsigned __int64 v19; // [rsp+70h] [rbp-19h]
  unsigned __int64 v20; // [rsp+78h] [rbp-11h]
  double v21; // [rsp+80h] [rbp-9h]
  double v22; // [rsp+88h] [rbp-1h]
  double v23; // [rsp+90h] [rbp+7h]
  double v24; // [rsp+98h] [rbp+Fh]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v16 = 0;
    EventTrace.Size = 128;
    v17 = a5;
    v18 = a6;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_GENERIC;
    v19 = a7;
    v21 = a9;
    v22 = a10;
    v20 = a8;
    v23 = a11;
    v24 = a12;
    EventTrace.UserTime = 0x20000;
    EventTrace.Class.Level = 5;
    EventTrace.Class.Type = a4;
    v15 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
