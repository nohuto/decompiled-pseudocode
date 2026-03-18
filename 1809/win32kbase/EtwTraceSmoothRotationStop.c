/*
 * XREFs of EtwTraceSmoothRotationStop @ 0x1C00E7EF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qt @ 0x1C00EB0B8 (McTemplateK0qt.c)
 */

__int64 __fastcall EtwTraceSmoothRotationStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0qt(a1, a2, a3, (unsigned int)a1, a2);
  return result;
}
