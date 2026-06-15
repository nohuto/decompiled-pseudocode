/*
 * XREFs of ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18000B340
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18000B2A0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800082A8 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000B00C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x18000C350 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E1B0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180017BB0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18003E8BC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180056C84 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800632A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006B8F7 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800BB7C8 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C1EC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801152C4 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180115A90 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180117478 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::GetProcessingPeriod(
        CEndpointCharacteristics *this,
        int a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // r15
  __int64 *v5; // rsi
  int v6; // eax
  CEndpointCharacteristics *v7; // r13
  int v8; // ebx
  int v10; // esi
  BOOL v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  char *v15; // r12
  int v16; // r14d
  int v17; // edi
  __int64 v18; // rax
  int v19; // edi
  SystemEffectChainDescriptor **v20; // rax
  int v21; // eax
  char *v22; // rdi
  __int64 v23; // rsi
  int v24; // edi
  int v25; // esi
  int v26; // r12d
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  SystemEffectChainDescriptor **v32; // rax
  int v33; // eax
  volatile signed __int32 **v34; // rsi
  __int64 v35; // r14
  volatile signed __int32 *v36; // rdi
  int v37; // ecx
  int v38; // edx
  GUID *DefaultConnectorProcessingModeInternal; // rax
  struct _GUID v40; // xmm6
  int ProposedConnectorFormatForProcessingMode; // edi
  __int64 v42; // rcx
  __int64 *v43; // r11
  int v44; // edx
  int v45; // ecx
  __int64 v46; // r9
  int v47; // ecx
  __int64 v48; // r9
  GUID v49; // xmm0
  void *v50; // rdx
  int v51; // ecx
  int v52; // edx
  GUID *v53; // rax
  __int64 v54; // r8
  char *v55; // r9
  GUID v56; // kr00_16
  signed int v57; // eax
  char *v58; // r10
  signed int v59; // edx
  unsigned __int16 *v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // r13
  int v63; // r15d
  __int64 v64; // r14
  int *v65; // r12
  unsigned __int16 *v66; // rcx
  double v67; // xmm1_8
  __int64 v68; // rsi
  int Key; // eax
  unsigned int v70; // edx
  int v71; // r11d
  __int16 v72; // si
  unsigned __int16 v73; // r8
  unsigned __int16 v74; // r9
  int v75; // r9d
  __int16 v76; // r10
  unsigned __int16 v77; // r8
  unsigned __int16 v78; // r9
  int v79; // eax
  __int16 v80; // cx
  int v81; // edi
  __int64 v82; // rcx
  __int64 v83; // rdx
  unsigned __int64 v84; // r9
  int v85; // eax
  __int64 v86; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v87; // [rsp+40h] [rbp-C8h]
  __int64 v88; // [rsp+48h] [rbp-C0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B8h]
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v91; // [rsp+60h] [rbp-A8h]
  char *v92; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v93; // [rsp+70h] [rbp-98h]
  PROPVARIANT v94; // [rsp+78h] [rbp-90h] BYREF
  __int64 v95; // [rsp+80h] [rbp-88h]
  __int64 *v96; // [rsp+88h] [rbp-80h]
  int v97; // [rsp+90h] [rbp-78h]
  CEndpointCharacteristics *v98; // [rsp+98h] [rbp-70h]
  char *v99; // [rsp+A0h] [rbp-68h]
  __int64 *v100; // [rsp+A8h] [rbp-60h]
  char *v101; // [rsp+B0h] [rbp-58h]
  LPVOID *p_pv; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v103; // [rsp+C0h] [rbp-48h] BYREF
  char v104; // [rsp+C8h] [rbp-40h]
  PROPVARIANT pvar; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-30h]
  __int64 v107; // [rsp+E0h] [rbp-28h]
  PROPVARIANT v108; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v109; // [rsp+F0h] [rbp-18h]
  __int64 v110; // [rsp+F8h] [rbp-10h]
  __int64 *v111; // [rsp+100h] [rbp-8h]
  __m256i v112; // [rsp+108h] [rbp+0h] BYREF
  GUID v113; // [rsp+128h] [rbp+20h]
  struct _GUID v114; // [rsp+138h] [rbp+30h]
  __int64 v115; // [rsp+148h] [rbp+40h]
  struct _GUID v116; // [rsp+158h] [rbp+50h] BYREF
  __m256i v117; // [rsp+168h] [rbp+60h] BYREF
  __int128 Buf2; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v119[24]; // [rsp+198h] [rbp+90h]
  __int128 Buf1; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v121[24]; // [rsp+1C0h] [rbp+B8h]
  GUID v122; // [rsp+1D8h] [rbp+D0h]
  GUID v123; // [rsp+1E8h] [rbp+E0h] BYREF
  GUID v124; // [rsp+1F8h] [rbp+F0h] BYREF
  struct _GUID v125; // [rsp+208h] [rbp+100h] BYREF
  GUID v126; // [rsp+218h] [rbp+110h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+280h] [rbp+178h]

  v115 = -2LL;
  v4 = a4;
  v100 = a4;
  v5 = a3;
  v111 = a3;
  v6 = a2;
  v97 = a2;
  v7 = this;
  v98 = this;
  v8 = 0;
  if ( a3 )
  {
    if ( !a4 )
      goto LABEL_130;
  }
  else if ( !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FE2,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  pv = 0LL;
  v113 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v10 = 1;
  v11 = 1;
  v12 = *((_QWORD *)this + 8);
  v13 = 136LL;
  if ( !v12 )
    goto LABEL_11;
  pvar = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
         v12,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v11 = v106 == 0;
  }
  PropVariantClear(&pvar);
  if ( v11 )
  {
LABEL_11:
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v7 + 232));
    if ( *((_BYTE *)v7 + 668) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 672));
      v101 = (char *)v7 + 672;
      v15 = 0LL;
      v92 = 0LL;
      v16 = 0;
      v93 = 0LL;
      v17 = 0;
      if ( *((int *)v7 + 164) <= 0 )
      {
LABEL_16:
        v19 = 0;
        if ( v16 <= 0 )
        {
LABEL_20:
          if ( v15 )
          {
            if ( v16 > 0 )
            {
              v22 = v15;
              v23 = (unsigned int)v16;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v22);
                v22 += 16;
                --v23;
              }
              while ( v23 );
            }
            free(v15);
          }
        }
        else
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         (__int64)&v92,
                                         v19)
                          + 20LL) )
            {
              v20 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      (__int64)&v92,
                                                      v19);
              v21 = SystemEffectChainDescriptor::Resolve(*v20, (CEndpointCharacteristics *)((char *)v7 + 616));
              if ( v21 < 0 )
                break;
            }
            if ( ++v19 >= v16 )
              goto LABEL_20;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FC,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v21);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v92);
        }
      }
      else
      {
        while ( 1 )
        {
          v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v7 + 648, v17);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v92,
                                v18) )
            break;
          if ( ++v17 >= *((_DWORD *)v7 + 164) )
          {
            v16 = v93;
            v15 = v92;
            goto LABEL_16;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F6,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v92);
      }
      if ( v7 != (CEndpointCharacteristics *)-672LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 672));
    }
    v7 = (CEndpointCharacteristics *)((char *)v7 + 1000);
    if ( *((_BYTE *)v7 + 52) )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v7 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 56));
      v99 = (char *)v7 + 56;
      v13 = 0LL;
      v86 = 0LL;
      v24 = 0;
      v87 = 0LL;
      v25 = 0;
      v26 = 0;
      if ( *((int *)v7 + 10) > 0 )
      {
        v27 = 0LL;
        do
        {
          if ( v27 < 0 || v26 >= *((_DWORD *)v7 + 10) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            __debugbreak();
          }
          v28 = *((_QWORD *)v7 + 4);
          v91 = v28;
          if ( v24 == v25 )
          {
            if ( v25 )
            {
              v25 = 2 * v24;
              if ( (v24 & 0x40000000) != 0 )
                goto LABEL_88;
            }
            else
            {
              v25 = 1;
            }
            if ( (unsigned __int64)v25 > 0x7FFFFFF || (v29 = _o__recalloc(v13, v25, 16LL), (v13 = v29) == 0) )
            {
LABEL_88:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1F6,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL);
              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v86);
              goto LABEL_62;
            }
            HIDWORD(v87) = v25;
            v86 = v29;
            v28 = v91;
          }
          v30 = (_QWORD *)(v13 + 16LL * v24);
          if ( v30 )
          {
            *v30 = 0LL;
            v30[1] = 0LL;
            v31 = *(_QWORD *)(v27 + v28 + 8);
            if ( v31 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
              v25 = HIDWORD(v87);
              v24 = v87;
              v13 = v86;
            }
            *v30 = *(_QWORD *)(v27 + v28);
            v30[1] = *(_QWORD *)(v27 + v28 + 8);
          }
          LODWORD(v87) = ++v24;
          ++v26;
          v27 += 16LL;
        }
        while ( v26 < *((_DWORD *)v7 + 10) );
      }
      v10 = 0;
      if ( v24 > 0 )
      {
        v4 = (__int64 *)v13;
        while ( v10 >= 0 && v10 < v24 )
        {
          if ( *(_BYTE *)(*v4 + 20) )
          {
            v32 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    (__int64)&v86,
                                                    v10);
            v33 = SystemEffectChainDescriptor::Resolve(*v32, v7);
            if ( v33 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1FC,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)(unsigned int)v33);
              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v86);
              goto LABEL_62;
            }
          }
          ++v10;
          v4 += 2;
          if ( v10 >= v24 )
            goto LABEL_53;
        }
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_92;
      }
LABEL_53:
      if ( v13 )
      {
        if ( v24 > 0 )
        {
          v34 = (volatile signed __int32 **)(v13 + 8);
          v35 = (unsigned int)v24;
          do
          {
            v36 = *v34;
            if ( *v34 && _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v36);
            }
            v34 += 2;
            --v35;
          }
          while ( v35 );
          v13 = v86;
        }
        free((void *)v13);
      }
LABEL_62:
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
    v14 = 72LL;
    v10 = 1;
    v13 = 136LL;
    v7 = v98;
    v4 = v100;
  }
  else
  {
    v14 = 136LL;
  }
  v37 = 0;
  v38 = *(_DWORD *)((char *)v7 + v14 + 8);
  if ( v38 <= 0 )
    goto LABEL_68;
  while ( *(_OWORD *)(*(_QWORD *)((char *)v7 + v14) + 16LL * v37) != *(_OWORD *)&v113 )
  {
    if ( ++v37 >= v38 )
      goto LABEL_68;
  }
LABEL_92:
  if ( v37 != -1 )
  {
    v124 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    DefaultConnectorProcessingModeInternal = &v124;
    goto LABEL_69;
  }
LABEL_68:
  DefaultConnectorProcessingModeInternal = CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                             (__int64)v7,
                                             &v126,
                                             0,
                                             0);
LABEL_69:
  v40 = *DefaultConnectorProcessingModeInternal;
  *v4 = 0LL;
  p_pv = &pv;
  v103 = 0LL;
  v104 = 1;
  v116 = v40;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               v7,
                                               eHostProcessConnector,
                                               &v116,
                                               &v103);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    v42 = *((_QWORD *)v7 + 8);
    if ( !v42 )
      goto LABEL_75;
    v108 = 0LL;
    v109 = 0LL;
    v110 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v42 + 40LL))(
           v42,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v108) >= 0
      && (_WORD)v108 == 19 )
    {
      v10 = v109 == 0;
    }
    PropVariantClear(&v108);
    if ( v10 )
LABEL_75:
      v13 = 72LL;
    v43 = (__int64 *)((char *)v7 + v13);
    v44 = *(_DWORD *)((char *)v7 + v13 + 8);
    if ( v44 )
    {
      v45 = 0;
      if ( v44 <= 0 )
        goto LABEL_82;
      v46 = *v43;
      while ( *(_QWORD *)(v46 + 16LL * v45) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
           || *(_QWORD *)(v46 + 16LL * v45 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
      {
        if ( ++v45 >= v44 )
          goto LABEL_82;
      }
      if ( v45 == -1 )
      {
LABEL_82:
        v47 = 0;
        if ( v44 <= 0 )
          goto LABEL_87;
        v48 = *v43;
        while ( *(_QWORD *)(v48 + 16LL * v47) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
             || *(_QWORD *)(v48 + 16LL * v47 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
        {
          if ( ++v47 >= v44 )
            goto LABEL_87;
        }
        if ( v47 == -1 )
LABEL_87:
          v49 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v7 + v13, 0);
        else
          v49 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      else
      {
        v49 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v49 = GUID_00000000_0000_0000_0000_000000000000;
    }
    v112.m256i_i64[0] = (__int64)v7;
    v112.m256i_i32[2] = 0;
    *(GUID *)((char *)&v112.m256i_u64[1] + 4) = v49;
    v117 = v112;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
                                                 v7,
                                                 (__int64)&v117,
                                                 (__int64)&v103);
  }
  if ( v104 )
  {
    v50 = *p_pv;
    *p_pv = v103;
    if ( v50 )
      CoTaskMemFree(v50);
  }
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2027,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProposedConnectorFormatForProcessingMode);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FE7,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProposedConnectorFormatForProcessingMode);
    return (unsigned int)ProposedConnectorFormatForProcessingMode;
  }
  *v4 = 30000LL;
  v114 = v40;
  v51 = 0;
  v52 = *((_DWORD *)v7 + 354);
  if ( v52 <= 0 )
    goto LABEL_108;
  while ( *(_OWORD *)(*((_QWORD *)v7 + 175) + 16LL * v51) != *(_OWORD *)&v114 )
  {
    if ( ++v51 >= v52 )
      goto LABEL_108;
  }
  if ( v51 == -1 )
  {
LABEL_108:
    v125 = v40;
    v53 = &v125;
  }
  else
  {
    *(struct _GUID *)v112.m256i_i8 = v40;
    Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(
            (char *)v7 + 1400,
            &v112,
            *(_QWORD *)v114.Data4);
    if ( Key == -1 )
    {
      v123 = GUID_00000000_0000_0000_0000_000000000000;
      v53 = &v123;
    }
    else
    {
      if ( Key < 0 || Key >= *((_DWORD *)v7 + 354) )
      {
        ATL::_AtlRaiseException(0xC000008C, v70);
        __debugbreak();
      }
      v123 = *(GUID *)(*((_QWORD *)v7 + 176) + 16LL * Key);
      v53 = &v123;
    }
  }
  v122 = *v53;
  v56 = v122;
  v54 = *(_QWORD *)v56.Data4;
  v55 = (char *)*(_OWORD *)&v56;
  v99 = *(char **)&v122.Data1;
  if ( *(_OWORD *)&v122 == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
  {
    v122 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v55 = *(char **)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v99 = *(char **)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v54 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  }
  v57 = 0;
  LODWORD(v88) = 0;
  v58 = (char *)*((_QWORD *)v7 + 24);
  v101 = v58;
  v59 = *((_DWORD *)v58 + 2);
  LODWORD(lpCriticalSection) = v59;
  v60 = (unsigned __int16 *)pv;
  if ( v59 <= 0 )
    goto LABEL_127;
  v61 = 0LL;
  v91 = 0LL;
  while ( 1 )
  {
    if ( v61 < 0 || v57 >= v59 )
    {
      ATL::_AtlRaiseException(0xC000008C, v59);
      __debugbreak();
    }
    v62 = *(_QWORD *)(v61 + *(_QWORD *)v58);
    if ( *(char **)v62 == v55 && *(_QWORD *)(v62 + 8) == v54 )
    {
      v63 = 0;
      if ( *(int *)(v62 + 24) > 0 )
        break;
    }
LABEL_192:
    v57 = v88 + 1;
    LODWORD(v88) = v57;
    v61 += 8LL;
    v91 = v61;
    if ( v57 >= v59 )
      goto LABEL_126;
    v54 = *(_QWORD *)v122.Data4;
  }
  v64 = 0LL;
  while ( 1 )
  {
    if ( v64 < 0 || v63 >= *(_DWORD *)(v62 + 24) )
    {
      ATL::_AtlRaiseException(0xC000008C, v59);
      JUMPOUT(0x18000C1FFLL);
    }
    v65 = *(int **)(v64 + *(_QWORD *)(v62 + 16));
    v66 = *(unsigned __int16 **)v65;
    if ( !v60 )
    {
      if ( !v66 )
        goto LABEL_123;
      goto LABEL_190;
    }
    if ( !v66 )
      goto LABEL_190;
    v59 = *v60;
    if ( (_WORD)v59 == 0xFFFE )
    {
      if ( v60[8] != 22
        && (*((_QWORD *)v60 + 3) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
         || *((_QWORD *)v60 + 4) != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
        && (*((_QWORD *)v60 + 3) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
         || *((_QWORD *)v60 + 4) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
      {
        goto LABEL_190;
      }
      Buf1 = *(_OWORD *)v60;
      *(_OWORD *)v121 = *((_OWORD *)v60 + 1);
      *(_QWORD *)&v121[16] = *((_QWORD *)v60 + 4);
      *(_WORD *)v121 = 22;
      v71 = *(_DWORD *)&v121[4];
      v72 = Buf1;
    }
    else
    {
      if ( v60[8] && (((_WORD)v59 - 1) & 0xFFFD) != 0 )
        goto LABEL_190;
      v73 = v60[1];
      if ( (unsigned __int16)(v73 - 1) > 1u )
        goto LABEL_190;
      v74 = v60[7];
      if ( ((v74 - 8) & 0xFFE7) != 0 )
        goto LABEL_190;
      Buf1 = *(_OWORD *)v60;
      v72 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v121 = 22;
      *(_WORD *)&v121[2] = v74;
      *(GUID *)&v121[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v121[8] = (unsigned __int16)v59;
      v71 = (v73 == 1) + 3;
    }
    v59 = *v66;
    if ( (_WORD)v59 != 0xFFFE )
      break;
    if ( v66[8] == 22
      || *((_QWORD *)v66 + 3) == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
      && *((_QWORD *)v66 + 4) == *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4
      || *((_QWORD *)v66 + 3) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
      && *((_QWORD *)v66 + 4) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
    {
      Buf2 = *(_OWORD *)v66;
      *(_OWORD *)v119 = *((_OWORD *)v66 + 1);
      *(_QWORD *)&v119[16] = *((_QWORD *)v66 + 4);
      *(_WORD *)v119 = 22;
      v75 = *(_DWORD *)&v119[4];
      v76 = Buf2;
      goto LABEL_165;
    }
LABEL_190:
    ++v63;
    v64 += 8LL;
    if ( v63 >= *(_DWORD *)(v62 + 24) )
    {
      v61 = v91;
      v59 = (int)lpCriticalSection;
      v55 = v99;
      v58 = v101;
      goto LABEL_192;
    }
  }
  if ( v66[8] && (((_WORD)v59 - 1) & 0xFFFD) != 0 )
    goto LABEL_190;
  v77 = v66[1];
  if ( (unsigned __int16)(v77 - 1) > 1u )
    goto LABEL_190;
  v78 = v66[7];
  v76 = -2;
  if ( ((v78 - 8) & 0xFFE7) != 0 )
    goto LABEL_190;
  Buf2 = *(_OWORD *)v66;
  LOWORD(Buf2) = -2;
  *(_WORD *)v119 = 22;
  *(_WORD *)&v119[2] = v78;
  *(GUID *)&v119[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
  *(_DWORD *)&v119[8] = (unsigned __int16)v59;
  v75 = (v77 == 1) + 3;
LABEL_165:
  if ( WORD1(Buf1) )
  {
    v59 = WORD1(Buf2);
  }
  else
  {
    v59 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v79 = DWORD1(Buf2);
  }
  else
  {
    v79 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v80 = HIWORD(Buf2);
  }
  else
  {
    v80 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v71 )
    v75 = 0;
  *(_DWORD *)&v119[4] = v75;
  if ( !v72 )
  {
    v76 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !(_WORD)v59 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v79 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v80 )
    HIDWORD(Buf1) = 0;
  if ( !v75 )
    v71 = 0;
  *(_DWORD *)&v121[4] = v71;
  if ( !v76 )
    LOWORD(Buf1) = 0;
  if ( *(_OWORD *)&v121[8] != *(_OWORD *)&v119[8] || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_190;
LABEL_123:
  v67 = (double)v65[4] * 10000000.0 / (double)*((int *)v60 + 1) + 0.5;
  v68 = 30000LL;
  if ( (unsigned int)(int)v67 < 0x7530uLL )
    v68 = (unsigned int)(int)v67;
  *v100 = v68;
LABEL_126:
  v7 = v98;
LABEL_127:
  pv = 0LL;
  if ( v60 )
    CoTaskMemFree(v60);
  v5 = v111;
  v6 = v97;
LABEL_130:
  if ( !v5 )
    return 0LL;
  if ( v6 )
  {
    *v5 = 100000LL;
    return 0LL;
  }
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v81 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v7 + 5) + 40LL))(
          *((_QWORD *)v7 + 5),
          &PKEY_AudioEngine_Period,
          &v94);
  if ( v81 < 0 )
  {
LABEL_201:
    v83 = 8183LL;
  }
  else
  {
    while ( (_WORD)v94 == 65 )
    {
      if ( (_DWORD)v95 != 8 )
        goto LABEL_209;
      v82 = *v96;
      *v5 = *v96;
      if ( v82 )
        goto LABEL_208;
      if ( (unsigned int)++v8 >= 0x7D0 )
      {
        v81 = -2147467259;
        v83 = 8196LL;
        goto LABEL_202;
      }
      Sleep(5u);
      PropVariantClear(&v94);
      v94 = 0LL;
      v95 = 0LL;
      v96 = 0LL;
      v81 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v7 + 5) + 40LL))(
              *((_QWORD *)v7 + 5),
              &PKEY_AudioEngine_Period,
              &v94);
      if ( v81 < 0 )
        goto LABEL_201;
    }
    if ( !(_WORD)v94 )
    {
      *v5 = 100000LL;
      v85 = CEndpointCharacteristics::SetProcessingPeriod(v7, v5);
      v81 = v85;
      if ( v85 < 0 )
      {
        v84 = (unsigned int)v85;
        v83 = 8205LL;
        goto LABEL_203;
      }
LABEL_208:
      PropVariantClear(&v94);
      return 0LL;
    }
LABEL_209:
    v81 = -2147024809;
    v83 = 8209LL;
  }
LABEL_202:
  v84 = (unsigned int)v81;
LABEL_203:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v83,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v84);
  PropVariantClear(&v94);
  return (unsigned int)v81;
}
