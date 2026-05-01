/*
 * XREFs of ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1802C30F0
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1802B7AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x1802BA530 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@5678@@Z @ 0x1802BEE3C (--$Make@V-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(
        __int64 a1,
        __m128i *a2,
        unsigned int a3)
{
  __m128i v4; // xmm1
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // esi
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  float v16[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  v15[1] = -2LL;
  v15[0] = 0LL;
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v16[0] = (float)(int)v5;
  v16[1] = (float)SHIDWORD(v5);
  v4.m128i_i64[0] = _mm_srli_si128(v4, 8).m128i_u64[0];
  v16[2] = (float)(v4.m128i_i32[0] - v5 + 1);
  v16[3] = (float)(v4.m128i_i32[1] - HIDWORD(v5) + 1);
  v6 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 32) + 64LL))(
         *(_QWORD *)(a1 + 32),
         v16,
         a3,
         v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  v20 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  v8 = 0LL;
  v20 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::permission>(&v18);
  v9 = (v18 != 0) - 1;
  v7 = -2147024882;
  if ( v18 )
  {
    v7 = 0;
    v8 = v18;
    v18 = 0LL;
    v20 = v8;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  if ( v9 == -1 )
  {
    v10 = v7;
    v11 = 1019LL;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 104LL))(v8, v15[0]);
    v7 = v12;
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, &v19);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32), v19);
        v7 = v12;
        if ( v12 >= 0 )
        {
          v7 = 0;
          goto LABEL_16;
        }
        v11 = 1022LL;
      }
      else
      {
        v11 = 1021LL;
      }
    }
    else
    {
      v11 = 1020LL;
    }
    v10 = (unsigned int)v12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_17:
  v13 = (_QWORD *)v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  }
  return v7;
}
