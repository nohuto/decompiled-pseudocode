/*
 * XREFs of EtwTraceDisplayReqChange @ 0x1C00963DC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0095E9C (UserPowerInfoCallout.c)
 * Callees:
 *     McTemplateK0qhq @ 0x1C00EA444 (McTemplateK0qhq.c)
 */

char __fastcall EtwTraceDisplayReqChange(int a1, __int64 a2, int a3)
{
  char result; // al

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C01C3328 - 1;
    if ( (unsigned __int8)(byte_1C01C3328 - 1) > 2u && (qword_1C01C3310 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C01C3318 & 0x2000000000008000LL) == qword_1C01C3318 )
      {
        result = 0;
        if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return McTemplateK0qhq(a1, (unsigned int)&DisplayReqChangeEvent, a3, 0x8000, gProtocolType == 0, a1);
      }
    }
  }
  return result;
}
