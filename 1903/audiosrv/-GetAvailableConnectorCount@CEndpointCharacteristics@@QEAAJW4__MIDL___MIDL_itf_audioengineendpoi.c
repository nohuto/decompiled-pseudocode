/*
 * XREFs of ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18011786C
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180011660 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetAvailableConnectorCount(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // r14d
  PROPVARIANT pvar; // [rsp+38h] [rbp-29h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h]
  __int64 v14; // [rsp+48h] [rbp-19h]
  int v15[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v16; // [rsp+58h] [rbp-9h]
  PROPVARIANT *p_pvar; // [rsp+60h] [rbp-1h]
  char v18; // [rsp+68h] [rbp+7h]
  __int128 v19; // [rsp+70h] [rbp+Fh] BYREF
  int v20; // [rsp+80h] [rbp+1Fh]
  __int128 v21; // [rsp+88h] [rbp+27h] BYREF
  int v22; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v16 = -2LL;
  v5 = *((_QWORD *)this + 2);
  *(_QWORD *)v15 = 0LL;
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v5 + 24LL))(
         v5,
         &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
         1LL) < 0 )
  {
    *a3 = 1;
    goto LABEL_16;
  }
  *(_QWORD *)&v19 = 0x41B43EBB9A82A7DBLL;
  *((_QWORD *)&v19 + 1) = 0xFC181731B718BA83uLL;
  v21 = v19;
  v22 = 1;
  pvar = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  p_pvar = &pvar;
  v18 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &v21,
         &pvar);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 7386LL;
LABEL_12:
    v9 = (unsigned int)v6;
    goto LABEL_13;
  }
  if ( (_WORD)pvar == 19 )
  {
    v10 = v13;
    PropVariantClear(&pvar);
    *(_QWORD *)&v19 = 0x4C7D1B2C233164C8LL;
    *((_QWORD *)&v19 + 1) = 0x67257A6871B668BCLL;
    v20 = 1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &v19,
           &pvar);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 7392LL;
      goto LABEL_12;
    }
    if ( (_WORD)pvar != 31 )
    {
      v7 = -2147418113;
      v9 = 2147549183LL;
      v8 = 7393LL;
      goto LABEL_13;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *, int *))(**(_QWORD **)v15 + 24LL))(
           *(_QWORD *)v15,
           v13,
           v10,
           a3,
           v15);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 7396LL;
      goto LABEL_12;
    }
    PropVariantClear(&pvar);
LABEL_16:
    v7 = 0;
    goto LABEL_17;
  }
  v7 = -2147418113;
  v9 = 2147549183LL;
  v8 = 7387LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v9);
  PropVariantClear(&pvar);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v15);
  return v7;
}
