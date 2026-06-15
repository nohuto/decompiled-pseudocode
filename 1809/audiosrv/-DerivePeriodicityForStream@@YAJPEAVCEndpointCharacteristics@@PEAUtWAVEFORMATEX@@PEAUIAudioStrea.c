/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180034510
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800DB628 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
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
        __int64 *a16)
{
  __int64 v17; // rcx
  struct _GUID v18; // xmm0
  int v19; // r8d
  int v20; // eax
  LPVOID v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r10d
  _DWORD *v25; // rax
  __int64 i; // r9
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // r12d
  __int64 v30; // r14
  __int16 **v31; // rdi
  unsigned __int16 *v32; // rcx
  WORD wFormatTag; // dx
  WORD cbSize; // ax
  int v35; // r10d
  __int16 v36; // r11
  unsigned __int16 v37; // dx
  unsigned __int16 v38; // ax
  __int16 v39; // bx
  __int16 v40; // dx
  int v41; // ecx
  __int16 v42; // ax
  __int64 v43; // rax
  unsigned int v44; // ebx
  unsigned int v45; // r14d
  unsigned int v46; // esi
  unsigned int v47; // edi
  _QWORD *v48; // r12
  __int64 v50; // rax
  _QWORD *v51; // r10
  __int64 v52; // r9
  int v53; // r8d
  _QWORD *v54; // r11
  __int64 v55; // r10
  __int64 v56; // rax
  __int64 v57; // rax
  WORD nChannels; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int16 v61; // r8
  __int64 v62; // r8
  double v63; // xmm6_8
  unsigned int v64; // r15d
  __int64 v65; // rdx
  unsigned int nSamplesPerSec; // r8d
  unsigned int v67; // edx
  unsigned int v68; // r8d
  unsigned int v69; // r15d
  unsigned int v70; // edx
  unsigned int v71; // r8d
  unsigned int v72; // edx
  unsigned int v73; // r8d
  unsigned int v74; // eax
  unsigned int v75; // r10d
  int v76; // r11d
  double v77; // xmm4_8
  double v78; // xmm5_8
  unsigned int v79; // ecx
  struct CEndpointCharacteristics *v80; // rdi
  int MixFormat; // ebx
  struct tWAVEFORMATEX **v82; // rdi
  struct tWAVEFORMATEX *v83; // rcx
  struct tWAVEFORMATEX *v84; // rsi
  __int64 v85; // rdx
  struct _GUID *v86; // r15
  struct tWAVEFORMATEX **v87; // rdi
  struct tWAVEFORMATEX *v88; // rcx
  struct tWAVEFORMATEX *v89; // rsi
  _QWORD *v90; // rdi
  struct tWAVEFORMATEX *v91; // rcx
  struct tWAVEFORMATEX *v92; // rsi
  __int128 v93; // rdi
  void *v94; // rcx
  __int128 v95; // rdi
  void *v96; // rcx
  int SharedModeEnginePeriodicity; // eax
  unsigned __int64 v98; // r9
  __int64 v99; // rax
  int pdwType; // [rsp+28h] [rbp-E0h]
  int pdwTypea; // [rsp+28h] [rbp-E0h]
  int pdwTypeb; // [rsp+28h] [rbp-E0h]
  int pdwTypec; // [rsp+28h] [rbp-E0h]
  __int64 pvData; // [rsp+68h] [rbp-A0h] BYREF
  struct CEndpointCharacteristics *v105; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v106; // [rsp+78h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *pcbData; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v108; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v109; // [rsp+90h] [rbp-78h] BYREF
  LPVOID pv; // [rsp+98h] [rbp-70h] BYREF
  struct tWAVEFORMATEX **p_pcbData; // [rsp+A0h] [rbp-68h]
  struct tWAVEFORMATEX *v112; // [rsp+A8h] [rbp-60h] BYREF
  char v113; // [rsp+B0h] [rbp-58h]
  LPVOID *v114; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v115; // [rsp+C0h] [rbp-48h] BYREF
  char v116; // [rsp+C8h] [rbp-40h]
  struct tWAVEFORMATEX *v117; // [rsp+D0h] [rbp-38h]
  struct IAudioStreamInfo *v118; // [rsp+D8h] [rbp-30h]
  struct _GUID v119; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v120; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v121; // [rsp+108h] [rbp+0h]
  struct _GUID v122; // [rsp+118h] [rbp+10h] BYREF
  __int128 Buf1; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v124[24]; // [rsp+138h] [rbp+30h]
  __int128 Buf2; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v126[24]; // [rsp+160h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v121 = -2LL;
  v118 = a3;
  v117 = a2;
  v105 = a1;
  *(_QWORD *)&v119.Data1 = a8;
  *(_QWORD *)&v120.Data1 = a10;
  v106 = a16;
  *a16 = a14;
  if ( a5 )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    v105 = 0LL;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *, struct CEndpointCharacteristics **))(*(_QWORD *)a15 + 80LL))(
      a15,
      &v105);
    v50 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v105 + 104LL))(v105);
    *(_QWORD *)v106 = v50;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v105);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !a14 )
      *a16 = a13;
    return 0LL;
  }
  LODWORD(pcbData) = a11;
  v17 = 192LL;
  if ( a6 == eKeywordDetectorConnector )
    v17 = 200LL;
  v18 = *a8;
  v122 = *a8;
  v19 = 0;
  v20 = *((_DWORD *)a1 + 6 * a6 + 354);
  if ( v20 > 0 )
  {
    while ( 1 )
    {
      v51 = (_QWORD *)(*((_QWORD *)a1 + 3 * a6 + 175) + 16LL * v19);
      v52 = *v51 - *(_QWORD *)&v122.Data1;
      if ( *v51 == *(_QWORD *)&v122.Data1 )
        v52 = v51[1] - *(_QWORD *)v122.Data4;
      if ( !v52 )
        break;
      if ( ++v19 >= v20 )
        goto LABEL_7;
    }
    if ( v19 != -1 )
    {
      v122 = v18;
      v53 = 0;
      while ( 1 )
      {
        v54 = (_QWORD *)(*((_QWORD *)a1 + 3 * a6 + 175) + 16LL * v53);
        v55 = *v54 - *(_QWORD *)&v122.Data1;
        if ( *v54 == *(_QWORD *)&v122.Data1 )
          v55 = v54[1] - *(_QWORD *)v122.Data4;
        if ( !v55 )
          break;
        ++v53;
        v20 = *((_DWORD *)a1 + 6 * a6 + 354);
        if ( v53 >= v20 )
          goto LABEL_74;
      }
      if ( v53 == -1 )
      {
LABEL_74:
        v18 = GUID_00000000_0000_0000_0000_000000000000;
        goto LABEL_7;
      }
      if ( v53 < 0 || v53 >= v20 )
      {
LABEL_199:
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18009A176LL);
      }
      v18 = *(struct _GUID *)(*((_QWORD *)a1 + 3 * a6 + 176) + 16LL * v53);
    }
  }
LABEL_7:
  v122 = v18;
  v21 = *(LPVOID *)&v18.Data1;
  v109 = *(LPVOID *)&v18.Data1;
  v22 = *(_QWORD *)&v18.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v23 = *(_QWORD *)v18.Data4;
  if ( *(_QWORD *)&v18.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v22 = *(_QWORD *)v18.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v22 )
  {
    v122 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v21 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v109 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v23 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  }
  v24 = 0;
  LODWORD(pvData) = 0;
  v25 = *(_DWORD **)((char *)a1 + v17);
  pv = v25;
  for ( i = 0LL; ; i += 8LL )
  {
    v108 = (LPVOID)i;
    if ( v24 >= v25[2] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1515,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL,
        pdwType);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x480,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x88890008LL,
        pdwTypec);
      return 2290679816LL;
    }
    if ( i < 0 )
      goto LABEL_199;
    v27 = *(_QWORD *)(i + *(_QWORD *)v25);
    v28 = *(_QWORD *)v27 - (_QWORD)v21;
    if ( *(LPVOID *)v27 == v21 )
      v28 = *(_QWORD *)(v27 + 8) - v23;
    if ( !v28 )
    {
      v29 = 0;
      if ( *(int *)(v27 + 24) > 0 )
        break;
    }
LABEL_108:
    LODWORD(pvData) = ++v24;
    v23 = *(_QWORD *)v122.Data4;
    v25 = pv;
  }
  v30 = 0LL;
  while ( 1 )
  {
    if ( v30 < 0 || v29 >= *(_DWORD *)(v27 + 24) )
      goto LABEL_199;
    v31 = *(__int16 ***)(v30 + *(_QWORD *)(v27 + 16));
    v32 = (unsigned __int16 *)*v31;
    if ( !a7 )
    {
      if ( !v32 )
        goto LABEL_55;
      goto LABEL_53;
    }
    if ( !v32 )
      goto LABEL_53;
    wFormatTag = a7->wFormatTag;
    cbSize = a7->cbSize;
    if ( a7->wFormatTag == 0xFFFE )
    {
      if ( cbSize != 22 )
      {
        v56 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v56 )
          v56 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v56 )
        {
          v57 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v57 )
            v57 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v57 )
            goto LABEL_53;
        }
      }
      Buf1 = *(_OWORD *)&a7->wFormatTag;
      *(_OWORD *)v124 = *(_OWORD *)&a7->cbSize;
      *(_QWORD *)&v124[16] = *(_QWORD *)&a7[1].wBitsPerSample;
      *(_WORD *)v124 = 22;
      v35 = *(_DWORD *)&v124[4];
      v36 = Buf1;
    }
    else
    {
      if ( cbSize && ((wFormatTag - 1) & 0xFFFD) != 0 )
        goto LABEL_53;
      nChannels = a7->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u )
        goto LABEL_53;
      i = a7->wBitsPerSample;
      if ( (((_WORD)i - 8) & 0xFFE7) != 0 )
        goto LABEL_53;
      Buf1 = *(_OWORD *)&a7->wFormatTag;
      v36 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v124 = 22;
      *(_WORD *)&v124[2] = i;
      *(GUID *)&v124[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v124[8] = wFormatTag;
      v35 = (nChannels == 1) + 3;
      *(_DWORD *)&v124[4] = v35;
    }
    v37 = *v32;
    v38 = v32[8];
    if ( *v32 == 0xFFFE )
      break;
    if ( !v38 || ((v37 - 1) & 0xFFFD) == 0 )
    {
      v61 = v32[1];
      if ( (unsigned __int16)(v61 - 1) <= 1u )
      {
        i = v32[7];
        v39 = -2;
        if ( (((_WORD)i - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v32;
          LOWORD(Buf2) = -2;
          *(_WORD *)v126 = 22;
          *(_WORD *)&v126[2] = i;
          *(GUID *)&v126[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v126[8] = v37;
          i = (unsigned int)(v61 == 1) + 3;
          *(_DWORD *)&v126[4] = (v61 == 1) + 3;
          goto LABEL_29;
        }
      }
    }
LABEL_53:
    ++v29;
    v30 += 8LL;
    if ( v29 >= *(_DWORD *)(v27 + 24) )
    {
      v21 = v109;
      i = (__int64)v108;
      v24 = pvData;
      goto LABEL_108;
    }
  }
  if ( v38 != 22 )
  {
    v59 = *((_QWORD *)v32 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v59 )
      v59 = *((_QWORD *)v32 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v59 )
    {
      v60 = *((_QWORD *)v32 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v60 )
        v60 = *((_QWORD *)v32 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v60 )
        goto LABEL_53;
    }
  }
  Buf2 = *(_OWORD *)v32;
  *(_OWORD *)v126 = *((_OWORD *)v32 + 1);
  *(_QWORD *)&v126[16] = *((_QWORD *)v32 + 4);
  *(_WORD *)v126 = 22;
  i = *(unsigned int *)&v126[4];
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
    i = 0LL;
    *(_DWORD *)&v126[4] = 0;
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
  if ( !(_DWORD)i )
    *(_DWORD *)&v124[4] = 0;
  if ( !v39 )
    LOWORD(Buf1) = 0;
  v43 = *(_QWORD *)&v124[8] - *(_QWORD *)&v126[8];
  if ( *(_QWORD *)&v124[8] == *(_QWORD *)&v126[8] )
    v43 = *(_QWORD *)&v124[16] - *(_QWORD *)&v126[16];
  if ( v43 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_53;
LABEL_55:
  v44 = *((_DWORD *)v31 + 3);
  v45 = *((_DWORD *)v31 + 2);
  v46 = *((_DWORD *)v31 + 4);
  if ( (_DWORD)pcbData )
    v47 = *((_DWORD *)v31 + 6);
  else
    v47 = *((_DWORD *)v31 + 5);
  if ( !a14 )
  {
    v48 = v106;
    *(_QWORD *)v106 = (unsigned int)(int)((double)(int)v44 * 10000000.0 / (double)(int)a7->nSamplesPerSec + 0.5);
    goto LABEL_59;
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
  i = a7->nSamplesPerSec;
  v63 = (double)(int)i;
  v64 = (int)((double)(int)i * (double)(int)a14 / 10000000.0 + 0.5);
  if ( (_DWORD)pvData )
  {
    v48 = v106;
    goto LABEL_59;
  }
  if ( v64 >= v46 && v64 <= v47 )
  {
    v65 = v64 % v45;
    if ( !(v64 % v45) || v64 == v44 || v64 == v46 || v64 == v47 )
    {
      v48 = v106;
      goto LABEL_134;
    }
  }
  nSamplesPerSec = v117->nSamplesPerSec;
  if ( nSamplesPerSec == (_DWORD)i )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
  TranslateFrameCountBetweenSamplingRates(v44, i, nSamplesPerSec);
  v69 = TranslateFrameCountBetweenSamplingRates(v45, v67, v68);
  TranslateFrameCountBetweenSamplingRates(v46, v70, v71);
  v74 = TranslateFrameCountBetweenSamplingRates(v47, v72, v73);
  i = v74;
  v79 = (int)((double)(int)v62 * v78 / 10000000.0 + v77);
  if ( v79 < v75 || v79 > v74 )
    goto LABEL_137;
  v65 = v79 % v69;
  if ( !(v79 % v69) )
    goto LABEL_125;
  if ( v79 == v76 )
    goto LABEL_128;
  if ( v79 != v75 && v79 != v74 )
  {
LABEL_137:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
LABEL_125:
  if ( v79 == v76 )
  {
LABEL_128:
    v64 = v44;
    goto LABEL_132;
  }
  if ( v79 == v75 )
  {
    v64 = v46;
  }
  else if ( v79 == v74 )
  {
    v64 = v47;
  }
  else
  {
    v64 = v45 * (v79 / v69);
  }
LABEL_132:
  v48 = v106;
  *(_QWORD *)v106 = (unsigned int)(int)((double)(int)v64 * 10000000.0 / v63 + v77);
LABEL_134:
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *, __int64, __int64, __int64))(*(_QWORD *)v118 + 152LL))(
         v118,
         v65,
         v62,
         i)
    && v64 < v44 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
LABEL_59:
  if ( !a12 )
    return 0LL;
  pcbData = 0LL;
  v106 = 0LL;
  v109 = 0LL;
  v108 = 0LL;
  pv = 0LL;
  p_pcbData = &pcbData;
  v112 = 0LL;
  v113 = 1;
  v122 = *a9;
  v80 = v105;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v105,
                a6,
                &v122,
                (int (*)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))i,
                &v112);
  if ( v113 )
  {
    v82 = p_pcbData;
    v83 = *p_pcbData;
    v84 = v112;
    if ( v112 != *p_pcbData )
    {
      if ( v83 )
        CoTaskMemFree(v83);
      *v82 = v84;
    }
    v80 = v105;
  }
  if ( MixFormat < 0 )
  {
    v85 = 1229LL;
    goto LABEL_177;
  }
  *(_QWORD *)&Buf2 = &v106;
  *((_QWORD *)&Buf2 + 1) = 0LL;
  v126[0] = 1;
  *(_QWORD *)&Buf1 = &pv;
  *((_QWORD *)&Buf1 + 1) = 0LL;
  v124[0] = 1;
  v114 = &v108;
  v115 = 0LL;
  v116 = 1;
  p_pcbData = (struct tWAVEFORMATEX **)&v109;
  v112 = 0LL;
  v113 = 1;
  v86 = *(struct _GUID **)&v119.Data1;
  v122 = *(struct _GUID *)*(_QWORD *)&v119.Data1;
  v120 = *(struct _GUID *)*(_QWORD *)&v120.Data1;
  v119 = *a9;
  MixFormat = DeriveDeviceGraphFormatsForStream(
                v80,
                0,
                (struct _GUID *)(unsigned int)a6,
                AUDCLNT_SHAREMODE_SHARED,
                &v119,
                &v120,
                &v122,
                pcbData,
                &v112,
                &v115,
                (struct tWAVEFORMATEX **)&Buf1 + 1,
                (struct tWAVEFORMATEX **)&Buf2 + 1);
  if ( v113 )
  {
    v87 = p_pcbData;
    v88 = *p_pcbData;
    v89 = v112;
    if ( v112 != *p_pcbData )
    {
      if ( v88 )
        CoTaskMemFree(v88);
      *v87 = v89;
    }
    v80 = v105;
  }
  if ( v116 )
  {
    v90 = v114;
    v91 = (struct tWAVEFORMATEX *)*v114;
    v92 = v115;
    if ( v115 != *v114 )
    {
      if ( v91 )
        CoTaskMemFree(v91);
      *v90 = v92;
    }
    v80 = v105;
  }
  if ( v124[0] )
  {
    v93 = Buf1;
    v94 = *(void **)Buf1;
    if ( *((_QWORD *)&Buf1 + 1) != *(_QWORD *)Buf1 )
    {
      if ( v94 )
        CoTaskMemFree(v94);
      *(_QWORD *)v93 = *((_QWORD *)&v93 + 1);
    }
    v80 = v105;
  }
  if ( v126[0] )
  {
    v95 = Buf2;
    v96 = *(void **)Buf2;
    if ( *((_QWORD *)&Buf2 + 1) != *(_QWORD *)Buf2 )
    {
      if ( v96 )
        CoTaskMemFree(v96);
      *(_QWORD *)v95 = *((_QWORD *)&v95 + 1);
    }
    v80 = v105;
  }
  if ( MixFormat < 0 )
  {
    v85 = 1230LL;
    goto LABEL_177;
  }
  LODWORD(pvData) = 0;
  v122 = *v86;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  v80,
                                  (unsigned int)a6,
                                  v106,
                                  &v122,
                                  0,
                                  &pvData,
                                  0LL,
                                  0LL,
                                  0LL);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v99 = (unsigned int)(int)((double)(int)pvData * 10000000.0 / (double)*((int *)v106 + 1) + 0.5);
    if ( *v48 - v99 <= 5 * v99 / 100 )
    {
      if ( pv )
        CoTaskMemFree(pv);
      if ( v108 )
        CoTaskMemFree(v108);
      if ( v109 )
        CoTaskMemFree(v109);
      if ( v106 )
        CoTaskMemFree(v106);
      if ( pcbData )
        CoTaskMemFree(pcbData);
      return 0LL;
    }
    MixFormat = -2004287448;
    v85 = 1236LL;
LABEL_177:
    v98 = (unsigned int)MixFormat;
  }
  else
  {
    v98 = (unsigned int)SharedModeEnginePeriodicity;
    v85 = 1233LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v85,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v98,
    pdwTypeb);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v108 )
    CoTaskMemFree(v108);
  if ( v109 )
    CoTaskMemFree(v109);
  if ( v106 )
    CoTaskMemFree(v106);
  if ( pcbData )
    CoTaskMemFree(pcbData);
  return (unsigned int)MixFormat;
}
