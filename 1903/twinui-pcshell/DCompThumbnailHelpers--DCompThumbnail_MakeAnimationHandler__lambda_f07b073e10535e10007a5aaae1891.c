/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x1803D2458
 * Callers:
 *     ?Destroy@GhostDivider@@UEAAXXZ @ 0x1803D2760 (-Destroy@GhostDivider@@UEAAXXZ.c)
 * Callees:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x1803D22F8 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_5464665cf186818e8ef685f1f658e.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1803D2A68 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  unsigned int AnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  *a3 = 0LL;
  v4 = *a1;
  v7 = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  AnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57___(0LL, (__int64)&v7, (__int64)a3, a3);
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(a1);
  return AnimationHandler__lambda_5464665cf186818e8ef685f1f658efac___lambda_f07b073e10535e10007a5aaae1891d57;
}
