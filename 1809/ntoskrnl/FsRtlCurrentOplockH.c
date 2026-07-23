/*
 * XREFs of FsRtlCurrentOplockH @ 0x140816340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlCurrentOplockH(POPLOCK Oplock)
{
  BOOLEAN v1; // dl

  v1 = 0;
  if ( *Oplock )
    return (*((_DWORD *)*Oplock + 36) & 0x2000) != 0;
  return v1;
}
