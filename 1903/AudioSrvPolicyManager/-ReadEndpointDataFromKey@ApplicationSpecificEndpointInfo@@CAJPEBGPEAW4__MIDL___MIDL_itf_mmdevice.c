/*
 * XREFs of ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18002F058
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18002E4BC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C4C4 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001518C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x18002F320 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?Left@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@H@Z @ 0x18002FCA0 (-Left@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@H@Z.c)
 *     _invalid_parameter_noinfo @ 0x18003514E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180035A9F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
        const unsigned __int16 *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a2,
        enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *a3)
{
  wchar_t *v5; // rax
  __int64 v6; // rdi
  unsigned __int16 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  wchar_t *v15; // rcx
  int v16; // edi
  int v17; // esi
  int v18; // edi
  int v19; // r15d
  wchar_t *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  wchar_t *v23; // rcx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // edi
  wchar_t *v28; // rdx
  unsigned __int16 *v30[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  wchar_t *Str; // [rsp+78h] [rbp+48h] BYREF

  v30[1] = (unsigned __int16 *)-2LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&Str,
    (__int64)a1);
  if ( *((int *)Str - 4) < 0 || (v5 = wcsstr(Str, L"_")) == 0LL || (v6 = v5 - Str, (_DWORD)v6 == -1) )
  {
    v27 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    goto LABEL_40;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Left(
    &Str,
    v30,
    (unsigned int)v6);
  v7 = v30[0];
  if ( !ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(v30[0]) )
  {
    v10 = 674LL;
LABEL_35:
    v27 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x80070057LL);
    goto LABEL_37;
  }
  *(_DWORD *)_o__errno(v9, v8) = 0;
  if ( *((int *)v7 - 2) > 1 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork((__int64 *)v30, *((_DWORD *)v7 - 4));
    v7 = v30[0];
  }
  v11 = _o__wtoi(v7);
  if ( *(_DWORD *)_o__errno(v13, v12) )
  {
    v10 = 681LL;
    goto LABEL_35;
  }
  if ( v11 > 8 )
  {
    v10 = 684LL;
    goto LABEL_35;
  }
  v14 = 0;
  if ( (int)v6 + 1 >= 0 )
    v14 = v6 + 1;
  v15 = Str;
  v16 = *((_DWORD *)Str - 4);
  if ( 0x7FFFFFFF - v14 < 0 )
    ATL::AtlThrowImpl(-2147024809);
  v17 = *((_DWORD *)Str - 4);
  if ( v14 <= v16 )
    v17 = v14;
  if ( v17 > 0 )
  {
    v18 = v16 - v17;
    v19 = v18 + 1;
    if ( *((int *)Str - 2) > 1 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Fork((__int64 *)&Str, *((_DWORD *)Str - 4));
      v15 = Str;
    }
    v20 = &v15[v17];
    if ( 2LL * v19 )
    {
      if ( !v15 || !v20 )
      {
        *(_DWORD *)_o__errno(v15, v20) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v15, v20, 2LL * v19);
      v15 = Str;
    }
    if ( v18 < 0 || v18 > *((_DWORD *)v15 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v15 - 4) = v18;
    Str[v18] = 0;
    v15 = Str;
  }
  if ( !ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(v15) )
  {
    v10 = 693LL;
    goto LABEL_35;
  }
  *(_DWORD *)_o__errno(v22, v21) = 0;
  v23 = Str;
  if ( *((int *)Str - 2) > 1 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork((__int64 *)&Str, *((_DWORD *)Str - 4));
    v23 = Str;
  }
  v24 = (unsigned int)_o__wtoi(v23);
  if ( *(_DWORD *)_o__errno(v26, v25) )
  {
    v10 = 699LL;
    goto LABEL_35;
  }
  if ( (unsigned int)v24 > eCapture )
  {
    v10 = 702LL;
    goto LABEL_35;
  }
  *a2 = v24;
  *(_DWORD *)a3 = v11;
  v27 = 0;
LABEL_37:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v7 - 3) + 8LL))(*((_QWORD *)v7 - 3));
LABEL_40:
  v28 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v28 + 8LL))(*(_QWORD *)v28);
  return v27;
}
