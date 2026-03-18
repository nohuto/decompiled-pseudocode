/*
 * XREFs of EtwTraceTouchPadHIDProcessingStop @ 0x1C00ACC10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchPadHIDProcessingStop(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0(a1, &TouchPadHIDProcessingStop, &W32kControlGuid);
  return result;
}
