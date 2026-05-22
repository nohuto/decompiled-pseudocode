/*
 * XREFs of ?FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCSourceDeviceInfo@@@Z @ 0x1801659C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800E278C (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1800F72E0 (-StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::FillDeviceInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct MPCSourceDeviceInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  const wchar_t *StringRawBuffer; // rax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  __m128i v13; // xmm2
  __m128i v14; // xmm2
  const wchar_t *v15; // rax
  __int64 v16; // rdx
  UINT32 length; // [rsp+28h] [rbp-29h] BYREF
  _WORD v19[6]; // [rsp+2Ch] [rbp-25h] BYREF
  HSTRING string; // [rsp+38h] [rbp-19h] BYREF
  UINT32 v21; // [rsp+40h] [rbp-11h] BYREF
  __m256i v22; // [rsp+48h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp+17h]
  __int128 v24; // [rsp+70h] [rbp+1Fh] BYREF
  int v25; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v23 = -2LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _WORD *))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14), v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_BYTE *)a2 + 949) = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *))(*(_QWORD *)this + 32LL))(this);
    *(_OWORD *)((char *)a2 + 856) = *(_OWORD *)((char *)this + 924);
    *(_OWORD *)((char *)a2 + 872) = *(_OWORD *)((char *)this + 908);
    *(_DWORD *)a2 = *((_DWORD *)this + 3);
    *((_WORD *)a2 + 3) = v19[1];
    *((_WORD *)a2 + 4) = v19[2];
    *((_WORD *)a2 + 2) = v19[0];
    *((_BYTE *)a2 + 948) = *((_BYTE *)this + 456);
    string = 0LL;
    v6 = *((_QWORD *)this + 14);
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v6 + 24LL))(v6, &string);
    v5 = v7;
    if ( v7 >= 0 )
    {
      length = 0;
      StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
      v11 = StringCchCopyNW((wchar_t *)a2 + 5, v10, StringRawBuffer, length);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1520LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
          (const char *)(unsigned int)v11);
      *(_OWORD *)v22.m256i_i8 = 0uLL;
      *(_OWORD *)((char *)a2 + 412) = 0uLL;
      *((_BYTE *)a2 + 852) = *((_BYTE *)this + 1052) != 0;
      *((_BYTE *)a2 + 888) = *((_BYTE *)this + 358);
      if ( *((_BYTE *)this + 1020) )
        v12 = (int)(float)(*((float *)this + 254) * 100.0);
      else
        LOBYTE(v12) = -1;
      *((_BYTE *)a2 + 889) = v12;
      *((_BYTE *)a2 + 890) = *((_BYTE *)this + 1022);
      v13 = *(__m128i *)((char *)this + 540);
      *(__m128i *)v22.m256i_i8 = v13;
      *(_OWORD *)&v22.m256i_u64[2] = *(_OWORD *)((char *)this + 556);
      *((_QWORD *)a2 + 115) = v13.m128i_i64[0];
      *((_DWORD *)a2 + 232) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
      *(_OWORD *)((char *)a2 + 932) = *(_OWORD *)((char *)&v22.m256i_u64[1] + 4);
      v14 = *(__m128i *)((char *)this + 508);
      *(__m128i *)v22.m256i_i8 = v14;
      *(_OWORD *)&v22.m256i_u64[2] = *(_OWORD *)((char *)this + 524);
      *(_QWORD *)((char *)a2 + 892) = v14.m128i_i64[0];
      *((_DWORD *)a2 + 225) = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
      *(_OWORD *)((char *)a2 + 904) = *(_OWORD *)((char *)&v22.m256i_u64[1] + 4);
      if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
              this,
              (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v24)
        || (v15 = WindowsGetStringRawBuffer(*((HSTRING *)this + 12), &v21),
            *((_BYTE *)a2 + 428) = 1,
            *((_OWORD *)a2 + 52) = v24,
            *((_DWORD *)a2 + 212) = v25,
            v7 = StringCchCopyNW((wchar_t *)a2 + 215, v16, v15, v21),
            v5 = v7,
            v7 >= 0) )
      {
        v5 = 0;
        goto LABEL_15;
      }
      v8 = 1552LL;
    }
    else
    {
      v8 = 1517LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v7);
LABEL_15:
    WindowsDeleteString(string);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E2,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
