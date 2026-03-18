/*
 * XREFs of EtwTraceDisplayChange @ 0x1C00B8C80
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B8870 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0107C44 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     McTemplateK0qqhhh @ 0x1C0110EDC (McTemplateK0qqhhh.c)
 */

char __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C020F438 - 1;
    if ( (unsigned __int8)(byte_1C020F438 - 1) > 2u && (qword_1C020F420 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C020F428 & 0x2000000000008000LL) == qword_1C020F428
        && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      {
        return McTemplateK0qqhhh(
                 a1,
                 0x8000,
                 a3,
                 gPowerDisplayState,
                 qword_1C0215748,
                 dword_1C021577C,
                 dword_1C0215780,
                 word_1C0215784);
      }
    }
  }
  return result;
}
