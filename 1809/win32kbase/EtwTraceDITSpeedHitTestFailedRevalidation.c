/*
 * XREFs of EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1C00E62B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C00E9DA0 (McTemplateK0p.c)
 */

__int64 __fastcall EtwTraceDITSpeedHitTestFailedRevalidation(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0p(a1, &DITSpeedHitTestFailedRevalidation, &Context.Flags, a1);
  return result;
}
