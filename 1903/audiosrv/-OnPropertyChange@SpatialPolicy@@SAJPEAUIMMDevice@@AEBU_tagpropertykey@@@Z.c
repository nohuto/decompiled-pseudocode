/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001C728
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000A5F0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180005568 (ReconsiderSpatialOnComboEndpoints.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetEndpointFormFactor @ 0x180032524 (GetEndpointFormFactor.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     GetContainerId @ 0x1800437E0 (GetContainerId.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x18005A028 (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180064560 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800645C8 (_Init_thread_header.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800665D8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialPolicy::OnPropertyChange(struct IMMDevice *a1, const struct _tagpropertykey *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int ContainerId; // eax
  unsigned int v8; // ebx
  int EndpointFormFactor; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]
  _QWORD v19[2]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v18 = -2LL;
  if ( dword_1801B8B2C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801B8B2C);
    if ( dword_1801B8B2C == -1 )
    {
      xmmword_1801B8240 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801B8250 = 0;
      Init_thread_footer(&dword_1801B8B2C);
    }
  }
  v4 = xmmword_1801B8240 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_1801B8240 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v4 = *((_QWORD *)&xmmword_1801B8240 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v4 )
    GetSpatialSettingsMonitoringPKey(&xmmword_1801B8240);
  if ( dword_1801B768C == -1 )
  {
    v13 = 1;
    dword_1801B768C = 1;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
      v13 = IsSpatialSpeakerProtectionCheckRequired();
    if ( v13 )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_1801B768C,
        &pcbData);
    }
  }
  if ( dword_1801B768C )
    return 0LL;
  v5 = *(_QWORD *)&a2->fmtid.Data1 - xmmword_1801B8240;
  if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)xmmword_1801B8240 )
    v5 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&xmmword_1801B8240 + 1);
  if ( v5 || a2->pid != dword_1801B8250 )
    return 0LL;
  v16 = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                  a1,
                  0LL,
                  &v16);
  v8 = ContainerId;
  if ( ContainerId < 0 )
  {
    v14 = 569LL;
    goto LABEL_33;
  }
  EndpointFormFactor = GetEndpointFormFactor(v16);
  v10 = (unsigned int)(EndpointFormFactor - 1);
  if ( (v10 & 0xFFFFFFFD) == 0 )
  {
    ContainerId = GetContainerId(v10, v16, v19);
    v8 = ContainerId;
    if ( ContainerId >= 0 )
    {
      v11 = v19[0];
      if ( !v19[0] )
        v11 = v19[1] + 1LL;
      if ( !v11 )
      {
        pv = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v12 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24C,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v12);
        }
        else
        {
          ReconsiderSpatialOnComboEndpoints(EndpointFormFactor, (__int64)pv);
          v8 = 0;
        }
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    v14 = 579LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId);
    goto LABEL_22;
  }
LABEL_21:
  v8 = 0;
LABEL_22:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  return v8;
}
