/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C0090344
 * Callers:
 *     WinSqmStartSession @ 0x1C009018C (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00903DC (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 RegisterWinSqmProvider(void)
{
  signed __int64 v0; // rax
  unsigned int v1; // edi
  int i; // ebx
  __int64 v4; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_1C01D0F48, 255LL, 0LL);
  if ( v0 )
  {
    switch ( v0 )
    {
      case 221LL:
        return 0;
      case 238LL:
        return 1359;
      case 255LL:
        Interval.QuadPart = -1000000LL;
        for ( i = 0; i < 10; ++i )
        {
          KeDelayExecutionThread(1, 0, &Interval);
          v4 = _InterlockedExchange64(&qword_1C01D0F48, qword_1C01D0F48);
          if ( v4 != 255 )
            break;
        }
        if ( i == 10 )
          v4 = _InterlockedCompareExchange64(&qword_1C01D0F48, 204LL, 255LL);
        return v4 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    if ( qword_1C01CD5A8 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Multiple attempt to register WinSqm Provider");
    v1 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &qword_1C01CD5A8);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      dword_1C01CD5A0 |= 1u;
    _InterlockedExchange64(&qword_1C01D0F48, v1 != 0 ? 238LL : 221LL);
  }
  return v1;
}
