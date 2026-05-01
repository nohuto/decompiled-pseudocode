/*
 * XREFs of ?Start@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x180216DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::Start(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  int v5; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  v2 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    try
    {
      v5 = (*(__int64 (**)(void))(*(_QWORD *)v13 + 24LL))();
      v6 = v5;
      if ( v5 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, char *, char *))(**((_QWORD **)this + 11) + 24LL))(
               *((_QWORD *)this + 11),
               &unk_1804A3378,
               1LL,
               (char *)this + 16,
               (char *)this + 144);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *))(**((_QWORD **)this + 10) + 48LL))(
                  *((_QWORD *)this + 10),
                  this);
          v11 = v10;
          if ( v10 >= 0 )
          {
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x30,
              (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
              (const char *)(unsigned int)v10);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
            result = v11;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2E,
            (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
            (const char *)(unsigned int)v8);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
          result = v9;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
          (const char *)(unsigned int)v5);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
        result = v6;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x34,
                             (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
                             v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v2);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
    return v3;
  }
  return result;
}
