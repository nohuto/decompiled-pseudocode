/*
 * XREFs of BgConsoleDestroyInterface @ 0x140990EFC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A41958 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140178CE0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140179150 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140990F58 (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_1404F2818;
    if ( qword_1404F2818 )
    {
      if ( *(_QWORD *)(qword_1404F2818 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_1404F2818 + 40));
        v2 = qword_1404F2818;
      }
      BgpFwFreeMemory(v2);
      qword_1404F2818 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
