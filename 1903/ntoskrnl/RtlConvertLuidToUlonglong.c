/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x14031D684
 * Callers:
 *     SepLogTokenSidManagement @ 0x1408DABB4 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
