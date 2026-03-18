/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C0091370
 * Callers:
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C00E43E0 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx

  v2 = *(_WORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 284);
  if ( v2 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi(v2);
}
