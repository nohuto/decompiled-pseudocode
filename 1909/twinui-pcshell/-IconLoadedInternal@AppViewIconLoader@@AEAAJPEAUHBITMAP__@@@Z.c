/*
 * XREFs of ?IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z @ 0x180323F4C
 * Callers:
 *     ?IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z @ 0x180323F00 (-IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBufferByteAccess@Streams@Storage@Windows@@@?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBufferByteAccess@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6A70 (--$query@UIBufferByteAccess@Streams@Storage@Windows@@@-$com_ptr_t@UIBuffer@Streams@Storage@Windo.c)
 *     memcpy_0 @ 0x1800D3EF7 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewIconLoader::IconLoadedInternal(AppViewIconLoader *this, HBITMAP a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rax
  int v8; // eax
  __int64 v9; // r10
  int v10; // r8d
  int v11; // r9d
  int v12; // ebx
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  char pv[8]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+3Ch] [rbp-2Ch]
  __int16 v20; // [rsp+42h] [rbp-26h]
  __int64 v21; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v16[1] = -2LL;
  v4 = *((_QWORD *)this + 5);
  v24 = 0LL;
  try
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        37LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 56LL))(v24, &v23);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        40LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
        (const char *)(unsigned int)v6);
    v7 = (_QWORD *)wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_exception_policy>::query<Windows::Storage::Streams::IBufferByteAccess>(
                     &v24,
                     (__int64)&v25);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v7 + 24LL))(*v7, v16);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        43LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
        (const char *)(unsigned int)v8);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v25);
    if ( !GetObjectW(a2, 32, pv) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        46LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
        (const char *)0x80004005LL);
    v9 = v21;
    if ( !v21 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        47LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
        (const char *)0x80004003LL);
    if ( v20 != 32 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        48LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
        (const char *)0x800707D0LL);
    v10 = v18;
    v11 = v19;
    if ( v19 * v18 > v23 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        49LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
        (const char *)0x800700EALL);
    v12 = 0;
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        memcpy_0((void *)(v16[0] + v11 * (v10 - v12 - 1)), (const void *)(v9 + v11 * v12), v11);
        ++v12;
        v10 = v18;
        if ( v12 >= v18 )
          break;
        v9 = v21;
        v11 = v19;
      }
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        59LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
        (const char *)(unsigned int)v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E,
                           (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
                           v14);
  }
  return result;
}
