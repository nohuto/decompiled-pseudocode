/*
 * XREFs of EtwTracePointerDeviceTransformationStart @ 0x1C00AC4E0
 * Callers:
 *     RIMApplyTransforms @ 0x1C00E8AC8 (RIMApplyTransforms.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00ADFE8 (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePointerDeviceTransformationStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0q(a1, &PointerDeviceTransformationStart, a3, (unsigned int)a1);
  return result;
}
