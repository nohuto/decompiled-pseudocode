/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C00A4194
 * Callers:
 *     WinSqmStartSession @ 0x1C00A3FD8 (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00A4230 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RegisterWinSqmProvider(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  signed __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  Interval.QuadPart = 0LL;
  v4 = _InterlockedCompareExchange64(&qword_1C0218848, 255LL, 0LL);
  if ( v4 )
  {
    switch ( v4 )
    {
      case 221LL:
        return 0;
      case 238LL:
        return 1359;
      case 255LL:
        Interval.QuadPart = -1000000LL;
        do
        {
          KeDelayExecutionThread(1, 0, &Interval);
          v7 = _InterlockedExchange64(&qword_1C0218848, qword_1C0218848);
          if ( v7 != 255 )
            break;
          ++v3;
        }
        while ( v3 < 10 );
        if ( v3 == 10 )
          v7 = _InterlockedCompareExchange64(&qword_1C0218848, 204LL, 255LL);
        return v7 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    if ( RegHandle )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v5 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &RegHandle);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      dword_1C0215B38 |= 1u;
    _InterlockedExchange64(&qword_1C0218848, v5 != 0 ? 238LL : 221LL);
  }
  return v5;
}
