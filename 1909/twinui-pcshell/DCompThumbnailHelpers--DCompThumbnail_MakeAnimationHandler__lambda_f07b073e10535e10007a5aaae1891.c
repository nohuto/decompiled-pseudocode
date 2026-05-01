/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x1803F1A38
 * Callers:
 *     ?Destroy@GhostDivider@@UEAAXXZ @ 0x1803F1D40 (-Destroy@GhostDivider@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800A8AA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x1803F18D8 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_5464665cf186818e8ef685f1f658e.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F2054 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___(
        __int64 *a1,
        volatile int *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  _QWORD *v5; // r10
  unsigned int AnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = (__int64)a2;
  *a3 = 0LL;
  v4 = *a1;
  v5 = a3;
  v8 = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      v4,
      a2);
  AnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___(0LL, (__int64)&v8, (__int64)a3, v5);
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(a1);
  return AnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57;
}
