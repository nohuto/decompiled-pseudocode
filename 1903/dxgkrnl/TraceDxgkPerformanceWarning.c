/*
 * XREFs of TraceDxgkPerformanceWarning @ 0x1C0023800
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

ULONG __fastcall TraceDxgkPerformanceWarning(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    return McTemplateK0q(a1, &EventPerformanceWarning, a3, a1);
  return result;
}
