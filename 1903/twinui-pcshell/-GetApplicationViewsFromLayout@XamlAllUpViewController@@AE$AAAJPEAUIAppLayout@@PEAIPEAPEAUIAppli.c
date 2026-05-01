/*
 * XREFs of ?GetApplicationViewsFromLayout@XamlAllUpViewController@@AE$AAAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1802E2438
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x1802E277C (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlAllUpViewController::GetApplicationViewsFromLayout(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v8; // r12
  int v9; // edi
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  v20 = a1;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  *a3 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  if ( v9 )
  {
    v21 = 0LL;
    a5 = 0LL;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
            a2,
            0LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            &v20);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        278LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = v20;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 48LL))(
            v11,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v21);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        279LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    if ( v9 == 2 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
              a2,
              1LL,
              1LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              &v20);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          283LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
      v14 = v20;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
      v15 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD **))(*(_QWORD *)v14 + 48LL))(
              v14,
              &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
              &a5);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          284LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
    }
    v16 = v21;
    v21 = 0LL;
    *a4 = v16;
    v17 = a5;
    a5 = 0LL;
    *v8 = v17;
    *a3 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  }
  return 0LL;
}
