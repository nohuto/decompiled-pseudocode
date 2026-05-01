/*
 * XREFs of ?IsWhiteboardInstalling@PenWorkspaceAppInstallBroker@@UEAAJPEAH@Z @ 0x180094F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094690 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180094750 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?AppInstallItems@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x180094954 (-AppInstallItems@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallMana.c)
 *     ?GetCurrentStatus@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x180094B08 (-GetCurrentStatus@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallIte.c)
 *     ?InstallState@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@UIAppInstallStatus@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@3@XZ @ 0x180094E2C (-InstallState@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus@.c)
 *     ?ProductId@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x18009526C (-ProductId@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIApp.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801DE414 (--1hstring@winrt@@QEAA@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PenWorkspaceAppInstallBroker::IsWhiteboardInstalling(HSTRING *this, int *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  unsigned int v6; // r14d
  int v7; // eax
  unsigned int i; // eax
  int v9; // ebx
  int v10; // eax
  const WCHAR *v11; // rcx
  PCWSTR v12; // rax
  WCHAR v13; // r8
  int v14; // eax
  __int64 *CurrentStatus; // rcx
  int v16; // edi
  const char *v17; // r9
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v20[2]; // [rsp+28h] [rbp-60h] BYREF
  PCWSTR v21[2]; // [rsp+38h] [rbp-50h] BYREF
  char *v22; // [rsp+48h] [rbp-40h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v25; // [rsp+90h] [rbp+8h] BYREF
  int v26; // [rsp+98h] [rbp+10h]
  __int64 v27; // [rsp+A0h] [rbp+18h] BYREF
  HSTRING v28; // [rsp+A8h] [rbp+20h] BYREF

  v20[1] = -2LL;
  v4 = 0;
  v26 = 0;
  *a2 = 0;
  v5 = this + 4;
  try
  {
    winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::AppInstallItems(
      v5,
      &v19);
    v6 = 0;
    v25 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 56LL))(v19, &v25);
    if ( v7 < 0 )
      winrt::throw_hresult((unsigned int)v7);
    for ( i = 0; i != v25; i = v6 )
    {
      v27 = 0LL;
      v9 = v4 | 4;
      v26 = v9;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 48LL))(v19, v6, &v27);
      if ( v10 < 0 )
        winrt::throw_hresult((unsigned int)v10);
      v4 = v9 & 0xFFFFFFF9 | 2;
      winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::ProductId(
        &v27,
        &v28);
      winrt::hstring::operator std::basic_string_view<unsigned short>(this + 3, v21);
      winrt::hstring::operator std::basic_string_view<unsigned short>(&v28, (PCWSTR *)&v22);
      v11 = v23;
      if ( v23 == v21[1] )
      {
        v12 = v21[0];
        if ( v23 )
        {
          while ( 1 )
          {
            v13 = *(PCWSTR)((char *)v12 + v22 - (char *)v21[0]);
            if ( v13 != *v12 )
              break;
            ++v12;
            v11 = (const WCHAR *)((char *)v11 - 1);
            if ( !v11 )
              goto LABEL_10;
          }
          v14 = v13 < *v12 ? -1 : 1;
        }
        else
        {
LABEL_10:
          v14 = 0;
        }
        if ( !v14 )
        {
          CurrentStatus = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::GetCurrentStatus(
                            &v27,
                            v20);
          v16 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>::InstallState(CurrentStatus);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v20);
          if ( ((v16 - 6) & 0xFFFFFFFC) != 0 || v16 == 8 )
          {
            *a2 = 1;
            winrt::hstring::~hstring((winrt::hstring *)&v28);
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v27);
            break;
          }
        }
      }
      winrt::hstring::~hstring((winrt::hstring *)&v28);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v27);
      ++v6;
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7B,
                           (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\appinstallbroker.cpp",
                           v17);
  }
  return result;
}
