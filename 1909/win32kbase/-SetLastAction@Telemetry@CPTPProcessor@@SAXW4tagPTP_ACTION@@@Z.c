/*
 * XREFs of ?SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z @ 0x1C0179C74
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01792D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     EtwTraceTouchpadGestureDetected @ 0x1C010C2D0 (EtwTraceTouchpadGestureDetected.c)
 */

char __fastcall CPTPProcessor::Telemetry::SetLastAction(int a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  signed __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  signed __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  signed __int64 *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v25; // [rsp+D0h] [rbp-30h] BYREF
  int *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = (unsigned __int64)(1000
                        * (PerformanceCounter.QuadPart - _InterlockedCompareExchange64(&qword_1C0215D60, 0LL, 0LL)))
     / gliQpcFreq.QuadPart;
  v11 = v3;
  if ( v3 <= 500 )
  {
    _InterlockedCompareExchange64(&qword_1C0215D50, 0LL, 0LL);
    LOBYTE(v3) = _InterlockedCompareExchange64(&qword_1C0215D58, 0LL, 0LL);
    v9 = dword_1C0215D6C;
    if ( hProvider > 5u )
    {
      LOBYTE(v3) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL);
      if ( (_BYTE)v3 )
      {
        v16 = 8LL;
        v8 = a1;
        v15 = &v11;
        v17 = &v8;
        v18 = 4LL;
        v20 = 8LL;
        v22 = 8LL;
        v12 = (unsigned __int64)(1000 * (v4 - v5)) / gliQpcFreq.QuadPart;
        v19 = &v12;
        v24 = 4LL;
        v13 = (unsigned __int64)(1000 * (v4 - v6)) / gliQpcFreq.QuadPart;
        v21 = &v13;
        v23 = &v9;
        LOBYTE(v3) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E514A, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  if ( dword_1C02109D8 || qword_1C02109C0 || gTPTelemTimings <= 0 )
    dword_1C02109DC = a1;
  else
    dword_1C02109D8 = a1;
  if ( a1 > 12 )
  {
    if ( a1 > 21 )
    {
      switch ( a1 )
      {
        case 22:
          ++dword_1C0215F6C;
          ++dword_1C0215FAC;
          goto LABEL_57;
        case 23:
          ++dword_1C0215F94;
          break;
        case 24:
          ++dword_1C0215F98;
          break;
        case 25:
          ++dword_1C0215F5C;
          break;
        default:
          goto LABEL_57;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 21:
          ++dword_1C0215F74;
          break;
        case 16:
          ++dword_1C0215F68;
          break;
        case 17:
          ++dword_1C0215F78;
          break;
        case 18:
          ++dword_1C0215F60;
          break;
        case 19:
          ++dword_1C0215F64;
          break;
        case 20:
          ++dword_1C0215F70;
          break;
        default:
          goto LABEL_57;
      }
    }
LABEL_20:
    ++dword_1C0215FAC;
    goto LABEL_57;
  }
  if ( a1 == 12 )
  {
    ++dword_1C0215FA0;
    goto LABEL_20;
  }
  if ( a1 <= 6 )
  {
    switch ( a1 )
    {
      case 6:
        ++dword_1C0215F80;
        break;
      case 1:
        ++dword_1C0215F84;
        break;
      case 2:
        ++dword_1C0215F88;
        break;
      case 3:
        ++dword_1C0215F8C;
        break;
      case 4:
        ++dword_1C0215F90;
        break;
      case 5:
        ++dword_1C0215F7C;
        break;
      default:
        goto LABEL_57;
    }
    goto LABEL_20;
  }
  if ( a1 == 7 )
  {
    ++dword_1C0215F54;
    goto LABEL_20;
  }
  if ( a1 == 8 )
  {
    ++dword_1C0215F58;
    goto LABEL_20;
  }
  if ( a1 != 9 )
  {
    if ( a1 == 10 )
    {
      ++dword_1C0215FA4;
      return v3;
    }
    ++dword_1C0215F9C;
    goto LABEL_20;
  }
  ++gTPTelemState;
  ++dword_1C0215FAC;
  LOBYTE(v3) = EtwTraceTouchpadGestureDetected(0LL);
LABEL_57:
  if ( hProvider > 5u )
  {
    v10 = a1;
    v26 = &v10;
    v27 = 4LL;
    LOBYTE(v3) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E5125, 0LL, 0LL, 3u, &v25);
  }
  return v3;
}
