/*
 * XREFs of EtwGetTraceEnableFlags @ 0x180085120
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x18004ED60 (RtlSetLastWin32Error.c)
 *     EtwpGetMaxLogger @ 0x1800851A0 (EtwpGetMaxLogger.c)
 */

__int64 __fastcall EtwGetTraceEnableFlags(__int64 a1)
{
  unsigned int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  if ( ((unsigned __int16)a1 < (unsigned int)EtwpGetMaxLogger() || (_WORD)a1 == 0xFFFF) && a1 )
    return v3;
  RtlSetLastWin32Error(6);
  return 0LL;
}
