/*
 * XREFs of PipProcessPendingOperations @ 0x1409F8284
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipProcessPendingOsExtensionResources @ 0x1409F82A4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1409F8330 (PipProcessPendingServices.c)
 */

__int64 PipProcessPendingOperations()
{
  __int64 result; // rax

  result = PipProcessPendingServices();
  if ( (int)result >= 0 )
    return PipProcessPendingOsExtensionResources();
  return result;
}
