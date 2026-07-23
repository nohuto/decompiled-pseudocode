/*
 * XREFs of SeAuditingFileEvents @ 0x1408A0C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_14040E8A4 && AccessGranted
    || byte_14040E8A5 && !AccessGranted
    || byte_14040E8A6 && AccessGranted
    || byte_14040E8A7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
