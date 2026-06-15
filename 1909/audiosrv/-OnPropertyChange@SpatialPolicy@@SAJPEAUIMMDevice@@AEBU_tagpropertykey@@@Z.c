/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001FA08
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000D900 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x180005594 (ReconsiderSpatialOnComboEndpoints.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetEndpointFormFactor @ 0x1800088B8 (GetEndpointFormFactor.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     GetContainerId @ 0x180047D00 (GetContainerId.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180051F44 (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180065550 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800655B8 (_Init_thread_header.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialPolicy::OnPropertyChange(
        struct IMMDevice *a1,
        const struct _tagpropertykey *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int ContainerId; // eax
  unsigned int v12; // ebx
  int EndpointFormFactor; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rdx
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  _QWORD v23[2]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v22 = -2LL;
  v6 = 4LL;
  v7 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1801B7B2C > *(_DWORD *)(v7 + 4) )
  {
    Init_thread_header(&dword_1801B7B2C);
    if ( dword_1801B7B2C == -1 )
    {
      xmmword_1801B7240 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801B7250 = 0;
      Init_thread_footer(&dword_1801B7B2C);
    }
  }
  v8 = xmmword_1801B7240 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_1801B7240 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v8 = *((_QWORD *)&xmmword_1801B7240 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v8 )
    GetSpatialSettingsMonitoringPKey(&xmmword_1801B7240);
  if ( dword_1801B668C == -1 )
  {
    v17 = 1;
    dword_1801B668C = 1;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v7, v6, a3, a4) )
      v17 = IsSpatialSpeakerProtectionCheckRequired();
    if ( v17 )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_1801B668C,
        &pcbData);
    }
  }
  if ( dword_1801B668C )
    return 0LL;
  v9 = *(_QWORD *)&a2->fmtid.Data1 - xmmword_1801B7240;
  if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)xmmword_1801B7240 )
    v9 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&xmmword_1801B7240 + 1);
  if ( v9 || a2->pid != dword_1801B7250 )
    return 0LL;
  v20 = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                  a1,
                  0LL,
                  &v20);
  v12 = ContainerId;
  if ( ContainerId < 0 )
  {
    v18 = 569LL;
    goto LABEL_33;
  }
  EndpointFormFactor = GetEndpointFormFactor(v20);
  v14 = (unsigned int)(EndpointFormFactor - 1);
  if ( (v14 & 0xFFFFFFFD) == 0 )
  {
    ContainerId = GetContainerId(v14, v20, v23);
    v12 = ContainerId;
    if ( ContainerId >= 0 )
    {
      v15 = v23[0];
      if ( !v23[0] )
        v15 = v23[1] + 1LL;
      if ( !v15 )
      {
        pv = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v16 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
        v12 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24C,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v16);
        }
        else
        {
          ReconsiderSpatialOnComboEndpoints(EndpointFormFactor, (__int64)pv);
          v12 = 0;
        }
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    v18 = 579LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId);
    goto LABEL_22;
  }
LABEL_21:
  v12 = 0;
LABEL_22:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  return v12;
}
