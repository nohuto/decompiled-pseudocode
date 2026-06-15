/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18003C510
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f1e42772dfd3546d983b1a9251e92839__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180004450 (std--_Func_impl_no_alloc__lambda_f1e42772dfd3546d983b1a9251e92839__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180007A84 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180008204 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerGetDevicePeriod @ 0x180008510 (AudioServerGetDevicePeriod.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x180048810 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800DD82C (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E77E0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800E85F0 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F63A4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800F85FC (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     _lambda_04a35e8f1ced65175c9c81cacfacedb9_::operator() @ 0x180115754 (_lambda_04a35e8f1ced65175c9c81cacfacedb9_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_9cd369e588a5ffc689e2be563576fbcb__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18011B740 (std--_Func_impl_no_alloc__lambda_9cd369e588a5ffc689e2be563576fbcb__bool_WAVEFORMATE_ea_18011B740.c)
 * Callees:
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006B8F7 (memcmp_0.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x180119E1C (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
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
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  int v17; // eax
  CAudioSignalProcessingModeMap *v18; // rcx
  struct _GUID *v19; // rax
  struct _GUID v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  int v24; // r8d
  __int64 v25; // r13
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // r14
  __int64 v29; // rax
  int v30; // r12d
  __int64 v31; // rsi
  unsigned __int16 **v32; // r15
  unsigned __int16 *v33; // rcx
  unsigned __int16 v34; // dx
  unsigned __int16 v35; // ax
  __int128 v36; // xmm1
  __int16 v37; // r11
  __int64 v38; // xmm0_8
  int v39; // r10d
  unsigned __int16 v40; // dx
  unsigned __int16 v41; // ax
  __int128 v42; // xmm1
  __int16 v43; // bx
  __int64 v44; // xmm0_8
  int v45; // r9d
  __int16 v46; // dx
  int v47; // ecx
  __int16 v48; // ax
  __int64 v49; // rax
  _QWORD *v51; // r10
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int16 v55; // r8
  unsigned __int16 v56; // r9
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

  v10 = *a4;
  v11 = 192LL;
  if ( a2 == 3 )
    v11 = 200LL;
  v13 = a1 + v11;
  v14 = a2;
  v15 = 0;
  v67 = *a4;
  v16 = v14 + 2 * v14 + 175;
  v17 = *(_DWORD *)(a1 + 8 * v16 + 16);
  v18 = (CAudioSignalProcessingModeMap *)(a1 + 8 * v16);
  if ( v17 <= 0 )
    goto LABEL_4;
  while ( 1 )
  {
    v51 = (_QWORD *)(*(_QWORD *)v18 + 16LL * v15);
    v52 = *v51 - *(_QWORD *)&v67.Data1;
    if ( *v51 == *(_QWORD *)&v67.Data1 )
      v52 = v51[1] - *(_QWORD *)v67.Data4;
    if ( !v52 )
      break;
    if ( ++v15 >= v17 )
      goto LABEL_4;
  }
  if ( v15 == -1 )
  {
LABEL_4:
    v67 = v10;
    v19 = &v67;
  }
  else
  {
    v67 = v10;
    v19 = CAudioSignalProcessingModeMap::Lookup(v18, &v72, &v67);
  }
  v20 = *v19;
  v21 = *(_QWORD *)&v19->Data1;
  v65 = v21;
  v22 = *(_QWORD *)&v19->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v67 = v20;
  if ( v21 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v22 = *(_QWORD *)v67.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v22 )
  {
    v67 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v21 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v65 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v23 = *(_QWORD **)v13;
  v24 = 0;
  v63 = 0;
  v25 = 0LL;
  v66 = *(_QWORD **)v13;
  v64 = *(_DWORD *)(*(_QWORD *)v13 + 8LL);
  v26 = v64;
  v27 = v64;
  *(_QWORD *)&v72.Data1 = v64;
  while ( 1 )
  {
    if ( v25 >= v27 )
      return 2290679816LL;
    if ( v25 < 0 || v24 >= v26 )
    {
LABEL_103:
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800A3149LL);
    }
    v28 = *(_QWORD *)(*v23 + 8 * v25);
    v29 = *(_QWORD *)v28 - v21;
    if ( *(_QWORD *)v28 == v21 )
      v29 = *(_QWORD *)(v28 + 8) - *(_QWORD *)v67.Data4;
    if ( !v29 )
    {
      v30 = 0;
      v31 = 0LL;
      if ( *(int *)(v28 + 24) > 0LL )
        break;
    }
LABEL_52:
    v26 = v64;
    v63 = ++v24;
    ++v25;
  }
  while ( 1 )
  {
    if ( v31 < 0 || v30 >= *(_DWORD *)(v28 + 24) )
      goto LABEL_103;
    v32 = *(unsigned __int16 ***)(*(_QWORD *)(v28 + 16) + 8 * v31);
    v33 = *v32;
    if ( !a3 )
    {
      if ( !v33 )
        goto LABEL_54;
      goto LABEL_50;
    }
    if ( !v33 )
      goto LABEL_50;
    v34 = *a3;
    v35 = a3[8];
    if ( *a3 == 0xFFFE )
    {
      if ( v35 != 22 )
      {
        v53 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v53 )
          v53 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v53 )
        {
          v54 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v54 )
            v54 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v54 )
            goto LABEL_50;
        }
      }
      v36 = *((_OWORD *)a3 + 1);
      Buf1 = *(_OWORD *)a3;
      v37 = Buf1;
      v38 = *((_QWORD *)a3 + 4);
      *(_OWORD *)v71 = v36;
      *(_WORD *)v71 = 22;
      v39 = DWORD1(v36);
      *(_QWORD *)&v71[16] = v38;
    }
    else
    {
      if ( v35 && ((v34 - 1) & 0xFFFD) != 0 )
        goto LABEL_50;
      v55 = a3[1];
      if ( (unsigned __int16)(v55 - 1) > 1u )
        goto LABEL_50;
      v56 = a3[7];
      if ( ((v56 - 8) & 0xFFE7) != 0 )
        goto LABEL_50;
      v57 = *(_OWORD *)a3;
      *(_WORD *)v71 = 22;
      v37 = -2;
      *(GUID *)&v71[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v71[8] = v34;
      *(_WORD *)&v71[2] = v56;
      v39 = (v55 == 1) + 3;
      Buf1 = v57;
      *(_DWORD *)&v71[4] = v39;
      LOWORD(Buf1) = -2;
    }
    v40 = *v33;
    v41 = v33[8];
    if ( *v33 == 0xFFFE )
      break;
    if ( !v41 || ((v40 - 1) & 0xFFFD) == 0 )
    {
      v60 = v33[1];
      if ( (unsigned __int16)(v60 - 1) <= 1u )
      {
        v43 = -2;
        if ( ((v33[7] - 8) & 0xFFE7) == 0 )
        {
          v61 = *(_OWORD *)v33;
          *(_WORD *)&v69[2] = v33[7];
          *(_WORD *)v69 = 22;
          *(GUID *)&v69[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v69[8] = v40;
          Buf2 = v61;
          LOWORD(Buf2) = -2;
          v45 = (v60 == 1) + 3;
          *(_DWORD *)&v69[4] = v45;
          goto LABEL_27;
        }
      }
    }
LABEL_50:
    ++v30;
    if ( ++v31 >= *(int *)(v28 + 24) )
    {
      v21 = v65;
      v23 = v66;
      v24 = v63;
      v27 = *(_QWORD *)&v72.Data1;
      goto LABEL_52;
    }
  }
  if ( v41 != 22 )
  {
    v58 = *((_QWORD *)v33 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v58 )
      v58 = *((_QWORD *)v33 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v58 )
    {
      v59 = *((_QWORD *)v33 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v59 )
        v59 = *((_QWORD *)v33 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v59 )
        goto LABEL_50;
    }
  }
  v42 = *((_OWORD *)v33 + 1);
  Buf2 = *(_OWORD *)v33;
  v43 = Buf2;
  v44 = *((_QWORD *)v33 + 4);
  *(_OWORD *)v69 = v42;
  v45 = DWORD1(v42);
  *(_QWORD *)&v69[16] = v44;
  *(_WORD *)v69 = 22;
LABEL_27:
  if ( WORD1(Buf1) )
  {
    v46 = WORD1(Buf2);
  }
  else
  {
    v46 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v47 = DWORD1(Buf2);
  }
  else
  {
    v47 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v48 = HIWORD(Buf2);
  }
  else
  {
    v48 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v39 )
  {
    v45 = 0;
    *(_DWORD *)&v69[4] = 0;
  }
  if ( !v37 )
  {
    v43 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v46 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v47 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v48 )
    HIDWORD(Buf1) = 0;
  if ( !v45 )
    *(_DWORD *)&v71[4] = 0;
  if ( !v43 )
    LOWORD(Buf1) = 0;
  v49 = *(_QWORD *)&v71[8] - *(_QWORD *)&v69[8];
  if ( *(_QWORD *)&v71[8] == *(_QWORD *)&v69[8] )
    v49 = *(_QWORD *)&v71[16] - *(_QWORD *)&v69[16];
  if ( v49 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_50;
LABEL_54:
  if ( a6 )
    *a6 = *((_DWORD *)v32 + 3);
  if ( a7 )
    *a7 = *((_DWORD *)v32 + 2);
  if ( a8 )
    *a8 = *((_DWORD *)v32 + 4);
  if ( a9 )
  {
    if ( a5 )
      v62 = *((_DWORD *)v32 + 6);
    else
      v62 = *((_DWORD *)v32 + 5);
    *a9 = v62;
  }
  return 0LL;
}
