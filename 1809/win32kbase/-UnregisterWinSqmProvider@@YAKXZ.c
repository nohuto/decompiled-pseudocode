/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C0098308
 * Callers:
 *     WinSqmEndSession @ 0x1C0098260 (WinSqmEndSession.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 UnregisterWinSqmProvider(void)
{
  signed __int64 v0; // rax
  REGHANDLE v1; // rcx
  unsigned int v2; // edx
  int i; // ebx
  __int64 v5; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_1C01D0F48, 170LL, 221LL);
  switch ( v0 )
  {
    case 221LL:
      v1 = qword_1C01CD5A8;
      if ( !qword_1C01CD5A8 )
      {
        MicrosoftTelemetryAssertTriggeredMsgKM("Multiple attempt to unregister WinSqm Provider");
        v1 = qword_1C01CD5A8;
      }
      v2 = EtwUnregister(v1);
      dword_1C01CD5A0 = 0;
      qword_1C01CD5A8 = 0LL;
      _InterlockedExchange64(&qword_1C01D0F48, v2 != 0 ? 238LL : 221LL);
      break;
    case 153LL:
      return 0;
    case 119LL:
      return 1359;
    case 170LL:
      Interval.QuadPart = -1000000LL;
      for ( i = 0; i < 10; ++i )
      {
        KeDelayExecutionThread(1, 0, &Interval);
        v5 = _InterlockedExchange64(&qword_1C01D0F48, qword_1C01D0F48);
        if ( v5 != 170 )
          break;
      }
      if ( i == 10 )
        v5 = _InterlockedCompareExchange64(&qword_1C01D0F48, 136LL, 170LL);
      return v5 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v2;
}
