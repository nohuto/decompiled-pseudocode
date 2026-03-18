/*
 * XREFs of EtwTraceTouchPadConfidenceCleared @ 0x1C00ACAB0
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01009D4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 * Callees:
 *     McTemplateK0qtt @ 0x1C00B006C (McTemplateK0qtt.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0qtt(a1, a2, a3, a1, a2, a3);
  return result;
}
