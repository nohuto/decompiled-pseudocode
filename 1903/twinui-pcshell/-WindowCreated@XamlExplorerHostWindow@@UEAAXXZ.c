/*
 * XREFs of ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x1802BD4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802B2F9C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1802BBC70 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?get@ViewModel@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskViewTimelineViewModel@3456@XZ @ 0x1802BBFC0 (-get@ViewModel@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@Windows.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHostWindow::WindowCreated(XamlExplorerHostWindow *this)
{
  RTL_SRWLOCK *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  void **v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v19; // [rsp+88h] [rbp+48h]

  v18 = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  v19 = v2;
  v7 = Windows::UI::Core::CoreWindow::GetForCurrentThread(v4, v3, v5, v6);
  v17 = v7;
  v8 = __abi_winrt_ptr_ctor(v7);
  v17 = v8;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
         v8,
         &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f,
         &v16);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      86LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 24LL))(v16, (char *)this + 88);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      87LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 20) != 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
            *((_QWORD *)this + 7),
            *((_QWORD *)this + 11),
            0LL);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        92LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
  v12 = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelinePublicNonVirtuals::ViewModel::get(v8);
  __abi_winrt_ptr_assign((__int64 *)this + 9, v12);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (__int64 *)((char *)this + 48);
  v14 = 0LL;
  if ( &v17 != (__int64 *)((char *)this + 48) )
  {
    v14 = *v13;
    *v13 = 0LL;
  }
  v17 = 0LL;
  v18 = v14;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v14 )
    (*(void (__fastcall **)(__int64, XamlExplorerHostWindow *))(*(_QWORD *)v14 + 24LL))(v14, this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
}
