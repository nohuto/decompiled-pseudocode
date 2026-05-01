/*
 * XREFs of ?Destroy@GhostDivider@@UEAAXXZ @ 0x1803D2760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x1803D2458 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1803D2A68 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall GhostDivider::Destroy(GhostDivider *this)
{
  int v2; // edi
  __int64 v3; // rdx
  int AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57; // eax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  GhostDivider *v8; // [rsp+58h] [rbp+10h] BYREF
  GhostDivider *v9; // [rsp+60h] [rbp+18h] BYREF
  GhostDivider *v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = -2147467259;
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_6;
  v10 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 3);
  v9 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 3);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v8 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 3);
  AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___(
                                                                (__int64 *)&v8,
                                                                v3,
                                                                &v7);
  v2 = AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57;
  if ( AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57 >= 0 )
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)this + 7) + 32LL))(
           *((_QWORD *)this + 7),
           v5,
           3LL,
           v7);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9C,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v10);
  if ( v2 < 0 )
  {
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA2,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v2);
    DestroyWindow(*((HWND *)this + 3));
  }
}
