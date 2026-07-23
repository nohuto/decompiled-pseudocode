/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x1402FF624
 * Callers:
 *     SepLogTokenSidManagement @ 0x14089D3B4 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
