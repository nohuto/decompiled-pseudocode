/*
 * XREFs of ?AnimatePositionChanged@VirtualDesktopRemoveAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1803A55C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180379E0C (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18038B480 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x18039AB80 (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 */

void __fastcall VirtualDesktopRemoveAnimationCoordinator::AnimatePositionChanged(
        VirtualDesktopRemoveAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  int v9; // ecx
  __int64 *v10; // [rsp+30h] [rbp-20h] BYREF
  __m128i v11; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *((_DWORD *)a2 + 2) == 8 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)a2 + 512LL))(
      *(_QWORD *)a2,
      (char *)a2 + 12,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 512LL))(*(_QWORD *)a2, (char *)a2 + 28, 27LL);
    return;
  }
  if ( *((_DWORD *)a2 + 2) == 3 )
  {
    v10 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(a2, (__int64 *)&v10);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64 *, char *, __int64))(*v10 + 112))(v10, (char *)a2 + 28, 27LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopremoveanimationcoordinator.cpp",
        (const char *)(unsigned int)v4);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    return;
  }
  if ( *((_DWORD *)a2 + 2) == 7 && *((_QWORD *)this + 16) )
  {
    v10 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(a2, (__int64 *)&v10);
    if ( v5 >= 0 )
    {
      v6 = (__int64)v10;
      v7 = *v10;
      HighContrastAwareOpacity<float>::operator float((float *)this + 64);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(v7 + 40))(v6, 0LL, v8, 0LL, 0LL);
      v9 = *((_DWORD *)this + 186);
      v11 = *(__m128i *)((char *)a2 + 28);
      v11.m128i_i32[3] = v9 + _mm_srli_si128(v11, 8).m128i_i32[1];
      v11.m128i_i32[1] += v9;
      (*(void (__fastcall **)(__int64 *, _QWORD, char *, _QWORD, _QWORD))(*v10 + 32))(
        v10,
        0LL,
        (char *)a2 + 28,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64 *, _QWORD, __m128i *, __int64, _QWORD))(*v10 + 32))(v10, 0LL, &v11, 24LL, 0LL);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopremoveanimationcoordinator.cpp",
        (const char *)(unsigned int)v5);
    }
    goto LABEL_12;
  }
}
