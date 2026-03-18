/*
 * XREFs of EtwTracePointerDeviceTransformationStart @ 0x1C010B900
 * Callers:
 *     rimTransformGeometry @ 0x1C01570F8 (rimTransformGeometry.c)
 * Callees:
 *     McTemplateK0q @ 0x1C010D17C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePointerDeviceTransformationStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0q(a1, &PointerDeviceTransformationStart, a3, (unsigned int)a1);
  return result;
}
