/*
 * XREFs of SetProtocolType @ 0x1C0098390
 * Callers:
 *     xxxRemoteConnect @ 0x1C0098740 (xxxRemoteConnect.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0037220 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     SqmPowerState @ 0x1C0098470 (SqmPowerState.c)
 *     RetrieveCurrentDisplayState @ 0x1C00986D0 (RetrieveCurrentDisplayState.c)
 */

__int64 __fastcall SetProtocolType(unsigned __int16 a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  if ( !gProtocolType && gSqmIsOptedIn )
    SqmPowerState();
  result = (unsigned int)(v1 + 1);
  gProtocolType = v1;
  if ( (((_WORD)v1 + 1) & 0xFFFE) == 0 )
  {
    result = 0LL;
    gRemoteTerminalLuid = 0LL;
  }
  if ( !(_WORD)v1 )
  {
    RetrieveCurrentDisplayState();
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      8);
    result = MEMORY[0xFFFFF78000000320];
    dword_1C01CE25C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
