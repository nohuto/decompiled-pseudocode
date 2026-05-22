/*
 * XREFs of ?LogUnexpectedUsage@LampArrayTelemetry@@QEAAXGG@Z @ 0x180079160
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007E9E0 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall LampArrayTelemetry::LogUnexpectedUsage(LampArrayTelemetry *this, __int16 a2, __int16 a3)
{
  EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-58h] BYREF
  __int16 *v4; // [rsp+50h] [rbp-38h]
  int v5; // [rsp+58h] [rbp-30h]
  int v6; // [rsp+5Ch] [rbp-2Ch]
  __int16 *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]
  __int16 v10; // [rsp+98h] [rbp+10h] BYREF
  __int16 v11; // [rsp+A0h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  if ( (unsigned int)hProvider > 5
    && (qword_180191050 & 0x400000000000LL) != 0
    && (qword_180191058 & 0x400000000000LL) == qword_180191058 )
  {
    v4 = &v10;
    v6 = 0;
    v5 = 2;
    v7 = &v11;
    v9 = 0;
    v8 = 2;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801686D4, 0LL, 0LL, 4u, &v3);
  }
}
