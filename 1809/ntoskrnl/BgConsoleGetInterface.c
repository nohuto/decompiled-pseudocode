/*
 * XREFs of BgConsoleGetInterface @ 0x14094F7DC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1409FC8E0 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1409FCECC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140406AD0 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140406B78 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
