/*
 * XREFs of SeAuditingFileEvents @ 0x14089FA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_14040D864 && AccessGranted
    || byte_14040D865 && !AccessGranted
    || byte_14040D866 && AccessGranted
    || byte_14040D867 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
