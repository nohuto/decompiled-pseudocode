/*
 * XREFs of BgConsoleGetInterface @ 0x14094E7DC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1409FB8E0 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1409FBECC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140405AD0 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140405B78 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
