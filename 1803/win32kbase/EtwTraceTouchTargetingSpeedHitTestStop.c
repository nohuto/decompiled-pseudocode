/*
 * XREFs of EtwTraceTouchTargetingSpeedHitTestStop @ 0x1C00ACF40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchTargetingSpeedHitTestStop(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0(a1, &TouchTargetingSpeedHitTestStop, &W32kControlGuid);
  return result;
}
