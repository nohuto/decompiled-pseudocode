/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x14031D0D4
 * Callers:
 *     SepLogTokenSidManagement @ 0x1408DA4B4 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
