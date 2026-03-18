/*
 * XREFs of EtwTraceTouchPadWhiteListDeviceDetected @ 0x1C00ACDA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchPadWhiteListDeviceDetected(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0(a1, &TouchPadWhiteListDeviceDetected, &W32kControlGuid);
  return result;
}
