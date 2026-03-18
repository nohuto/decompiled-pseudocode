/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C0124890
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0130CD4 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C01310F0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C0121A7C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

IOCPDispatcher *IOCPDispatcher_Destroy()
{
  IOCPDispatcher *result; // rax

  if ( gpIOCPDispatcher )
  {
    result = IOCPDispatcher::`scalar deleting destructor'(gpIOCPDispatcher);
    gpIOCPDispatcher = 0LL;
  }
  return result;
}
