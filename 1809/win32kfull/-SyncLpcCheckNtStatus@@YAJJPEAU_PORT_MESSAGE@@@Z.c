/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00BA814
 * Callers:
 *     DwmSyncNotifyMinimizing @ 0x1C00B9454 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncHitTestQuery @ 0x1C00B95F4 (DwmSyncHitTestQuery.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00B9D4C (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C00BA0EC (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C00BA370 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C00BA530 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncDesktopSwitch @ 0x1C00BAA10 (DwmSyncDesktopSwitch.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0259658 (DwmSyncMagnUpdateWindowSharedTextures.c)
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
