/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C00EDCC8
 * Callers:
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C0007018 (xxxProcessTSFEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C004E6B8 (xxxProcessNotifyWinEvent.c)
 */

__int64 xxxFlushDeferredWindowEvents()
{
  __int64 result; // rax
  int v1; // ebx
  __int64 i; // rcx
  int v3; // r8d
  __int64 v4; // r8
  bool v5; // zf

  result = (__int64)PsGetCurrentThreadId();
  v1 = result;
LABEL_2:
  for ( i = gPendingNotifiesList[0]; i != gPendingNotifiesList[0]; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 56);
    if ( (v3 & 2) != 0 && *(_DWORD *)(i + 48) == v1 )
    {
      v4 = v3 & 0xFFFFFFFD;
      v5 = *(_DWORD *)(i + 24) == 0;
      *(_DWORD *)(i + 56) = v4;
      if ( v5 )
        result = xxxProcessNotifyWinEvent(i, gPendingNotifiesList[0], v4);
      else
        result = (__int64)xxxProcessTSFEvent((struct tagNOTIFY *)i);
      goto LABEL_2;
    }
  }
  return result;
}
