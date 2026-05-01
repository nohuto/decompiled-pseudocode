/*
 * XREFs of ?SetActivationPropertySet@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x180212EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::SetActivationPropertySet(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  RTL_SRWLOCK *v2; // rsi

  v2 = (RTL_SRWLOCK *)((char *)this + 192);
  AcquireSRWLockExclusive((PSRWLOCK)this + 24);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 52, (__int64)a2);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
