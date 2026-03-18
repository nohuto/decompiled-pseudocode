/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C012DCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  int MoveDataSupported; // eax
  unsigned int v1; // ecx

  MoveDataSupported = IsW32kGenerateMoveDataSupported();
  v1 = 0;
  if ( MoveDataSupported >= 0 )
    return (unsigned int)W32kGenerateMoveData(0LL);
  return v1;
}
