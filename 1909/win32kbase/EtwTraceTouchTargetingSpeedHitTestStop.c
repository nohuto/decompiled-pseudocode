/*
 * XREFs of EtwTraceTouchTargetingSpeedHitTestStop @ 0x1C010C210
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchTargetingSpeedHitTestStop(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &TouchTargetingSpeedHitTestStop, &Context.Flags);
  return result;
}
