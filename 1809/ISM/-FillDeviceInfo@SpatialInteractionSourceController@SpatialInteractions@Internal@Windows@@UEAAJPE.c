/*
 * XREFs of ?FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCControllerDeviceInfo@@@Z @ 0x180127E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::FillDeviceInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct MPCControllerDeviceInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v11; // r9
  char *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 v15; // rdx
  signed __int64 v16; // r8
  __int16 v17; // ax
  char *v18; // rax
  int v19; // eax
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  PCWSTR v22; // rax
  __int64 v23; // rcx
  char *v24; // rdi
  signed __int64 v25; // rdx
  __int16 v26; // ax
  char *v27; // rax
  UINT32 length; // [rsp+28h] [rbp-39h] BYREF
  _WORD v30[6]; // [rsp+2Ch] [rbp-35h] BYREF
  HSTRING string; // [rsp+38h] [rbp-29h] BYREF
  UINT32 v32; // [rsp+40h] [rbp-21h] BYREF
  __m256i v33; // [rsp+48h] [rbp-19h]
  __int64 v34; // [rsp+68h] [rbp+7h]
  __int128 v35; // [rsp+70h] [rbp+Fh] BYREF
  int v36; // [rsp+80h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v34 = -2LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _WORD *))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14), v30);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_OWORD *)a2 + 56) = *(_OWORD *)((char *)this + 924);
    *((_OWORD *)a2 + 57) = *(_OWORD *)((char *)this + 908);
    *(_DWORD *)a2 = *((_DWORD *)this + 3);
    *((_WORD *)a2 + 3) = v30[1];
    *((_WORD *)a2 + 4) = v30[2];
    *((_WORD *)a2 + 2) = v30[0];
    *((_BYTE *)a2 + 928) = *((_BYTE *)this + 456);
    string = 0LL;
    v6 = *((_QWORD *)this + 14);
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v6 + 24LL))(v6, &string);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 1480LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)v8);
LABEL_32:
      WindowsDeleteString(string);
      return v5;
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    v11 = length;
    v12 = (char *)a2 + 10;
    v5 = -2147024809;
    v13 = 200LL;
    if ( length <= 0x7FFFFFFEuLL )
    {
      v15 = 200LL;
      v16 = (char *)StringRawBuffer - v12;
      do
      {
        if ( !(v15 + v11 - 200) )
          break;
        v17 = *(_WORD *)&v12[v16];
        if ( !v17 )
          break;
        *(_WORD *)v12 = v17;
        v12 += 2;
        --v15;
      }
      while ( v15 );
      v18 = v12 - 2;
      if ( v15 )
        v18 = v12;
      *(_WORD *)v18 = 0;
      v14 = v15 == 0 ? 0x8007007A : 0;
    }
    else
    {
      v14 = 2147942487LL;
      *(_WORD *)v12 = 0;
    }
    if ( (int)v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5CB,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)v14);
    *((_BYTE *)a2 + 836) = *((_BYTE *)this + 1052) != 0;
    *((_BYTE *)a2 + 837) = *((_BYTE *)this + 358);
    if ( *((_BYTE *)this + 1020) )
      v19 = (int)(float)(*((float *)this + 254) * 100.0);
    else
      LOBYTE(v19) = -1;
    *((_BYTE *)a2 + 838) = v19;
    *((_BYTE *)a2 + 839) = *((_BYTE *)this + 1022);
    v20 = *(__m128i *)((char *)this + 540);
    *(__m128i *)v33.m256i_i8 = v20;
    *(_OWORD *)&v33.m256i_u64[2] = *(_OWORD *)((char *)this + 556);
    *(_QWORD *)((char *)a2 + 868) = v20.m128i_i64[0];
    *((_DWORD *)a2 + 219) = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
    *((_OWORD *)a2 + 55) = *(_OWORD *)((char *)&v33.m256i_u64[1] + 4);
    v21 = *(__m128i *)((char *)this + 508);
    *(__m128i *)v33.m256i_i8 = v21;
    *(_OWORD *)&v33.m256i_u64[2] = *(_OWORD *)((char *)this + 524);
    *((_QWORD *)a2 + 105) = v21.m128i_i64[0];
    *((_DWORD *)a2 + 212) = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
    *(_OWORD *)((char *)a2 + 852) = *(_OWORD *)((char *)&v33.m256i_u64[1] + 4);
    if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
           this,
           (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v35) )
    {
      v22 = WindowsGetStringRawBuffer(*((HSTRING *)this + 12), &v32);
      *((_BYTE *)a2 + 412) = 1;
      *((_OWORD *)a2 + 51) = v35;
      *((_DWORD *)a2 + 208) = v36;
      v23 = v32;
      v24 = (char *)a2 + 414;
      if ( v32 > 0x7FFFFFFEuLL )
      {
        *(_WORD *)v24 = 0;
LABEL_29:
        v8 = v5;
        v9 = 1514LL;
        goto LABEL_30;
      }
      v25 = (char *)v22 - v24;
      do
      {
        if ( !(v13 + v23 - 200) )
          break;
        v26 = *(_WORD *)&v24[v25];
        if ( !v26 )
          break;
        *(_WORD *)v24 = v26;
        v24 += 2;
        --v13;
      }
      while ( v13 );
      v27 = v24 - 2;
      if ( v13 )
        v27 = v24;
      *(_WORD *)v27 = 0;
      v5 = v13 == 0 ? 0x8007007A : 0;
      if ( !v13 )
        goto LABEL_29;
    }
    v5 = 0;
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5BE,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
