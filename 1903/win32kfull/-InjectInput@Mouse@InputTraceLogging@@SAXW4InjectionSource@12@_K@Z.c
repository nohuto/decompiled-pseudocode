/*
 * XREFs of ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C011C684
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C011C2DC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     OnPTPMouseOperation @ 0x1C02030C0 (OnPTPMouseOperation.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C02087E0 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0255C98 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::InjectInput()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // r9d
  int v3; // r9d
  int v4; // r9d
  int v5; // r9d
  const CHAR *v6; // rdx
  __int64 v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x40uLL) )
  {
    v11 = 0;
    v7 = v1;
    v9 = &v7;
    v10 = 8;
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
              if ( v5 == 1 )
                v6 = "Dial";
              else
                v6 = "UNKNOWN";
            }
            else
            {
              v6 = "PTPMouseOperation";
            }
          }
          else
          {
            v6 = "MousePromotion";
          }
        }
        else
        {
          v6 = "SendInput";
        }
      }
      else
      {
        v6 = "PTPMarshalNotification";
      }
    }
    else
    {
      v6 = "SynthesizeMouseInput";
    }
    TlgCreateSz(&pDesc, v6);
    TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E6E5F, 0LL, 0LL, 4u, &pData);
  }
}
