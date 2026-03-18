/*
 * XREFs of GetProcessDpiServerInfo @ 0x1C012C194
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C012AF80 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall GetProcessDpiServerInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  v2 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1, a2) + 284);
  if ( (_WORD)v2 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi((unsigned __int16)v2, v2, v3);
}
