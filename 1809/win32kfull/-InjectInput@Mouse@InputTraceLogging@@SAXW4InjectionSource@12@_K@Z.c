/*
 * XREFs of ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00AD214
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00ACE38 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxOnPTPMouseOperation @ 0x1C01C2D2C (xxxOnPTPMouseOperation.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01F24CC (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C023CF90 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::InjectInput()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // r9d
  int v3; // r9d
  int v4; // r9d
  int v5; // r9d
  int v6; // r9d
  const CHAR *v7; // rdx
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x40uLL) )
  {
    v12 = 0;
    v8 = v1;
    v10 = &v8;
    v11 = 8;
    if ( v0 )
    {
      v2 = v0 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                if ( v6 == 1 )
                  v7 = "Dial";
                else
                  v7 = "UNKNOWN";
              }
              else
              {
                v7 = "PTPMouseOperation";
              }
            }
            else
            {
              v7 = "MousePromotion";
            }
          }
          else
          {
            v7 = "SendInput";
          }
        }
        else
        {
          v7 = "ProcessPTPMouseInput";
        }
      }
      else
      {
        v7 = "PTPMarshalNotification";
      }
    }
    else
    {
      v7 = "SynthesizeMouseInput";
    }
    TlgCreateSz(&pDesc, v7);
    TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D485D, 0LL, 0LL, 4u, &pData);
  }
}
