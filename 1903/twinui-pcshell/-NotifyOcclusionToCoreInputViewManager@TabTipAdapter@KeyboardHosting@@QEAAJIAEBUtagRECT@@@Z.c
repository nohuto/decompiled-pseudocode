/*
 * XREFs of ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180320B54
 * Callers:
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18030ED24 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18030FA24 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ??$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEAGAEAURect@Foundation@5@AEAU675@AEAU675@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@$$QEAPEAGAEAURect@Foundation@5@33@Z @ 0x18031B994 (--$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Wind.c)
 *     ??$Make@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@5678@@Z @ 0x18031BBDC (--$Make@V-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityP.c)
 *     ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x18032B0D4 (-GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AW4CoreInputViewOcclusionKind@Core@V.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        __m128i *a3)
{
  __m128i v4; // xmm1
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v17; // [rsp+38h] [rbp-49h] BYREF
  __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  _QWORD *v19; // [rsp+48h] [rbp-39h] BYREF
  unsigned int OcclusionKind; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v21[4]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v22; // [rsp+68h] [rbp-19h] BYREF
  LPVOID pv[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v24; // [rsp+88h] [rbp+7h]
  __int128 v25; // [rsp+90h] [rbp+Fh] BYREF
  __int128 v26; // [rsp+A0h] [rbp+1Fh] BYREF
  __int128 v27; // [rsp+B0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v24 = -2LL;
  v21[0] = a2;
  v19 = 0LL;
  v4 = *a3;
  v5 = a3->m128i_i64[0];
  *(float *)pv = (float)(int)a3->m128i_i64[0];
  *((float *)pv + 1) = (float)SHIDWORD(v5);
  v4.m128i_i64[0] = _mm_srli_si128(v4, 8).m128i_u64[0];
  *(float *)&pv[1] = (float)(v4.m128i_i32[0] - v5 + 1);
  *((float *)&pv[1] + 1) = (float)(v4.m128i_i32[1] - HIDWORD(v5) + 1);
  v25 = *(_OWORD *)pv;
  OcclusionKind = KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(*((_QWORD *)this + 12));
  v22 = v25;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD **))(**((_QWORD **)this + 4) + 64LL))(
         *((_QWORD *)this + 4),
         &v22,
         OcclusionKind,
         &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x474,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_19;
  }
  v18 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v8 = 0LL;
  v18 = 0LL;
  v7 = 0;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::permission>((__int64 *)&v22);
  v9 = v22;
  if ( (_QWORD)v22 )
  {
    v8 = v22;
    *(_QWORD *)&v22 = 0LL;
    v18 = v9;
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  if ( v7 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 104LL))(v8, v19);
    v7 = v12;
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, &v17);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4), v17);
        v7 = v12;
        if ( v12 >= 0 )
        {
          TouchKeyboardExperienceManager::GetForegroundAppId(v13, pv);
          v14 = *((_QWORD *)this + 12);
          v27 = *(_OWORD *)(v14 + 176);
          v26 = *(_OWORD *)(v14 + 144);
          *(LPVOID *)&v22 = pv[0];
          TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged<unsigned int &,enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind &,unsigned short *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
            v21,
            &OcclusionKind,
            &v22,
            (__int64)&v25,
            (__int64)&v27,
            (__int64)&v26);
          v7 = 0;
          if ( pv[0] )
            CoTaskMemFree(pv[0]);
          goto LABEL_18;
        }
        v11 = 1146LL;
      }
      else
      {
        v11 = 1145LL;
      }
    }
    else
    {
      v11 = 1144LL;
    }
    v10 = (unsigned int)v12;
  }
  else
  {
    v10 = (unsigned int)v7;
    v11 = 1143LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)v10);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_19:
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v15 + 16LL))(v15, *v15);
  }
  return (unsigned int)v7;
}
