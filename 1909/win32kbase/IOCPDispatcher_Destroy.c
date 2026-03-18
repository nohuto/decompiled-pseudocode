/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C00A4A60
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C009CB08 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C0185010 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00A4B50 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall IOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( gpIOCPDispatcher )
  {
    result = IOCPDispatcher::`scalar deleting destructor'(gpIOCPDispatcher, a2);
    gpIOCPDispatcher = 0LL;
  }
  return result;
}
