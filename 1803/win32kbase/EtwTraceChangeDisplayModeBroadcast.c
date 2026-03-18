/*
 * XREFs of EtwTraceChangeDisplayModeBroadcast @ 0x1C006E7C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceChangeDisplayModeBroadcast(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0(a1, &ChangeDisplayModeBroadcast, a1);
  return result;
}
