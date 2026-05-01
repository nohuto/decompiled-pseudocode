/*
 * XREFs of ?RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033F108
 * Callers:
 *     ??$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayNotifyCallback@SystemTray@@AEAPEAUHSTRING__@@@Z @ 0x18033DDDC (--$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsof.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800524BC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayNotifyCallback::RuntimeClassInitialize(HSTRING *this, HSTRING a2)
{
  int v3; // eax
  unsigned int v4; // esi
  char v5; // bl
  __int64 result; // rax
  HRESULT v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  unsigned int v10; // esi
  const char *v11; // r9
  int v12; // eax
  unsigned int v13; // esi
  HSTRING v14; // rax
  LPVOID ppv; // [rsp+38h] [rbp-20h] BYREF
  HSTRING v16[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16[1] = (HSTRING)-2LL;
  v16[0] = a2;
  v3 = Microsoft::WRL::Wrappers::HString::Set(this + 2, v16);
  v4 = v3;
  v5 = 0;
  if ( v3 >= 0 )
  {
    ppv = 0LL;
    v7 = CoCreateInstance(
           &GUID_25dead04_1eac_4911_9e3a_ad0a4ab560fd,
           0LL,
           4u,
           &GUID_d133ce13_3537_48ba_93a7_afcd5d2053b4,
           &ppv);
    v8 = v7;
    if ( v7 >= 0 )
    {
      try
      {
        v9 = (*(__int64 (**)(void))(*(_QWORD *)ppv + 24LL))();
        v10 = v9;
        if ( v9 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 32LL))(ppv, 0LL);
          v13 = v12;
          if ( v12 >= 0 )
          {
            if ( this[5] || this[7] )
              goto LABEL_14;
            v14 = this[8];
            if ( !v14 )
              v14 = this[9];
            if ( v14 )
LABEL_14:
              v5 = 1;
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppv);
            result = v5 == 0 ? 0x80070490 : 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x15,
              (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
              (const char *)(unsigned int)v12);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppv);
            result = v13;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14,
            (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
            (const char *)(unsigned int)v9);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppv);
          result = v10;
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x1A,
                               (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
                               v11);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppv);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  return result;
}
