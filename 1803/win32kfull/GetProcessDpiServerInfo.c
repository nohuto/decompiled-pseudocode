/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C00FB044
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C0053A58 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v1 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( (_WORD)v1 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo(gpsi, v1, v2);
  else
    return GetDPIServerInfoForDpi((unsigned __int16)v1, v1, v2, v3);
}
