/*
 * XREFs of EtwTraceTouchPadConfidenceUpped @ 0x1C00E8190
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00E945C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceUpped(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0q(a1, &TouchPadConfidenceUpped, a3, (unsigned int)a1);
  return result;
}
