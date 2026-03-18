/*
 * XREFs of EtwTraceDisplayChange @ 0x1C00ABA50
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A2E78 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A31F8 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     McTemplateK0qqhhh @ 0x1C00AEDF4 (McTemplateK0qqhhh.c)
 */

char __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C019A1D8 - 1;
    if ( (unsigned __int8)(byte_1C019A1D8 - 1) > 2u && (qword_1C019A1C0 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C019A1C8 & 0x2000000000008000LL) == qword_1C019A1C8 )
      {
        result = (char)Microsoft_Windows_Win32kEnableBits;
        if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return McTemplateK0qqhhh(
                   a1,
                   0x8000,
                   a3,
                   gPowerDisplayState,
                   qword_1C01A0318,
                   dword_1C01A034C,
                   dword_1C01A0350,
                   word_1C01A0354);
      }
    }
  }
  return result;
}
