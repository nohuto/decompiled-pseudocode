/*
 * XREFs of EtwTraceTouchpadInertiaContact @ 0x1C010C300
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceTouchpadInertiaContact(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &TouchpadInertiaContact, &Context.Flags);
  return result;
}
