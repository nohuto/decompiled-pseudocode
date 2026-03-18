/*
 * XREFs of EtwTraceDisplayReqChange @ 0x1C00ABAE0
 * Callers:
 *     UserPowerInfoCallout @ 0x1C005A654 (UserPowerInfoCallout.c)
 * Callees:
 *     McTemplateK0qhq @ 0x1C00AEB00 (McTemplateK0qhq.c)
 */

char __fastcall EtwTraceDisplayReqChange(int a1, __int64 a2, __int64 a3, int a4)
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
          return McTemplateK0qhq(
                   a1,
                   (unsigned int)&DisplayReqChangeEvent,
                   0x8000,
                   a4,
                   gProtocolType == 0,
                   dword_1C01A0348);
      }
    }
  }
  return result;
}
