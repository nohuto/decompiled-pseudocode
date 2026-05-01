/*
 * XREFs of _lambda_473ea9c22bd898f9bd25c8344d56a065_::operator() @ 0x18038DE90
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_473ea9c22bd898f9bd25c8344d56a065_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x18038D600 (--$LambdaEnumWindowsProc@V_lambda_473ea9c22bd898f9bd25c8344d56a065_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_473ea9c22bd898f9bd25c8344d56a065_::operator()(__int64 a1, HWND a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  int v6; // eax
  int v7; // r9d
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rbx
  void *v15; // r8
  _QWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h] BYREF
  int v23; // [rsp+68h] [rbp-19h] BYREF
  int v24; // [rsp+70h] [rbp-11h] BYREF
  int *v25; // [rsp+78h] [rbp-9h]
  int v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  _DWORD v28[4]; // [rsp+90h] [rbp+Fh] BYREF
  _DWORD v29[4]; // [rsp+A0h] [rbp+1Fh] BYREF
  struct tagRECT Rect; // [rsp+B0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v27 = -2LL;
  v24 = 18;
  v25 = &v23;
  v26 = 4;
  if ( GetPropW(a2, L"DesktopWindow")
    && IsWindowVisible(a2)
    && (unsigned int)GetWindowCompositionAttribute(a2, &v24)
    && !v23 )
  {
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v4 = *(__m128i *)(*(_QWORD *)a1 + 168LL);
    v28[0] = _mm_cvtsi128_si32(v4) - Rect.left;
    v28[2] = v4.m128i_i32[2] - Rect.left;
    v28[3] = v4.m128i_i32[3] - Rect.top;
    v28[1] = v4.m128i_i32[1] - Rect.top;
    v21 = 0LL;
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *))(*(_QWORD *)v5 + 64LL))(
           v5,
           **(_QWORD **)(a1 + 8),
           a2,
           0LL,
           0LL,
           v28,
           &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
           &v21);
    if ( v6 >= 0 )
    {
      v22 = 0LL;
      v7 = *(_DWORD *)(*(_QWORD *)a1 + 180LL);
      v8 = *(_DWORD *)(*(_QWORD *)a1 + 172LL);
      v9 = *(_DWORD *)(*(_QWORD *)a1 + 176LL);
      v10 = *(_DWORD *)(*(_QWORD *)a1 + 168LL);
      v29[0] = 0;
      v29[1] = 0;
      v29[2] = v9 - v10;
      v29[3] = v7 - v8;
      v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(v21, v29, 0LL, 0LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          401LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v11);
      LOBYTE(v12) = 1;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v21 + 152LL))(v21, 0LL, v12);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          402LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v13);
      v14 = v21;
      v22 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
      v16 = *(_QWORD **)(a1 + 16);
      v17 = 0;
      v18 = v16[1];
      if ( v18 != v16[3]
        || (v17 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    *(_QWORD *)(a1 + 16),
                    v18 + 1,
                    v15),
            v17 >= 0) )
      {
        v19 = (__int64 *)(*v16 + 8 * v16[1]++);
        if ( v19 )
        {
          *v19 = 0LL;
          if ( v19 != &v22 )
          {
            *v19 = v14;
            v22 = 0LL;
          }
        }
      }
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          403LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        399LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  }
  return 1LL;
}
