/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x14013F950
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x14012F230 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  NTSTATUS v3; // edi

  v3 = Exception;
  if ( !FsRtlIsNtstatusExpected(Exception) )
    return GenericException;
  return v3;
}
