/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180034EA0
 * Callers:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012DF0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180033470 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180048258 (-GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSetting.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180106DD4 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18010C694 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18010C6D0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x18010C70C (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18010DC04 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
        CEndpointCharacteristics *this,
        char a2,
        bool a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r15d
  bool v7; // r12
  CEndpointCharacteristics *v8; // rsi
  _QWORD *v9; // r14
  void *v10; // rbx
  const PROPERTYKEY *v11; // rax
  int v12; // eax
  unsigned int v13; // r8d
  const char *v14; // r9
  unsigned __int16 *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 *v19; // rdi
  struct _GUID v20; // xmm0
  CAudioSignalProcessingModeMap *v21; // rcx
  int v22; // edx
  int v23; // eax
  struct _GUID *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  __int64 i; // r8
  __int64 v30; // rsi
  __int64 v31; // rax
  int v32; // r12d
  __int64 v33; // r15
  unsigned __int16 *v34; // rdx
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // ax
  int v37; // r10d
  __int16 v38; // r11
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // ax
  int v41; // r9d
  __int16 v42; // di
  __int16 v43; // dx
  int v44; // ecx
  __int16 v45; // ax
  __int64 v46; // rax
  __int64 v47; // rdi
  void *v48; // rax
  void *v49; // rsi
  int DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee; // edi
  LPVOID v51; // rsi
  int v52; // eax
  struct tWAVEFORMATEX *v54; // rsi
  _QWORD *v55; // r14
  void *v56; // rcx
  _QWORD *v57; // r9
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int16 v61; // r8
  unsigned __int16 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int16 v65; // r8
  unsigned __int16 v66; // r9
  unsigned __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rsi
  _QWORD *v70; // r14
  void *v71; // rcx
  int updated; // eax
  unsigned int v73; // [rsp+20h] [rbp-E0h]
  char *v74; // [rsp+28h] [rbp-D8h]
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  int v77; // [rsp+50h] [rbp-B0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v78; // [rsp+54h] [rbp-ACh]
  PROPVARIANT pvar; // [rsp+58h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v80; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h]
  CEndpointCharacteristics *v82; // [rsp+70h] [rbp-90h]
  _QWORD *v83; // [rsp+78h] [rbp-88h]
  __int64 v84; // [rsp+80h] [rbp-80h]
  __int64 v85; // [rsp+88h] [rbp-78h]
  __int64 v86; // [rsp+90h] [rbp-70h]
  __int64 v87; // [rsp+98h] [rbp-68h]
  __int128 Buf2; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v89[24]; // [rsp+B0h] [rbp-50h]
  __int128 Buf1; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v91[24]; // [rsp+D8h] [rbp-28h]
  struct _GUID v92; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v93; // [rsp+100h] [rbp+0h]
  struct _GUID v94; // [rsp+110h] [rbp+10h] BYREF
  char v95; // [rsp+120h] [rbp+20h]
  int v96[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v97; // [rsp+140h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v87 = -2LL;
  v6 = a4;
  v78 = a4;
  v7 = a3;
  v8 = this;
  v82 = this;
  v9 = a6;
  v83 = a6;
  v10 = 0LL;
  *a6 = 0LL;
  pv = 0LL;
  if ( a2 )
  {
    pvar = &pv;
    v80 = 0LL;
    LOBYTE(Src) = 1;
    *(_OWORD *)v96 = *(_OWORD *)a5;
    v97 = *((_OWORD *)a5 + 1);
    DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                               (int)this,
                                                               a3,
                                                               a4,
                                                               (int)v96,
                                                               &v80);
    if ( (_BYTE)Src )
    {
      v54 = v80;
      v55 = pvar;
      v56 = *(void **)pvar;
      if ( v80 != *(struct tWAVEFORMATEX **)pvar )
      {
        if ( v56 )
          CoTaskMemFree(v56);
        *v55 = v54;
      }
      v9 = v83;
    }
    if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x185B,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee,
        v73);
      v10 = pv;
      goto LABEL_72;
    }
  }
  else
  {
    v11 = &PKEY_AudioEngine_DeviceFormat;
    if ( a4 == 3 )
      v11 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    *(GUID *)v96 = v11->fmtid;
    LODWORD(v97) = v11->pid;
    pvar = 0LL;
    v80 = 0LL;
    Src = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, int *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
            *((_QWORD *)this + 5),
            v96,
            &pvar);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1864,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
    }
    else
    {
      if ( !(_WORD)pvar )
        goto LABEL_68;
      if ( (unsigned __int16)pvar == 65 )
      {
        if ( (_WORD)pvar == 65 && (unsigned int)v80 >= 0x12 )
        {
          v15 = (unsigned __int16 *)Src;
          if ( (unsigned int)v80 == *((unsigned __int16 *)Src + 8) + 18LL )
          {
            v16 = *((int *)a5 + 2);
            v17 = *a5;
            v18 = 192LL;
            if ( (_DWORD)v16 == 3 )
              v18 = 200LL;
            v19 = (__int64 *)(v17 + v18);
            v20 = *(struct _GUID *)((char *)a5 + 12);
            v92 = v20;
            v21 = (CAudioSignalProcessingModeMap *)(v17 + 8 * (v16 + 2 * v16 + 175));
            v22 = 0;
            v23 = *((_DWORD *)v21 + 4);
            if ( v23 <= 0 )
              goto LABEL_13;
            while ( 1 )
            {
              v57 = (_QWORD *)(*(_QWORD *)v21 + 16LL * v22);
              v58 = *v57 - *(_QWORD *)&v92.Data1;
              if ( *v57 == *(_QWORD *)&v92.Data1 )
                v58 = v57[1] - *(_QWORD *)v92.Data4;
              if ( !v58 )
                break;
              if ( ++v22 >= v23 )
                goto LABEL_13;
            }
            if ( v22 == -1 )
            {
LABEL_13:
              v92 = v20;
              v24 = &v92;
            }
            else
            {
              v92 = v20;
              v24 = CAudioSignalProcessingModeMap::Lookup(v21, &v94, &v92);
            }
            v92 = *v24;
            v25 = *(_QWORD *)&v92.Data1;
            v84 = *(_QWORD *)&v92.Data1;
            v26 = *(_QWORD *)&v92.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
            if ( *(_QWORD *)&v92.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
              v26 = *(_QWORD *)v92.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
            if ( !v26 )
            {
              v92 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
              v25 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
              v84 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
            }
            v27 = 0;
            v77 = 0;
            v28 = *v19;
            v86 = *v19;
            for ( i = 0LL; ; i += 8LL )
            {
              v85 = i;
              if ( v27 >= *(_DWORD *)(v28 + 8) )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1515,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)0x88890008LL,
                  v73);
                goto LABEL_67;
              }
              if ( i < 0 )
              {
LABEL_124:
                RaiseException(0xC000008C, 1u, 0, 0LL);
                JUMPOUT(0x18009A99ALL);
              }
              v30 = *(_QWORD *)(i + *(_QWORD *)v28);
              v31 = *(_QWORD *)v30 - v25;
              if ( *(_QWORD *)v30 == v25 )
                v31 = *(_QWORD *)(v30 + 8) - *(_QWORD *)v92.Data4;
              if ( !v31 )
              {
                v32 = 0;
                if ( *(int *)(v30 + 24) > 0 )
                  break;
              }
LABEL_121:
              v77 = ++v27;
              v28 = v86;
            }
            v33 = 0LL;
            while ( 1 )
            {
              if ( v33 < 0 || v32 >= *(_DWORD *)(v30 + 24) )
                goto LABEL_124;
              v34 = **(unsigned __int16 ***)(v33 + *(_QWORD *)(v30 + 16));
              if ( !v15 )
              {
                if ( !v34 )
                  goto LABEL_62;
                goto LABEL_60;
              }
              if ( v34 )
              {
                v35 = *v15;
                v36 = v15[8];
                if ( *v15 == 0xFFFE )
                {
                  if ( v36 != 22 )
                  {
                    v59 = *((_QWORD *)v15 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                    if ( !v59 )
                      v59 = *((_QWORD *)v15 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                    if ( v59 )
                    {
                      v60 = *((_QWORD *)v15 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                      if ( !v60 )
                        v60 = *((_QWORD *)v15 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                      if ( v60 )
                        goto LABEL_60;
                    }
                  }
                  Buf1 = *(_OWORD *)v15;
                  *(_OWORD *)v91 = *((_OWORD *)v15 + 1);
                  *(_QWORD *)&v91[16] = *((_QWORD *)v15 + 4);
                  *(_WORD *)v91 = 22;
                  v37 = *(_DWORD *)&v91[4];
                  v38 = Buf1;
                }
                else
                {
                  if ( v36 && ((v35 - 1) & 0xFFFD) != 0 )
                    goto LABEL_60;
                  v61 = v15[1];
                  if ( (unsigned __int16)(v61 - 1) > 1u )
                    goto LABEL_60;
                  v62 = v15[7];
                  if ( ((v62 - 8) & 0xFFE7) != 0 )
                    goto LABEL_60;
                  Buf1 = *(_OWORD *)v15;
                  v38 = -2;
                  LOWORD(Buf1) = -2;
                  *(_WORD *)v91 = 22;
                  *(_WORD *)&v91[2] = v62;
                  *(GUID *)&v91[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                  *(_DWORD *)&v91[8] = v35;
                  v37 = (v61 == 1) + 3;
                  *(_DWORD *)&v91[4] = v37;
                }
                v39 = *v34;
                v40 = v34[8];
                if ( *v34 == 0xFFFE )
                {
                  if ( v40 != 22 )
                  {
                    v63 = *((_QWORD *)v34 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                    if ( !v63 )
                      v63 = *((_QWORD *)v34 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                    if ( v63 )
                    {
                      v64 = *((_QWORD *)v34 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                      if ( !v64 )
                        v64 = *((_QWORD *)v34 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                      if ( v64 )
                        goto LABEL_60;
                    }
                  }
                  Buf2 = *(_OWORD *)v34;
                  *(_OWORD *)v89 = *((_OWORD *)v34 + 1);
                  *(_QWORD *)&v89[16] = *((_QWORD *)v34 + 4);
                  *(_WORD *)v89 = 22;
                  v41 = *(_DWORD *)&v89[4];
                  v42 = Buf2;
                }
                else
                {
                  if ( v40 && ((v39 - 1) & 0xFFFD) != 0 )
                    goto LABEL_60;
                  v65 = v34[1];
                  if ( (unsigned __int16)(v65 - 1) > 1u )
                    goto LABEL_60;
                  v66 = v34[7];
                  v42 = -2;
                  if ( ((v66 - 8) & 0xFFE7) != 0 )
                    goto LABEL_60;
                  Buf2 = *(_OWORD *)v34;
                  LOWORD(Buf2) = -2;
                  *(_WORD *)v89 = 22;
                  *(_WORD *)&v89[2] = v66;
                  *(GUID *)&v89[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                  *(_DWORD *)&v89[8] = v39;
                  v41 = (v65 == 1) + 3;
                  *(_DWORD *)&v89[4] = v41;
                }
                if ( WORD1(Buf1) )
                {
                  v43 = WORD1(Buf2);
                }
                else
                {
                  v43 = 0;
                  WORD1(Buf2) = 0;
                  DWORD2(Buf2) = 0;
                  WORD6(Buf2) = 0;
                }
                if ( DWORD1(Buf1) )
                {
                  v44 = DWORD1(Buf2);
                }
                else
                {
                  v44 = 0;
                  *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
                }
                if ( HIWORD(Buf1) )
                {
                  v45 = HIWORD(Buf2);
                }
                else
                {
                  v45 = 0;
                  HIDWORD(Buf2) = 0;
                }
                if ( !v37 )
                {
                  v41 = 0;
                  *(_DWORD *)&v89[4] = 0;
                }
                if ( !v38 )
                {
                  v42 = 0;
                  LOWORD(Buf2) = 0;
                }
                if ( !v43 )
                {
                  WORD1(Buf1) = 0;
                  DWORD2(Buf1) = 0;
                  WORD6(Buf1) = 0;
                }
                if ( !v44 )
                  *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
                if ( !v45 )
                  HIDWORD(Buf1) = 0;
                if ( !v41 )
                  *(_DWORD *)&v91[4] = 0;
                if ( !v42 )
                  LOWORD(Buf1) = 0;
                v46 = *(_QWORD *)&v91[8] - *(_QWORD *)&v89[8];
                if ( *(_QWORD *)&v91[8] == *(_QWORD *)&v89[8] )
                  v46 = *(_QWORD *)&v91[16] - *(_QWORD *)&v89[16];
                if ( !v46 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
                {
LABEL_62:
                  v47 = v15[8];
                  v48 = CoTaskMemAlloc(v47 + 18);
                  v49 = v48;
                  if ( v48 )
                  {
                    memcpy_0(v48, v15, v47 + 18);
                    DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = 0;
                  }
                  else
                  {
                    DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024882;
                  }
                  if ( v49 != pv )
                    pv = v49;
                  if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
                  {
LABEL_67:
                    v7 = a3;
                    v6 = v78;
                    v8 = v82;
                    goto LABEL_68;
                  }
                  v67 = (unsigned int)DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
                  v68 = 6256LL;
LABEL_137:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v68,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                    (const char *)v67,
                    v73);
                  PropVariantClear(&pvar);
LABEL_139:
                  v10 = pv;
                  goto LABEL_72;
                }
              }
LABEL_60:
              ++v32;
              v33 += 8LL;
              if ( v32 >= *(_DWORD *)(v30 + 24) )
              {
                v25 = v84;
                i = v85;
                v27 = v77;
                goto LABEL_121;
              }
            }
          }
        }
        wil::details::in1diag3::Log_Win32(retaddr, (void *)0x1875, v13, v14, v73);
      }
      else
      {
        LODWORD(v74) = (unsigned __int16)pvar;
        wil::details::in1diag3::Log_Win32Msg(
          retaddr,
          (void *)0x1881,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0xD,
          (unsigned int)"Unexpected vartype %d (0x%08x)",
          v74);
      }
    }
LABEL_68:
    if ( !pv )
    {
      *(_QWORD *)&v94.Data1 = &pv;
      *(_QWORD *)v94.Data4 = 0LL;
      v95 = 1;
      v92 = *(struct _GUID *)a5;
      v93 = *((_OWORD *)a5 + 1);
      DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                                 (int)v8,
                                                                 v7,
                                                                 v6,
                                                                 (int)&v92,
                                                                 (struct tWAVEFORMATEX **)v94.Data4);
      if ( v95 )
      {
        v69 = *(_QWORD *)v94.Data4;
        v70 = *(_QWORD **)&v94.Data1;
        v71 = **(void ***)&v94.Data1;
        if ( *(_QWORD *)v94.Data4 != **(_QWORD **)&v94.Data1 )
        {
          if ( v71 )
            CoTaskMemFree(v71);
          *v70 = v69;
        }
        v8 = v82;
      }
      if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0 )
      {
        v67 = (unsigned int)DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
        v68 = 6280LL;
        goto LABEL_137;
      }
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v8, v7, v6, (const struct tWAVEFORMATEX *)pv);
      DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = updated;
      if ( updated < 0 )
      {
        v67 = (unsigned int)updated;
        v68 = 6283LL;
        goto LABEL_137;
      }
    }
    PropVariantClear(&pvar);
    v9 = v83;
  }
  v51 = pv;
  v52 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pv);
  DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = v52;
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1890,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v52,
      v73);
    goto LABEL_139;
  }
  pv = 0LL;
  *v9 = v51;
  DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = 0;
LABEL_72:
  if ( v10 )
    CoTaskMemFree(v10);
  return (unsigned int)DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
}
