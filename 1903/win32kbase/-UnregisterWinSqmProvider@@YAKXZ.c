/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C00B7E20
 * Callers:
 *     WinSqmEndSession @ 0x1C00B7D78 (WinSqmEndSession.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UnregisterWinSqmProvider(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  signed __int64 v4; // rax
  REGHANDLE v5; // rcx
  unsigned int v6; // edx
  __int64 v8; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  Interval.QuadPart = 0LL;
  v4 = _InterlockedCompareExchange64(&qword_1C0218848, 170LL, 221LL);
  switch ( v4 )
  {
    case 221LL:
      v5 = RegHandle;
      if ( !RegHandle )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
        v5 = RegHandle;
      }
      v6 = EtwUnregister(v5);
      dword_1C0215B38 = 0;
      RegHandle = 0LL;
      _InterlockedExchange64(&qword_1C0218848, v6 != 0 ? 238LL : 221LL);
      break;
    case 153LL:
      return 0;
    case 119LL:
      return 1359;
    case 170LL:
      Interval.QuadPart = -1000000LL;
      do
      {
        KeDelayExecutionThread(1, 0, &Interval);
        v8 = _InterlockedExchange64(&qword_1C0218848, qword_1C0218848);
        if ( v8 != 170 )
          break;
        ++v3;
      }
      while ( v3 < 10 );
      if ( v3 == 10 )
        v8 = _InterlockedCompareExchange64(&qword_1C0218848, 136LL, 170LL);
      return v8 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v6;
}
