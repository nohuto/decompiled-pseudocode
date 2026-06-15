/*
 * XREFs of ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x1800540A0
 * Callers:
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x180053764 (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800368A4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?IsPlugin@EndpointDevice@@AEAAJPEAH@Z @ 0x180055070 (-IsPlugin@EndpointDevice@@AEAAJPEAH@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EndpointDevice::InitAdapterInformation(GUID *this)
{
  int IsPlugin; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  const GUID *v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  const char *v15; // r9
  unsigned int i; // esi
  __int64 v17; // rax
  _WORD *v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  char *v21; // rdi
  __int64 result; // rax
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // ebx
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // [rsp+30h] [rbp-F8h] BYREF
  int v29[2]; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-E8h] BYREF
  PROPVARIANT *p_pvar; // [rsp+48h] [rbp-E0h] BYREF
  int v32; // [rsp+50h] [rbp-D8h]
  PROPVARIANT pvar; // [rsp+58h] [rbp-D0h] BYREF
  LPCOLESTR lpsz; // [rsp+60h] [rbp-C8h]
  __int64 v35; // [rsp+68h] [rbp-C0h]
  __int64 v36; // [rsp+70h] [rbp-B8h]
  OLECHAR sz[64]; // [rsp+80h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v36 = -2LL;
  try
  {
    IsPlugin = EndpointDevice::IsPlugin((EndpointDevice *)this, v29);
    v3 = IsPlugin;
    if ( IsPlugin < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        (const char *)(unsigned int)IsPlugin);
      return v3;
    }
    if ( v29[0] )
    {
      v23 = *(_QWORD *)this[1].Data4;
      v28 = 0LL;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v23 + 32LL))(v23, 2LL, &v28);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x96,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)(unsigned int)v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        return v25;
      }
      pvar = 0LL;
      lpsz = 0LL;
      v35 = 0LL;
      p_pvar = &pvar;
      LOBYTE(v32) = 1;
      v26 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(
              v28,
              &PKEY_AudioEndpoint_JackSubType,
              &pvar);
      v27 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)(unsigned int)v26);
        PropVariantClear(&pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        return v27;
      }
      if ( (_WORD)pvar != 31 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9D,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)0x80070057LL);
        PropVariantClear(&pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        return 2147942487LL;
      }
      v12 = this + 6;
      IIDFromString(lpsz, this + 6);
      PropVariantClear(&pvar);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    }
    else
    {
      v4 = *(_QWORD *)this[1].Data4;
      *(_QWORD *)v29 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, int *))(*(_QWORD *)v4 + 24LL))(
             v4,
             &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
             23LL,
             0LL,
             v29);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)(unsigned int)v5);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v29);
        return v6;
      }
      v30 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v29 + 32LL))(*(_QWORD *)v29, 0LL, &v30);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x81,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)(unsigned int)v7);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v29);
        return v8;
      }
      v28 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 64LL))(v30, &v28);
      if ( v9 < 0 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v29);
        return (unsigned int)v9;
      }
      p_pvar = 0LL;
      v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, PROPVARIANT **))v28)(
              v28,
              &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
              &p_pvar);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)(unsigned int)v10);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v29);
        return v11;
      }
      v12 = this + 6;
      v13 = (*((__int64 (__fastcall **)(PROPVARIANT *, GUID *))*p_pvar + 7))(p_pvar, this + 6);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v29);
        return v14;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&p_pvar);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v29);
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= 0xB )
      {
        v21 = (char *)&this[4];
        v19 = -1LL;
        goto LABEL_19;
      }
      v17 = *(_QWORD *)&v12->Data1 - *((_QWORD *)&unk_1801B5240 + 3 * (int)i);
      if ( *(_QWORD *)&v12->Data1 == *((_QWORD *)&unk_1801B5240 + 3 * (int)i) )
        v17 = *(_QWORD *)v12->Data4 - *((_QWORD *)&unk_1801B5240 + 3 * (int)i + 1);
      if ( !v17 )
        break;
    }
    v18 = (_WORD *)*((_QWORD *)&unk_1801B5240 + 3 * (int)i + 2);
    v19 = -1LL;
    v20 = -1LL;
    do
      ++v20;
    while ( v18[v20] );
    v21 = (char *)&this[4];
    std::wstring::assign(v21, v18, v20);
LABEL_19:
    if ( i >= 0xB )
    {
      StringFromGUID2(v12, sz, 64);
      do
        ++v19;
      while ( sz[v19] );
      std::wstring::assign(v21, sz, v19);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB5,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                           v15);
  }
  return result;
}
