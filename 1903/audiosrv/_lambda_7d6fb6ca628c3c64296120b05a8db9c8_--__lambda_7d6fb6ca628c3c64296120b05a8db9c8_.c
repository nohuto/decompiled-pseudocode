/*
 * XREFs of _lambda_7d6fb6ca628c3c64296120b05a8db9c8_::__lambda_7d6fb6ca628c3c64296120b05a8db9c8_ @ 0x180069FE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___::_scalar_deleting_destructor_ @ 0x18006A830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___--_scala.c)
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18013F780 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BE2A4 (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 */

__int64 __fastcall lambda_7d6fb6ca628c3c64296120b05a8db9c8_::__lambda_7d6fb6ca628c3c64296120b05a8db9c8_(__int64 *a1)
{
  wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(a1 + 1);
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a1);
}
