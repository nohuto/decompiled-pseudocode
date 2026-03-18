/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C0091DF0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C007A558 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C0152FE0 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C0091EE4 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

void *__fastcall IOCPDispatcher_Destroy(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    result = IOCPDispatcher::`scalar deleting destructor'((IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceContext, a2);
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
  }
  return result;
}
