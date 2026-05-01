/*
 * XREFs of ?GetActivationPropertySet@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x18022E620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::GetActivationPropertySet(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  RTL_SRWLOCK *v2; // rsi

  *a2 = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 192);
  AcquireSRWLockShared((PSRWLOCK)this + 24);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 52);
  *a2 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 52);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
