/*
 * XREFs of ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x1802D6E00
 * Callers:
 *     <none>
 * Callees:
 *     std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___ @ 0x1802D54D0 (std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___.c)
 */

void __fastcall ThumbnailDeviceFactory::PreCreateThumbnailDevice(ThumbnailDeviceFactory *this)
{
  ThumbnailDeviceFactory *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52___(
    (ThumbnailDeviceFactory *)((char *)this + 56),
    (__int64)&v1);
}
