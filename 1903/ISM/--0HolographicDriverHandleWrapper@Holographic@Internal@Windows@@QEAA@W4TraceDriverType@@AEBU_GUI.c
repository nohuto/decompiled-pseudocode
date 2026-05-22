/*
 * XREFs of ??0HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@W4TraceDriverType@@AEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x180150C6C
 * Callers:
 *     ??$?0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1801498E4 (--$-0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059E14 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800AC930 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015AE58 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::HolographicDriverHandleWrapper(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        char *a4,
        int a5,
        char a6,
        __int64 a7)
{
  char v8; // cl
  __int64 v9; // rax
  char v10; // dl
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = (HSTRING)a4;
  *(_QWORD *)a1 = &Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  v8 = 1;
  *(_DWORD *)(a1 + 8) = 1;
  *(_OWORD *)(a1 + 12) = *a3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = a5;
  v9 = a7;
  *(_QWORD *)(a1 + 48) = a7;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = -2147024890;
  *(_QWORD *)(a1 + 136) = -1LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  v10 = a6;
  *(_BYTE *)(a1 + 169) = a6;
  if ( !v9 || v10 )
    v8 = 0;
  if ( v8 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      425LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      a4);
    __debugbreak();
  }
  v11 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 32), &v15);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      427LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a1);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      428LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v12);
  return a1;
}
