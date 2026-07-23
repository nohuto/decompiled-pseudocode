/*
 * XREFs of RtlLockBootStatusData @ 0x1800EADC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlLockBootStatusData(PHANDLE FileHandle)
{
  if ( FileHandle )
    *FileHandle = 0LL;
  return -1073741637;
}
