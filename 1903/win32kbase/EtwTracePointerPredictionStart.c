/*
 * XREFs of EtwTracePointerPredictionStart @ 0x1C010E330
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C010FAEC (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePointerPredictionStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0q(a1, &PointerPredictionStart, a3, (unsigned int)a1);
  return result;
}
