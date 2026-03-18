/*
 * XREFs of EtwTraceConvertibleState @ 0x1C00AB910
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00ADFE8 (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceConvertibleState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
    return McTemplateK0q(a1, &SystemConvertibleState, a3, (unsigned int)a1);
  return result;
}
