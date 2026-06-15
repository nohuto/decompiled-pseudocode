/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x1800021B0 (AudioServerGetDevicePeriod.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x1800024DC (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180033470 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180034510 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     std::_Func_impl_no_alloc__lambda_a6a881e12778e3952f42054a91b627a8__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x1800561B0 (std--_Func_impl_no_alloc__lambda_a6a881e12778e3952f42054a91b627a8__bool_WAVEFORMATE_ea_1800561B0.c)
 *     _lambda_c576b7c555b6a6b1a6c16cffcb9322a9_::operator() @ 0x180066BA0 (_lambda_c576b7c555b6a6b1a6c16cffcb9322a9_--operator().c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800CF2C0 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800CF60C (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DCEF0 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ECA9C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x180107C2C (_lambda_068f763f677867854f08eaa5008b23ee_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_d688b6ce4f9a3e900547f5cf0679d940__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x18010E0B0 (std--_Func_impl_no_alloc__lambda_d688b6ce4f9a3e900547f5cf0679d940__bool_WAVEFORMATE_ea_18010E0B0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x18010C70C (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
        __int64 a1,
        int a2,
        unsigned __int16 *a3,
        struct _GUID *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  struct _GUID v10; // xmm0
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // eax
  CAudioSignalProcessingModeMap *v19; // rcx
  struct _GUID *v20; // rax
  struct _GUID v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r8
  int v26; // r9d
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // r10
  __int64 v30; // r14
  __int64 v31; // rax
  int v32; // r12d
  unsigned __int16 **v33; // r15
  unsigned __int16 *v34; // rcx
  unsigned __int16 v35; // dx
  unsigned __int16 v36; // ax
  __int128 v37; // xmm1
  __int64 v38; // xmm0_8
  int v39; // r10d
  __int16 v40; // r11
  unsigned __int16 v41; // dx
  unsigned __int16 v42; // ax
  __int128 v43; // xmm1
  __int16 v44; // bx
  __int64 v45; // xmm0_8
  int v46; // r9d
  __int16 v47; // dx
  int v48; // ecx
  __int16 v49; // ax
  __int64 v50; // rax
  _QWORD *v52; // r10
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int16 v56; // r8
  __int128 v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int16 v60; // r8
  __int128 v61; // xmm0
  int v62; // eax
  int v63; // [rsp+20h] [rbp-C9h]
  int v64; // [rsp+24h] [rbp-C5h]
  __int64 v65; // [rsp+28h] [rbp-C1h]
  _QWORD *v66; // [rsp+30h] [rbp-B9h]
  struct _GUID v67; // [rsp+60h] [rbp-89h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp-79h] BYREF
  _BYTE v69[24]; // [rsp+80h] [rbp-69h]
  __int128 Buf1; // [rsp+98h] [rbp-51h] BYREF
  _BYTE v71[24]; // [rsp+A8h] [rbp-41h]
  struct _GUID v72; // [rsp+C0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+3Fh]

  v10 = *a4;
  v11 = 192LL;
  if ( a2 == 3 )
    v11 = 200LL;
  v12 = 0LL;
  v13 = a2;
  v15 = a1 + v11;
  v16 = 0;
  v67 = *a4;
  v17 = v13 + 2 * v13 + 175;
  v18 = *(_DWORD *)(a1 + 8 * v17 + 16);
  v19 = (CAudioSignalProcessingModeMap *)(a1 + 8 * v17);
  if ( v18 <= 0 )
    goto LABEL_4;
  while ( 1 )
  {
    v52 = (_QWORD *)(*(_QWORD *)v19 + 16LL * v16);
    v53 = *v52 - *(_QWORD *)&v67.Data1;
    if ( *v52 == *(_QWORD *)&v67.Data1 )
      v53 = v52[1] - *(_QWORD *)v67.Data4;
    if ( !v53 )
      break;
    if ( ++v16 >= v18 )
      goto LABEL_4;
  }
  if ( v16 == -1 )
  {
LABEL_4:
    v67 = v10;
    v20 = &v67;
  }
  else
  {
    v67 = v10;
    v20 = CAudioSignalProcessingModeMap::Lookup(v19, &v72, &v67);
  }
  v21 = *v20;
  v22 = *(_QWORD *)&v20->Data1;
  v65 = v22;
  v23 = *(_QWORD *)&v20->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v67 = v21;
  v24 = *(_QWORD *)v21.Data4;
  if ( v22 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v23 = *(_QWORD *)v21.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v23 )
  {
    v67 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v24 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v22 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v65 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v25 = *(_QWORD **)v15;
  v26 = 0;
  v63 = 0;
  v27 = 0LL;
  v66 = *(_QWORD **)v15;
  v64 = *(_DWORD *)(*(_QWORD *)v15 + 8LL);
  v28 = v64;
  v29 = v64;
  *(_QWORD *)&v72.Data1 = v64;
  while ( 1 )
  {
    if ( v27 >= v29 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1515,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL,
        v63);
      return 2290679816LL;
    }
    if ( v27 < 0 || v26 >= v28 )
    {
LABEL_104:
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18009A5CFLL);
    }
    v30 = *(_QWORD *)(*v25 + 8 * v27);
    v31 = *(_QWORD *)v30 - v22;
    if ( *(_QWORD *)v30 == v22 )
      v31 = *(_QWORD *)(v30 + 8) - v24;
    if ( !v31 )
      break;
LABEL_62:
    v24 = *(_QWORD *)v67.Data4;
    ++v26;
    v28 = v64;
    ++v27;
    v63 = v26;
  }
  v32 = 0;
  if ( *(int *)(v30 + 24) <= 0LL )
  {
LABEL_61:
    v12 = 0LL;
    goto LABEL_62;
  }
  while ( 1 )
  {
    if ( v12 < 0 || v32 >= *(_DWORD *)(v30 + 24) )
      goto LABEL_104;
    v33 = *(unsigned __int16 ***)(*(_QWORD *)(v30 + 16) + 8 * v12);
    v34 = *v33;
    if ( !a3 )
    {
      if ( !v34 )
        goto LABEL_51;
      goto LABEL_59;
    }
    if ( !v34 )
      goto LABEL_59;
    v35 = *a3;
    v36 = a3[8];
    if ( *a3 == 0xFFFE )
    {
      if ( v36 != 22 )
      {
        v54 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v54 )
          v54 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v54 )
        {
          v55 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v55 )
            v55 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v55 )
            goto LABEL_59;
        }
      }
      v37 = *((_OWORD *)a3 + 1);
      Buf1 = *(_OWORD *)a3;
      v38 = *((_QWORD *)a3 + 4);
      *(_OWORD *)v71 = v37;
      v39 = DWORD1(v37);
      *(_WORD *)v71 = 22;
      v40 = Buf1;
      *(_QWORD *)&v71[16] = v38;
    }
    else
    {
      if ( v36 && ((v35 - 1) & 0xFFFD) != 0 )
        goto LABEL_59;
      v56 = a3[1];
      if ( (unsigned __int16)(v56 - 1) > 1u || ((a3[7] - 8) & 0xFFE7) != 0 )
        goto LABEL_59;
      v57 = *(_OWORD *)a3;
      *(_WORD *)&v71[2] = a3[7];
      *(_WORD *)v71 = 22;
      v40 = -2;
      *(GUID *)&v71[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v71[8] = v35;
      Buf1 = v57;
      LOWORD(Buf1) = -2;
      v39 = (v56 == 1) + 3;
      *(_DWORD *)&v71[4] = v39;
    }
    v41 = *v34;
    v42 = v34[8];
    if ( *v34 == 0xFFFE )
      break;
    if ( !v42 || ((v41 - 1) & 0xFFFD) == 0 )
    {
      v60 = v34[1];
      if ( (unsigned __int16)(v60 - 1) <= 1u )
      {
        v44 = -2;
        if ( ((v34[7] - 8) & 0xFFE7) == 0 )
        {
          v61 = *(_OWORD *)v34;
          *(_WORD *)&v69[2] = v34[7];
          *(_WORD *)v69 = 22;
          *(GUID *)&v69[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v69[8] = v41;
          Buf2 = v61;
          LOWORD(Buf2) = -2;
          v46 = (v60 == 1) + 3;
          *(_DWORD *)&v69[4] = v46;
          goto LABEL_27;
        }
      }
    }
LABEL_59:
    ++v32;
    if ( ++v12 >= *(int *)(v30 + 24) )
    {
      v22 = v65;
      v25 = v66;
      v26 = v63;
      v29 = *(_QWORD *)&v72.Data1;
      goto LABEL_61;
    }
  }
  if ( v42 != 22 )
  {
    v58 = *((_QWORD *)v34 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v58 )
      v58 = *((_QWORD *)v34 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v58 )
    {
      v59 = *((_QWORD *)v34 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v59 )
        v59 = *((_QWORD *)v34 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v59 )
        goto LABEL_59;
    }
  }
  v43 = *((_OWORD *)v34 + 1);
  Buf2 = *(_OWORD *)v34;
  v44 = Buf2;
  v45 = *((_QWORD *)v34 + 4);
  *(_OWORD *)v69 = v43;
  v46 = DWORD1(v43);
  *(_QWORD *)&v69[16] = v45;
  *(_WORD *)v69 = 22;
LABEL_27:
  if ( WORD1(Buf1) )
  {
    v47 = WORD1(Buf2);
  }
  else
  {
    v47 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v48 = DWORD1(Buf2);
  }
  else
  {
    v48 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v49 = HIWORD(Buf2);
  }
  else
  {
    v49 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v39 )
  {
    v46 = 0;
    *(_DWORD *)&v69[4] = 0;
  }
  if ( !v40 )
  {
    v44 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v47 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v48 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v49 )
    HIDWORD(Buf1) = 0;
  if ( !v46 )
    *(_DWORD *)&v71[4] = 0;
  if ( !v44 )
    LOWORD(Buf1) = 0;
  v50 = *(_QWORD *)&v71[8] - *(_QWORD *)&v69[8];
  if ( *(_QWORD *)&v71[8] == *(_QWORD *)&v69[8] )
    v50 = *(_QWORD *)&v71[16] - *(_QWORD *)&v69[16];
  if ( v50 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_59;
LABEL_51:
  if ( a6 )
    *a6 = *((_DWORD *)v33 + 3);
  if ( a7 )
    *a7 = *((_DWORD *)v33 + 2);
  if ( a8 )
    *a8 = *((_DWORD *)v33 + 4);
  if ( a9 )
  {
    if ( a5 )
      v62 = *((_DWORD *)v33 + 6);
    else
      v62 = *((_DWORD *)v33 + 5);
    *a9 = v62;
  }
  return 0LL;
}
