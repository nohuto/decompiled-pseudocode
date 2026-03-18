/*
 * XREFs of EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1C006AD50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xx @ 0x1C00DAB18 (McTemplateK0xx.c)
 */

__int64 __fastcall EtwDwmSpriteLogicalSurfUnBindEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xx(a1, &DwmSpriteLogicalSurfUnBindEvent, a3, a1, a2);
  return result;
}
