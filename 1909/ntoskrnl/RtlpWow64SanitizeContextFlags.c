/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x1406C8CE0
 * Callers:
 *     PspWow64SetContextThread @ 0x1406C8224 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C85B4 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140017380 (RtlpValidateContextFlags.c)
 *     RtlpArchContextFlagFromMachine @ 0x1406C9148 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlpWow64SanitizeContextFlags(__int64 a1, char a2)
{
  int *v3; // r10
  __int64 result; // rax
  unsigned int *v5; // r10
  int v6; // r11d

  RtlpArchContextFlagFromMachine(332LL);
  result = RtlpValidateContextFlags(*v3, 0LL);
  if ( (int)result >= 0 && (v6 & *v5) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( a2 )
    {
      *v5 = (v6 | *v5) & 0xD801007F;
      return 0LL;
    }
  }
  return result;
}
