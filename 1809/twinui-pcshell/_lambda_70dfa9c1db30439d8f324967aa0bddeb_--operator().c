/*
 * XREFs of _lambda_70dfa9c1db30439d8f324967aa0bddeb_::operator() @ 0x18006C774
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_70dfa9c1db30439d8f324967aa0bddeb___::Run @ 0x18006C750 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_70dfa9c1db30439d8f324967aa0bddeb___--.c)
 * Callees:
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180021160 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_70dfa9c1db30439d8f324967aa0bddeb_::operator()(int **a1)
{
  HWND v1; // rbx
  HRESULT v2; // esi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  HSTRING v8; // rcx
  wil::details::in1diag3 *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF
  HSTRING newString; // [rsp+48h] [rbp+10h] BYREF

  v12 = -2;
  v4 = *((_QWORD *)*a1 + 13);
  try
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        -2);
    }
    else
    {
      string = 0LL;
      v1 = (HWND)*((_QWORD *)*a1 + 40);
      WindowsDeleteString(0LL);
      string = 0LL;
      v6 = (*(__int64 (__fastcall **)(HWND, HSTRING *))(*(_QWORD *)v1 + 48LL))(v1, &string);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v1 = (HWND)*a1;
        v2 = WindowsDuplicateString(string, &newString);
        if ( v2 >= 0 )
        {
          v8 = (HSTRING)*((_QWORD *)v1 + 38);
          *((_QWORD *)v1 + 38) = newString;
          WindowsDeleteString(v8);
        }
        v9 = retaddr;
        if ( v2 >= 0 )
        {
          if ( !*((_QWORD *)*a1 + 16) )
            goto LABEL_8;
          v1 = (HWND)*a1[1];
          EnumPropsExW(v1, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, (LPARAM)(*a1 + 50));
          if ( !IsWindowVisible(v1) )
            goto LABEL_8;
          goto LABEL_14;
        }
LABEL_13:
        wil::details::in1diag3::Throw_Hr(
          v9,
          (void *)0x7F,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v2,
          v12);
LABEL_14:
        (*a1)[74] = *a1[1];
        WindowReadyState::SetWindow((__int64)(*a1 + 90), v1, *a1[2]);
LABEL_8:
        WindowsDeleteString(string);
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x7E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v12);
    goto LABEL_13;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x92,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v10);
  }
  return result;
}
