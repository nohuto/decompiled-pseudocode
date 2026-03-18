/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C0113978
 * Callers:
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C0007018 (xxxProcessTSFEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00AD898 (xxxProcessNotifyWinEvent.c)
 */

__int64 xxxFlushDeferredWindowEvents()
{
  __int64 result; // rax
  __int64 v1; // r9
  int v2; // ebx
  __int64 i; // rcx
  int v4; // r8d
  __int64 v5; // r8
  bool v6; // zf

  result = (__int64)PsGetCurrentThreadId();
  v2 = result;
LABEL_2:
  for ( i = gPendingNotifiesList[0]; i != gPendingNotifiesList[0]; i = *(_QWORD *)i )
  {
    v4 = *(_DWORD *)(i + 56);
    if ( (v4 & 2) != 0 && *(_DWORD *)(i + 48) == v2 )
    {
      v5 = v4 & 0xFFFFFFFD;
      v6 = *(_DWORD *)(i + 24) == 0;
      *(_DWORD *)(i + 56) = v5;
      if ( v6 )
        result = xxxProcessNotifyWinEvent(i, gPendingNotifiesList[0], v5, v1);
      else
        result = (__int64)xxxProcessTSFEvent((struct tagNOTIFY *)i);
      goto LABEL_2;
    }
  }
  return result;
}
