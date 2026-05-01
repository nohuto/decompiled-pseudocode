/*
 * XREFs of ?get_UniqueId@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAI@Z @ 0x180217240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_UniqueId(
        RTL_SRWLOCK *this,
        unsigned int *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = this + 26;
  AcquireSRWLockShared(this + 26);
  *a2 = (unsigned int)this[48].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
