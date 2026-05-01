/*
 * XREFs of ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180016178
 * Callers:
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18001693C (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038E74 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     _lambda_dee6256d89e21afd53df920967b40113_::operator() @ 0x18003A430 (_lambda_dee6256d89e21afd53df920967b40113_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180011B38 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18001861C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SerializeRelatedProcessArray(__int64 (__fastcall ***a1)(_QWORD, GUID *, _QWORD *), HSTRING *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  char v6; // si
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  HRESULT v10; // eax
  int v11; // eax
  int v12; // ebx
  HRESULT v13; // eax
  __int64 v14; // rdx
  HSTRING v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  HSTRING v22; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v25; // [rsp+80h] [rbp+30h] BYREF
  HSTRING newString; // [rsp+90h] [rbp+40h] BYREF
  HSTRING string; // [rsp+98h] [rbp+48h] BYREF

  v23[2] = -2LL;
  string = 0LL;
  v23[0] = 0LL;
  v20 = 0LL;
  v3 = (**a1)(a1, &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e, v23);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 420LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_33;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v23[0] + 48LL))(v23[0], &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 421LL;
    goto LABEL_7;
  }
  WindowsDeleteString(string);
  string = 0LL;
  v3 = WindowsCreateString(&word_18004F76C, 1u, &string);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 422LL;
    goto LABEL_7;
  }
  v6 = 0;
  newString = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 56LL))(v20, &v25);
  if ( v7 >= 0 )
  {
    while ( v25 )
    {
      v22 = 0LL;
      v8 = v20;
      WindowsDeleteString(0LL);
      v22 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 48LL))(v8, &v22);
      v4 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AF,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_27;
      }
      string2 = 0LL;
      v23[1] = WindowsGetStringRawBuffer(v22, 0LL);
      v10 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string2);
      v4 = v10;
      if ( v10 < 0 )
      {
        v16 = 434LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v10);
        WindowsDeleteString(string2);
        string2 = 0LL;
LABEL_27:
        WindowsDeleteString(v22);
        goto LABEL_21;
      }
      WindowsDeleteString(newString);
      newString = 0LL;
      v10 = WindowsConcatString(*a2, string2, &newString);
      v4 = v10;
      if ( v10 < 0 )
      {
        v16 = 435LL;
        goto LABEL_25;
      }
      WindowsDeleteString(*a2);
      *a2 = newString;
      newString = 0LL;
      WindowsDeleteString(0LL);
      newString = 0LL;
      v10 = WindowsConcatString(*a2, string, &newString);
      v4 = v10;
      if ( v10 < 0 )
      {
        v16 = 438LL;
        goto LABEL_25;
      }
      WindowsDeleteString(*a2);
      *a2 = newString;
      newString = 0LL;
      v6 = 1;
      v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 64LL))(v20, &v25);
      v12 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1BB,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v11);
      WindowsDeleteString(string2);
      string2 = 0LL;
      WindowsDeleteString(v22);
      if ( v12 < 0 )
        goto LABEL_18;
    }
    if ( v6 )
      goto LABEL_18;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AB,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v7);
  }
  WindowsDeleteString(string);
  string = 0LL;
  v13 = WindowsCreateString(&word_18004F770, 2u, &string);
  v4 = v13;
  if ( v13 < 0 )
  {
    v14 = 448LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v13);
LABEL_21:
    v15 = newString;
    goto LABEL_32;
  }
LABEL_18:
  WindowsDeleteString(newString);
  newString = 0LL;
  v13 = WindowsConcatString(*a2, string, &newString);
  v4 = v13;
  if ( v13 < 0 )
  {
    v14 = 451LL;
    goto LABEL_20;
  }
  WindowsDeleteString(*a2);
  *a2 = newString;
  v15 = 0LL;
  newString = 0LL;
  v4 = 0;
LABEL_32:
  WindowsDeleteString(v15);
  newString = 0LL;
LABEL_33:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = (_QWORD *)v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v18 + 16LL))(v18, *v18);
  }
  WindowsDeleteString(string);
  return v4;
}
