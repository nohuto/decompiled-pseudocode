/*
 * XREFs of SeAuditingFileEvents @ 0x1408DE1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140435F64 && AccessGranted
    || byte_140435F65 && !AccessGranted
    || byte_140435F66 && AccessGranted
    || byte_140435F67 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
