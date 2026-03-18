/*
 * XREFs of EtwFontLoadAttemptEvent @ 0x1C0107C80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqzt @ 0x1C0108714 (McTemplateK0zqzt.c)
 */

char __fastcall EtwFontLoadAttemptEvent(int a1, int a2, __int64 a3, char a4)
{
  char result; // al

  result = BYTE3(Microsoft_Windows_Win32kEnableBits);
  if ( SBYTE3(Microsoft_Windows_Win32kEnableBits) < 0 )
    return McTemplateK0zqzt(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
