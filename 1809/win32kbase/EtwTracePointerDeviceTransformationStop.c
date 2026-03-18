/*
 * XREFs of EtwTracePointerDeviceTransformationStop @ 0x1C00E7CE0
 * Callers:
 *     RIMApplyTransforms @ 0x1C0112708 (RIMApplyTransforms.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00E945C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePointerDeviceTransformationStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0q(a1, &PointerDeviceTransformationStop, a3, (unsigned int)a1);
  return result;
}
