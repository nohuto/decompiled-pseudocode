/*
 * XREFs of ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0110990
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C0112F20 (NtMITSynthesizeMouseInput.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C017CE90 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
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

  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
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
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1D63, 0LL, 0LL, 4u, &pData);
  }
}
