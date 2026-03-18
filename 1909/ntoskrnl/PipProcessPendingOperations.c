/*
 * XREFs of PipProcessPendingOperations @ 0x1409F8194
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipProcessPendingOsExtensionResources @ 0x1409F81B4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1409F8240 (PipProcessPendingServices.c)
 */

__int64 PipProcessPendingOperations()
{
  __int64 result; // rax

  result = PipProcessPendingServices();
  if ( (int)result >= 0 )
    return PipProcessPendingOsExtensionResources();
  return result;
}
