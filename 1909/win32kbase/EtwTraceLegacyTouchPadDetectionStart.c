/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStart @ 0x1C00A8A20
 * Callers:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceLegacyTouchPadDetectionStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &LegacyTouchPadDetectionStart, &Context.Flags);
  return result;
}
