/*
 * XREFs of ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x180019B88
 * Callers:
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180018A40 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180019950 (-AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@Win.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowEventDispatcher::UpdateAudioState(__int64 a1, __int64 *a2, int a3)
{
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  PCWSTR StringRawBuffer; // rdi
  __int64 v15; // rbx
  const char *v16; // r9
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HSTRING string; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 480) )
    return;
  try
  {
    v6 = (*(__int64 (**)(void))(*a2 + 120))();
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB1B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v17);
    }
    else
    {
      v7 = *a2;
      v21 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 64))(a2, &v21);
      v9 = retaddr;
      if ( v8 >= 0 )
      {
        string = 0LL;
        v10 = v21;
        v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21 + 48LL);
        WindowsDeleteString(0LL);
        string = 0LL;
        v12 = v11(v10, &string);
        v13 = retaddr;
        if ( v12 >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          v15 = *(_QWORD *)(a1 + 312);
          if ( v15 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
            (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v15 + 24LL))(
              v15,
              StringRawBuffer,
              v18,
              0LL,
              a3);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          WindowsDeleteString(string);
          string = 0LL;
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          return;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v13,
          (void *)0xB21,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12,
          v17);
        JUMPOUT(0x1800F18DALL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0xB1E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v8,
      v17);
    goto LABEL_12;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB30,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v16);
  }
}
