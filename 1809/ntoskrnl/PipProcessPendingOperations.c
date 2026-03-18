/*
 * XREFs of PipProcessPendingOperations @ 0x1409C8B20
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipProcessPendingServices @ 0x1409C8B40 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409C8BCC (PipProcessPendingOsExtensionResources.c)
 */

__int64 PipProcessPendingOperations()
{
  __int64 result; // rax

  result = PipProcessPendingServices();
  if ( (int)result >= 0 )
    return PipProcessPendingOsExtensionResources();
  return result;
}
