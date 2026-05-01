/*
 * XREFs of _lambda_0a83762bf65122e5a3deb32c84344239_::operator() @ 0x180028DF8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0a83762bf65122e5a3deb32c84344239___::Run @ 0x180028FE0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_0a83762bf65122e5a3deb32c84344239___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall lambda_0a83762bf65122e5a3deb32c84344239_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  HSTRING v3; // rbx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER v20; // [rsp+50h] [rbp-38h] BYREF
  HSTRING v21; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v19[1] = -2LL;
  v16 = 0LL;
  v21 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &v20, &v21);
  if ( v2 < 0 )
  {
    RaiseException(v2, 1u, 0, 0LL);
    goto LABEL_14;
  }
  v3 = v21;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v16);
  v5 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xABE,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v15);
    goto LABEL_15;
  }
  v15 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 232LL);
  v7 = v16;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  LOBYTE(v8) = v6 == 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 136LL))(v7, v8, &v15);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0xAC1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v9,
      v15);
    __debugbreak();
    JUMPOUT(0x1800BBDA2LL);
  }
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(*(_QWORD *)a1 + 280LL) + 136LL))(
                    *(_QWORD *)(*(_QWORD *)a1 + 280LL),
                    v19);
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v11 + 48LL))(*v11, &v18);
  (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v12)(*v12, &GUID_d928b176_b291_4bd6_9f6f_2e21e3ef6cbc, &v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
  v13 = v17;
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 56LL))(
      v17,
      *(unsigned int *)(*(_QWORD *)a1 + 296LL),
      v15);
    v13 = v17;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return 0LL;
}
