/*
 * XREFs of SetProtocolType @ 0x1C00A1650
 * Callers:
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0036000 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x1C00A1500 (RetrieveCurrentDisplayState.c)
 *     SqmPowerState @ 0x1C00A5330 (SqmPowerState.c)
 */

__int64 __fastcall SetProtocolType(__int16 a1)
{
  __int64 result; // rax

  if ( !gProtocolType && gSqmIsOptedIn )
    result = SqmPowerState();
  gProtocolType = a1;
  if ( !a1 )
  {
    RetrieveCurrentDisplayState();
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      8u);
    result = MEMORY[0xFFFFF78000000320];
    dword_1C01A309C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
