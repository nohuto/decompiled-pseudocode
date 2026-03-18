/*
 * XREFs of EtwTracePointerPredictionStop @ 0x1C00E7DA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00E945C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePointerPredictionStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0q(a1, &PointerPredictionStop, a3, (unsigned int)a1);
  return result;
}
