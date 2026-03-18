/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C006D634
 * Callers:
 *     DwmSyncDesktopSwitch @ 0x1C0056CA4 (DwmSyncDesktopSwitch.c)
 *     DwmSyncHitTestQuery @ 0x1C0056D80 (DwmSyncHitTestQuery.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0056ED0 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C005709C (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C0057790 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C006BAF0 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C006D668 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0241AE8 (DwmSyncMagnUpdateWindowSharedTextures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SyncLpcCheckNtStatus(int a1, struct _PORT_MESSAGE *a2)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return (unsigned int)a1;
  if ( a1 == 192 )
    return 3221225473LL;
  if ( a1 == 258 )
    return 3221225473LL;
  result = (unsigned int)a1;
  if ( ((unsigned __int16)a2->u2.s2.Type & 0xFFFF00FF) != 2 )
    return 3221225473LL;
  return result;
}
