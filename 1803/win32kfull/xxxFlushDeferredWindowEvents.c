/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C0028C98
 * Callers:
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x1C00D7064 (xxxProcessTSFEvent.c)
 */

__int64 xxxFlushDeferredWindowEvents()
{
  __int64 result; // rax
  int v1; // ebx
  struct tagNOTIFY **i; // rcx
  int v3; // edx
  __int64 v4; // rdx
  bool v5; // zf

  result = (__int64)PsGetCurrentThreadId();
  v1 = result;
LABEL_2:
  for ( i = gpPendingNotifies; i; i = (struct tagNOTIFY **)*i )
  {
    v3 = *((_DWORD *)i + 12);
    if ( (v3 & 2) != 0 && *((_DWORD *)i + 10) == v1 )
    {
      v4 = v3 & 0xFFFFFFFD;
      v5 = *((_DWORD *)i + 4) == 0;
      *((_DWORD *)i + 12) = v4;
      if ( v5 )
        result = xxxProcessNotifyWinEvent((__int64)i, v4);
      else
        result = xxxProcessTSFEvent((struct tagNOTIFY *)i);
      goto LABEL_2;
    }
  }
  return result;
}
