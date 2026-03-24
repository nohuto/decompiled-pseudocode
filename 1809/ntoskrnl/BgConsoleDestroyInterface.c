/*
 * XREFs of BgConsoleDestroyInterface @ 0x140950E9C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140951A04 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1409FBECC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECEC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F208 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F258 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140950EF8 (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_1404C64D8;
    if ( qword_1404C64D8 )
    {
      if ( *(_QWORD *)(qword_1404C64D8 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_1404C64D8 + 40));
        v2 = qword_1404C64D8;
      }
      BgpFwFreeMemory(v2);
      qword_1404C64D8 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
