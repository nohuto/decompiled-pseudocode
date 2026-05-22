/*
 * XREFs of ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x1800B178C
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800B7438 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall LampArrayTelemetry::LogUnexpectedUsage(LampArrayTelemetry *this, __int16 a2, __int16 a3)
{
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int16 *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  __int16 *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  __int16 v11; // [rsp+98h] [rbp+10h] BYREF
  __int16 v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v11;
      v8 = &v12;
      v6 = 2;
      v9 = 2;
      TlgWrite(v3, &unk_18019D5EC, 0LL, 0LL, 4u, &pData);
    }
  }
}
