/*
 * XREFs of EtwLogicalSurfPhysSurfUnbindEvent @ 0x1C008BCF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xx @ 0x1C01086A0 (McTemplateK0xx.c)
 */

__int64 __fastcall EtwLogicalSurfPhysSurfUnbindEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xx(a1, &LogicalSurfPhysSurfUnbindEvent, a3, a1, a2);
  return result;
}
