/*
 * XREFs of ?get_ReadyToPresent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802369F0
 * Callers:
 *     ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x180234748 (-_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_ReadyToPresent(
        RTL_SRWLOCK *this,
        unsigned __int8 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  HWND Ptr; // rbx

  v2 = this + 26;
  AcquireSRWLockShared(this + 26);
  Ptr = (HWND)this[48].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  *a2 = IsWindowVisible(Ptr);
  return 0LL;
}
