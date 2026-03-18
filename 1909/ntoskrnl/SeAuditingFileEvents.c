/*
 * XREFs of SeAuditingFileEvents @ 0x1408DDAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140435EE4 && AccessGranted
    || byte_140435EE5 && !AccessGranted
    || byte_140435EE6 && AccessGranted
    || byte_140435EE7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
