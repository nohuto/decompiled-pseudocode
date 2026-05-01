/*
 * XREFs of _lambda_68891fd7acf34f77316d42659bd39f51_::operator() @ 0x1800625D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68891fd7acf34f77316d42659bd39f51___::Run @ 0x1800625B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_68891fd7acf34f77316d42659bd39f51___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall lambda_68891fd7acf34f77316d42659bd39f51_::operator()(__int64 *a1)
{
  HSTRING v1; // rbx
  HRESULT v3; // eax
  int ActivationFactory; // eax
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER v18; // [rsp+50h] [rbp-38h] BYREF
  HSTRING v19; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v17[1] = -2LL;
  v13 = 0LL;
  v19 = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &v18, &v19);
  if ( v3 < 0 )
  {
    RaiseException(v3, 1u, 0, 0LL);
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v1 = v19;
  }
  ActivationFactory = RoGetActivationFactory(v1, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v13);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB7E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v13);
    goto LABEL_17;
  }
  v14 = 0LL;
  v5 = *a1;
  LOBYTE(v5) = *(_DWORD *)(*a1 + 240) == 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 136LL))(v13, v5, &v14);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xB81,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v13);
    __debugbreak();
    JUMPOUT(0x18010E197LL);
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(*a1 + 288) + 144LL))(
                   *(_QWORD *)(*a1 + 288),
                   v17);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 48LL))(*v8, &v16);
  (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v9)(*v9, &GUID_d928b176_b291_4bd6_9f6f_2e21e3ef6cbc, &v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  v10 = v15;
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v15 + 56LL))(v15, *(unsigned int *)(*a1 + 304), v14);
    v10 = v15;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return 0LL;
}
