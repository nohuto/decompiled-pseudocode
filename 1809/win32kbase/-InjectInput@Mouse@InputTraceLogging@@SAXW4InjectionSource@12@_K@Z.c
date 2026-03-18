/*
 * XREFs of ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00EC7E8
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C00ED970 (NtMITSynthesizeMouseInput.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C014CC40 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C014D140 (-ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
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

  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
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
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019DCB8, 0LL, 0LL, 4u, &pData);
  }
}
