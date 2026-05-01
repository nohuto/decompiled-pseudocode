/*
 * XREFs of ?OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x180211680
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x18020E9FC (-CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ @ 0x180215D58 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::OnShellHookMessage(
        RTL_SRWLOCK *this,
        __int64 a2,
        PVOID a3)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // r14

  v3 = this + 7;
  AcquireSRWLockShared(this + 7);
  Ptr = this[29].Ptr;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  if ( a3 == Ptr
    && a2 == 6
    && Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::CheckWindowTextChanged((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)&this[-19]) )
  {
    Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaiseTitleBarChangedEvent((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)&this[-19]);
  }
  return 0LL;
}
