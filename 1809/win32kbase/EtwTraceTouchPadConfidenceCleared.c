/*
 * XREFs of EtwTraceTouchPadConfidenceCleared @ 0x1C00E8160
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0128FE8 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 * Callees:
 *     McTemplateK0qtt @ 0x1C00EB1B0 (McTemplateK0qtt.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0qtt(a1, a2, a3, a1, a2, a3);
  return result;
}
