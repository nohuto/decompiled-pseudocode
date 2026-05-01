/*
 * XREFs of ?get_CoreWindowId@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAI@Z @ 0x1802172A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_CoreWindowId(
        RTL_SRWLOCK *this,
        unsigned int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 24;
  AcquireSRWLockShared(this + 24);
  *a2 = (unsigned int)this[46].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
