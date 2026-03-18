/*
 * XREFs of EtwTracePointerPredictionStart @ 0x1C00AC5A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00ADFE8 (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePointerPredictionStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0q(a1, &PointerPredictionStart, a3, (unsigned int)a1);
  return result;
}
