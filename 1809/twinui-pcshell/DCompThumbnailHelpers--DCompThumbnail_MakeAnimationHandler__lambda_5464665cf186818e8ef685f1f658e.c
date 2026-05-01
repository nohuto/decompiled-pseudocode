/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x18036C418
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x18036C590 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x18036C6F4 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lamb.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x18036CBB4 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rbx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rsi
  unsigned int v10; // edi

  *a4 = 0LL;
  v5 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v7 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___::CAnimationCallbackHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___(
                                                               v7,
                                                               v8,
                                                               a2,
                                                               0LL);
    v9 = v5;
  }
  v10 = v9 == 0LL ? 0x8007000E : 0;
  if ( v9 )
  {
    v10 = (**v5)(v5, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  }
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(a2);
  return v10;
}
