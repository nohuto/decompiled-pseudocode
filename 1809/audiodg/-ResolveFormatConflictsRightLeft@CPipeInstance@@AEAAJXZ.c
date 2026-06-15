/*
 * XREFs of ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B260 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004644 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140004E68 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140009F80 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000A500 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000D330 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14000D614 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000D730 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000E6B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FDE0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x1400116A0 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140011B04 (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140011B84 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140011C9C (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140019B34 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14003A8A4 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14003ADDC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14003AEB8 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     WPP_SF__guid_ @ 0x14003B204 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14003B238 (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=67
__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft(CPipeInstance *this)
{
  CPipeInstance *v1; // rbx
  _QWORD *Next; // rax
  int v3; // r8d
  int Converter; // r15d
  unsigned __int16 *v5; // rsi
  __int64 v6; // rdi
  struct tWAVEFORMATEX *v7; // rax
  struct tWAVEFORMATEX *v8; // rbx
  _QWORD *v9; // rsi
  CPipeInstance *v10; // rcx
  struct CProcessNode **Head; // rax
  struct CProcessNode *v12; // rdi
  _QWORD *v13; // r13
  _DWORD *v14; // r14
  char v15; // bl
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  struct IAudioMediaType *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  _QWORD *v24; // rcx
  int *v26; // rbx
  int *v27; // rbx
  int *v28; // rbx
  int *v29; // rbx
  unsigned int v30; // ecx
  char v31; // al
  int v32; // ebx
  const struct tWAVEFORMATEX *v33; // rax
  int v34; // ebx
  const struct tWAVEFORMATEX *v35; // rax
  int v36; // ebx
  const struct tWAVEFORMATEX *v37; // rax
  struct IAudioMediaType *v38; // rdi
  __int64 v39; // rbx
  struct IAudioMediaType *v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  struct IAudioMediaType *v43; // rdi
  const struct tWAVEFORMATEX *v44; // rbx
  const struct tWAVEFORMATEX *v45; // rax
  int v46; // eax
  const char *v47; // rax
  LPVOID *ppv; // [rsp+20h] [rbp-178h]
  char v49; // [rsp+40h] [rbp-158h]
  CPipeInstance *v50; // [rsp+48h] [rbp-150h]
  struct IAudioMediaType *v51; // [rsp+58h] [rbp-140h] BYREF
  struct CProcessNode *v52; // [rsp+60h] [rbp-138h]
  struct IAudioMediaType *v53; // [rsp+68h] [rbp-130h] BYREF
  __int64 v54; // [rsp+70h] [rbp-128h] BYREF
  _QWORD *v55; // [rsp+78h] [rbp-120h] BYREF
  void (__fastcall ***v56)(_QWORD, __int64); // [rsp+80h] [rbp-118h] BYREF
  unsigned int v57; // [rsp+88h] [rbp-110h]
  struct CProcessNode *v58; // [rsp+90h] [rbp-108h] BYREF
  __int64 v59; // [rsp+98h] [rbp-100h] BYREF
  struct IMMDevice *v60; // [rsp+A0h] [rbp-F8h] BYREF
  void (__fastcall ***v61)(_QWORD, __int64); // [rsp+A8h] [rbp-F0h] BYREF
  CPipeInstance *v62; // [rsp+B0h] [rbp-E8h]
  __int64 v63; // [rsp+B8h] [rbp-E0h] BYREF
  int v64; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-D0h]
  void (__fastcall ***v66)(_QWORD, __int64); // [rsp+D0h] [rbp-C8h] BYREF
  int v67; // [rsp+D8h] [rbp-C0h] BYREF
  struct IAudioMediaType *v68; // [rsp+E0h] [rbp-B8h] BYREF
  LPVOID v69; // [rsp+E8h] [rbp-B0h] BYREF
  _QWORD *v70; // [rsp+F0h] [rbp-A8h]
  void (__fastcall ***v71)(_QWORD, __int64); // [rsp+F8h] [rbp-A0h] BYREF
  _DWORD *v72; // [rsp+100h] [rbp-98h]
  void (__fastcall ***v73)(_QWORD, __int64); // [rsp+108h] [rbp-90h] BYREF
  void (__fastcall ***v74)(_QWORD, __int64); // [rsp+110h] [rbp-88h] BYREF
  void (__fastcall ***v75)(_QWORD, _QWORD); // [rsp+118h] [rbp-80h] BYREF
  struct _GUID v76; // [rsp+120h] [rbp-78h] BYREF
  __int64 v77; // [rsp+130h] [rbp-68h]
  ATL::CAtlException *v78; // [rsp+138h] [rbp-60h] BYREF
  ATL::CAtlException *v79; // [rsp+140h] [rbp-58h] BYREF
  ATL::CAtlException *v80; // [rsp+148h] [rbp-50h] BYREF
  ATL::CAtlException *v81; // [rsp+150h] [rbp-48h] BYREF
  struct _GUID v82; // [rsp+158h] [rbp-40h] BYREF

  v77 = -2LL;
  LODWORD(v1) = (_DWORD)this;
  v50 = this;
  v62 = this;
  v66 = 0LL;
  v49 = 0;
  v57 = 1;
  v53 = 0LL;
  v69 = 0LL;
  v59 = 0LL;
  v68 = 0LL;
  v55 = (_QWORD *)*((_QWORD *)this + 2);
  Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v55);
  Converter = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*Next + 16LL))(*Next, &v59);
  if ( Converter < 0 )
    goto LABEL_58;
  v5 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 40LL))(v59);
  v6 = v5[8];
  v7 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v6 + 18);
  v8 = v7;
  if ( !v7 )
  {
    Converter = -2147024882;
    LODWORD(v1) = (_DWORD)v50;
    goto LABEL_58;
  }
  memcpy_0(v7, v5, v6 + 18);
  ConvertPCMWfxToIEEEFloat(v8);
  Converter = CAudioMediaType::Create(v8, (unsigned int)v8->cbSize + 18, &v68, 0.0, 0);
  CoTaskMemFree(v8);
  v1 = v50;
  if ( Converter < 0 )
    goto LABEL_58;
  v9 = (_QWORD *)*((_QWORD *)v50 + 3);
  v55 = v9;
  v10 = *(CPipeInstance **)v50;
  if ( *(_QWORD *)v50 )
  {
    if ( *((_DWORD *)v50 + 30) && !*((_DWORD *)v10 + 51) )
    {
      v58 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(v10, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v58, 0LL, 0LL);
      v12 = v58;
      v52 = v58;
      if ( v58 )
        goto LABEL_7;
      v58 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        *(CPipeInstance **)v50,
        &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
        &v58,
        0LL,
        0LL);
      v12 = v58;
      v52 = v58;
      if ( v58 )
        goto LABEL_7;
      v10 = *(CPipeInstance **)v50;
    }
    Head = (struct CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)v10 + 2);
  }
  else
  {
    Head = (struct CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(0LL, &v55);
    v9 = v55;
  }
  v12 = *Head;
  v52 = *Head;
LABEL_7:
  Converter = (*(__int64 (__fastcall **)(struct CProcessNode *, struct IAudioMediaType **))(*(_QWORD *)v12 + 8LL))(
                v12,
                &v53);
  if ( Converter < 0 )
    goto LABEL_58;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, v50);
  }
  while ( 1 )
  {
    if ( !v9 )
    {
      (*(void (__fastcall **)(struct CProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v12 + 24LL))(v12, v53);
      goto LABEL_57;
    }
    v51 = 0LL;
    v54 = 0LL;
    v13 = v9;
    v70 = v9;
    v9 = (_QWORD *)v9[1];
    v55 = v9;
    v14 = (_DWORD *)v13[2];
    v72 = v14;
    v15 = 0;
    if ( v14[10] == 2 )
      break;
    Converter = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*(_QWORD *)v14 + 48LL))(
                  v14,
                  v53,
                  &v51,
                  0LL);
    if ( Converter < 0 )
    {
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      if ( v51 )
        ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
      v1 = v50;
      goto LABEL_57;
    }
LABEL_17:
    if ( Converter != 1 )
    {
      if ( Converter )
        goto LABEL_20;
      (*(void (__fastcall **)(struct CProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v12 + 24LL))(v12, v53);
      (*(void (__fastcall **)(_DWORD *, struct IAudioMediaType *))(*(_QWORD *)v14 + 32LL))(v14, v53);
      if ( !v15 )
        goto LABEL_20;
      v23 = *((_QWORD *)v14 + 4);
      if ( !*(_DWORD *)(v23 + 4) || !*(_DWORD *)(v23 + 52) )
        goto LABEL_20;
      goto LABEL_55;
    }
LABEL_30:
    v20 = (*(__int64 (__fastcall **)(struct CProcessNode *, struct IAudioMediaType *, __int64 *, _QWORD))(*(_QWORD *)v12 + 40LL))(
            v12,
            v51,
            &v54,
            0LL);
    Converter = v20;
    if ( v20 < 0 )
    {
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      if ( v51 )
        ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
      v1 = v50;
      goto LABEL_57;
    }
    if ( !v20 )
    {
      Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v53);
      ATL::CComPtr<IAudioMediaType>::operator=(&v53, &v51);
      (*(void (__fastcall **)(struct CProcessNode *, struct IAudioMediaType *))(*(_QWORD *)v12 + 24LL))(v12, v53);
      (*(void (__fastcall **)(_DWORD *, struct IAudioMediaType *))(*(_QWORD *)v14 + 32LL))(v14, v53);
      if ( !v15 )
        goto LABEL_20;
      v42 = *((_QWORD *)v14 + 4);
      if ( !*(_DWORD *)(v42 + 4) || !*(_DWORD *)(v42 + 52) )
        goto LABEL_20;
LABEL_55:
      Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v53);
      ATL::CComPtr<IAudioMediaType>::operator=(&v53, &v59);
      goto LABEL_20;
    }
    if ( v20 == 1 )
    {
      Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v53);
      ATL::CComPtr<IAudioMediaType>::operator=(&v53, &v54);
      goto LABEL_34;
    }
LABEL_20:
    v1 = v50;
    if ( (*((_BYTE *)v50 + 132) & 8) == 0 )
      goto LABEL_21;
    v43 = v53;
    v44 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->GetAudioFormat)(v68);
    v45 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->GetAudioFormat)(v43);
    if ( !(unsigned int)CompareWaveFormat(v45, v44) )
    {
      v1 = v50;
LABEL_21:
      v12 = (struct CProcessNode *)v14;
      v52 = (struct CProcessNode *)v14;
      goto LABEL_22;
    }
    if ( !v51 )
      ATL::CComPtr<IAudioMediaType>::operator=(&v51, &v59);
    v12 = v52;
LABEL_34:
    v1 = v50;
    Converter = CPipeInstance::FindConverter(v50, v53, v51, &v67, &v82);
    if ( Converter < 0 )
    {
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      if ( !v51 )
        goto LABEL_57;
      goto LABEL_246;
    }
    v76 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v82, 0LL, v14[6], v67, 0, (__int128 *)&v76, (HKEY *)&v66);
    if ( Converter < 0 )
    {
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      if ( !v51 )
        goto LABEL_57;
      goto LABEL_246;
    }
    Converter = 0;
    try
    {
      v75 = v66;
      v9 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                       (char *)v50 + 16,
                       v13,
                       &v75);
      v55 = v9;
    }
    catch ( ATL::CAtlException *v81 )
    {
      v29 = (int *)v81;
      if ( *(_DWORD *)v81 == -1073741571 )
        _o__resetstkoflw();
      Converter = *v29;
      if ( *v29 < 0 )
      {
        if ( v54 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
        if ( !v51 )
          goto LABEL_252;
        goto LABEL_251;
      }
      v9 = v55;
      v12 = v52;
      v1 = v62;
      v50 = v62;
    }
    v66 = 0LL;
LABEL_22:
    v18 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
    }
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v51 )
      ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
  }
  v16 = *((_QWORD *)v14 + 4);
  v65 = v16;
  if ( *(_QWORD *)(v16 + 40) )
  {
LABEL_38:
    if ( !*(_DWORD *)(v16 + 4) || !*(_DWORD *)(v16 + 52) )
    {
LABEL_15:
      Converter = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*(_QWORD *)v14 + 48LL))(
                    v14,
                    v53,
                    &v51,
                    0LL);
      if ( Converter < 0 )
      {
        if ( v54 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
        if ( v51 )
          ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
        v1 = v50;
        goto LABEL_57;
      }
LABEL_16:
      v12 = v52;
      goto LABEL_17;
    }
    v15 = 1;
    v21 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType *, struct IAudioMediaType **, __int64))(*(_QWORD *)v14 + 48LL))(
            v14,
            v53,
            &v51,
            v59);
    Converter = v21;
    if ( v21 != -2005073917 )
    {
      if ( v21 != 1 )
        goto LABEL_42;
      if ( *((_DWORD *)v52 + 6) != 1 )
      {
        v12 = v52;
        goto LABEL_30;
      }
      if ( !*((_DWORD *)v50 + 76) )
      {
        v12 = v52;
        goto LABEL_30;
      }
      ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
        &v58,
        *(_QWORD *)(v16 + 40));
      v64 = 0;
      if ( !v58
        || (*(int (__fastcall **)(struct CProcessNode *, int *))(*(_QWORD *)v58 + 24LL))(v58, &v64) < 0
        || (v64 & 1) == 0 )
      {
        v38 = v53;
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 40LL))(v59);
        if ( *(_WORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v38->lpVtbl->GetAudioFormat)(v38) + 2) != *(_WORD *)(v39 + 2)
          || (v40 = v53,
              v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 40LL))(v59),
              *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->GetAudioFormat)(v40) + 4) != *(_DWORD *)(v41 + 4)) )
        {
          v1 = v50;
          if ( (*((_BYTE *)v50 + 132) & 6) == 0 )
          {
            *(_DWORD *)(v65 + 52) = 0;
            v9 = v13;
            if ( v58 )
              (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v58 + 16LL))(v58);
            v12 = v52;
            goto LABEL_22;
          }
        }
        v16 = v65;
        goto LABEL_194;
      }
      v61 = 0LL;
      v36 = v14[6];
      v37 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->GetAudioFormat)(v51);
      Converter = CProcessNode::CreateDummyProcessNode(v36, v37, &v61);
      if ( Converter < 0 )
      {
        if ( v61 )
          (**v61)(v61, 1LL);
        v61 = 0LL;
LABEL_194:
        if ( v58 )
          (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v58 + 16LL))(v58);
        v15 = 1;
        goto LABEL_42;
      }
      Converter = 0;
      try
      {
        v74 = v61;
        v1 = v50;
        v9 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                         (char *)v50 + 16,
                         v13,
                         &v74);
        v55 = v9;
      }
      catch ( ATL::CAtlException *v80 )
      {
        v28 = (int *)v80;
        if ( *(_DWORD *)v80 == -1073741571 )
          _o__resetstkoflw();
        Converter = *v28;
        if ( *v28 < 0 )
        {
          if ( v61 )
            (**v61)(v61, 1LL);
          v61 = 0LL;
          if ( v58 )
            (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v58 + 16LL))(v58);
          if ( v54 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
          if ( !v51 )
            goto LABEL_252;
          goto LABEL_251;
        }
        v9 = v55;
        v1 = v62;
        v50 = v62;
      }
      v12 = v52;
      v61 = 0LL;
      *((_DWORD *)v1 + 33) |= 6u;
      v61 = 0LL;
      if ( v58 )
        (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v58 + 16LL))(v58);
      goto LABEL_22;
    }
    if ( *((_DWORD *)v52 + 6) != 1 || !*((_DWORD *)v50 + 76) )
      goto LABEL_203;
    v63 = 0LL;
    Converter = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)(v16 + 40)
                                                                                               + 64LL))(
                  *(_QWORD *)(v16 + 40),
                  0LL,
                  v53,
                  &v63);
    if ( !Converter )
    {
      v56 = 0LL;
      v32 = *((_DWORD *)v52 + 6);
      v33 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 40LL))(v63);
      Converter = CProcessNode::CreateDummyProcessNode(v32, v33, &v56);
      if ( Converter >= 0 )
      {
        try
        {
          v71 = v56;
          v9 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                           (char *)v50 + 16,
                           v13,
                           &v71);
          v55 = v9;
        }
        catch ( ATL::CAtlException *v78 )
        {
          v26 = (int *)v78;
          if ( *(_DWORD *)v78 == -1073741571 )
            _o__resetstkoflw();
          Converter = *v26;
          if ( *v26 < 0 )
          {
            if ( v56 )
              (**v56)(v56, 1LL);
            v56 = 0LL;
            if ( v63 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
            if ( v54 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
            if ( !v51 )
              goto LABEL_252;
            goto LABEL_251;
          }
          v9 = v55;
          v14 = v72;
          v13 = v70;
          v16 = v65;
          v50 = v62;
        }
        v56 = 0LL;
        v34 = *((_DWORD *)v52 + 6);
        v35 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 40LL))(v59);
        Converter = CProcessNode::CreateDummyProcessNode(v34, v35, &v56);
        if ( Converter >= 0 )
        {
          Converter = 0;
          try
          {
            v73 = v56;
            v1 = v50;
            v55 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                              (char *)v50 + 16,
                              v9,
                              &v73);
          }
          catch ( ATL::CAtlException *v79 )
          {
            v27 = (int *)v79;
            if ( *(_DWORD *)v79 == -1073741571 )
              _o__resetstkoflw();
            Converter = *v27;
            if ( *v27 < 0 )
            {
              if ( v56 )
                (**v56)(v56, 1LL);
              v56 = 0LL;
              if ( v63 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
              if ( v54 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
              if ( !v51 )
                goto LABEL_252;
LABEL_251:
              ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
LABEL_252:
              if ( v66 )
                (**v66)(v66, 1LL);
              v1 = v62;
              goto LABEL_57;
            }
            v13 = v70;
            v16 = v65;
            v1 = v62;
            v50 = v62;
          }
          v56 = 0LL;
          *((_DWORD *)v1 + 33) |= 6u;
          *(_DWORD *)(v16 + 52) = 0;
          v9 = v13;
          v56 = 0LL;
          if ( v63 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
          v12 = v52;
          goto LABEL_22;
        }
      }
      if ( v56 )
        (**v56)(v56, 1LL);
      v56 = 0LL;
      v15 = 1;
    }
    if ( v63 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
LABEL_42:
    if ( Converter < 0 )
    {
      if ( Converter == -2147024882 )
      {
        if ( v54 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
        if ( v51 )
          ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
        v1 = v50;
        goto LABEL_57;
      }
LABEL_203:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          24LL,
          &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
          v16 + 8);
      }
      v1 = v50;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v50 + 29) + 32LL))(
             *((_QWORD *)v50 + 29),
             *(_QWORD *)(v16 + 40)) >= 0 )
      {
        if ( Converter != -2005073917 )
        {
          v49 = 1;
          v57 = *(_DWORD *)(v16 + 4);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v50 + 16, v13);
        v12 = v52;
        goto LABEL_22;
      }
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      if ( !v51 )
        goto LABEL_57;
LABEL_246:
      ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
      goto LABEL_57;
    }
    goto LABEL_16;
  }
  ppv = (LPVOID *)(v16 + 40);
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)v50 + 29) + 24LL))(
          *((_QWORD *)v50 + 29),
          v16 + 8,
          *(unsigned int *)(v16 + 4),
          *((_QWORD *)v50 + 23));
  Converter = v17;
  if ( v17 < 0 )
  {
    if ( v17 == -2147024882 )
    {
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      if ( v51 )
        ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
      v1 = v50;
      goto LABEL_57;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22LL,
        &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
        v16 + 8);
    }
    v1 = v50;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v50 + 16, v13);
    v30 = *(_DWORD *)(v16 + 4);
    v31 = v49;
    if ( v30 )
      v31 = 1;
    v49 = v31;
    if ( !v30 )
      v30 = v57;
    v57 = v30;
    v12 = v52;
    goto LABEL_22;
  }
  if ( !*(_DWORD *)(v16 + 4) )
    goto LABEL_15;
  v60 = 0LL;
  Converter = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                &v69);
  if ( Converter < 0 )
  {
    if ( v60 )
      ((void (__fastcall *)(struct IMMDevice *))v60->lpVtbl->Release)(v60);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v51 )
      ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
    v1 = v50;
    goto LABEL_57;
  }
  Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v69 + 40LL))(
                v69,
                *((_QWORD *)v50 + 23),
                &v60);
  if ( Converter < 0 )
  {
    if ( v60 )
      ((void (__fastcall *)(struct IMMDevice *))v60->lpVtbl->Release)(v60);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v51 )
      ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
    v1 = v50;
    goto LABEL_57;
  }
  v76 = *(struct _GUID *)(v16 + 24);
  v22 = InitializeSystemEffectsInterface(
          v60,
          *(struct IAudioProcessingObject **)(v16 + 40),
          (struct _GUID *)(v16 + 8),
          &v76);
  Converter = v22;
  if ( v22 >= 0 )
  {
    if ( v60 )
      ((void (__fastcall *)(struct IMMDevice *))v60->lpVtbl->Release)(v60);
    goto LABEL_38;
  }
  if ( v22 == -2147024882 )
  {
    if ( v60 )
      ((void (__fastcall *)(struct IMMDevice *))v60->lpVtbl->Release)(v60);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v51 )
      ((void (__fastcall *)(struct IAudioMediaType *))v51->lpVtbl->Release)(v51);
    v1 = v50;
    goto LABEL_57;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, v16 + 8);
  }
  v1 = v50;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v50 + 29) + 32LL))(
         *((_QWORD *)v50 + 29),
         *(_QWORD *)(v16 + 40)) >= 0 )
  {
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v50 + 16, v13);
    v49 = 1;
    v57 = *(_DWORD *)(v16 + 4);
    if ( v60 )
      ((void (__fastcall *)(struct IMMDevice *))v60->lpVtbl->Release)(v60);
    v12 = v52;
    goto LABEL_22;
  }
  if ( v60 )
    ((void (__fastcall *)(struct IMMDevice *))v60->lpVtbl->Release)(v60);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v51 )
    goto LABEL_246;
LABEL_57:
  if ( !v49 || (v46 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v57, 0, 0, (__int64)ppv), v46 >= 0) )
  {
LABEL_58:
    v24 = WPP_GLOBAL_Control;
    goto LABEL_59;
  }
  v24 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
        (unsigned int)v46);
      goto LABEL_58;
    }
LABEL_59:
    if ( v24 != &WPP_GLOBAL_Control && (*((_DWORD *)v24 + 7) & 0x20000) != 0 && *((_BYTE *)v24 + 25) >= 4u )
    {
      v47 = "SUCCEEDED";
      if ( Converter < 0 )
        v47 = "FAILED";
      WPP_SF_qs(v24[2], 26, v3, (_DWORD)v1, (__int64)v47);
      v24 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v24 != &WPP_GLOBAL_Control && (*((_DWORD *)v24 + 7) & 0x20000) != 0 && *((_BYTE *)v24 + 25) >= 2u )
      WPP_SF_D(v24[2], 27LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsRightLeft", 0x66Du, Converter);
  }
  if ( v68 )
    ((void (__fastcall *)(struct IAudioMediaType *))v68->lpVtbl->Release)(v68);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v69 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v69 + 16LL))(v69);
  if ( v53 )
    ((void (__fastcall *)(struct IAudioMediaType *))v53->lpVtbl->Release)(v53);
  return (unsigned int)Converter;
}
