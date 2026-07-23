/*
 * XREFs of BgConsoleDestroyInterface @ 0x140951E9C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140952A04 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1409FCECC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140951EF8 (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_1404C7598;
    if ( qword_1404C7598 )
    {
      if ( *(_QWORD *)(qword_1404C7598 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_1404C7598 + 40));
        v2 = qword_1404C7598;
      }
      BgpFwFreeMemory(v2);
      qword_1404C7598 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
