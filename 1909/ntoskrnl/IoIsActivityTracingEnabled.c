/*
 * XREFs of IoIsActivityTracingEnabled @ 0x140117770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IoIsActivityTracingEnabled()
{
  char v0; // cl

  if ( (IopFunctionPointerMask & 4) == 0 )
    return 0;
  v0 = 1;
  if ( (IopIrpExtensionStatus & 1) == 0 )
    return 0;
  return v0;
}
