/*
 * XREFs of ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800902AC
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18008FE40 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180020D5C (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180020EC8 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x180020F40 (--0bad_optional_access@std@@QEAA@XZ.c)
 *     ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358 (-GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ.c)
 *     ?IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z @ 0x18008F09C (-IsIdentityTransform@@YA_NUtagINPUT_TRANSFORM@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

__int64 __fastcall DWMInputTarget::AddDwmInputRoutingData(
        DWMInputTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  InputSite *v4; // rcx
  unsigned int v5; // edi
  const struct LegacyInputSinkData *LegacyInputSinkData; // rsi
  unsigned int v8; // edx
  _OWORD *Transform; // rax
  __int64 v10; // rcx
  bool v11; // zf
  __int128 v12; // xmm2
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  bool v15; // al
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm7_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm8_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  __int16 v30; // [rsp+28h] [rbp-59h]
  int v31; // [rsp+2Ch] [rbp-55h] BYREF
  _QWORD pExceptionObject[3]; // [rsp+30h] [rbp-51h] BYREF
  _OWORD v33[4]; // [rsp+48h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v4 = (InputSite *)*((_QWORD *)this + 15);
  v5 = 0;
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x217,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
    __debugbreak();
  }
  if ( !*((_BYTE *)v4 + 384) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x219,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
    JUMPOUT(0x1800905ADLL);
  }
  LegacyInputSinkData = InputSite::GetLegacyInputSinkData(v4);
  if ( (*(_BYTE *)a2 & 0x28) != 0 )
  {
    v8 = 3;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v8 = 4;
  }
  else if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( (*(_BYTE *)a2 & 4) != 0 )
      v8 = 2;
  }
  *((_QWORD *)a2 + 48) = LegacyInputSinkData::GetCompositionInputQueue(LegacyInputSinkData, v8)[1];
  Transform = LegacyInputSinkData::GetTransform(LegacyInputSinkData, v33);
  *(_OWORD *)((char *)a2 + 392) = *Transform;
  *(_OWORD *)((char *)a2 + 408) = Transform[1];
  *(_OWORD *)((char *)a2 + 424) = Transform[2];
  *(_OWORD *)((char *)a2 + 440) = Transform[3];
  if ( !*((_BYTE *)LegacyInputSinkData + 17) )
  {
    v10 = *(_QWORD *)LegacyInputSinkData;
    v31 = 0;
    NtQueryCompositionInputIsImplicit(v10, &v31);
    HIBYTE(v30) = 1;
    LOBYTE(v30) = v31 != 0;
    *((_WORD *)LegacyInputSinkData + 8) = v30;
    if ( !*((_BYTE *)LegacyInputSinkData + 17) )
    {
      memset(pExceptionObject, 0, sizeof(pExceptionObject));
      std::bad_optional_access::bad_optional_access((std::bad_optional_access *)pExceptionObject);
      throw (std::bad_optional_access *)pExceptionObject;
    }
  }
  v11 = (*(_BYTE *)a2 & 0x3B) == 0;
  *((_DWORD *)a2 + 114) = *((unsigned __int8 *)LegacyInputSinkData + 16);
  if ( v11 )
    return 0LL;
  v12 = *(_OWORD *)((char *)a2 + 392);
  v13 = *(_OWORD *)((char *)a2 + 424);
  v33[1] = *(_OWORD *)((char *)a2 + 408);
  v14 = *(_OWORD *)((char *)a2 + 440);
  v33[0] = v12;
  v33[3] = v14;
  v33[2] = v13;
  v15 = *(float *)&v12 == 1.0 && IsIdentityTransform((float *)v33);
  if ( v15 || !*((_DWORD *)a2 + 12) )
    return 0LL;
  while ( 1 )
  {
    v16 = *((float *)a2 + 101);
    v17 = *((float *)a2 + 105);
    v18 = 32LL * v5;
    v19 = (float)*(int *)((char *)a2 + v18 + 68);
    v20 = (float)*(int *)((char *)a2 + v18 + 64);
    v21 = (float)(v19 * v16) - *((float *)a2 + 99);
    v22 = (float)(v19 * v17) - *((float *)a2 + 103);
    v23 = (float)(v20 * v16) - *((float *)a2 + 98);
    v24 = (float)(v20 * v17) - *((float *)a2 + 102);
    if ( (float)(v23 * v22) == (float)(v21 * v24) )
      break;
    v25 = (float)(v23 * v22) - (float)(v21 * v24);
    ++v5;
    v26 = *((float *)a2 + 113);
    v27 = (float)(v20 * v26) - *((float *)a2 + 110);
    v28 = (float)(v19 * v26) - *((float *)a2 + 111);
    *(_DWORD *)((char *)a2 + v18 + 72) = (int)(float)((float)((float)(v28 * v24) - (float)(v27 * v22)) / v25);
    *(_DWORD *)((char *)a2 + v18 + 76) = (int)(float)((float)((float)(v27 * v21) - (float)(v28 * v23)) / v25);
    if ( v5 >= *((_DWORD *)a2 + 12) )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x221,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
