/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x1406A9FCC
 * Callers:
 *     PspWow64GetContextThread @ 0x1406A9558 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1406A9C5C (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1400A1FB0 (RtlpValidateContextFlags.c)
 *     RtlpArchContextFlagFromMachine @ 0x1406AA3FC (RtlpArchContextFlagFromMachine.c)
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
