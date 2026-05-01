/*
 * XREFs of ?GetPersistingStateName@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x180063050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTaskWindow::GetPersistingStateName(CTaskWindow *this, unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *v5; // rbx
  void (__fastcall *v6)(_QWORD *, HSTRING *); // rdi
  HSTRING v7; // rcx
  _QWORD *v8; // rcx
  const WCHAR *StringRawBuffer; // rax
  HRESULT v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HSTRING string; // [rsp+50h] [rbp+20h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+28h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 6))(
         *((_QWORD *)this + 6),
         &GUID_3bf22d51_7679_4ce2_8bae_8b78613e83cc,
         &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    string = 0LL;
    v5 = v14;
    v6 = *(void (__fastcall **)(_QWORD *, HSTRING *))(*v14 + 136LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6(v5, &string);
    v7 = string;
    if ( string )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v11 = SHStrDupW(StringRawBuffer, a2);
      v4 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23C,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
          (const char *)(unsigned int)v11,
          -2);
        v7 = string;
        goto LABEL_4;
      }
      v7 = string;
    }
    v4 = 0;
LABEL_4:
    WindowsDeleteString(v7);
    string = 0LL;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x236,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
    (const char *)(unsigned int)v3,
    -2);
LABEL_5:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
  }
  return v4;
}
