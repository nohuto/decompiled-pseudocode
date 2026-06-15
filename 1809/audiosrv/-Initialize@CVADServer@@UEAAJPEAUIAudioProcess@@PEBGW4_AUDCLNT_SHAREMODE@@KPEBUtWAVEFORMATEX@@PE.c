/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180029120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memmove_s @ 0x18000B768 (memmove_s.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800202E8 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x180026490 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800266B0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180064898 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 *     WPP_SF_dd @ 0x1800BA07C (WPP_SF_dd.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800D9E38 (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800D9F04 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     WPP_SF_DDd @ 0x1800DFE30 (WPP_SF_DDd.c)
 *     wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___ @ 0x1800F6AD8 (wil--details--lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___--_lambda_call__lambda_9872.c)
 *     ?AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z @ 0x1800F6F38 (-AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5,
        const struct tWAVEFORMATEX *Src,
        const struct _GUID *a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        struct IProcessSubmixProxy *a10)
{
  struct IMMDevice *v13; // rbx
  int v14; // esi
  CAudioSessionManager *v15; // rcx
  signed int v16; // edi
  const void *v17; // rsi
  char **v18; // r8
  __int64 v19; // rdi
  char *v20; // rax
  unsigned __int64 v21; // r15
  char *v22; // rcx
  rsize_t v23; // rdx
  char **v24; // rsi
  __int64 v25; // rdi
  char *v26; // rax
  unsigned __int64 v27; // r15
  char *v28; // rcx
  rsize_t v29; // rdx
  __int64 v30; // rdx
  _OWORD *v31; // rdx
  unsigned int v32; // eax
  void *v33; // rax
  void *v34; // rcx
  __int64 v35; // rdx
  WORD nChannels; // r9
  __int64 nSamplesPerSec; // r8
  DWORD nAvgBytesPerSec; // r11d
  WORD nBlockAlign; // si
  WORD cbSize; // cx
  WORD wFormatTag; // r10
  __int64 v42; // rcx
  bool v43; // al
  WORD wBitsPerSample; // cx
  WORD v45; // ax
  int v46; // edx
  unsigned int v47; // r14d
  void (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // r9
  __int64 v49; // rcx
  int v50; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v51; // edx
  int v52; // eax
  LPCRITICAL_SECTION v53; // rcx
  __int64 v54; // rsi
  void *v55; // rax
  void *v56; // r14
  __int64 v57; // rdi
  struct IProcessSubmixProxy *v58; // rcx
  __int64 v59; // rdi
  __int64 *i; // rcx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 *v63; // rax
  int v64; // r8d
  __int64 v65; // rax
  struct CEndpointCharacteristics *v66; // r14
  AudioJournal *v67; // rcx
  __int64 v68; // r9
  __int64 v69; // rdx
  int StreamInfo; // eax
  const BYTE *v71; // r14
  const WCHAR *v72; // r13
  LSTATUS v73; // eax
  __int64 v74; // rdx
  LSTATUS v75; // eax
  __int64 v76; // rdx
  struct CEndpointCharacteristics **dwOptions; // [rsp+20h] [rbp-108h]
  int dwOptionsa; // [rsp+20h] [rbp-108h]
  LPVOID pv; // [rsp+70h] [rbp-B8h] BYREF
  HKEY hKey; // [rsp+78h] [rbp-B0h] BYREF
  struct CEndpointCharacteristics *v82; // [rsp+80h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-A0h] BYREF
  char v84; // [rsp+90h] [rbp-98h]
  HKEY *p_hKey; // [rsp+98h] [rbp-90h] BYREF
  char v86; // [rsp+A0h] [rbp-88h]
  __int64 v87; // [rsp+A8h] [rbp-80h] BYREF
  LPCRITICAL_SECTION v88; // [rsp+B8h] [rbp-70h] BYREF
  char v89; // [rsp+C0h] [rbp-68h]
  PROPVARIANT pvar[11]; // [rsp+D0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]
  DWORD cbData; // [rsp+130h] [rbp+8h]
  DWORD cbDataa; // [rsp+130h] [rbp+8h]

  pvar[3] = (PROPVARIANT)-2LL;
  v82 = 0LL;
  v13 = 0LL;
  p_hKey = 0LL;
  *a9 = 0LL;
  v88 = (LPCRITICAL_SECTION)((char *)this + 224);
  v89 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v88);
  if ( *((_DWORD *)this + 46) )
  {
    v14 = -2004287486;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_165;
    }
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, 2290679810LL);
LABEL_164:
    v15 = WPP_GLOBAL_Control;
LABEL_165:
    v16 = -2147024809;
    goto LABEL_166;
  }
  if ( a4 > 1 )
  {
    v16 = -2147024809;
    v14 = -2147024809;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
        a4,
        -2147024809);
      v15 = WPP_GLOBAL_Control;
    }
    goto LABEL_166;
  }
  dwOptions = &v82;
  v14 = (*(__int64 (__fastcall **)(PVOID, char *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a3,
          0LL,
          0LL);
  if ( v14 < 0 )
    goto LABEL_164;
  pv = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v82 + 2) + 40LL))(*((_QWORD *)v82 + 2), &pv);
  if ( v14 < 0 )
  {
    CoTaskMemFree(pv);
    v16 = -2147024809;
    v15 = WPP_GLOBAL_Control;
LABEL_166:
    if ( *a9 )
    {
      operator delete(*a9);
      *a9 = 0LL;
      v15 = WPP_GLOBAL_Control;
    }
    if ( v15 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v15 + 7) & 0x100) != 0
      && *((_BYTE *)v15 + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)v15 + 2),
        32,
        (unsigned int)&WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
        *((_QWORD *)this + 27),
        v14);
    }
    goto LABEL_172;
  }
  v17 = pv;
  v18 = (char **)((char *)this + 216);
  if ( pv )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_WORD *)pv + v19) );
    if ( (_DWORD)v19 )
    {
      v20 = *v18;
      LODWORD(hKey) = *((_DWORD *)*v18 - 4);
      v21 = ((_BYTE *)pv - v20) >> 1;
      if ( ((1 - *((_DWORD *)v20 - 2)) | (*((_DWORD *)v20 - 3) - (int)v19)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 216, (unsigned int)v19);
        v18 = (char **)((char *)this + 216);
      }
      v22 = *v18;
      v23 = 2LL * (int)v19;
      if ( v21 > (unsigned int)hKey )
      {
        if ( !v23 )
          goto LABEL_27;
        if ( !v22 )
        {
          *(_DWORD *)_o__errno(0LL) = 22;
          invalid_parameter_noinfo();
          v18 = (char **)((char *)this + 216);
          goto LABEL_27;
        }
        memcpy_0(v22, v17, 2LL * (int)v19);
      }
      else
      {
        memmove_s(v22, v23, &v22[2 * v21], 2LL * (int)v19);
      }
      v18 = (char **)((char *)this + 216);
LABEL_27:
      if ( (int)v19 < 0 || (int)v19 > *((_DWORD *)*v18 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)*v18 - 4) = v19;
      *(_WORD *)&(*v18)[2 * (int)v19] = 0;
      goto LABEL_31;
    }
  }
  ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this + 27);
LABEL_31:
  v24 = (char **)((char *)this + 208);
  if ( !a3 )
    goto LABEL_46;
  v25 = -1LL;
  do
    ++v25;
  while ( *(_WORD *)&a3[2 * v25] );
  if ( (_DWORD)v25 )
  {
    v26 = *v24;
    LODWORD(hKey) = *((_DWORD *)*v24 - 4);
    v27 = (a3 - v26) >> 1;
    if ( ((1 - *((_DWORD *)v26 - 2)) | (*((_DWORD *)v26 - 3) - (int)v25)) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 208, (unsigned int)v25);
    v28 = *v24;
    v29 = 2LL * (int)v25;
    if ( v27 > (unsigned int)hKey )
    {
      if ( v29 )
      {
        if ( v28 )
        {
          memcpy_0(v28, a3, 2LL * (int)v25);
        }
        else
        {
          *(_DWORD *)_o__errno(0LL) = 22;
          invalid_parameter_noinfo();
        }
      }
    }
    else
    {
      memmove_s(v28, v29, &v28[2 * v27], 2LL * (int)v25);
    }
    if ( (int)v25 < 0 || (int)v25 > *((_DWORD *)*v24 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)*v24 - 4) = v25;
    *(_WORD *)&(*v24)[2 * (int)v25] = 0;
  }
  else
  {
LABEL_46:
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this + 26);
  }
  CoTaskMemFree(pv);
  *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  if ( *((_DWORD *)a8 + 4) >= 0x15u )
  {
    v30 = 1318LL;
LABEL_49:
    v16 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      (int)&v82);
    v14 = -2147024809;
    v15 = WPP_GLOBAL_Control;
    goto LABEL_166;
  }
  if ( !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a8 + 5)) )
  {
    v30 = 1319LL;
    goto LABEL_49;
  }
  *(_OWORD *)((char *)this + 280) = *v31;
  *(_OWORD *)((char *)this + 296) = v31[1];
  *(_OWORD *)((char *)this + 312) = v31[2];
  *(_OWORD *)((char *)this + 328) = v31[3];
  *(_OWORD *)((char *)this + 344) = v31[4];
  *(_OWORD *)((char *)this + 360) = v31[5];
  *(_OWORD *)((char *)this + 376) = v31[6];
  *(_OWORD *)((char *)this + 392) = v31[7];
  v32 = *((_DWORD *)this + 90);
  if ( v32 )
  {
    v33 = operator new[](v32, (const struct std::nothrow_t *)&std::nothrow);
    v34 = (void *)*((_QWORD *)this + 56);
    *((_QWORD *)this + 56) = v33;
    if ( v34 )
    {
      operator delete(v34, (const struct std::nothrow_t *)1);
      v33 = (void *)*((_QWORD *)this + 56);
    }
    if ( !v33 )
    {
      v14 = -2147024882;
      goto LABEL_164;
    }
    memcpy_0(v33, *((const void **)this + 46), *((unsigned int *)this + 90));
    *((_QWORD *)this + 46) = *((_QWORD *)this + 56);
  }
  v14 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioProcess *, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                                + 88LL))(
          g_PolicyManager,
          a2,
          *((_QWORD *)this + 27));
  if ( v14 < 0 )
    goto LABEL_164;
  if ( !Src )
  {
    v14 = -2147467261;
    v16 = -2147024809;
LABEL_78:
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        28LL,
        &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
        (unsigned int)v14);
      v15 = WPP_GLOBAL_Control;
    }
    goto LABEL_166;
  }
  nChannels = Src->nChannels;
  if ( !nChannels )
    goto LABEL_77;
  nSamplesPerSec = Src->nSamplesPerSec;
  if ( !(_DWORD)nSamplesPerSec )
    goto LABEL_77;
  nAvgBytesPerSec = Src->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    goto LABEL_77;
  nBlockAlign = Src->nBlockAlign;
  if ( !nBlockAlign )
    goto LABEL_77;
  cbSize = Src->cbSize;
  if ( cbSize > 0x400u )
    goto LABEL_77;
  wFormatTag = Src->wFormatTag;
  if ( ((Src->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( cbSize
      || (Src->wBitsPerSample & 7) != 0
      || nChannels > 2u
      || nAvgBytesPerSec != (Src->wBitsPerSample * (unsigned int)nSamplesPerSec * nChannels) >> 3 )
    {
      v16 = -2147024809;
      v14 = -2147024809;
      goto LABEL_78;
    }
    goto LABEL_92;
  }
  if ( wFormatTag != 0xFFFE )
    goto LABEL_92;
  if ( cbSize < 0x16u )
  {
LABEL_77:
    v16 = -2147024809;
    v14 = -2147024809;
    goto LABEL_78;
  }
  v35 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&Src[1].nSamplesPerSec + 2)
    && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&Src[1].wBitsPerSample
    || *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&Src[1].nSamplesPerSec + 2)
    && *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)&Src[1].wBitsPerSample )
  {
    v42 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&Src[1].nSamplesPerSec + 2);
    if ( !v42 )
      v42 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&Src[1].wBitsPerSample;
    v43 = v42 == 0;
    wBitsPerSample = Src->wBitsPerSample;
    if ( v43 )
    {
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        goto LABEL_77;
    }
    else if ( ((wBitsPerSample - 32) & 0xFFDF) != 0 )
    {
      goto LABEL_77;
    }
    v45 = Src[1].wFormatTag;
    if ( !v45 )
      goto LABEL_77;
    if ( wBitsPerSample < v45 )
      goto LABEL_77;
    v46 = nChannels * wBitsPerSample;
    nSamplesPerSec = (unsigned int)(v46 * nSamplesPerSec) >> 3;
    if ( nAvgBytesPerSec != (_DWORD)nSamplesPerSec )
      goto LABEL_77;
    v35 = (v46 >> 31) & 7;
    if ( nBlockAlign != (int)(v35 + nChannels * wBitsPerSample) >> 3 )
      goto LABEL_77;
  }
LABEL_92:
  if ( nChannels > 2u && ((wFormatTag - 1) & 0xFFFD) == 0 )
  {
    v16 = -2147024809;
    v14 = -2147024809;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      LODWORD(dwOptions) = nChannels;
      WPP_SF_DDd(*((_QWORD *)WPP_GLOBAL_Control + 2), v35, nSamplesPerSec, wFormatTag);
      v15 = WPP_GLOBAL_Control;
    }
    goto LABEL_166;
  }
  v47 = a5;
  if ( *((_DWORD *)v82 + 39) )
  {
    cbData = 1;
  }
  else if ( (a5 & 0x20000) != 0 )
  {
    cbData = 2;
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 496LL))(a2) || g_bIsSurfaceHub )
      v47 = a5 | 0x80000000;
  }
  else
  {
    cbData = 0;
  }
  v14 = CVADServer::InitializePolicy(this, a2, a7, v47, a9);
  if ( v14 < 0 )
    goto LABEL_131;
  v13 = (struct IMMDevice *)*((_QWORD *)v82 + 2);
  p_hKey = (HKEY *)v13;
  ((void (__fastcall *)(struct IMMDevice *))v13->lpVtbl->AddRef)(v13);
  LODWORD(hKey) = 0;
  v48 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v82 + 2);
  v49 = 0LL;
  v87 = 0LL;
  if ( v48 )
  {
    (**v48)(v48, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c, &v87);
    v49 = v87;
  }
  if ( v49 )
  {
    (*(void (__fastcall **)(__int64, HKEY *))(*(_QWORD *)v49 + 88LL))(v49, &hKey);
    v49 = v87;
  }
  LODWORD(pv) = (_DWORD)hKey;
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  v50 = 1;
  memset(pvar, 0, 24);
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v82 + 5) + 40LL))(
         *((_QWORD *)v82 + 5),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v50 = 0;
  }
  PropVariantClear(pvar);
  if ( (v47 & 0x400000) == 0 )
  {
    v52 = v47 & 0x20000;
    if ( (!a10 || !v52) && (!v50 || !v52) && a4 == 1 )
    {
      v53 = 0LL;
      lpCriticalSection = 0LL;
      if ( (_DWORD)pv )
      {
        if ( !IsFormatSupportedByHwAudioEngine(v13, v51, Src, (struct tWAVEFORMATEX **)&lpCriticalSection) )
        {
          CoTaskMemFree(lpCriticalSection);
          goto LABEL_126;
        }
        v53 = lpCriticalSection;
      }
      CoTaskMemFree(v53);
    }
  }
LABEL_126:
  LODWORD(dwOptions) = cbData;
  v14 = DeriveAudioProcessingModeConfiguration(
          *((unsigned int *)this + 74),
          *((unsigned int *)this + 76),
          *((unsigned int *)this + 94));
  if ( v14 < 0 )
  {
LABEL_131:
    v16 = -2147024809;
    v15 = WPP_GLOBAL_Control;
    goto LABEL_166;
  }
  if ( a4 == 1
    && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)this + 27))
     || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)a2 + 144LL))(
           a2,
           *((unsigned int *)a8 + 4),
           1LL)) )
  {
    v14 = -2004287474;
    goto LABEL_131;
  }
  v54 = Src->cbSize;
  v55 = CoTaskMemAlloc(v54 + 18);
  v56 = v55;
  if ( v55 )
  {
    memcpy_0(v55, Src, v54 + 18);
    v14 = 0;
  }
  else
  {
    v14 = -2147024882;
  }
  *((_QWORD *)this + 22) = v56;
  if ( v14 < 0 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      v16 = -2147024809;
    }
    else
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        30LL,
        &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
        (unsigned int)v14);
      v16 = -2147024809;
      v15 = WPP_GLOBAL_Control;
    }
    goto LABEL_166;
  }
  *((_DWORD *)this + 66) = a4;
  v57 = *((_QWORD *)this + 55);
  v58 = a10;
  *((_QWORD *)this + 55) = a10;
  if ( v58 )
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v58 + 8LL))(v58);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  *((_DWORD *)this + 46) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  v84 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v59 = g_VADServerList;
  i = (__int64 *)qword_1801B27B0;
  if ( !qword_1801B27B0 )
  {
    if ( dword_1801B27B8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_1801B27B8 < 0x18 )
        goto LABEL_210;
      v61 = 24LL * (unsigned int)dword_1801B27B8;
    }
    else
    {
      v61 = 0LL;
    }
    v62 = malloc(v61 + 8);
    if ( v62 )
    {
      *v62 = qword_1801B27A8;
      qword_1801B27A8 = (__int64)v62;
      v63 = &v62[3 * (unsigned int)(dword_1801B27B8 - 1) + 1];
      v64 = dword_1801B27B8 - 1;
      for ( i = (__int64 *)qword_1801B27B0; v64 >= 0; --v64 )
      {
        *v63 = (__int64)i;
        i = v63;
        qword_1801B27B0 = (__int64)v63;
        v63 -= 3;
      }
      goto LABEL_157;
    }
LABEL_210:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_157:
  v65 = *i;
  i[2] = (__int64)this;
  qword_1801B27B0 = v65;
  i[1] = 0LL;
  *i = v59;
  ++qword_1801B27A0;
  if ( g_VADServerList )
    *(_QWORD *)(g_VADServerList + 8) = i;
  else
    qword_1801B2798 = (__int64)i;
  g_VADServerList = (__int64)i;
  if ( v84 )
    LeaveCriticalSection(lpCriticalSection);
  v16 = -2147024809;
LABEL_172:
  v66 = v82;
  EnterCriticalSection(&CriticalSection);
  lpCriticalSection = &CriticalSection;
  if ( !g_AudioJournal )
  {
    v68 = 2147549183LL;
    v69 = 238LL;
LABEL_198:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v69,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)v68,
      (int)dwOptions);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&lpCriticalSection);
    goto LABEL_199;
  }
  StreamInfo = AudioJournal::FindStreamInfo(v67, v66, (struct AudioJournal::StreamInfo **)&pv, (int *)&a9);
  if ( StreamInfo < 0 )
  {
    v68 = (unsigned int)StreamInfo;
    v69 = 240LL;
    goto LABEL_198;
  }
  ++*((_DWORD *)pv + 50 * (int)a9 + 37);
  if ( v14 < 0 )
  {
    ++*((_DWORD *)pv + 50 * (int)a9 + 38);
    AudioJournal::AddError(
      (AudioJournal *)(200LL * (int)a9),
      v14,
      (struct AudioJournal::ErrorInfo *)((char *)pv + 200 * (int)a9 + 176));
  }
  v71 = (const BYTE *)pv;
  if ( pv == &unk_1801B3CF8 )
  {
    v72 = L"Render";
    cbDataa = 600;
  }
  else if ( pv == &unk_1801B3F50 )
  {
    v72 = L"Capture";
    cbDataa = 400;
  }
  else
  {
    if ( pv != &unk_1801B40E0 )
    {
      v76 = 493LL;
      goto LABEL_197;
    }
    v72 = L"UnknownStream";
    cbDataa = 200;
  }
  hKey = 0LL;
  p_hKey = &hKey;
  v86 = 1;
  v73 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, &word_1801B41A8, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
  v16 = v73;
  if ( v73 > 0 )
    v16 = (unsigned __int16)v73 | 0x80070000;
  if ( v16 < 0 )
  {
    v74 = 452LL;
LABEL_192:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v74,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v16,
      dwOptionsa);
    wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___(&p_hKey);
    v76 = 496LL;
LABEL_197:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v76,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v16,
      (int)dwOptions);
    v68 = (unsigned int)v16;
    v69 = 249LL;
    goto LABEL_198;
  }
  v75 = RegSetValueExW(hKey, v72, 0, 3u, v71, cbDataa);
  v16 = v75;
  if ( v75 > 0 )
    v16 = (unsigned __int16)v75 | 0x80070000;
  if ( v16 < 0 )
  {
    v74 = 455LL;
    goto LABEL_192;
  }
  if ( hKey )
    RegCloseKey(hKey);
  LeaveCriticalSection(&CriticalSection);
LABEL_199:
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::Initialize", 1584, v14);
  if ( v89 )
    LeaveCriticalSection(v88);
  if ( v13 )
    ((void (__fastcall *)(struct IMMDevice *))v13->lpVtbl->Release)(v13);
  if ( v82 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v82 + 16LL))(v82);
  return (unsigned int)v14;
}
