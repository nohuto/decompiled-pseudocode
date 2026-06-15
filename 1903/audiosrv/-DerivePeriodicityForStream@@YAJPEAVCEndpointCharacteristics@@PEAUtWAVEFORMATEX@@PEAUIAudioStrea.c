/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x180048810
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18003C510 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006B8F7 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800E6C38 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180117478 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DerivePeriodicityForStream(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        struct _GUID *a10,
        bool a11,
        bool a12,
        __int64 a13,
        __int64 a14,
        struct IProcessSubmixProxy *a15,
        __int64 *a16,
        __int64 *a17)
{
  __int64 v18; // r11
  struct _GUID v19; // xmm0
  char *v20; // rbx
  int v21; // ecx
  int v22; // eax
  LPVOID v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  _DWORD *v26; // rax
  char *i; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r15
  __int16 **v32; // rdi
  unsigned __int16 *v33; // rcx
  WORD wFormatTag; // dx
  int v35; // r10d
  __int16 v36; // r11
  unsigned __int16 v37; // dx
  int v38; // r9d
  __int16 v39; // r14
  __int16 v40; // dx
  int v41; // ecx
  __int16 v42; // ax
  __int64 v43; // rax
  signed int v44; // ebx
  unsigned int v45; // r15d
  unsigned int v46; // r14d
  unsigned int v47; // edi
  _QWORD *v48; // r15
  _QWORD *v50; // r8
  __int64 v51; // rdx
  int Key; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  WORD nChannels; // r8
  WORD wBitsPerSample; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int16 v59; // r8
  unsigned __int16 v60; // r9
  __int64 v61; // r8
  __int64 nSamplesPerSec; // r9
  unsigned int v63; // r12d
  __int64 v64; // rdx
  unsigned int v65; // r8d
  unsigned int v66; // edx
  unsigned int v67; // r8d
  unsigned int v68; // r12d
  unsigned int v69; // edx
  unsigned int v70; // r8d
  unsigned int v71; // edx
  unsigned int v72; // r8d
  unsigned int v73; // eax
  unsigned int v74; // r10d
  int v75; // r11d
  double v76; // xmm4_8
  unsigned int v77; // ecx
  int MixFormat; // edi
  void *v79; // rdx
  __int64 v80; // rdx
  struct _GUID *v81; // r12
  CEndpointCharacteristics *v82; // r14
  void *v83; // rdx
  void *v84; // rdx
  void *v85; // rdx
  void *v86; // rdx
  int SharedModeEnginePeriodicity; // eax
  unsigned __int64 v88; // r9
  __int64 v89; // rax
  void *v90; // rcx
  void *v91; // rcx
  void *v92; // rcx
  void *v93; // rcx
  struct tWAVEFORMATEX *v94; // rcx
  void *v95; // rcx
  void *v96; // rcx
  void *v97; // rcx
  void *v98; // rcx
  struct tWAVEFORMATEX *v99; // rcx
  __int64 pvData; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v101; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v102; // [rsp+78h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *pcbData; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v104; // [rsp+88h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-78h] BYREF
  LPVOID *p_pcbData; // [rsp+98h] [rbp-70h]
  struct tWAVEFORMATEX *v107; // [rsp+A0h] [rbp-68h] BYREF
  char v108; // [rsp+A8h] [rbp-60h]
  CEndpointCharacteristics *v109; // [rsp+B0h] [rbp-58h]
  LPVOID *v110; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v111; // [rsp+C0h] [rbp-48h] BYREF
  char v112; // [rsp+C8h] [rbp-40h]
  struct tWAVEFORMATEX *v113; // [rsp+D0h] [rbp-38h]
  struct IAudioStreamInfo *v114; // [rsp+D8h] [rbp-30h]
  struct _GUID v115; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v116; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v117; // [rsp+108h] [rbp+0h]
  __int64 v118; // [rsp+110h] [rbp+8h]
  struct _GUID v119; // [rsp+118h] [rbp+10h] BYREF
  __int128 Buf1; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v121[24]; // [rsp+138h] [rbp+30h]
  __int128 Buf2; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v123[24]; // [rsp+160h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v118 = -2LL;
  v114 = a3;
  v113 = a2;
  v109 = a1;
  *(_QWORD *)&v115.Data1 = a8;
  *(_QWORD *)&v116.Data1 = a10;
  v101 = a16;
  v117 = a17;
  *a16 = a14;
  if ( a5 )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    v102 = 0LL;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *, LPVOID *))(*(_QWORD *)a15 + 80LL))(a15, &v102);
    *(_QWORD *)v101 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v102 + 104LL))(v102);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v102);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !a14 )
      *a16 = a13;
    return 0LL;
  }
  v18 = 192LL;
  if ( a6 == eKeywordDetectorConnector )
    v18 = 200LL;
  v19 = *a8;
  v119 = *a8;
  v20 = (char *)a1 + 24 * a6;
  v21 = 0;
  v22 = *((_DWORD *)v20 + 354);
  if ( v22 > 0 )
  {
    while ( 1 )
    {
      v50 = (_QWORD *)(*((_QWORD *)v20 + 175) + 16LL * v21);
      v51 = *v50 - *(_QWORD *)&v119.Data1;
      if ( *v50 == *(_QWORD *)&v119.Data1 )
        v51 = v50[1] - *(_QWORD *)v119.Data4;
      if ( !v51 )
        break;
      if ( ++v21 >= v22 )
        goto LABEL_7;
    }
    if ( v21 != -1 )
    {
      v119 = v19;
      Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(v20 + 1400, &v119, v50);
      if ( Key == -1 )
      {
        v19 = GUID_00000000_0000_0000_0000_000000000000;
      }
      else
      {
        if ( Key < 0 || Key >= *((_DWORD *)v20 + 354) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x1800B9C6ALL);
        }
        v19 = *(struct _GUID *)(*((_QWORD *)v20 + 176) + 16LL * Key);
      }
    }
  }
LABEL_7:
  v119 = v19;
  v23 = *(LPVOID *)&v19.Data1;
  v102 = *(LPVOID *)&v19.Data1;
  v24 = *(_QWORD *)&v19.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v19.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v24 = *(_QWORD *)v119.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v24 )
  {
    v119 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v23 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v102 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v25 = 0;
  LODWORD(pvData) = 0;
  v26 = *(_DWORD **)((char *)a1 + v18);
  pv = v26;
  for ( i = 0LL; ; i += 8 )
  {
    v104 = i;
    if ( v25 >= v26[2] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A5,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x88890008LL);
      return 2290679816LL;
    }
    if ( (__int64)i < 0 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800BA51FLL);
    }
    v28 = *(_QWORD *)&i[*(_QWORD *)v26];
    v29 = *(_QWORD *)v28 - (_QWORD)v23;
    if ( *(LPVOID *)v28 == v23 )
      v29 = *(_QWORD *)(v28 + 8) - *(_QWORD *)v119.Data4;
    if ( !v29 )
    {
      v30 = 0;
      LODWORD(pcbData) = 0;
      if ( *(int *)(v28 + 24) > 0 )
        break;
    }
LABEL_96:
    LODWORD(pvData) = ++v25;
    v26 = pv;
  }
  v31 = 0LL;
  while ( 1 )
  {
    if ( v31 < 0 || v30 >= *(_DWORD *)(v28 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800BA509LL);
    }
    v32 = *(__int16 ***)(v31 + *(_QWORD *)(v28 + 16));
    v33 = (unsigned __int16 *)*v32;
    if ( !a7 )
    {
      if ( !v33 )
        goto LABEL_53;
      goto LABEL_94;
    }
    if ( !v33 )
      goto LABEL_94;
    wFormatTag = a7->wFormatTag;
    if ( a7->wFormatTag == 0xFFFE )
    {
      if ( a7->cbSize != 22 )
      {
        v53 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v53 )
          v53 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v53 )
        {
          v54 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v54 )
            v54 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v54 )
            goto LABEL_94;
        }
      }
      Buf1 = *(_OWORD *)&a7->wFormatTag;
      *(_OWORD *)v121 = *(_OWORD *)&a7->cbSize;
      *(_QWORD *)&v121[16] = *(_QWORD *)&a7[1].wBitsPerSample;
      *(_WORD *)v121 = 22;
      v35 = *(_DWORD *)&v121[4];
      v36 = Buf1;
    }
    else
    {
      if ( a7->cbSize && ((wFormatTag - 1) & 0xFFFD) != 0 )
        goto LABEL_94;
      nChannels = a7->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u )
        goto LABEL_94;
      wBitsPerSample = a7->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        goto LABEL_94;
      Buf1 = *(_OWORD *)&a7->wFormatTag;
      v36 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v121 = 22;
      *(_WORD *)&v121[2] = wBitsPerSample;
      *(GUID *)&v121[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v121[8] = wFormatTag;
      v35 = (nChannels == 1) + 3;
      *(_DWORD *)&v121[4] = v35;
    }
    v37 = *v33;
    if ( *v33 == 0xFFFE )
      break;
    if ( !v33[8] || ((v37 - 1) & 0xFFFD) == 0 )
    {
      v59 = v33[1];
      if ( (unsigned __int16)(v59 - 1) <= 1u )
      {
        v60 = v33[7];
        v39 = -2;
        if ( ((v60 - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v33;
          LOWORD(Buf2) = -2;
          *(_WORD *)v123 = 22;
          *(_WORD *)&v123[2] = v60;
          *(GUID *)&v123[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v123[8] = v37;
          v38 = (v59 == 1) + 3;
          *(_DWORD *)&v123[4] = v38;
          goto LABEL_29;
        }
      }
    }
LABEL_94:
    v30 = (_DWORD)pcbData + 1;
    LODWORD(pcbData) = v30;
    v31 += 8LL;
    if ( v30 >= *(_DWORD *)(v28 + 24) )
    {
      v23 = v102;
      i = (char *)v104;
      v25 = pvData;
      goto LABEL_96;
    }
  }
  if ( v33[8] != 22 )
  {
    v57 = *((_QWORD *)v33 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v57 )
      v57 = *((_QWORD *)v33 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v57 )
    {
      v58 = *((_QWORD *)v33 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v58 )
        v58 = *((_QWORD *)v33 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v58 )
        goto LABEL_94;
    }
  }
  Buf2 = *(_OWORD *)v33;
  *(_OWORD *)v123 = *((_OWORD *)v33 + 1);
  *(_QWORD *)&v123[16] = *((_QWORD *)v33 + 4);
  *(_WORD *)v123 = 22;
  v38 = *(_DWORD *)&v123[4];
  v39 = Buf2;
LABEL_29:
  if ( WORD1(Buf1) )
  {
    v40 = WORD1(Buf2);
  }
  else
  {
    v40 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v41 = DWORD1(Buf2);
  }
  else
  {
    v41 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v42 = HIWORD(Buf2);
  }
  else
  {
    v42 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v35 )
  {
    v38 = 0;
    *(_DWORD *)&v123[4] = 0;
  }
  if ( !v36 )
  {
    v39 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v40 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v41 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v42 )
    HIDWORD(Buf1) = 0;
  if ( !v38 )
    *(_DWORD *)&v121[4] = 0;
  if ( !v39 )
    LOWORD(Buf1) = 0;
  v43 = *(_QWORD *)&v121[8] - *(_QWORD *)&v123[8];
  if ( *(_QWORD *)&v121[8] == *(_QWORD *)&v123[8] )
    v43 = *(_QWORD *)&v121[16] - *(_QWORD *)&v123[16];
  if ( v43 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_94;
LABEL_53:
  v44 = *((_DWORD *)v32 + 3);
  v45 = *((_DWORD *)v32 + 2);
  v46 = *((_DWORD *)v32 + 4);
  if ( a11 )
    v47 = *((_DWORD *)v32 + 6);
  else
    v47 = *((_DWORD *)v32 + 5);
  if ( !a14 )
  {
    v48 = v101;
    *(_QWORD *)v101 = (unsigned int)(int)((double)v44 * 10000000.0 / (double)(int)a7->nSamplesPerSec + 0.5);
    goto LABEL_57;
  }
  LODWORD(pvData) = 0;
  LODWORD(pcbData) = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    (LPDWORD)&pcbData);
  nSamplesPerSec = a7->nSamplesPerSec;
  v63 = (int)((double)(int)a14 * (double)(int)nSamplesPerSec / 10000000.0 + 0.5);
  if ( (_DWORD)pvData )
  {
    v48 = v101;
    goto LABEL_57;
  }
  if ( v63 >= v46 && v63 <= v47 )
  {
    v64 = v63 % v45;
    if ( !(v63 % v45) || v63 == v44 || v63 == v46 || v63 == v47 )
    {
      v48 = v101;
      goto LABEL_132;
    }
  }
  v65 = v113->nSamplesPerSec;
  if ( v65 == (_DWORD)nSamplesPerSec )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL);
    return 2290679840LL;
  }
  TranslateFrameCountBetweenSamplingRates(v44, nSamplesPerSec, v65);
  v68 = TranslateFrameCountBetweenSamplingRates(v45, v66, v67);
  TranslateFrameCountBetweenSamplingRates(v46, v69, v70);
  v73 = TranslateFrameCountBetweenSamplingRates(v47, v71, v72);
  nSamplesPerSec = v73;
  v77 = (int)((double)(int)v61 * (double)(int)a14 / 10000000.0 + 0.5);
  if ( v77 < v74 || v77 > v73 )
    goto LABEL_135;
  v64 = v77 % v68;
  if ( !(v77 % v68) )
    goto LABEL_123;
  if ( v77 == v75 )
    goto LABEL_126;
  if ( v77 != v74 && v77 != v73 )
  {
LABEL_135:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL);
    return 2290679840LL;
  }
LABEL_123:
  if ( v77 == v75 )
  {
LABEL_126:
    v63 = v44;
    goto LABEL_130;
  }
  if ( v77 == v74 )
  {
    v63 = v46;
  }
  else if ( v77 == v73 )
  {
    v63 = v47;
  }
  else
  {
    v63 = v45 * (v77 / v68);
  }
LABEL_130:
  v48 = v101;
  *(_QWORD *)v101 = (unsigned int)(int)((double)(int)v63 * 10000000.0 / v76 + 0.5);
LABEL_132:
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *, __int64, __int64, __int64))(*(_QWORD *)v114 + 152LL))(
         v114,
         v64,
         v61,
         nSamplesPerSec)
    && v63 < v44 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL);
    return 2290679840LL;
  }
LABEL_57:
  if ( !a12 )
  {
LABEL_58:
    *v117 = (unsigned int)(int)((double)v44 * 10000000.0 / (double)(int)a7->nSamplesPerSec + 0.5);
    return 0LL;
  }
  pcbData = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v104 = 0LL;
  pv = 0LL;
  p_pcbData = (LPVOID *)&pcbData;
  v107 = 0LL;
  v108 = 1;
  v119 = *a9;
  MixFormat = CEndpointCharacteristics::GetMixFormat(v109, a6, &v119, &v107);
  if ( v108 )
  {
    v79 = *p_pcbData;
    *p_pcbData = v107;
    if ( v79 )
      CoTaskMemFree(v79);
  }
  if ( MixFormat < 0 )
  {
    v80 = 1266LL;
    goto LABEL_160;
  }
  *(_QWORD *)&Buf2 = &v101;
  *((_QWORD *)&Buf2 + 1) = 0LL;
  v123[0] = 1;
  *(_QWORD *)&Buf1 = &pv;
  *((_QWORD *)&Buf1 + 1) = 0LL;
  v121[0] = 1;
  v110 = &v104;
  v111 = 0LL;
  v112 = 1;
  p_pcbData = &v102;
  v107 = 0LL;
  v108 = 1;
  v81 = *(struct _GUID **)&v115.Data1;
  v119 = *(struct _GUID *)*(_QWORD *)&v115.Data1;
  v116 = *(struct _GUID *)*(_QWORD *)&v116.Data1;
  v115 = *a9;
  v82 = v109;
  MixFormat = DeriveDeviceGraphFormatsForStream(
                v109,
                0,
                (struct _GUID *)(unsigned int)a6,
                AUDCLNT_SHAREMODE_SHARED,
                &v115,
                &v116,
                &v119,
                pcbData,
                &v107,
                &v111,
                (struct tWAVEFORMATEX **)&Buf1 + 1,
                (struct tWAVEFORMATEX **)&Buf2 + 1);
  if ( v108 )
  {
    v83 = *p_pcbData;
    *p_pcbData = v107;
    if ( v83 )
      CoTaskMemFree(v83);
  }
  if ( v112 )
  {
    v84 = *v110;
    *v110 = v111;
    if ( v84 )
      CoTaskMemFree(v84);
  }
  if ( v121[0] )
  {
    v85 = *(void **)Buf1;
    *(_QWORD *)Buf1 = *((_QWORD *)&Buf1 + 1);
    if ( v85 )
      CoTaskMemFree(v85);
  }
  if ( v123[0] )
  {
    v86 = *(void **)Buf2;
    *(_QWORD *)Buf2 = *((_QWORD *)&Buf2 + 1);
    if ( v86 )
      CoTaskMemFree(v86);
  }
  if ( MixFormat < 0 )
  {
    v80 = 1267LL;
    goto LABEL_160;
  }
  LODWORD(pvData) = 0;
  v119 = *v81;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  (__int64)v82,
                                  a6,
                                  (unsigned __int16 *)v101,
                                  &v119,
                                  0,
                                  &pvData,
                                  0LL,
                                  0LL,
                                  0LL);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v89 = (unsigned int)(int)((double)(int)pvData * 10000000.0 / (double)*((int *)v101 + 1) + 0.5);
    if ( *v48 - v89 <= 5 * v89 / 100 )
    {
      v95 = pv;
      pv = 0LL;
      if ( v95 )
        CoTaskMemFree(v95);
      v96 = v104;
      v104 = 0LL;
      if ( v96 )
        CoTaskMemFree(v96);
      v97 = v102;
      v102 = 0LL;
      if ( v97 )
        CoTaskMemFree(v97);
      v98 = v101;
      v101 = 0LL;
      if ( v98 )
        CoTaskMemFree(v98);
      v99 = pcbData;
      pcbData = 0LL;
      if ( v99 )
        CoTaskMemFree(v99);
      goto LABEL_58;
    }
    MixFormat = -2004287448;
    v80 = 1273LL;
LABEL_160:
    v88 = (unsigned int)MixFormat;
  }
  else
  {
    v88 = (unsigned int)SharedModeEnginePeriodicity;
    v80 = 1270LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v80,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v88);
  v90 = pv;
  pv = 0LL;
  if ( v90 )
    CoTaskMemFree(v90);
  v91 = v104;
  v104 = 0LL;
  if ( v91 )
    CoTaskMemFree(v91);
  v92 = v102;
  v102 = 0LL;
  if ( v92 )
    CoTaskMemFree(v92);
  v93 = v101;
  v101 = 0LL;
  if ( v93 )
    CoTaskMemFree(v93);
  v94 = pcbData;
  pcbData = 0LL;
  if ( v94 )
    CoTaskMemFree(v94);
  return (unsigned int)MixFormat;
}
