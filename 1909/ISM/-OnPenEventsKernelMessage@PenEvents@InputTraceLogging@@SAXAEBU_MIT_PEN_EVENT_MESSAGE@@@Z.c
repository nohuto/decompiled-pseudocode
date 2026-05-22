/*
 * XREFs of ?OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1800325F8
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1800326F4 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180052EFC (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007B848 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

void __fastcall InputTraceLogging::PenEvents::OnPenEventsKernelMessage(const struct _MIT_PEN_EVENT_MESSAGE *a1)
{
  const struct _TlgProvider_t *v2; // rax
  const CHAR *v3; // rdx
  const char *v4; // rax
  int v5; // ecx
  int v6; // ecx
  TraceLoggingHProvider v7; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && TlgKeywordOn(v2, 0x200uLL) )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v5 = *((_DWORD *)a1 + 1);
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 == 1 )
              v3 = "TailLongPress";
            else
              v3 = "UnknownButtonAction";
          }
          else
          {
            v3 = "TailDoubleClick";
          }
        }
        else
        {
          v3 = "TailClick";
        }
        goto LABEL_19;
      case 1:
        v4 = "Undocked";
        v3 = "Docked";
        break;
      case 2:
        v4 = "DisabledTailButton";
        v3 = "EnabledTailButton";
        break;
      default:
        v3 = "UNKNOWN";
LABEL_19:
        TlgCreateSz(&pDesc, v3);
        TlgWrite(v7, &unk_18019B3EA, 0LL, 0LL, 3u, &pData);
        return;
    }
    if ( !*((_DWORD *)a1 + 1) )
      v3 = v4;
    goto LABEL_19;
  }
}
