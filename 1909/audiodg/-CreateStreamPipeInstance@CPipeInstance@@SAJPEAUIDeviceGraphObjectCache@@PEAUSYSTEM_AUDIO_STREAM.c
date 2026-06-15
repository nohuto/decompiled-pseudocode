/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400066A4
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C3C0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140003980 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003AA4 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140004614 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z @ 0x1400048B4 (--0-$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140005690 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140006F04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007170 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400074B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009B10 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D34 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140009D88 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000B604 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000DE34 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140015B14 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1400181D7 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IUnknown *a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  int v8; // esi
  BOOL v9; // r13d
  int v10; // r12d
  float v11; // xmm6_4
  int FxPropertyStore; // eax
  int StreamProcessNode; // eax
  unsigned __int16 *v14; // rcx
  __int64 v15; // rdx
  int v16; // r11d
  GUID v17; // xmm1
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  unsigned int i; // ebx
  int v22; // eax
  GUID *v23; // r14
  unsigned __int16 *v24; // rdx
  int v25; // r14d
  int v26; // eax
  int APOProcessNode; // eax
  __int64 v28; // rbx
  struct IAudioMediaType *v29; // rsi
  unsigned __int16 *v30; // rax
  CPipeInstance *v31; // r14
  unsigned __int16 *v32; // rax
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r13
  int v35; // ebx
  char *v36; // rax
  struct CPipeInstance *v37; // r13
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  WORD nChannels; // cx
  WORD wBitsPerSample; // dx
  const struct tWAVEFORMATEX *v50; // rax
  int v51; // eax
  const struct tWAVEFORMATEX *v52; // rax
  int v53; // eax
  const struct tWAVEFORMATEX *v54; // rax
  int v55; // eax
  unsigned __int16 *v56; // [rsp+50h] [rbp-228h] BYREF
  int v57; // [rsp+58h] [rbp-220h]
  int v58; // [rsp+5Ch] [rbp-21Ch]
  struct IAudioMediaType *v59; // [rsp+60h] [rbp-218h] BYREF
  __int64 v60; // [rsp+68h] [rbp-210h] BYREF
  __int64 v61; // [rsp+70h] [rbp-208h] BYREF
  __int64 v62; // [rsp+78h] [rbp-200h] BYREF
  unsigned int v63[2]; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v64; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 v65; // [rsp+90h] [rbp-1E8h] BYREF
  struct CStreamProcessNode *v66; // [rsp+98h] [rbp-1E0h] BYREF
  unsigned __int16 *v67; // [rsp+A0h] [rbp-1D8h] BYREF
  _DWORD v68[2]; // [rsp+A8h] [rbp-1D0h] BYREF
  int v69; // [rsp+B0h] [rbp-1C8h] BYREF
  int v70; // [rsp+B4h] [rbp-1C4h] BYREF
  int v71; // [rsp+B8h] [rbp-1C0h] BYREF
  int v72; // [rsp+BCh] [rbp-1BCh] BYREF
  int v73; // [rsp+C0h] [rbp-1B8h] BYREF
  int v74; // [rsp+C4h] [rbp-1B4h] BYREF
  int v75; // [rsp+C8h] [rbp-1B0h] BYREF
  BOOL v76; // [rsp+CCh] [rbp-1ACh]
  int v77; // [rsp+D0h] [rbp-1A8h] BYREF
  int v78; // [rsp+D4h] [rbp-1A4h] BYREF
  int v79; // [rsp+D8h] [rbp-1A0h] BYREF
  int pExceptionObject; // [rsp+DCh] [rbp-19Ch] BYREF
  int v81; // [rsp+E0h] [rbp-198h] BYREF
  struct IPropertyStore *v82; // [rsp+E8h] [rbp-190h] BYREF
  int v83; // [rsp+F0h] [rbp-188h] BYREF
  struct CPipeInstance *v84; // [rsp+F8h] [rbp-180h]
  struct tWAVEFORMATEX *v85; // [rsp+100h] [rbp-178h]
  CPipeInstance *v86; // [rsp+108h] [rbp-170h] BYREF
  __int64 v87; // [rsp+110h] [rbp-168h]
  __int128 v88; // [rsp+118h] [rbp-160h] BYREF
  __int64 v89; // [rsp+128h] [rbp-150h]
  __int128 v90; // [rsp+130h] [rbp-148h]
  int v91; // [rsp+140h] [rbp-138h]
  struct CStreamProcessNode *v92; // [rsp+148h] [rbp-130h] BYREF
  __int64 v93; // [rsp+150h] [rbp-128h] BYREF
  __int64 v94; // [rsp+158h] [rbp-120h] BYREF
  __int64 v95; // [rsp+160h] [rbp-118h] BYREF
  __int64 v96; // [rsp+168h] [rbp-110h] BYREF
  __int64 v97; // [rsp+170h] [rbp-108h] BYREF
  struct IUnknown *v98; // [rsp+178h] [rbp-100h]
  struct CPipeInstance **v99; // [rsp+180h] [rbp-F8h]
  _QWORD v100[2]; // [rsp+188h] [rbp-F0h] BYREF
  long *v101; // [rsp+198h] [rbp-E0h] BYREF
  GUID v102; // [rsp+1A0h] [rbp-D8h] BYREF
  GUID v103; // [rsp+1B0h] [rbp-C8h] BYREF
  unsigned __int64 v104[2]; // [rsp+1C0h] [rbp-B8h] BYREF
  ATL::CAtlException *v105; // [rsp+1D0h] [rbp-A8h] BYREF
  __int128 v106; // [rsp+1D8h] [rbp-A0h] BYREF
  _BYTE v107[24]; // [rsp+1E8h] [rbp-90h]
  __int128 v108; // [rsp+200h] [rbp-78h]
  _BYTE v109[24]; // [rsp+210h] [rbp-68h]

  v100[1] = -2LL;
  v85 = a4;
  v84 = a3;
  v98 = a1;
  v99 = a6;
  v8 = 0;
  v9 = *(_DWORD *)a2 != 0;
  v76 = v9;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 10;
  v10 = 1;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v11 = FLOAT_1_0;
  else
    v11 = FLOAT_1_1;
  *a6 = 0LL;
  try
  {
    v82 = 0LL;
    FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 19), &v82);
    if ( FxPropertyStore < 0 )
    {
      pExceptionObject = FxPropertyStore;
      throw (long *)&pExceptionObject;
    }
    v66 = 0LL;
    StreamProcessNode = CStreamProcessNode::CreateStreamProcessNode(
                          (const struct tWAVEFORMATEX **)a2,
                          (struct IAudioMediaType ***)&v66);
    if ( StreamProcessNode < 0 )
    {
      v79 = StreamProcessNode;
      throw (long *)&v79;
    }
    v92 = v66;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v92);
    v66 = 0LL;
    v14 = (unsigned __int16 *)*((_QWORD *)a2 + 16);
    v57 = 0;
    if ( !v14 )
    {
LABEL_85:
      v78 = -2005139404;
      throw (long *)&v78;
    }
    if ( *v14 == 0xFFFE )
    {
      v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( v14[8] != 22 )
      {
        v43 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v43 )
          v43 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v43 )
        {
          v44 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v44 )
            v44 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v44 )
            goto LABEL_85;
        }
      }
      v108 = *(_OWORD *)v14;
      *(_OWORD *)v109 = *((_OWORD *)v14 + 1);
      *(_QWORD *)&v109[16] = *((_QWORD *)v14 + 4);
      *(_WORD *)v109 = 22;
      v57 = 1;
      v16 = *(_DWORD *)&v109[4];
      v17 = GUID_00000000_0000_0010_8000_00aa00389b71;
    }
    else
    {
      if ( v14[8] && ((*v14 - 1) & 0xFFFD) != 0 || (unsigned __int16)(v14[1] - 1) > 1u || ((v14[7] - 8) & 0xFFE7) != 0 )
        goto LABEL_85;
      v108 = *(_OWORD *)v14;
      LOWORD(v108) = -2;
      *(_WORD *)v109 = 22;
      *(_WORD *)&v109[2] = v14[7];
      v17 = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(GUID *)&v109[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v109[8] = *v14;
      v16 = 4 - (v14[1] != 1);
      *(_DWORD *)&v109[4] = v16;
      v57 = 1;
      v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    }
    v18 = v15 - *(_QWORD *)&v109[8];
    if ( v15 == *(_QWORD *)&v109[8] )
      v18 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v109[16];
    if ( !v18 )
      goto LABEL_13;
    v45 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v109[8];
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v109[8] )
      v45 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v109[16];
    if ( !v45 )
    {
LABEL_13:
      v58 = 0;
      if ( !a4 )
        goto LABEL_101;
      if ( a4->wFormatTag == 0xFFFE )
      {
        if ( a4->cbSize != 22 )
        {
          v46 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - v15;
          if ( !v46 )
            v46 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( v46 )
          {
            v47 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2)
                - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v47 )
              v47 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( v47 )
            {
LABEL_101:
              v77 = -2005139404;
              throw (long *)&v77;
            }
          }
        }
        v106 = *(_OWORD *)&a4->wFormatTag;
        *(_OWORD *)v107 = *(_OWORD *)&a4->cbSize;
        *(_QWORD *)&v107[16] = *(_QWORD *)&a4[1].wBitsPerSample;
        *(_WORD *)v107 = 22;
      }
      else
      {
        if ( a4->cbSize && ((a4->wFormatTag - 1) & 0xFFFD) != 0 )
          goto LABEL_101;
        nChannels = a4->nChannels;
        if ( (unsigned __int16)(nChannels - 1) > 1u )
          goto LABEL_101;
        wBitsPerSample = a4->wBitsPerSample;
        if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
          goto LABEL_101;
        v106 = *(_OWORD *)&a4->wFormatTag;
        LOWORD(v106) = -2;
        *(_WORD *)v107 = 22;
        *(_WORD *)&v107[2] = wBitsPerSample;
        *(GUID *)&v107[8] = v17;
        *(_DWORD *)&v107[8] = a4->wFormatTag;
        *(_DWORD *)&v107[4] = 4 - (nChannels != 1);
      }
      v58 = 1;
      if ( *((_DWORD *)a2 + 40) && WORD1(v106) != WORD1(v108) )
      {
        WORD1(v106) = WORD1(v108);
        *(_DWORD *)&v107[4] = v16;
        WORD6(v106) = WORD1(v108) * (HIWORD(v106) >> 3);
        DWORD2(v106) = DWORD1(v106) * WORD6(v106);
      }
      v65 = 0LL;
      v19 = CProcessNode::CreateDummyProcessNode(v9, (const struct tWAVEFORMATEX *)&v106, &v65);
      if ( v19 < 0 )
      {
        v81 = v19;
        throw (long *)&v81;
      }
      v93 = v65;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v93);
      v65 = 0LL;
      v20 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v109[8];
      if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v109[8] )
        v20 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v109[16];
      if ( !v20 && (*((_DWORD *)a2 + 34) & 0x800000) == 0 )
      {
        v64 = 0LL;
        v102 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v42 = CAPOProcessNode::CreateAPOProcessNode(
                &GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec,
                0LL,
                v9,
                1LL,
                0,
                &v102,
                &v64);
        if ( v42 < 0 )
        {
          v83 = v42;
          throw (long *)&v83;
        }
        v94 = v64;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v94);
        v64 = 0LL;
      }
      v65 = 0LL;
    }
    for ( i = 0; ; ++i )
    {
      v68[1] = i;
      if ( i >= *((_DWORD *)a2 + 46) )
        break;
      v60 = 0LL;
      v22 = *((_DWORD *)a2 + 40);
      if ( _bittest(&v22, i) )
      {
        v23 = (GUID *)((char *)a2 + 164);
        ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v56, (__int64)v82);
        v8 |= 1u;
        v24 = v56;
      }
      else
      {
        v23 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v10 = 0;
        v87 = 0LL;
        v8 |= 2u;
        v24 = 0LL;
      }
      v103 = *v23;
      v25 = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * i + 272, v24, v9, 0LL, v10, &v103, &v60);
      if ( (v8 & 2) != 0 )
      {
        v8 &= ~2u;
        if ( v87 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
      }
      v10 = 1;
      if ( (v8 & 1) != 0 )
      {
        v8 &= ~1u;
        if ( v56 )
          (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v56 + 16LL))(v56);
      }
      if ( v25 < 0 )
      {
        v68[0] = v25;
        throw (long *)v68;
      }
      v95 = v60;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v95);
      v60 = 0LL;
    }
    v59 = 0LL;
    v26 = CAudioMediaType::Create(v85, (unsigned int)v85->cbSize + 18, &v59, 0.0, 0);
    if ( v26 < 0 )
    {
      v69 = v26;
      throw (long *)&v69;
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v61 = 0LL;
        v29 = v59;
        v52 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->GetAudioFormat)(v59);
        v53 = CProcessNode::CreateDummyProcessNode(v9, v52, &v61);
        if ( v53 < 0 )
        {
          v72 = v53;
          throw (long *)&v72;
        }
        v100[0] = v61;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, v100);
        v61 = 0LL;
      }
      else if ( *(_DWORD *)a2 == 2 )
      {
        v56 = 0LL;
        v29 = v59;
        v54 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v59->lpVtbl->GetAudioFormat)(v59);
        v55 = CProcessNode::CreateDummyProcessNode(v9, v54, &v56);
        if ( v55 < 0 )
        {
          v73 = v55;
          throw (long *)&v73;
        }
        v67 = v56;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v67);
        v56 = 0LL;
      }
      else
      {
        v29 = v59;
      }
    }
    else
    {
      *(_QWORD *)v63 = 0LL;
      *(GUID *)v104 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                         &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
                         0LL,
                         v9,
                         1LL,
                         0,
                         v104,
                         v63);
      if ( APOProcessNode < 0 )
      {
        v70 = APOProcessNode;
        throw (long *)&v70;
      }
      v28 = *(_QWORD *)v63;
      v29 = v59;
      (*(void (__fastcall **)(_QWORD, struct IAudioMediaType *))(**(_QWORD **)v63 + 24LL))(*(_QWORD *)v63, v59);
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v28 + 32LL))(v28, v29);
      v96 = v28;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v96);
      *(_QWORD *)v63 = 0LL;
      if ( !v84 )
      {
        v62 = 0LL;
        v50 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->GetAudioFormat)(v29);
        v51 = CProcessNode::CreateDummyProcessNode(v9, v50, &v62);
        if ( v51 < 0 )
        {
          v71 = v51;
          throw (long *)&v71;
        }
        v97 = v62;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v88, &v97);
        v62 = 0LL;
      }
      *(_QWORD *)v63 = 0LL;
    }
    v30 = (unsigned __int16 *)operator new(0x140uLL);
    v67 = v30;
    if ( v30 )
      v31 = CPipeInstance::CPipeInstance((CPipeInstance *)v30, WRITE_DATA_PIPE);
    else
      v31 = 0LL;
    v86 = v31;
    if ( !v31 )
    {
      v74 = -2147024882;
      throw (long *)&v74;
    }
    v32 = (unsigned __int16 *)*((_QWORD *)a2 + 19);
    v67 = v32;
    v33 = -1LL;
    v34 = -1LL;
    do
      ++v34;
    while ( v32[v34] );
    *((_QWORD *)v31 + 24) = 0LL;
    if ( v34 + 1 >= v34 )
      v33 = v34 + 1;
    v35 = v34 + 1 < v34 ? 0x80070216 : 0;
    if ( v34 + 1 >= v34 )
    {
      if ( is_mul_ok(v33, 2uLL) )
      {
        v36 = (char *)CoTaskMemAlloc(2 * v33);
        *((_QWORD *)v31 + 24) = v36;
        if ( !v36 )
        {
          v35 = -2147024882;
          goto LABEL_128;
        }
        v35 = 0;
        StringCchCopyNExW(v36, v33, v67, v34);
      }
      else
      {
        v35 = -2147024362;
      }
    }
    if ( v35 >= 0 )
    {
      *((_DWORD *)v31 + 30) = *(_DWORD *)a2 == 2;
      *((_DWORD *)v31 + 3) = v76;
      *((_DWORD *)v31 + 33) = *((_DWORD *)a2 + 40) != 0;
      *((_DWORD *)v31 + 31) = *((_DWORD *)a2 + 2) == 1;
      if ( *((_QWORD *)v31 + 19) )
        ATL::AtlComPtrAssign((struct IUnknown **)v31 + 19, 0LL);
      if ( *((struct IUnknown **)v31 + 30) != v98 )
        ATL::AtlComPtrAssign((struct IUnknown **)v31 + 30, v98);
      v37 = v84;
      *(_QWORD *)v31 = v84;
      *((_DWORD *)v31 + 2) = v37 == 0LL;
      *((_BYTE *)v31 + 316) = *((_DWORD *)a2 + 45) != 0;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((char *)v31 + 16, &v88);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v88);
      if ( v37 )
        v38 = *((_DWORD *)v37 + 35);
      else
        v38 = (int)(float)((float)(int)((double)(int)(v85->nAvgBytesPerSec / v85->nBlockAlign)
                                      * (double)(int)*((_QWORD *)a2 + 4)
                                      / 10000000.0
                                      + 0.5)
                         * v11);
      *((_DWORD *)v31 + 36) = v38;
      v39 = 1;
      if ( *((_DWORD *)a2 + 1) )
        v39 = 7;
      *((_DWORD *)v31 + 34) = v39;
      *((_DWORD *)v31 + 53) = 0;
      v40 = *((_DWORD *)a2 + 34);
      if ( (v40 & 0x100000) != 0 )
      {
        *((_DWORD *)v31 + 34) |= 0xAu;
        *((_DWORD *)v31 + 50) = 1056964608;
        *((_DWORD *)v31 + 51) = 1065353216;
        v40 = *((_DWORD *)a2 + 34);
      }
      if ( (v40 & 0x8000000) != 0 )
        *((_DWORD *)v31 + 52) = 3;
      v86 = 0LL;
      *v99 = v31;
      ATL::CAutoPtr<CPipeInstance>::Free(&v86);
      if ( v29 )
        ((void (__fastcall *)(struct IAudioMediaType *))v29->lpVtbl->Release)(v29);
      v66 = 0LL;
      if ( v82 )
        ((void (__fastcall *)(struct IPropertyStore *))v82->lpVtbl->Release)(v82);
      goto LABEL_137;
    }
LABEL_128:
    v75 = v35;
    throw (long *)&v75;
  }
  catch ( long *v101 )
  {
    v35 = *(_DWORD *)v101;
  }
  catch ( ATL::CAtlException *v105 )
  {
    v35 = *(_DWORD *)v105;
  }
LABEL_137:
  if ( v35 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
        (unsigned int)v35);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamPipeInstance", 0x355u, v35);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v88);
  return (unsigned int)v35;
}
