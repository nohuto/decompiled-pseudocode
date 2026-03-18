/*
 * XREFs of ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C0112468
 * Callers:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001DB9C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C004405C (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     EditionKeyEventLLHook @ 0x1C00B4470 (EditionKeyEventLLHook.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x1C0112440 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0127140 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     EditionHandleAltTabCancel @ 0x1C012A200 (EditionHandleAltTabCancel.c)
 * Callees:
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C01124D0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleExplicit(int a1, const struct tagTHREADINFO *a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v4 = 0;
  if ( !a1
    || !gpqForeground
    || a4
    || (unsigned int)IsForegroundShellFrameQueueAccessible(a2)
    || (unsigned __int8)CheckAccess(&v6, gpqForeground + 436LL) )
  {
    return 1;
  }
  return v4;
}
