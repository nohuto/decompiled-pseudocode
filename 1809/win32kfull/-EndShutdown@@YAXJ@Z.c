/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x1C012F5B4
 * Callers:
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C012F66C (-NotifyLogon@@YAHK@Z.c)
 *     HandlePTPTelemetry @ 0x1C0159460 (HandlePTPTelemetry.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EndShutdown(int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ecx

  gpidEndSession = 0LL;
  gdwThreadEndSession = 0;
  *(_DWORD *)(gpsi + 2236LL) &= ~1u;
  v1 = *(_DWORD *)(grpwinstaLogoff + 32LL) & 0xFFFFFFF7;
  *(_DWORD *)(grpwinstaLogoff + 32LL) = v1;
  if ( a1 < 0 )
  {
    if ( gptiShutdownNotify )
    {
      PostThreadMessage(gptiShutdownNotify, 0x16u, 0LL, 0LL);
      gptiShutdownNotify = 0LL;
      v1 = *(_DWORD *)(grpwinstaLogoff + 32LL);
    }
    v2 = gdwShutdownFlags | 0x80;
    *(_DWORD *)(grpwinstaLogoff + 32LL) = gdwLocks | v1 & 0xFFFFFFFD;
    NotifyLogon(v2);
  }
  else
  {
    gptiShutdownNotify = 0LL;
    NotifyLogon(gdwShutdownFlags);
    if ( (gdwShutdownFlags & 0x40580B) != 0 && !gProtocolType )
    {
      if ( gSqmIsOptedIn )
        SqmPowerState();
      HandlePTPTelemetry();
    }
  }
  UnlockObjectAssignment(grpwinstaLogoff);
}
