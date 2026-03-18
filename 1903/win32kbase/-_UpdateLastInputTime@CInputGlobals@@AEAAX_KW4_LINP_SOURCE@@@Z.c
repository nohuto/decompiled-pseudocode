/*
 * XREFs of ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0039E6C
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0039AA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0063240 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 * Callees:
 *     McTemplateK0qhq @ 0x1C0110C5C (McTemplateK0qhq.c)
 */

char __fastcall CInputGlobals::_UpdateLastInputTime(__int64 a1, __int64 a2, int a3)
{
  unsigned __int128 v4; // rax

  *(_QWORD *)(a1 + 16) = a2;
  if ( a3 > 0 && (a3 <= 4 || a3 == 8 || a3 == 10 || a3 > 11 && (a3 <= 13 || a3 == 15)) )
    *(_QWORD *)(a1 + 24) = a2;
  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    LOBYTE(v4) = byte_1C020F438 - 1;
    if ( (unsigned __int8)(byte_1C020F438 - 1) > 2u && (qword_1C020F420 & 0x2000000000008000LL) != 0 )
    {
      LOBYTE(v4) = 0;
      if ( (qword_1C020F428 & 0x2000000000008000LL) == qword_1C020F428 && giPowerOffTimeOutMs > 0 )
      {
        v4 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        if ( *((_QWORD *)&v4 + 1) - a2 > (unsigned __int64)giPowerOffTimeOutMs
          && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
        {
          LOBYTE(v4) = McTemplateK0qhq(
                         giPowerOffTimeOutMs,
                         (unsigned int)&DisplayTimeoutResetEvent,
                         gProtocolType == 0,
                         a2,
                         gProtocolType == 0,
                         giPowerOffTimeOutMs);
        }
      }
    }
  }
  return v4;
}
