/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C010E7D0
 * Callers:
 *     EnablePTPDevices @ 0x1C0109E50 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchPadEnabledStatusChangeStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &TouchPadEnabledStatusChangeStart, &Context.Flags);
  return result;
}
