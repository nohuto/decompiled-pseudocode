/*
 * XREFs of EtwTraceSPIBlockedByFiltering @ 0x1C012FAB0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00761C0 (xxxSystemParametersInfo.c)
 * Callees:
 *     McTemplateK0q @ 0x1C010D17C (McTemplateK0q.c)
 */

ULONG __fastcall EtwTraceSPIBlockedByFiltering(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, __int64 a3)
{
  ULONG result; // eax

  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0q(a1, &SPIBlockedByFiltering, a3, (int)a1);
  return result;
}
