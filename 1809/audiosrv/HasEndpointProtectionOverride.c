/*
 * XREFs of HasEndpointProtectionOverride @ 0x18010FBB4
 * Callers:
 *     VerifyCriticalProcessing @ 0x180110564 (VerifyCriticalProcessing.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BBCA8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     IndexOfInstalledAppService @ 0x18010FF38 (IndexOfInstalledAppService.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180138D68 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HasEndpointProtectionOverride(__int64 a1, __int64 a2, char *a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rdi
  HRESULT v13; // eax
  HRESULT v14; // eax
  char v15; // al
  LPOLESTR lpsz; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID ppv[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v21[1728]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+760h] [rbp+658h]

  ppv[1] = (LPVOID)-2LL;
  if ( !a1 )
  {
    v5 = 214LL;
LABEL_3:
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v5,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)0x80070057LL);
    return v6;
  }
  if ( !a2 )
  {
    v5 = 215LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v5 = 216LL;
    goto LABEL_3;
  }
  *a3 = 0;
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  lpsz = (LPOLESTR)&CSpatialAudioTech::s_atmosLock;
  if ( CSpatialAudioTech::s_spAtmosCheck )
  {
    AtmosCheck::GetEndpointExtendedSpatialLicenseInfo(
      CSpatialAudioTech::s_spAtmosCheck,
      0LL,
      6u,
      (struct ExtendedSpatialAudioEncoderInfo *)v21);
    LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
    v9 = (int)IndexOfInstalledAppService(&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER, v8, v21);
    v11 = (int)IndexOfInstalledAppService(&DTSX_TWOSPEAKER_SPATIAL_ENCODER, v10, v21);
    if ( (_DWORD)v9 != -1 || (_DWORD)v11 != -1 )
    {
      ppv[0] = 0LL;
      if ( CoCreateInstance(
             &CLSID_SpatialAudioLicenseServerInteractiveUser,
             0LL,
             4u,
             &GUID_95d43bdf_d7f8_4d30_a6c2_0d068c02bd12,
             ppv) < 0 )
      {
LABEL_36:
        v6 = 0;
LABEL_37:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppv);
        return v6;
      }
      LODWORD(v17) = 0;
      LODWORD(v19) = 0;
      pv = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      if ( (int)mmdDevGetInterfaceIdFromMMDevice(a2, &pv) < 0 )
      {
LABEL_34:
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_36;
      }
      if ( (_DWORD)v9 != -1 )
      {
        lpsz = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&lpsz,
          0LL);
        v12 = 288 * v9;
        v13 = StringFromCLSID((const IID *const)&v21[v12], &lpsz);
        v6 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            266LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v13);
LABEL_23:
          if ( lpsz )
            CoTaskMemFree(lpsz);
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_37;
        }
        (*(void (__fastcall **)(LPVOID, _BYTE *, _BYTE *, LPOLESTR, LPVOID, __int64 *))(*(_QWORD *)ppv[0] + 64LL))(
          ppv[0],
          &v21[v12 + 28],
          &v21[v12 + 158],
          lpsz,
          pv,
          &v17);
        if ( lpsz )
          CoTaskMemFree(lpsz);
      }
      if ( (_DWORD)v11 != -1 )
      {
        if ( (_DWORD)v17 )
          goto LABEL_32;
        lpsz = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&lpsz,
          0LL);
        v14 = StringFromCLSID((const IID *const)&v21[288 * v11], &lpsz);
        v6 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            280LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v14);
          goto LABEL_23;
        }
        (*(void (__fastcall **)(LPVOID, _BYTE *, _BYTE *, LPOLESTR, LPVOID, __int64 *))(*(_QWORD *)ppv[0] + 64LL))(
          ppv[0],
          &v21[288 * v11 + 28],
          &v21[288 * v11 + 158],
          lpsz,
          pv,
          &v19);
        if ( lpsz )
          CoTaskMemFree(lpsz);
      }
      if ( !(_DWORD)v17 && !(_DWORD)v19 )
      {
        v15 = 0;
LABEL_33:
        *a3 = v15;
        goto LABEL_34;
      }
LABEL_32:
      v15 = 1;
      goto LABEL_33;
    }
  }
  else
  {
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((struct _RTL_CRITICAL_SECTION **)&lpsz);
  }
  return 0LL;
}
