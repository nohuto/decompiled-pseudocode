/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180017BB0
 * Callers:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000AD88 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000AE28 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18000B340 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005060 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006B8F7 (memcmp_0.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114B44 (CEndpointCharacteristics--GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180119DA4 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x180119DE0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x180119E1C (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
        LPCWSTR *this,
        char a2,
        unsigned __int8 a3,
        int a4,
        __int64 *a5,
        LPVOID *a6)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r12d
  unsigned __int8 v7; // r13
  LPCWSTR *v8; // r15
  LPVOID *v9; // rdi
  const PROPERTYKEY *v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  const char *v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 *v18; // rbx
  struct _GUID v19; // xmm0
  CAudioSignalProcessingModeMap *v20; // rcx
  int v21; // r10d
  int v22; // edx
  int v23; // eax
  struct _GUID *v24; // rax
  struct _GUID v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // rax
  __int64 i; // r13
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r15
  unsigned __int16 *v36; // rdx
  unsigned __int16 v37; // cx
  int v38; // r10d
  __int16 v39; // r11
  unsigned __int16 v40; // cx
  int v41; // r9d
  __int16 v42; // di
  __int16 v43; // ax
  __int16 v44; // dx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rbx
  void *v48; // rax
  void *v49; // rdi
  int DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9; // ebx
  unsigned __int16 v51; // r11
  int v52; // r9d
  int v53; // r10d
  unsigned __int16 v54; // bx
  unsigned __int16 v55; // dx
  __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int16 v58; // dx
  unsigned __int16 v59; // ax
  int v60; // edx
  void *v61; // rax
  void *v63; // rcx
  __int64 v64; // rdx
  _QWORD *v65; // r9
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  __int16 v69; // r8
  __int16 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int16 v73; // r8
  unsigned __int16 v74; // r9
  unsigned __int64 v75; // r9
  __int64 v76; // rdx
  void *v77; // rcx
  int updated; // eax
  __int64 v79; // rdx
  unsigned __int16 v80; // ax
  unsigned int v81; // [rsp+20h] [rbp-E0h]
  char *v82; // [rsp+28h] [rbp-D8h]
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v87; // [rsp+58h] [rbp-A8h]
  PROPVARIANT pvar; // [rsp+60h] [rbp-A0h] BYREF
  struct tWAVEFORMATEX *v89; // [rsp+68h] [rbp-98h] BYREF
  void *Src; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  LPVOID *v92; // [rsp+80h] [rbp-80h]
  CEndpointCharacteristics *v93; // [rsp+88h] [rbp-78h]
  __int64 v94; // [rsp+90h] [rbp-70h]
  __int128 Buf2; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v96[24]; // [rsp+A8h] [rbp-58h]
  __int128 Buf1; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v98[24]; // [rsp+D0h] [rbp-30h]
  struct _GUID v99; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v100; // [rsp+100h] [rbp+0h]
  struct _GUID v101; // [rsp+110h] [rbp+10h] BYREF
  char v102; // [rsp+120h] [rbp+20h]
  int v103[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v104; // [rsp+140h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v94 = -2LL;
  v6 = a4;
  v87 = a4;
  v7 = a3;
  v8 = this;
  v93 = (CEndpointCharacteristics *)this;
  v9 = a6;
  v92 = a6;
  *a6 = 0LL;
  pv = 0LL;
  if ( a2 )
  {
    pvar = &pv;
    v89 = 0LL;
    LOBYTE(Src) = 1;
    *(_OWORD *)v103 = *(_OWORD *)a5;
    v104 = *((_OWORD *)a5 + 1);
    DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
                                                               (int)this,
                                                               a3,
                                                               a4,
                                                               (int)v103,
                                                               &v89);
    if ( (_BYTE)Src )
    {
      v63 = *(void **)pvar;
      *(_QWORD *)pvar = v89;
      if ( v63 )
        CoTaskMemFree(v63);
    }
    if ( DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 < 0 )
    {
      v64 = 6358LL;
LABEL_154:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v64,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9);
      goto LABEL_155;
    }
LABEL_66:
    if ( !pv )
    {
      DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = -2147467261;
      goto LABEL_153;
    }
    v51 = *((_WORD *)pv + 1);
    if ( v51 )
    {
      v52 = *((_DWORD *)pv + 1);
      if ( v52 )
      {
        v53 = *((_DWORD *)pv + 2);
        if ( v53 )
        {
          v54 = *((_WORD *)pv + 6);
          if ( v54 )
          {
            v55 = *((_WORD *)pv + 8);
            if ( v55 <= 0x400u )
            {
              if ( ((*(_WORD *)pv - 1) & 0xFFFD) != 0 )
              {
                if ( *(_WORD *)pv != 0xFFFE )
                {
LABEL_86:
                  v61 = 0LL;
                  *v9 = pv;
                  DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = 0;
                  goto LABEL_87;
                }
                if ( v55 < 0x16u )
                  goto LABEL_90;
                v56 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3) )
                  v56 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                if ( v56 )
                {
                  v79 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3) )
                    v79 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                  if ( v79 )
                    goto LABEL_86;
                }
                v57 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                if ( !v57 )
                  v57 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                if ( v57 )
                {
                  v80 = *((_WORD *)pv + 7);
                  v58 = v80;
                  if ( v80 == 32 || v80 == 64 )
                  {
LABEL_82:
                    v59 = *((_WORD *)pv + 9);
                    if ( v59 )
                    {
                      if ( v58 >= v59 )
                      {
                        v60 = v51 * v58;
                        if ( v53 == (unsigned int)(v52 * v60) >> 3 && v54 == v60 / 8 )
                          goto LABEL_86;
                      }
                    }
                  }
                }
                else
                {
                  v58 = *((_WORD *)pv + 7);
                  if ( ((v58 - 8) & 0xFFE7) == 0 )
                    goto LABEL_82;
                }
              }
              else if ( !v55
                     && (*((_WORD *)pv + 7) & 7) == 0
                     && v51 <= 2u
                     && v53 == (v52 * *((unsigned __int16 *)pv + 7) * (unsigned int)v51) >> 3 )
              {
                goto LABEL_86;
              }
            }
          }
        }
      }
    }
LABEL_90:
    DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = -2147024809;
LABEL_153:
    v64 = 6411LL;
    goto LABEL_154;
  }
  v10 = &PKEY_AudioEngine_DeviceFormat;
  if ( a4 == 3 )
    v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  *(GUID *)v103 = v10->fmtid;
  LODWORD(v104) = v10->pid;
  pvar = 0LL;
  v89 = 0LL;
  Src = 0LL;
  v11 = (*(__int64 (__fastcall **)(LPCWSTR, int *, PROPVARIANT *))(*(_QWORD *)this[5] + 40LL))(this[5], v103, &pvar);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18DF,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11,
      v81);
    goto LABEL_64;
  }
  if ( !(_WORD)pvar )
    goto LABEL_64;
  if ( (unsigned __int16)pvar != 65 )
  {
    LODWORD(v82) = (unsigned __int16)pvar;
    wil::details::in1diag3::Log_Win32Msg(
      retaddr,
      (void *)0x18FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0xD,
      (unsigned int)"Unexpected vartype %d (0x%08x)",
      v82,
      (unsigned __int16)pvar);
    goto LABEL_64;
  }
  if ( (_WORD)pvar != 65
    || (unsigned int)v89 < 0x12
    || (v14 = Src, (unsigned int)v89 != *((unsigned __int16 *)Src + 8) + 18LL) )
  {
    wil::details::in1diag3::Log_Win32(retaddr, (void *)0x18F0, v12, v13, v81);
LABEL_64:
    if ( !pv )
    {
      *(_QWORD *)&v101.Data1 = &pv;
      *(_QWORD *)v101.Data4 = 0LL;
      v102 = 1;
      v99 = *(struct _GUID *)a5;
      v100 = *((_OWORD *)a5 + 1);
      DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
                                                                 (int)v8,
                                                                 v7,
                                                                 v6,
                                                                 (int)&v99,
                                                                 (struct tWAVEFORMATEX **)v101.Data4);
      if ( v102 )
      {
        v77 = **(void ***)&v101.Data1;
        **(_QWORD **)&v101.Data1 = *(_QWORD *)v101.Data4;
        if ( v77 )
          CoTaskMemFree(v77);
      }
      if ( DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 < 0 )
      {
        v75 = (unsigned int)DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9;
        v76 = 6403LL;
        goto LABEL_151;
      }
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v8, v7, v6, (const struct tWAVEFORMATEX *)pv);
      DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = updated;
      if ( updated < 0 )
      {
        v75 = (unsigned int)updated;
        v76 = 6406LL;
        goto LABEL_151;
      }
    }
    PropVariantClear(&pvar);
    goto LABEL_66;
  }
  v15 = *((int *)a5 + 2);
  v16 = *a5;
  v17 = 192LL;
  if ( (_DWORD)v15 == 3 )
    v17 = 200LL;
  v18 = (__int64 *)(v16 + v17);
  v19 = *(struct _GUID *)((char *)a5 + 12);
  v99 = v19;
  v20 = (CAudioSignalProcessingModeMap *)(v16 + 8 * (v15 + 2 * v15 + 175));
  v21 = 0;
  v22 = 0;
  v23 = *((_DWORD *)v20 + 4);
  if ( v23 <= 0 )
    goto LABEL_13;
  while ( 1 )
  {
    v65 = (_QWORD *)(*(_QWORD *)v20 + 16LL * v22);
    v66 = *v65 - *(_QWORD *)&v99.Data1;
    if ( *v65 == *(_QWORD *)&v99.Data1 )
      v66 = v65[1] - *(_QWORD *)v99.Data4;
    if ( !v66 )
      break;
    if ( ++v22 >= v23 )
      goto LABEL_13;
  }
  if ( v22 == -1 )
  {
LABEL_13:
    v99 = v19;
    v24 = &v99;
  }
  else
  {
    v99 = v19;
    v24 = CAudioSignalProcessingModeMap::Lookup(v20, &v101, &v99);
    v21 = 0;
  }
  v25 = *v24;
  v99 = v25;
  v27 = *(_QWORD *)v25.Data4;
  v26 = *(_OWORD *)&v25;
  v91 = *(_QWORD *)&v25.Data1;
  v28 = *(_QWORD *)&v25.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v25.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v28 = *(_QWORD *)v25.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v28 )
  {
    v99 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v27 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v26 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v91 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v29 = 0;
  v86 = 0;
  v30 = *v18;
  *(_QWORD *)&v99.Data1 = *v18;
  for ( i = 0LL; ; i += 8LL )
  {
    if ( v29 >= *(_DWORD *)(v30 + 8) )
      goto LABEL_63;
    if ( i < 0 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18008CA0BLL);
    }
    v32 = *(_QWORD *)(*(_QWORD *)v30 + i);
    v33 = *(_QWORD *)v32 - v26;
    if ( *(_QWORD *)v32 == v26 )
      v33 = *(_QWORD *)(v32 + 8) - v27;
    if ( !v33 )
    {
      v34 = 0;
      v85 = 0;
      if ( *(int *)(v32 + 24) > 0 )
        break;
    }
LABEL_128:
    v86 = ++v29;
    v30 = *(_QWORD *)&v99.Data1;
  }
  v35 = 0LL;
  while ( 1 )
  {
    if ( v35 < 0 || v34 >= *(_DWORD *)(v32 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18008C9F5LL);
    }
    v36 = **(unsigned __int16 ***)(v35 + *(_QWORD *)(v32 + 16));
    if ( !v14 )
      break;
    if ( v36 )
    {
      v37 = *(_WORD *)v14;
      if ( *(_WORD *)v14 == 0xFFFE )
      {
        if ( *((_WORD *)v14 + 8) != 22 )
        {
          v67 = v14[3] - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v67 )
            v67 = v14[4] - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( v67 )
          {
            v68 = v14[3] - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v68 )
              v68 = v14[4] - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( v68 )
              goto LABEL_126;
          }
        }
        Buf1 = *(_OWORD *)v14;
        *(_OWORD *)v98 = *((_OWORD *)v14 + 1);
        *(_QWORD *)&v98[16] = v14[4];
        *(_WORD *)v98 = 22;
        v38 = *(_DWORD *)&v98[4];
        v39 = Buf1;
      }
      else
      {
        if ( *((_WORD *)v14 + 8) && ((v37 - 1) & 0xFFFD) != 0 )
          goto LABEL_126;
        v69 = *((_WORD *)v14 + 1);
        if ( (unsigned __int16)(v69 - 1) > 1u )
          goto LABEL_126;
        v70 = *((_WORD *)v14 + 7);
        if ( ((v70 - 8) & 0xFFE7) != 0 )
          goto LABEL_126;
        Buf1 = *(_OWORD *)v14;
        v39 = -2;
        LOWORD(Buf1) = -2;
        *(_WORD *)v98 = 22;
        *(_WORD *)&v98[2] = v70;
        *(GUID *)&v98[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v98[8] = v37;
        LOBYTE(v21) = v69 == 1;
        v38 = v21 + 3;
        *(_DWORD *)&v98[4] = v38;
      }
      v40 = *v36;
      if ( *v36 == 0xFFFE )
      {
        if ( v36[8] != 22 )
        {
          v71 = *((_QWORD *)v36 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v71 )
            v71 = *((_QWORD *)v36 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( v71 )
          {
            v72 = *((_QWORD *)v36 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v72 )
              v72 = *((_QWORD *)v36 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( v72 )
              goto LABEL_125;
          }
        }
        Buf2 = *(_OWORD *)v36;
        *(_OWORD *)v96 = *((_OWORD *)v36 + 1);
        *(_QWORD *)&v96[16] = *((_QWORD *)v36 + 4);
        *(_WORD *)v96 = 22;
        v41 = *(_DWORD *)&v96[4];
        v42 = Buf2;
        v43 = 0;
      }
      else
      {
        if ( v36[8] && ((v40 - 1) & 0xFFFD) != 0
          || (v73 = v36[1], (unsigned __int16)(v73 - 1) > 1u)
          || (v74 = v36[7], v42 = -2, ((v74 - 8) & 0xFFE7) != 0) )
        {
LABEL_125:
          v21 = 0;
          goto LABEL_126;
        }
        Buf2 = *(_OWORD *)v36;
        LOWORD(Buf2) = -2;
        *(_WORD *)v96 = 22;
        *(_WORD *)&v96[2] = v74;
        *(GUID *)&v96[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v96[8] = v40;
        v43 = 0;
        v41 = (v73 == 1) + 3;
        *(_DWORD *)&v96[4] = v41;
      }
      if ( WORD1(Buf1) )
      {
        v44 = WORD1(Buf2);
      }
      else
      {
        v44 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v45 = DWORD1(Buf2);
      }
      else
      {
        v45 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
        v43 = HIWORD(Buf2);
      else
        HIDWORD(Buf2) = 0;
      if ( v38 )
      {
        v21 = 0;
      }
      else
      {
        v21 = 0;
        v41 = 0;
        *(_DWORD *)&v96[4] = 0;
      }
      if ( !v39 )
      {
        v42 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v44 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v45 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v43 )
        HIDWORD(Buf1) = 0;
      if ( !v41 )
        *(_DWORD *)&v98[4] = 0;
      if ( !v42 )
        LOWORD(Buf1) = 0;
      v46 = *(_QWORD *)&v98[8] - *(_QWORD *)&v96[8];
      if ( *(_QWORD *)&v98[8] == *(_QWORD *)&v96[8] )
        v46 = *(_QWORD *)&v98[16] - *(_QWORD *)&v96[16];
      if ( v46 )
        goto LABEL_126;
      if ( !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        goto LABEL_60;
      goto LABEL_125;
    }
LABEL_126:
    v34 = v85 + 1;
    v85 = v34;
    v35 += 8LL;
    if ( v34 >= *(_DWORD *)(v32 + 24) )
    {
      v26 = v91;
      v29 = v86;
      goto LABEL_128;
    }
  }
  if ( v36 )
    goto LABEL_126;
LABEL_60:
  v47 = *((unsigned __int16 *)v14 + 8);
  v48 = CoTaskMemAlloc(v47 + 18);
  v49 = v48;
  if ( v48 )
  {
    memcpy_0(v48, v14, v47 + 18);
    DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = 0;
  }
  else
  {
    DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = -2147024882;
  }
  pv = v49;
  if ( DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 >= 0 )
  {
LABEL_63:
    v7 = a3;
    v6 = v87;
    v8 = (LPCWSTR *)v93;
    v9 = v92;
    goto LABEL_64;
  }
  v75 = (unsigned int)DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9;
  v76 = 6379LL;
LABEL_151:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v76,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v75);
  PropVariantClear(&pvar);
LABEL_155:
  v61 = pv;
LABEL_87:
  pv = 0LL;
  if ( v61 )
    CoTaskMemFree(v61);
  return (unsigned int)DefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9;
}
