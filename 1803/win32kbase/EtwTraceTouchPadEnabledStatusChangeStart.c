/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C00ACB80
 * Callers:
 *     EnablePTPDevices @ 0x1C00AAA90 (EnablePTPDevices.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchPadEnabledStatusChangeStart(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0(a1, &TouchPadEnabledStatusChangeStart, &W32kControlGuid);
  return result;
}
