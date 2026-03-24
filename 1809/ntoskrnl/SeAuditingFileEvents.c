/*
 * XREFs of SeAuditingFileEvents @ 0x14089FA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_14040D804 && AccessGranted
    || byte_14040D805 && !AccessGranted
    || byte_14040D806 && AccessGranted
    || byte_14040D807 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
