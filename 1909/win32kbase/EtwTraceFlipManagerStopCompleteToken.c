/*
 * XREFs of EtwTraceFlipManagerStopCompleteToken @ 0x1C010B4A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0x @ 0x1C010F528 (McTemplateK0x.c)
 */

__int64 __fastcall EtwTraceFlipManagerStopCompleteToken(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0x(a1, &FlipManagerStopCompleteToken, a3, a1);
  return result;
}
