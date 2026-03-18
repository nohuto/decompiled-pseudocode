/*
 * XREFs of EtwTraceTouchTargetingWindowHitTestStop @ 0x1C010EBE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchTargetingWindowHitTestStop(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &TouchTargetingWindowHitTestStop, &Context.Flags);
  return result;
}
