/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C00ABA24
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C00AB7B4 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  v1 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( (_WORD)v1 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi((unsigned __int16)v1, v1, v2);
}
