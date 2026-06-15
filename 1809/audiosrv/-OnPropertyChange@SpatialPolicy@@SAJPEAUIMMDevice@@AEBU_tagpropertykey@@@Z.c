/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001E45C
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18001FD48 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x1800203C0 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x18004B6E0 (GetSpatialSettingsMonitoringPKey.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     GetContainerId @ 0x18005641C (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x180056C74 (GetEndpointFormFactor.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180060EF0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180060F58 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x180110244 (ReconsiderSpatialOnComboEndpoints.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialPolicy::OnPropertyChange(struct IMMDevice *a1, const struct _tagpropertykey *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int ContainerId; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int EndpointFormFactor; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v15[1] = -2LL;
  if ( dword_1801B3ABC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801B3ABC);
    if ( dword_1801B3ABC == -1 )
    {
      xmmword_1801B31D0 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_1801B31E0 = 0;
      Init_thread_footer(&dword_1801B3ABC);
    }
  }
  v4 = xmmword_1801B31D0 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_1801B31D0 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v4 = *((_QWORD *)&xmmword_1801B31D0 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v4 )
    GetSpatialSettingsMonitoringPKey(&xmmword_1801B31D0);
  if ( (unsigned __int8)IsSpatialComboEndpointDeterminationDisabled() )
    return 0LL;
  v5 = *(_QWORD *)&a2->fmtid.Data1 - xmmword_1801B31D0;
  if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)xmmword_1801B31D0 )
    v5 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&xmmword_1801B31D0 + 1);
  if ( v5 || a2->pid != dword_1801B31E0 )
    return 0LL;
  v15[0] = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                  a1,
                  0LL,
                  v15);
  v8 = ContainerId;
  if ( ContainerId >= 0 )
  {
    EndpointFormFactor = GetEndpointFormFactor(v15[0]);
    v11 = EndpointFormFactor - 1;
    if ( (v11 & 0xFFFFFFFD) == 0 )
    {
      ContainerId = GetContainerId(v11, v15[0], v16);
      v8 = ContainerId;
      if ( ContainerId < 0 )
      {
        v9 = 665LL;
        goto LABEL_19;
      }
      v12 = v16[0];
      if ( !v16[0] )
        v12 = v16[1] + 1LL;
      if ( !v12 )
      {
        pv = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v13 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
        v8 = v13;
        if ( v13 >= 0 )
        {
          ReconsiderSpatialOnComboEndpoints(EndpointFormFactor, pv);
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2A2,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v13,
            (int)pv);
        }
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_29;
      }
    }
    v8 = 0;
    goto LABEL_29;
  }
  v9 = 655LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)ContainerId,
    (int)pv);
LABEL_29:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
  return v8;
}
