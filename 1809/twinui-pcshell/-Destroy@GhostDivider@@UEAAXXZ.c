/*
 * XREFs of ?Destroy@GhostDivider@@UEAAXXZ @ 0x18036C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E5FE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Ch_ea_1800E5FE0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800E6520 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___ @ 0x18036C590 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x18036CBB4 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall GhostDivider::Destroy(GhostDivider *this, volatile int *a2)
{
  int v3; // edi
  volatile int *v4; // rdx
  int AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  GhostDivider *v9; // [rsp+58h] [rbp+10h] BYREF
  GhostDivider *v10; // [rsp+60h] [rbp+18h] BYREF
  GhostDivider *v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = -2147467259;
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_6;
  v11 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
    (__int64)this,
    a2);
  v10 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef((__int64)this);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v9 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef((__int64)this);
  AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57___(
                                                                (__int64 *)&v9,
                                                                v4,
                                                                &v8);
  v3 = AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57;
  if ( AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57 >= 0 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)this + 7) + 32LL))(
           *((_QWORD *)this + 7),
           v6,
           3LL,
           v8);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      156LL,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_f07b073e10535e10007a5aaae1891d57);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(&v11);
  if ( v3 < 0 )
  {
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      162LL,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v3);
    DestroyWindow(*((HWND *)this + 3));
  }
}
