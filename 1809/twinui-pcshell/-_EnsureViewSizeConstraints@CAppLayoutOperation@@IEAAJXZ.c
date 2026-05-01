/*
 * XREFs of ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x1803B8938
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803583C4 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803AC76C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803B97F4 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 */

__int64 __fastcall CAppLayoutOperation::_EnsureViewSizeConstraints(CAppLayoutOperation *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rdi
  int ViewFullScreen; // eax
  __int64 v12; // rdx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v13; // rdx
  enum DEVICE_SCALE_FACTOR v14; // r8d
  int v15; // r14d
  int v16; // esi
  int v17; // r12d
  int v18; // edi
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp-59h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h] BYREF
  __int64 v26[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 v27; // [rsp+70h] [rbp-29h] BYREF
  __int128 v28; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp-9h] BYREF
  _DWORD v30[10]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5))
    && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5)) )
  {
    v2 = 0LL;
    v25 = 0LL;
    if ( *((_QWORD *)this + 8) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v25, (__int64 *)this + 8);
      v2 = v25;
    }
    else
    {
      v6 = *((_QWORD *)this + 5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v6 + 104LL))(
             v6,
             0LL,
             1LL,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             (char *)this + 64);
      v5 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x186,
          (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)v7);
LABEL_21:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        return v5;
      }
    }
    v24 = 0LL;
    v3 = *((_QWORD *)this + 5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 152LL))(v3, v2, &v24, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v4);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      goto LABEL_21;
    }
    v23 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v24, &v23);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18D,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v8);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_20;
    }
    v22 = 0LL;
    v9 = *((_QWORD *)this + 5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 120LL))(
           v9,
           v24,
           1LL,
           5LL,
           &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
           &v22) < 0 )
    {
      v10 = *((_QWORD *)this + 5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      ViewFullScreen = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v10 + 120LL))(
                         v10,
                         v24,
                         0xFFFFFFFFLL,
                         5LL,
                         &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
                         &v22);
      v5 = ViewFullScreen;
      if ( ViewFullScreen < 0 )
      {
        v12 = 403LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)ViewFullScreen);
        goto LABEL_18;
      }
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v30);
    v15 = v30[2] - v30[0];
    v16 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v30, v13, v14);
    v17 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v23 + 80LL))(
            v23,
            v30,
            (unsigned int)(v15 - v16));
    v18 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v22 + 80LL))(
            v22,
            v30,
            (unsigned int)(v15 - v16));
    if ( v16 + v18 + v17 > v15 )
    {
      ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(this, v2, 5LL);
      v5 = ViewFullScreen;
      if ( ViewFullScreen < 0 )
      {
        v12 = 459LL;
        goto LABEL_31;
      }
LABEL_17:
      v5 = 0;
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_19;
    }
    v28 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v23 + 56LL))(v23, 0LL, &v28);
    v27 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v22 + 56LL))(v22, 0LL, &v27);
    if ( DWORD2(v28) - (int)v28 < v17 )
    {
      DWORD2(v28) = v28 + v17;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v23 + 104LL))(v23, 0LL, &v28);
      v26[0] = 0LL;
      v26[1] = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 104LL))(v22, 0LL, v26);
      CAppLayoutOperation::_FinalizeLayout(this, 1LL);
      goto LABEL_17;
    }
    if ( DWORD2(v27) - (int)v27 >= v18 )
      goto LABEL_17;
    v26[0] = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22) == 1 )
    {
      v20 = v22;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
      v21 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 48LL))(
              v20,
              &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
              v26);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          442LL,
          (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)v21);
LABEL_28:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
        goto LABEL_17;
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 184LL))(
             *((_QWORD *)this + 4),
             v26[0]) )
      {
        goto LABEL_28;
      }
    }
    DWORD2(v27) = v18 + v27;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v22 + 104LL))(v22, 0LL, &v27);
    v29[0] = 0LL;
    v29[1] = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v23 + 104LL))(v23, 0LL, v29);
    CAppLayoutOperation::_FinalizeLayout(this, 1LL);
    goto LABEL_28;
  }
  return 0LL;
}
