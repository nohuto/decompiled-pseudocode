/*
 * XREFs of ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180027920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180004FE0 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180027480 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800C34B8 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18011571C (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180139B64 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18013B834 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 */

__int64 __fastcall CCompositeSystemEffect::Initialize(
        CCompositeSystemEffect *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  bool v9; // r15
  struct IMMDevice *v10; // rcx
  int v11; // esi
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  int v18; // ecx
  int v19; // r14d
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // r14d
  struct IAudioSystemEffects2 **v25; // r12
  __int64 v26; // rsi
  int v27; // eax
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // r8
  __int64 v29; // r15
  LPVOID *v30; // rdx
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // r15d
  __int64 v35; // rax
  LPVOID *v36; // rdx
  LPVOID v37; // rcx
  __int64 v38; // rcx
  struct IAudioProcessingObject **v39; // rdi
  struct IAudioProcessingObject **v40; // rsi
  struct IAudioProcessingObject *v41; // rcx
  __int64 *v43; // rbx
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rdx
  struct IAudioProcessingObject *v49; // rdx
  struct IAudioSystemEffects2 **p_pv; // rax
  unsigned int v51; // ebx
  char *v52; // r15
  int v53; // r13d
  int v54; // r12d
  __int64 v55; // rax
  char *v56; // rcx
  int v57; // ebx
  int v58; // edi
  int v59; // esi
  int v60; // r14d
  _DWORD *v61; // rax
  LPVOID v62; // rcx
  int v63; // eax
  unsigned int v64; // edi
  int v65; // eax
  unsigned int v66; // ebx
  const char *pvData; // [rsp+28h] [rbp-99h]
  LPDWORD pcbData; // [rsp+30h] [rbp-91h]
  int v69; // [rsp+50h] [rbp-71h]
  unsigned __int8 v70; // [rsp+80h] [rbp-41h]
  LPVOID pv; // [rsp+88h] [rbp-39h] BYREF
  __int64 v72; // [rsp+90h] [rbp-31h] BYREF
  int v73; // [rsp+98h] [rbp-29h]
  char *v74; // [rsp+A0h] [rbp-21h] BYREF
  DWORD v75; // [rsp+A8h] [rbp-19h] BYREF
  int v76; // [rsp+ACh] [rbp-15h] BYREF
  struct _GUID v77; // [rsp+B0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]
  __int64 (__fastcall ***v79)(_QWORD, GUID *, __int64 *); // [rsp+110h] [rbp+4Fh] BYREF
  __int64 v80; // [rsp+118h] [rbp+57h] BYREF
  struct _GUID *v81; // [rsp+120h] [rbp+5Fh]
  int v82; // [rsp+128h] [rbp+67h]

  v82 = a4;
  v81 = a3;
  v75 = 4;
  v9 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"LoadSystemEffectInAudioSrv",
         0x18u,
         0LL,
         &v76,
         &v75)
    || !v76;
  v10 = (struct IMMDevice *)*((_QWORD *)this + 13);
  if ( v10 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
      v10 = (struct IMMDevice *)*((_QWORD *)this + 13);
    }
    *((_QWORD *)this + 13) = a2;
    if ( v10 )
      ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
  }
  v11 = 0;
  if ( *((int *)this + 16) > 0 )
  {
    while ( 1 )
    {
      v80 = 0LL;
      if ( v9 )
      {
        lpVtbl = a2->lpVtbl;
        pv = 0LL;
        v13 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))lpVtbl->GetId)(a2, &pv);
        v14 = v13;
        if ( v13 < 0 )
        {
          v48 = 772LL;
LABEL_81:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v48,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v13);
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_83;
        }
        v15 = v80;
        if ( v80 )
        {
          v80 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( v11 < 0 || v11 >= *((_DWORD *)this + 16) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18009310BLL);
        }
        LODWORD(v79) = *((_DWORD *)this + 10);
        v16 = *((_QWORD *)this + 7) + 16LL * v11;
        v74 = (char *)pv;
        v13 = Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
                &v80,
                (__int64 *)&v74,
                (unsigned int *)&v79,
                v16);
        v14 = v13;
        if ( v13 < 0 )
        {
          v48 = 774LL;
          goto LABEL_81;
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      else
      {
        v79 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
        v44 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)this + 56, v11);
        pvData = (const char *)&v79;
        v45 = CSystemEffectWrapper::Create(v44, a2, 0LL, *((unsigned int *)this + 10));
        v14 = v45;
        if ( v45 < 0 )
        {
          v47 = 760LL;
          goto LABEL_76;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
        v45 = (**v79)(v79, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v80);
        v14 = v45;
        if ( v45 < 0 )
        {
          v47 = 762LL;
LABEL_76:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v47,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v45);
          goto LABEL_77;
        }
        v72 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
        v46 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v80)(
                v80,
                &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
                &v72);
        v14 = v46;
        if ( v46 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FD,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v46);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
LABEL_77:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
          goto LABEL_83;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
      }
      v17 = *((_DWORD *)this + 20);
      v18 = *((_DWORD *)this + 21);
      if ( v17 == v18 )
      {
        if ( v18 )
        {
          v19 = 2 * v17;
          if ( (v17 & 0x40000000) != 0 )
            goto LABEL_72;
        }
        else
        {
          v19 = 1;
        }
        if ( (unsigned __int64)v19 > 0xFFFFFFF || (v20 = _o__recalloc(*((_QWORD *)this + 9), v19, 8LL)) == 0 )
        {
LABEL_72:
          v14 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x309,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
LABEL_83:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v80);
          return v14;
        }
        *((_QWORD *)this + 9) = v20;
        v17 = *((_DWORD *)this + 20);
        *((_DWORD *)this + 21) = v19;
      }
      v21 = (_QWORD *)(*((_QWORD *)this + 9) + 8LL * v17);
      if ( !v21 )
        goto LABEL_27;
      *v21 = v80;
      v22 = v80;
      if ( v80 )
        break;
LABEL_28:
      ++*((_DWORD *)this + 20);
      if ( v22 )
      {
        v80 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      if ( ++v11 >= *((_DWORD *)this + 16) )
        goto LABEL_31;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 8LL))(v80);
LABEL_27:
    v22 = v80;
    goto LABEL_28;
  }
LABEL_31:
  v23 = *((_DWORD *)this + 20);
  v24 = 0;
  v73 = 0;
  v25 = a7;
  if ( v23 <= 0 )
  {
LABEL_53:
    if ( v23 != 1 )
    {
      if ( a6 )
      {
        v63 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *))this)(
                this,
                &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10);
        v64 = v63;
        if ( v63 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x32F,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v63);
          return v64;
        }
      }
      if ( v25 )
      {
        v65 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioSystemEffects2 **))this)(
                this,
                &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                v25);
        v66 = v65;
        if ( v65 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x332,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v65);
          return v66;
        }
      }
      return 0LL;
    }
    v39 = a6;
    if ( a6 )
    {
      if ( *((int *)this + 20) <= 0 )
        goto LABEL_94;
      v40 = (struct IAudioProcessingObject **)*((_QWORD *)this + 9);
      v41 = *v40;
      if ( *v40 )
      {
        ((void (__fastcall *)(struct IAudioProcessingObject *))v41->lpVtbl->AddRef)(v41);
        v41 = *v40;
      }
      *v39 = v41;
    }
    if ( !v25 )
      return 0LL;
    if ( *((int *)this + 24) > 0 )
    {
      v43 = (__int64 *)*((_QWORD *)this + 11);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v43);
      *v25 = (struct IAudioSystemEffects2 *)*v43;
      return 0LL;
    }
LABEL_94:
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x180093336LL);
  }
  v26 = 0LL;
  while ( 1 )
  {
    v72 = 0LL;
    pv = 0LL;
    if ( v24 < 0 || v24 >= *((_DWORD *)this + 20) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180093320LL);
    }
    v27 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v26 + *((_QWORD *)this + 9)))(
            *(_QWORD *)(v26 + *((_QWORD *)this + 9)),
            &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6,
            &v72);
    v28 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
    v29 = 2LL * v24;
    v79 = v28;
    v77 = *v81;
    if ( v27 < 0 )
    {
      v49 = *(struct IAudioProcessingObject **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                 (char *)this + 72,
                                                 (unsigned int)v24);
      p_pv = (struct IAudioSystemEffects2 **)&pv;
      if ( !v25 )
        p_pv = 0LL;
      v31 = InitializeSystemEffectsInterface(a2, v49, (struct _GUID *)&v79[v29], &v77, v82, a5, p_pv);
    }
    else
    {
      v30 = &pv;
      if ( !v25 )
        v30 = 0LL;
      LODWORD(pvData) = a5;
      v31 = (*(__int64 (__fastcall **)(__int64, struct IMMDevice *, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), struct _GUID *, int, const char *, LPVOID *))(*(_QWORD *)v72 + 24LL))(
              v72,
              a2,
              &v28[v29],
              &v77,
              v82,
              pvData,
              v30);
    }
    LODWORD(v74) = v31;
    if ( v31 < 0 )
      break;
    v32 = *((_DWORD *)this + 24);
    v33 = *((_DWORD *)this + 25);
    if ( v32 == v33 )
    {
      if ( v33 )
      {
        v34 = 2 * v32;
        if ( (v32 & 0x40000000) != 0 )
          goto LABEL_88;
      }
      else
      {
        v34 = 1;
      }
      if ( (unsigned __int64)v34 > 0xFFFFFFF || (v35 = _o__recalloc(*((_QWORD *)this + 11), v34, 8LL)) == 0 )
      {
LABEL_88:
        v51 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31D,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_90;
      }
      *((_QWORD *)this + 11) = v35;
      v32 = *((_DWORD *)this + 24);
      *((_DWORD *)this + 25) = v34;
    }
    v36 = (LPVOID *)(*((_QWORD *)this + 11) + 8LL * v32);
    if ( !v36 )
      goto LABEL_62;
    *v36 = pv;
    v37 = pv;
    if ( pv )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 8LL))(pv);
LABEL_62:
      v37 = pv;
    }
    ++*((_DWORD *)this + 24);
    if ( v37 )
    {
      pv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v72;
    if ( v72 )
    {
      v72 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v23 = *((_DWORD *)this + 20);
    ++v24;
    v26 += 8LL;
    v73 = v24;
    if ( v24 >= v23 )
      goto LABEL_53;
  }
  v52 = (char *)this + 56;
  *(_QWORD *)&v77.Data1 = (char *)this + 56;
  LOBYTE(v79) = *(_BYTE *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)this + 56,
                             v24)
                         + 15);
  LOBYTE(v80) = *(_BYTE *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)this + 56,
                             v24)
                         + 14);
  v70 = *(_BYTE *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)this + 56, v24) + 13);
  v53 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)this + 56,
                               v24)
                           + 12);
  v54 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)this + 56,
                               v24)
                           + 11);
  v55 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)this + 56, v24);
  v56 = (char *)this + 56;
  v57 = *(unsigned __int8 *)(v55 + 10);
  v58 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v56, v24)
                           + 9);
  v59 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v52, v24)
                           + 8);
  v60 = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                (__int64)v52,
                                v24)
                            + 6);
  LODWORD(v52) = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         (__int64)v52,
                                         v73)
                                     + 4);
  v61 = (_DWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*(__int64 *)&v77.Data1, v73);
  v69 = v57;
  v51 = (unsigned int)v74;
  LODWORD(pcbData) = (_DWORD)v52;
  LODWORD(pvData) = *v61;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x321,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v74,
    (int)"SysFxInitializationFailure{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    pvData,
    pcbData,
    v60,
    v59,
    v58,
    v69,
    v54,
    v53,
    v70,
    (unsigned __int8)v80,
    (unsigned __int8)v79);
LABEL_90:
  v62 = pv;
  if ( pv )
  {
    pv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v62 + 16LL))(v62);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
  return v51;
}
