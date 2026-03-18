/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0086F78
 * Callers:
 *     DwmSyncDesktopSwitch @ 0x1C00834D0 (DwmSyncDesktopSwitch.c)
 *     DwmSyncHitTestQuery @ 0x1C0083B48 (DwmSyncHitTestQuery.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0084FC4 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C0085978 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C0086288 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C0086500 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C0086E34 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0272F38 (DwmSyncMagnUpdateWindowSharedTextures.c)
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
