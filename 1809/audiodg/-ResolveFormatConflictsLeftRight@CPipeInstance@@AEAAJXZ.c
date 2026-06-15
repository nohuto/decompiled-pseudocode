/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B420
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B260 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140004E68 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140009F80 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000A500 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000CFB0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000D330 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14000D614 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000D730 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000E6B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FDE0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x1400116A0 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140011B04 (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140011B84 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140019B34 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x14001D997 (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140039D1C (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14003ADDC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14003AEB8 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     WPP_SF__guid_ @ 0x14003B204 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14003B238 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=82
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  CPipeInstance *v1; // r14
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // r8d
  HRESULT Converter; // edi
  unsigned __int16 *v7; // rsi
  __int64 v8; // rdi
  struct tWAVEFORMATEX *v9; // rax
  struct tWAVEFORMATEX *v10; // rbx
  __int64 v11; // rbx
  _QWORD *v12; // rsi
  unsigned int *v13; // rbx
  _QWORD *v14; // r14
  int v15; // r12d
  __int64 v16; // r13
  unsigned int v17; // ebx
  int v18; // eax
  struct IAudioMediaType *v19; // r13
  struct IAudioMediaType *v20; // rcx
  struct IAudioMediaType *v21; // rcx
  int v22; // eax
  struct IAudioMediaType *v23; // rdx
  struct IAudioMediaType *v24; // rdi
  void (__fastcall ***v25)(_QWORD, __int64); // r13
  char *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  int v32; // eax
  __int64 v33; // rax
  struct IAudioMediaType *v34; // rbx
  struct IAudioMediaType *v35; // rdx
  struct IAudioMediaType *v36; // r13
  _QWORD *Head; // rax
  HRESULT *v38; // rbx
  HRESULT *v39; // rbx
  HRESULT *v40; // rbx
  HRESULT *v41; // rbx
  HRESULT *v42; // rbx
  void (__fastcall ***v43)(_QWORD, __int64); // rbx
  unsigned int v44; // ebx
  __int64 v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // rax
  CPipeInstance *v48; // rax
  __int64 v49; // rax
  const struct tWAVEFORMATEX *v50; // rbx
  const struct tWAVEFORMATEX *v51; // rax
  unsigned int v52; // ebx
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  const char *v56; // rax
  LPVOID *ppv; // [rsp+20h] [rbp-198h]
  char v58; // [rsp+40h] [rbp-178h]
  CPipeInstance *v59; // [rsp+48h] [rbp-170h]
  struct IAudioMediaType *v60; // [rsp+50h] [rbp-168h] BYREF
  struct IAudioMediaType *v61; // [rsp+58h] [rbp-160h] BYREF
  struct IAudioMediaType *v62; // [rsp+60h] [rbp-158h] BYREF
  int v63; // [rsp+68h] [rbp-150h]
  void (__fastcall ***v64)(_QWORD, __int64); // [rsp+70h] [rbp-148h] BYREF
  unsigned int *v65; // [rsp+78h] [rbp-140h]
  __int64 v66; // [rsp+80h] [rbp-138h]
  struct IAudioMediaType *v67; // [rsp+88h] [rbp-130h] BYREF
  CPipeInstance *v68; // [rsp+90h] [rbp-128h]
  unsigned int v69; // [rsp+98h] [rbp-120h]
  struct IMMDevice *v70; // [rsp+A0h] [rbp-118h] BYREF
  _QWORD *v71; // [rsp+A8h] [rbp-110h]
  struct IAudioMediaType *v72; // [rsp+B0h] [rbp-108h] BYREF
  void (__fastcall ***v73)(_QWORD, __int64); // [rsp+B8h] [rbp-100h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-F8h] BYREF
  int v75; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-E0h] BYREF
  int v78; // [rsp+E0h] [rbp-D8h] BYREF
  int v79; // [rsp+E4h] [rbp-D4h] BYREF
  int pExceptionObject; // [rsp+E8h] [rbp-D0h] BYREF
  LPVOID v81; // [rsp+F0h] [rbp-C8h] BYREF
  struct IAudioMediaType *v82; // [rsp+F8h] [rbp-C0h] BYREF
  _QWORD *v83; // [rsp+100h] [rbp-B8h]
  __int64 v84; // [rsp+108h] [rbp-B0h]
  struct _GUID v85; // [rsp+110h] [rbp-A8h] BYREF
  void (__fastcall ***v86)(_QWORD, __int64); // [rsp+120h] [rbp-98h] BYREF
  void (__fastcall ***v87)(_QWORD, __int64); // [rsp+128h] [rbp-90h] BYREF
  void (__fastcall ***v88)(_QWORD, __int64); // [rsp+130h] [rbp-88h] BYREF
  _QWORD v89[2]; // [rsp+138h] [rbp-80h] BYREF
  HRESULT *v90; // [rsp+148h] [rbp-70h] BYREF
  HRESULT *v91; // [rsp+150h] [rbp-68h] BYREF
  HRESULT *v92; // [rsp+158h] [rbp-60h] BYREF
  HRESULT *v93; // [rsp+160h] [rbp-58h] BYREF
  HRESULT *v94; // [rsp+168h] [rbp-50h] BYREF
  struct _GUID v95; // [rsp+170h] [rbp-48h] BYREF

  v89[1] = -2LL;
  v1 = this;
  v59 = this;
  v68 = this;
  v73 = 0LL;
  v77 = 0LL;
  v58 = 0;
  v69 = 1;
  v61 = 0LL;
  v67 = 0LL;
  v82 = 0LL;
  v81 = 0LL;
  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Head = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v2 + 16));
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType **))(*(_QWORD *)*Head + 8LL))(*Head, &v67);
  }
  else
  {
    v3 = *((_QWORD *)v1 + 3);
    if ( !v3 )
      goto LABEL_314;
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType **))(**(_QWORD **)(v3 + 16) + 16LL))(
           *(_QWORD *)(v3 + 16),
           &v67);
  }
  Converter = v4;
  if ( v4 < 0 )
    goto LABEL_56;
  v7 = (unsigned __int16 *)((__int64 (__fastcall *)(struct IAudioMediaType *))v67->lpVtbl->GetAudioFormat)(v67);
  v8 = v7[8];
  v9 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v8 + 18);
  v10 = v9;
  if ( !v9 )
  {
    Converter = -2147024882;
LABEL_56:
    v30 = WPP_GLOBAL_Control;
    goto LABEL_57;
  }
  memcpy_0(v9, v7, v8 + 18);
  ConvertPCMWfxToIEEEFloat(v10);
  Converter = CAudioMediaType::Create(v10, (unsigned int)v10->cbSize + 18, &v82, 0.0, 0);
  CoTaskMemFree(v10);
  if ( Converter < 0 )
    goto LABEL_56;
  v11 = *((_QWORD *)v1 + 2);
  v66 = v11;
  if ( !v11 )
LABEL_314:
    ATL::AtlThrowImpl(-2147467259);
  v12 = *(_QWORD **)v11;
  v66 = *(_QWORD *)v11;
  v13 = *(unsigned int **)(v11 + 16);
  v65 = v13;
  Converter = (*(__int64 (__fastcall **)(unsigned int *, struct IAudioMediaType **))(*(_QWORD *)v13 + 16LL))(v13, &v61);
  if ( Converter < 0 )
    goto LABEL_56;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, v1);
  }
  while ( 1 )
  {
    if ( !v12 )
    {
      (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v13 + 32LL))(v13, v61);
      goto LABEL_55;
    }
    v62 = 0LL;
    v60 = 0LL;
    v71 = v12;
    v14 = (_QWORD *)v12[2];
    v12 = (_QWORD *)*v12;
    v66 = (__int64)v12;
    v83 = v14;
    v15 = 0;
    v63 = 0;
    if ( *((_DWORD *)v14 + 10) == 2 )
    {
      v16 = v14[4];
      v84 = v16;
      v17 = *(_DWORD *)(v16 + 4);
      LOBYTE(v15) = v17 != 0;
      v63 = v15;
      if ( !*(_QWORD *)(v16 + 40) )
      {
        ppv = (LPVOID *)(v16 + 40);
        v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)v59 + 29) + 24LL))(
                *((_QWORD *)v59 + 29),
                v16 + 8,
                v17,
                *((_QWORD *)v59 + 23));
        Converter = v18;
        if ( v18 < 0 )
        {
          if ( v18 == -2147024882 )
          {
            if ( v60 )
              ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
            if ( v62 )
              ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
            v1 = v59;
            goto LABEL_55;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              29LL,
              &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
              v16 + 8);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v59 + 16, v71);
          if ( v17 )
          {
            v58 = 1;
            v69 = *(_DWORD *)(v16 + 4);
          }
          v13 = v65;
          goto LABEL_24;
        }
        if ( !v17 )
          goto LABEL_16;
        v70 = 0LL;
        Converter = CoCreateInstance(
                      &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                      0LL,
                      0x17u,
                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                      &v81);
        if ( Converter < 0 )
        {
          if ( v70 )
            ((void (__fastcall *)(struct IMMDevice *))v70->lpVtbl->Release)(v70);
          if ( v60 )
            ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
          if ( v62 )
            ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
          v1 = v59;
          goto LABEL_55;
        }
        Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v81 + 40LL))(
                      v81,
                      *((_QWORD *)v59 + 23),
                      &v70);
        if ( Converter < 0 )
        {
          if ( v70 )
            ((void (__fastcall *)(struct IMMDevice *))v70->lpVtbl->Release)(v70);
          if ( v60 )
            ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
          if ( v62 )
            ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
          v1 = v59;
          goto LABEL_55;
        }
        v85 = *(struct _GUID *)(v16 + 24);
        v32 = InitializeSystemEffectsInterface(
                v70,
                *(struct IAudioProcessingObject **)(v16 + 40),
                (struct _GUID *)(v16 + 8),
                &v85);
        Converter = v32;
        if ( v32 < 0 )
        {
          if ( v32 == -2147024882 )
          {
            if ( v70 )
              ((void (__fastcall *)(struct IMMDevice *))v70->lpVtbl->Release)(v70);
            if ( v60 )
              ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
            if ( v62 )
              ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
            v1 = v59;
            goto LABEL_55;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              30LL,
              &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
              v16 + 8);
          }
          v1 = v59;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v59 + 29) + 32LL))(
                 *((_QWORD *)v59 + 29),
                 *(_QWORD *)(v16 + 40)) < 0 )
          {
            if ( v70 )
              ((void (__fastcall *)(struct IMMDevice *))v70->lpVtbl->Release)(v70);
            if ( v60 )
              ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
            if ( v62 )
              goto LABEL_274;
            goto LABEL_55;
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v59 + 16, v71);
          v58 = 1;
          v69 = *(_DWORD *)(v16 + 4);
          if ( v70 )
            ((void (__fastcall *)(struct IMMDevice *))v70->lpVtbl->Release)(v70);
          v13 = v65;
          goto LABEL_24;
        }
        if ( v70 )
          ((void (__fastcall *)(struct IMMDevice *))v70->lpVtbl->Release)(v70);
      }
      if ( !v17 || !*(_DWORD *)(v16 + 4) || !*(_DWORD *)(v16 + 48) )
      {
LABEL_16:
        Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*v14 + 40LL))(
                      v14,
                      v61,
                      &v60,
                      0LL);
        if ( Converter < 0 )
        {
          if ( v60 )
            ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
          if ( v62 )
            ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
          v1 = v59;
          goto LABEL_55;
        }
LABEL_17:
        v63 = v15;
        v13 = v65;
        goto LABEL_18;
      }
      Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*v14 + 40LL))(
                    v14,
                    v61,
                    &v60,
                    v67);
      if ( Converter != -2005073917 )
      {
LABEL_78:
        if ( Converter < 0 )
        {
          if ( Converter == -2147024882 )
          {
            if ( v60 )
              ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
            if ( v62 )
              ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
            v1 = v59;
            goto LABEL_55;
          }
LABEL_206:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              31LL,
              &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
              v16 + 8);
          }
          v1 = v59;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v59 + 29) + 32LL))(
                 *((_QWORD *)v59 + 29),
                 *(_QWORD *)(v16 + 40)) < 0 )
          {
            if ( v60 )
              ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
            if ( v62 )
              goto LABEL_274;
            goto LABEL_55;
          }
          if ( Converter != -2005073917 )
          {
            v58 = 1;
            v69 = *(_DWORD *)(v16 + 4);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v59 + 16, v71);
          v13 = v65;
          goto LABEL_24;
        }
        goto LABEL_17;
      }
      if ( *((_DWORD *)v14 + 6) != 1 )
        goto LABEL_206;
      ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
        &v76,
        *(_QWORD *)(v16 + 40));
      v75 = 0;
      if ( v76 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v76 + 24LL))(v76, &v75) >= 0 && (v75 & 1) != 0 )
      {
        v43 = 0LL;
        v64 = 0LL;
        v74 = 0LL;
        Converter = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)(v16 + 40) + 56LL))(
                      *(_QWORD *)(v16 + 40),
                      0LL,
                      v61,
                      &v74);
        if ( Converter >= 0 )
        {
          v44 = *((_DWORD *)v14 + 6);
          v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 40LL))(v74);
          Converter = CProcessNode::CreateDummyProcessNode(v44, v45, &v64);
          if ( Converter >= 0 )
          {
            try
            {
              v86 = v64;
              v12 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                (char *)v59 + 16,
                                v71,
                                &v86);
              v66 = (__int64)v12;
            }
            catch ( ATL::CAtlException *v90 )
            {
              v38 = v90;
              if ( *v90 == -1073741571 )
                _o__resetstkoflw();
              Converter = *v38;
              if ( *v38 < 0 )
              {
                if ( v74 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
                if ( v64 )
                  (**v64)(v64, 1LL);
                v64 = 0LL;
                if ( v76 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
                if ( v60 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
                if ( !v62 )
                  goto LABEL_295;
                goto LABEL_294;
              }
              v14 = v83;
              v12 = (_QWORD *)v66;
              v16 = v84;
              v15 = v63;
              v59 = v68;
            }
            v64 = 0LL;
            v46 = *((_DWORD *)v14 + 6);
            v47 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v67->lpVtbl->GetAudioFormat)(v67);
            Converter = CProcessNode::CreateDummyProcessNode(v46, v47, &v64);
            if ( Converter >= 0 )
            {
              Converter = 0;
              try
              {
                v87 = v64;
                v66 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                        (char *)v59 + 16,
                        v12,
                        &v87);
              }
              catch ( ATL::CAtlException *v91 )
              {
                v39 = v91;
                if ( *v91 == -1073741571 )
                  _o__resetstkoflw();
                Converter = *v39;
                if ( *v39 < 0 )
                {
                  if ( v74 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
                  if ( v64 )
                    (**v64)(v64, 1LL);
                  v64 = 0LL;
                  if ( v76 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
                  if ( v60 )
                    ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
                  if ( !v62 )
                    goto LABEL_295;
LABEL_294:
                  ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
LABEL_295:
                  v1 = v68;
                  if ( v73 )
                    (**v73)(v73, 1LL);
                  goto LABEL_55;
                }
                v16 = v84;
                v15 = v63;
                v48 = v68;
                v59 = v68;
LABEL_188:
                v13 = v65;
                v64 = 0LL;
                *((_DWORD *)v48 + 33) |= 6u;
                *(_DWORD *)(v16 + 48) = 0;
                v12 = v71;
                v66 = (__int64)v71;
                if ( v74 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
                v64 = 0LL;
                if ( v76 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
                goto LABEL_24;
              }
              v48 = v59;
              goto LABEL_188;
            }
          }
          v43 = v64;
        }
        if ( v74 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
        if ( v43 )
          (**v43)(v43, 1LL);
        v64 = 0LL;
      }
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      goto LABEL_78;
    }
    Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*v14 + 40LL))(
                  v14,
                  v61,
                  &v60,
                  0LL);
    if ( Converter < 0 )
    {
      if ( v60 )
        ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
      if ( v62 )
        ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
      v1 = v59;
      goto LABEL_55;
    }
LABEL_18:
    if ( Converter == 1 )
    {
      v22 = (*(__int64 (__fastcall **)(unsigned int *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*(_QWORD *)v13 + 48LL))(
              v13,
              v60,
              &v62,
              0LL);
      Converter = v22;
      if ( v22 < 0 )
      {
        if ( v60 )
          ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
        if ( v62 )
          ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
        v1 = v59;
        goto LABEL_55;
      }
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v23 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            ((void (__fastcall *)(struct IAudioMediaType *))v23->lpVtbl->Release)(v23);
            v23 = v61;
          }
          v24 = v62;
          if ( v23 != v62 )
          {
            if ( v62 )
            {
              ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->AddRef)(v62);
              v23 = v61;
            }
            if ( v23 )
              ((void (__fastcall *)(struct IAudioMediaType *))v23->lpVtbl->Release)(v23);
            v23 = v24;
            v61 = v24;
          }
          v1 = v59;
          Converter = CPipeInstance::FindConverter(v59, v23, v60, &v78, &v95);
          if ( Converter < 0 )
          {
            if ( v60 )
              ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
            if ( v62 )
              goto LABEL_274;
            goto LABEL_55;
          }
          v85 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          Converter = CAPOProcessNode::CreateAPOProcessNode(&v95, 0LL, v13[6], (unsigned int)v78, 0, &v85, &v73);
          if ( Converter < 0 )
          {
            if ( v60 )
              ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
            if ( v62 )
              goto LABEL_274;
            goto LABEL_55;
          }
          Converter = 0;
          try
          {
            v25 = v73;
            v88 = v73;
            v26 = (char *)v59 + 16;
            if ( v71 )
            {
              v83 = (_QWORD *)v71[1];
              ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(v26);
              v12 = (_QWORD *)*((_QWORD *)v59 + 6);
              v27 = (_QWORD *)*v12;
              v12[2] = v25;
              *((_QWORD *)v59 + 6) = v27;
              v12[1] = v83;
              v28 = v71;
              *v12 = v71;
              ++*((_QWORD *)v59 + 4);
              v29 = (_QWORD *)v28[1];
              if ( v29 )
                *v29 = v12;
              else
                *((_QWORD *)v59 + 2) = v12;
              v28[1] = v12;
            }
            else
            {
              v12 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(v26, &v88);
            }
            v66 = (__int64)v12;
          }
          catch ( ATL::CAtlException *v92 )
          {
            v41 = v92;
            if ( *v92 == -1073741571 )
              _o__resetstkoflw();
            Converter = *v41;
            if ( *v41 < 0 )
            {
              if ( v60 )
                ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
              if ( !v62 )
                goto LABEL_295;
              goto LABEL_294;
            }
            v15 = v63;
            v13 = v65;
            v12 = (_QWORD *)v66;
            v59 = v68;
          }
          v73 = 0LL;
          goto LABEL_24;
        }
      }
      else
      {
        v35 = v61;
        if ( v61 )
        {
          v61 = 0LL;
          ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
          v35 = v61;
        }
        v36 = v60;
        if ( v35 != v60 )
        {
          if ( v60 )
          {
            ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->AddRef)(v60);
            v35 = v61;
          }
          if ( v35 )
            ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
          v61 = v36;
        }
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
        (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v13 + 32LL))(v13, v61);
        if ( v15 )
        {
          v49 = v14[4];
          if ( *(_DWORD *)(v49 + 4) )
          {
            if ( *(_DWORD *)(v49 + 48) )
            {
              Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v61);
              ATL::CComPtr<IAudioMediaType>::operator=(&v61, &v67);
            }
          }
        }
      }
LABEL_21:
      v19 = v61;
      goto LABEL_22;
    }
    if ( Converter )
      goto LABEL_21;
    (*(void (__fastcall **)(_QWORD *, struct IAudioMediaType *))(*v14 + 24LL))(v14, v61);
    (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v13 + 32LL))(v13, v61);
    if ( !v15 )
      goto LABEL_21;
    v33 = v14[4];
    if ( !*(_DWORD *)(v33 + 4) || !*(_DWORD *)(v33 + 48) )
      goto LABEL_21;
    v19 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
      v19 = v61;
    }
    v34 = v67;
    if ( v19 != v67 )
    {
      if ( v67 )
      {
        ((void (__fastcall *)(struct IAudioMediaType *))v67->lpVtbl->AddRef)(v67);
        v19 = v61;
      }
      if ( v19 )
        ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
      v19 = v34;
      v61 = v34;
    }
LABEL_22:
    if ( (*((_BYTE *)v59 + 132) & 8) == 0
      || (v50 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v82->lpVtbl->GetAudioFormat)(v82),
          v51 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->GetAudioFormat)(v19),
          !(unsigned int)CompareWaveFormat(v51, v50)) )
    {
      v13 = (unsigned int *)v14;
      v65 = (unsigned int *)v14;
      goto LABEL_24;
    }
    v72 = 0LL;
    Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType **))(*v14 + 8LL))(v14, &v72);
    if ( Converter < 0 )
    {
      if ( v72 )
        ((void (__fastcall *)(struct IAudioMediaType *))v72->lpVtbl->Release)(v72);
      if ( v60 )
        ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
      if ( v62 )
        ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
      v1 = v59;
      goto LABEL_55;
    }
    v1 = v59;
    Converter = CPipeInstance::FindConverter(v59, v72, v72, &v79, &v95);
    if ( Converter < 0 )
      break;
    v85 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v13 = v65;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v95, 0LL, v65[6], (unsigned int)v79, 0, &v85, &v73);
    if ( Converter < 0 )
    {
      if ( v72 )
        ((void (__fastcall *)(struct IAudioMediaType *))v72->lpVtbl->Release)(v72);
      if ( v60 )
        ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
      if ( v62 )
        goto LABEL_274;
      goto LABEL_55;
    }
    Converter = 0;
    try
    {
      v89[0] = v73;
      v12 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                        (char *)v59 + 16,
                        v71,
                        v89);
      v66 = (__int64)v12;
    }
    catch ( ATL::CAtlException *v93 )
    {
      v40 = v93;
      if ( *v93 == -1073741571 )
        _o__resetstkoflw();
      Converter = *v40;
      if ( *v40 < 0 )
      {
        if ( v72 )
          ((void (__fastcall *)(struct IAudioMediaType *))v72->lpVtbl->Release)(v72);
        if ( v60 )
          ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
        if ( !v62 )
          goto LABEL_295;
        goto LABEL_294;
      }
      v15 = v63;
      v13 = v65;
      v12 = (_QWORD *)v66;
      v59 = v68;
    }
    v73 = 0LL;
    ATL::CComPtr<IAudioMediaType>::operator=(&v61, &v72);
    if ( v72 )
      ((void (__fastcall *)(struct IAudioMediaType *))v72->lpVtbl->Release)(v72);
LABEL_24:
    if ( Converter < 0 && v15 )
    {
      v52 = v13[6];
      v53 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v67->lpVtbl->GetAudioFormat)(v67);
      v54 = CProcessNode::CreateDummyProcessNode(v52, v53, &v77);
      if ( v54 < 0 )
      {
        pExceptionObject = v54;
        throw (long *)&pExceptionObject;
      }
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v77 + 24LL))(v77, v67);
      Converter = 0;
      try
      {
        v12 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                          (char *)v59 + 16,
                          v12,
                          &v77);
        v66 = (__int64)v12;
      }
      catch ( ATL::CAtlException *v94 )
      {
        v42 = v94;
        if ( *v94 == -1073741571 )
          _o__resetstkoflw();
        Converter = *v42;
        if ( *v42 < 0 )
        {
          if ( v60 )
            ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
          if ( !v62 )
            goto LABEL_295;
          goto LABEL_294;
        }
        v12 = (_QWORD *)v66;
        v59 = v68;
      }
      v13 = v65;
      v77 = 0LL;
    }
    v20 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
    }
    v21 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
    }
    if ( v60 )
      ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
    if ( v62 )
      ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
    v1 = v59;
  }
  if ( v72 )
    ((void (__fastcall *)(struct IAudioMediaType *))v72->lpVtbl->Release)(v72);
  if ( v60 )
    ((void (__fastcall *)(struct IAudioMediaType *))v60->lpVtbl->Release)(v60);
  if ( v62 )
LABEL_274:
    ((void (__fastcall *)(struct IAudioMediaType *))v62->lpVtbl->Release)(v62);
LABEL_55:
  if ( !v58 )
    goto LABEL_56;
  v55 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v69, 0, 0, (__int64)ppv);
  if ( v55 >= 0 )
    goto LABEL_56;
  v30 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
        (unsigned int)v55);
      goto LABEL_56;
    }
LABEL_57:
    if ( v30 != &WPP_GLOBAL_Control && (*((_DWORD *)v30 + 7) & 0x20000) != 0 && *((_BYTE *)v30 + 25) >= 4u )
    {
      v56 = "SUCCEEDED";
      if ( Converter < 0 )
        v56 = "FAILED";
      WPP_SF_qs(v30[2], 33, v5, (_DWORD)v1, (__int64)v56);
      v30 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v30 != &WPP_GLOBAL_Control && (*((_DWORD *)v30 + 7) & 0x20000) != 0 && *((_BYTE *)v30 + 25) >= 2u )
      WPP_SF_D(v30[2], 34LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsLeftRight", 0x864u, Converter);
  }
  if ( v81 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v81 + 16LL))(v81);
  if ( v82 )
    ((void (__fastcall *)(struct IAudioMediaType *))v82->lpVtbl->Release)(v82);
  if ( v67 )
    ((void (__fastcall *)(struct IAudioMediaType *))v67->lpVtbl->Release)(v67);
  if ( v61 )
    ((void (__fastcall *)(struct IAudioMediaType *))v61->lpVtbl->Release)(v61);
  return (unsigned int)Converter;
}
