/*
 * XREFs of RtlCrc64 @ 0x1800F2930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return sub_1800851B0((unsigned __int64)Buffer, Size, InitialCrc, &off_1801195A0);
}
