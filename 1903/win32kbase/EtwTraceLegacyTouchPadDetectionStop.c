/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStop @ 0x1C00A98C0
 * Callers:
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014DED4 (RIMVirtCreateDev.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceLegacyTouchPadDetectionStop(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &LegacyTouchPadDetectionStop, &Context.Flags);
  return result;
}
