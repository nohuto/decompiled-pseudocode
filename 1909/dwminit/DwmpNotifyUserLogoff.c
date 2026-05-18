/*
 * XREFs of DwmpNotifyUserLogoff @ 0x180003330
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001410 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003790 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x180003EA8 (DwmpRequestUnloadUserRegKeys.c)
 */

__int64 DwmpNotifyUserLogoff()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    v1 = DwmpRequestUnloadUserRegKeys();
    v0 = v1;
    if ( v1 < 0 )
      DoStackCaptureDirect(v1, 0x671u);
  }
  TraceLoggingWriteEtw((const struct _TlgProvider_t *)8, v0, 0LL);
  ReleaseSRWLockShared(&gDwmStateLock);
  return v0;
}
