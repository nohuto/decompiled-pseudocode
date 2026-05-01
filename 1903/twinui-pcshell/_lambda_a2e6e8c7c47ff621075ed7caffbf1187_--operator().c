/*
 * XREFs of _lambda_a2e6e8c7c47ff621075ed7caffbf1187_::operator() @ 0x180070624
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a2e6e8c7c47ff621075ed7caffbf1187___::Run @ 0x180070600 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a2e6e8c7c47ff621075ed7caffbf1187___--.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802A4570 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_a2e6e8c7c47ff621075ed7caffbf1187_::operator()(__int64 a1)
{
  HWND v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  HSTRING v8; // rcx
  wil::details::in1diag3 *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  HSTRING string; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING newString; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v19[1] = -2LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  try
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7E,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        (int)string);
    }
    else
    {
      string = 0LL;
      v2 = *(_QWORD *)(*(_QWORD *)a1 + 328LL);
      v1 = *(HWND *)(*(_QWORD *)v2 + 48LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v6 = ((__int64 (__fastcall *)(__int64, HSTRING *))v1)(v2, &string);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v1 = *(HWND *)a1;
        LODWORD(v2) = WindowsDuplicateString(string, &newString);
        if ( (int)v2 >= 0 )
        {
          v8 = (HSTRING)*((_QWORD *)v1 + 39);
          *((_QWORD *)v1 + 39) = newString;
          WindowsDeleteString(v8);
        }
        v9 = retaddr;
        if ( (int)v2 >= 0 )
        {
          if ( !*(_QWORD *)(*(_QWORD *)a1 + 128LL) )
            goto LABEL_8;
          v1 = (HWND)**(int **)(a1 + 8);
          EnumPropsExW(v1, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, *(_QWORD *)a1 + 208LL);
          if ( !IsWindowVisible(v1) )
            goto LABEL_8;
          goto LABEL_15;
        }
LABEL_14:
        wil::details::in1diag3::Throw_Hr(
          v9,
          (void *)0x82,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v2,
          (int)string);
LABEL_15:
        *(_DWORD *)(*(_QWORD *)a1 + 304LL) = **(_DWORD **)(a1 + 8);
        WindowReadyState::SetWindow(*(_QWORD *)a1 + 368LL, v1, **(unsigned int **)(a1 + 16));
LABEL_8:
        if ( **(_DWORD **)(a1 + 16) == 1 )
        {
          (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 328LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 328LL),
            &GUID_43c44496_73a7_4b25_b876_1df2708e3e45,
            v19);
          if ( v19[0] )
          {
            v24 = 0LL;
            v12 = *(_QWORD *)v19[0];
            v24 = 0LL;
            v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v12 + 208))(v19[0], &v24);
            if ( v13 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x9C,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                (const char *)(unsigned int)v13,
                (int)string);
            v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 48LL))(v24, &newString);
            if ( v14 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x9F,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                (const char *)(unsigned int)v14,
                (int)string);
            if ( (_DWORD)newString )
            {
              *(_DWORD *)(*(_QWORD *)a1 + 480LL) = (_DWORD)newString;
              *(_BYTE *)(*(_QWORD *)a1 + 484LL) = 1;
            }
            v23 = 0LL;
            v15 = *(_QWORD *)v19[0];
            v23 = 0LL;
            v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v15 + 440))(v19[0], &v23);
            if ( v16 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xA8,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                (const char *)(unsigned int)v16,
                (int)string);
            v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 216LL))(v23, &v22);
            if ( v17 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xAB,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                (const char *)(unsigned int)v17,
                (int)string);
            if ( v22 )
            {
              *(_BYTE *)(*(_QWORD *)a1 + 486LL) = 0;
              *(_BYTE *)(*(_QWORD *)a1 + 485LL) = 1;
            }
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
        }
        WindowsDeleteString(string);
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x81,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      (int)string);
    goto LABEL_14;
  }
  catch ( ... )
  {
    LODWORD(newString) = wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB4,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v10);
    return (unsigned int)newString;
  }
  return result;
}
