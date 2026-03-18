/*
 * XREFs of BgConsoleDestroyInterface @ 0x140990EFC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A41B88 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140990F58 (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_1404F2AD8;
    if ( qword_1404F2AD8 )
    {
      if ( *(_QWORD *)(qword_1404F2AD8 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_1404F2AD8 + 40));
        v2 = qword_1404F2AD8;
      }
      BgpFwFreeMemory(v2);
      qword_1404F2AD8 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
