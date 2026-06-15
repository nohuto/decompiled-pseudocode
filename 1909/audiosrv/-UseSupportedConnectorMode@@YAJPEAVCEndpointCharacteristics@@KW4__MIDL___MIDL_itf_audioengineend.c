/*
 * XREFs of ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180014940
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000BC68 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18000DFA4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180042A5C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800554F4 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180064290 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_fc3605736e56826b7aec399cc400cd0b___ @ 0x1800E3A70 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800E3A70.c)
 *     ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800E420C (-AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180114DC4 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180115590 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18011736C (-GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall UseSupportedConnectorMode(
        struct CEndpointCharacteristics *a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        int a5,
        bool *a6)
{
  struct _GUID *v6; // r12
  __int64 v7; // r14
  int v8; // r13d
  CEndpointCharacteristics *v9; // rsi
  bool *v10; // r15
  BOOL v11; // ebx
  __int64 v12; // rcx
  char *v13; // r15
  struct _RTL_CRITICAL_SECTION *v14; // r13
  volatile signed __int32 **v15; // rdi
  volatile signed __int32 *v16; // rbx
  int v17; // esi
  int v18; // r12d
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rax
  volatile signed __int32 **v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  volatile signed __int32 **v25; // r14
  struct _RTL_CRITICAL_SECTION *v26; // rcx
  char *v27; // r13
  struct SystemEffectDescriptor *v28; // rdi
  struct _RTL_CRITICAL_SECTION *v29; // rbx
  char *v30; // rsi
  __int64 v31; // r14
  int v32; // r15d
  int v33; // r15d
  char *v34; // r15
  volatile signed __int32 **v35; // rbx
  volatile signed __int32 *v36; // rdi
  int v37; // esi
  int v38; // r13d
  __int64 v39; // r14
  char *v40; // rdx
  __int64 v41; // rax
  volatile signed __int32 **v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rsi
  volatile signed __int32 **v45; // r14
  char *v46; // rax
  int v47; // edx
  int v48; // r8d
  __int64 v49; // r9
  __int64 v50; // rax
  SystemEffectChainDescriptor **v52; // rax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // rdx
  SystemEffectChainDescriptor **v57; // rax
  int v58; // eax
  char *v59; // rdi
  __int64 v60; // r9
  __int64 v61; // rdx
  SystemEffectChainDescriptor **v62; // rax
  int v63; // eax
  int v64; // eax
  unsigned int v65; // ebx
  int v66; // eax
  __int64 v67; // r9
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v72; // edx
  __int64 v73; // rbx
  __int64 v74; // rsi
  int AvailableConnectorCount; // eax
  struct _GUID v76; // xmm0
  unsigned int v77; // eax
  LPVOID v78; // rbx
  unsigned int v79; // eax
  char v80; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v81[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v82; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 **v84; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+48h] [rbp-B8h]
  volatile signed __int32 **v86; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+58h] [rbp-A8h]
  __int64 v88; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v89[24]; // [rsp+68h] [rbp-98h] BYREF
  char *v90; // [rsp+80h] [rbp-80h] BYREF
  __int64 v91; // [rsp+88h] [rbp-78h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v92; // [rsp+90h] [rbp-70h]
  int v93; // [rsp+94h] [rbp-6Ch]
  char *v94; // [rsp+98h] [rbp-68h]
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE *v96; // [rsp+B0h] [rbp-50h]
  CEndpointCharacteristics *v97; // [rsp+B8h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v99; // [rsp+C8h] [rbp-38h]
  bool *v100; // [rsp+D0h] [rbp-30h]
  struct _GUID *v101; // [rsp+D8h] [rbp-28h]
  struct _GUID v102; // [rsp+E0h] [rbp-20h]
  __int64 v103; // [rsp+F0h] [rbp-10h]
  char *v104; // [rsp+F8h] [rbp-8h]
  _DWORD *v105; // [rsp+100h] [rbp+0h]
  char *v106; // [rsp+108h] [rbp+8h]
  struct _GUID v107; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v108; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v109; // [rsp+130h] [rbp+30h] BYREF
  __int128 v110; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v111; // [rsp+150h] [rbp+50h]
  char v112[80]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v103 = -2LL;
  v6 = a4;
  v101 = a4;
  v7 = a3;
  v92 = a3;
  v8 = a2;
  v93 = a2;
  v9 = a1;
  v97 = a1;
  v10 = a6;
  v100 = a6;
  v102 = *a4;
  if ( a3 == eHostProcessConnector )
  {
    v11 = 1;
    v12 = *((_QWORD *)a1 + 8);
    if ( v12 )
    {
      pvar[0] = 0LL;
      pvar[1] = 0LL;
      v96 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
             v12,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v11 = LODWORD(pvar[1]) == 0;
      }
      PropVariantClear(pvar);
      if ( !v11 )
      {
        v46 = (char *)v9 + 136;
        goto LABEL_78;
      }
    }
  }
  v94 = (char *)v9 + 96 * v7;
  v13 = v94 + 232;
  if ( !v94[284] )
    goto LABEL_40;
  v14 = (struct _RTL_CRITICAL_SECTION *)(v94 + 288);
  v99 = (struct _RTL_CRITICAL_SECTION *)(v94 + 288);
  EnterCriticalSection((LPCRITICAL_SECTION)(v94 + 288));
  v104 = v94 + 288;
  v15 = 0LL;
  v84 = 0LL;
  v16 = 0LL;
  v85 = 0LL;
  v17 = 0;
  v18 = 0;
  if ( *((int *)v94 + 68) <= 0 )
  {
LABEL_24:
    v24 = 0LL;
    if ( (int)v16 <= 0 )
    {
LABEL_29:
      if ( v15 )
      {
        if ( (int)v16 > 0 )
        {
          ++v15;
          v24 = (unsigned int)v16;
          do
          {
            v16 = *v15;
            if ( *v15 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_95:
              (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v16);
            }
            v15 += 2;
            --v24;
          }
          while ( v24 );
          v15 = v84;
        }
        free(v15);
      }
      if ( !v14 )
        goto LABEL_40;
    }
    else
    {
      v25 = v15;
      while ( 1 )
      {
        if ( (int)v24 < 0 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          goto LABEL_95;
        }
        if ( *((_BYTE *)*v25 + 20) )
        {
          v52 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  (__int64)&v84,
                                                  v24);
          v53 = SystemEffectChainDescriptor::Resolve(*v52, (struct SystemEffectDescriptor *)v13);
          if ( v53 < 0 )
            break;
        }
        v24 = (unsigned int)(v24 + 1);
        v25 += 2;
        if ( (int)v24 >= (int)v16 )
          goto LABEL_29;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v53);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v84);
      if ( !v14 )
        goto LABEL_40;
    }
    v26 = v14;
    goto LABEL_39;
  }
  v19 = 0LL;
  while ( 1 )
  {
    if ( v19 < 0 || v18 >= *((_DWORD *)v13 + 10) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18007C67BLL);
    }
    v20 = *((_QWORD *)v13 + 4);
    if ( (_DWORD)v16 != v17 )
      goto LABEL_18;
    if ( v17 )
    {
      v17 = 2 * (_DWORD)v16;
      if ( ((unsigned int)v16 & 0x40000000) != 0 )
        break;
    }
    else
    {
      v17 = 1;
    }
    if ( (unsigned __int64)v17 > 0x7FFFFFF )
      break;
    v21 = _o__recalloc(v15, v17, 16LL);
    v15 = (volatile signed __int32 **)v21;
    if ( !v21 )
      break;
    HIDWORD(v85) = v17;
    v84 = (volatile signed __int32 **)v21;
LABEL_18:
    v22 = &v15[2 * (int)v16];
    if ( v22 )
    {
      *v22 = 0LL;
      v22[1] = 0LL;
      v23 = *(_QWORD *)(v20 + v19 + 8);
      if ( v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
        v17 = HIDWORD(v85);
        LODWORD(v16) = v85;
        v15 = v84;
      }
      *v22 = *(volatile signed __int32 **)(v20 + v19);
      v22[1] = *(volatile signed __int32 **)(v20 + v19 + 8);
    }
    v16 = (volatile signed __int32 *)(unsigned int)((_DWORD)v16 + 1);
    LODWORD(v85) = (_DWORD)v16;
    ++v18;
    v19 += 16LL;
    if ( v18 >= *((_DWORD *)v13 + 10) )
    {
      v14 = (struct _RTL_CRITICAL_SECTION *)(v13 + 56);
      goto LABEL_24;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F6,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v84);
  v26 = v99;
  if ( v99 )
LABEL_39:
    LeaveCriticalSection(v26);
LABEL_40:
  v27 = v94;
  v28 = (struct SystemEffectDescriptor *)(v94 + 616);
  if ( !v94[668] )
    goto LABEL_46;
  v29 = (struct _RTL_CRITICAL_SECTION *)(v94 + 672);
  EnterCriticalSection((LPCRITICAL_SECTION)(v94 + 672));
  v105 = (_DWORD *)((char *)v28 + 56);
  v30 = 0LL;
  v90 = 0LL;
  v31 = 0LL;
  v91 = 0LL;
  v32 = 0;
  if ( *((int *)v28 + 10) > 0 )
  {
    while ( 1 )
    {
      v54 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v28 + 32, v32);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v90,
                            v54) )
        break;
      if ( ++v32 >= *((_DWORD *)v28 + 10) )
      {
        v31 = (unsigned int)v91;
        v30 = v90;
        goto LABEL_42;
      }
    }
    v55 = 2147942414LL;
    v56 = 502LL;
LABEL_101:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v56,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v55);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v90);
    if ( v28 != (struct SystemEffectDescriptor *)-56LL )
      goto LABEL_45;
    goto LABEL_46;
  }
LABEL_42:
  v33 = 0;
  if ( (int)v31 > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)&v90,
                                   v33)
                    + 20LL) )
      {
        v57 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                (__int64)&v90,
                                                v33);
        v58 = SystemEffectChainDescriptor::Resolve(*v57, v28);
        if ( v58 < 0 )
          break;
      }
      if ( ++v33 >= (int)v31 )
        goto LABEL_43;
    }
    v55 = (unsigned int)v58;
    v56 = 508LL;
    goto LABEL_101;
  }
LABEL_43:
  if ( v30 )
  {
    if ( (int)v31 > 0 )
    {
      v59 = v30;
      do
      {
        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v59);
        v59 += 16;
        --v31;
      }
      while ( v31 );
    }
    free(v30);
  }
  if ( v29 )
LABEL_45:
    LeaveCriticalSection(v29);
LABEL_46:
  v34 = v27 + 1000;
  if ( v27[1052] )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v27 + 1056));
    v106 = v27 + 1056;
    v35 = 0LL;
    v86 = 0LL;
    v36 = 0LL;
    v87 = 0LL;
    v37 = 0;
    v38 = 0;
    if ( *((int *)v34 + 10) > 0 )
    {
      v39 = 0LL;
      do
      {
        if ( v39 < 0 || v38 >= *((_DWORD *)v34 + 10) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18007C83ELL);
        }
        v40 = (char *)(v39 + *((_QWORD *)v34 + 4));
        v94 = v40;
        if ( (_DWORD)v36 == v37 )
        {
          if ( v37 )
          {
            v37 = 2 * (_DWORD)v36;
            if ( ((unsigned int)v36 & 0x40000000) != 0 )
              goto LABEL_112;
          }
          else
          {
            v37 = 1;
          }
          if ( (unsigned __int64)v37 > 0x7FFFFFF
            || (v41 = _o__recalloc(v35, v37, 16LL), (v35 = (volatile signed __int32 **)v41) == 0LL) )
          {
LABEL_112:
            v60 = 2147942414LL;
            v61 = 502LL;
            goto LABEL_114;
          }
          HIDWORD(v87) = v37;
          v86 = (volatile signed __int32 **)v41;
          v40 = v94;
        }
        v42 = &v35[2 * (int)v36];
        if ( v42 )
        {
          *v42 = 0LL;
          v42[1] = 0LL;
          v43 = *((_QWORD *)v40 + 1);
          if ( v43 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
            v37 = HIDWORD(v87);
            LODWORD(v36) = v87;
            v35 = v86;
          }
          *v42 = *(volatile signed __int32 **)v40;
          v42[1] = (volatile signed __int32 *)*((_QWORD *)v40 + 1);
        }
        v36 = (volatile signed __int32 *)(unsigned int)((_DWORD)v36 + 1);
        LODWORD(v87) = (_DWORD)v36;
        ++v38;
        v39 += 16LL;
      }
      while ( v38 < *((_DWORD *)v34 + 10) );
    }
    v44 = 0LL;
    if ( (int)v36 <= 0 )
    {
LABEL_67:
      if ( v35 )
      {
        if ( (int)v36 > 0 )
        {
          ++v35;
          v44 = (unsigned int)v36;
          do
          {
            v36 = *v35;
            if ( *v35 && _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_120:
              (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v36);
            }
            v35 += 2;
            --v44;
          }
          while ( v44 );
          v35 = v86;
        }
        free(v35);
      }
      if ( v34 != (char *)-56LL )
        goto LABEL_76;
    }
    else
    {
      v45 = v35;
      while ( 1 )
      {
        if ( (int)v44 < 0 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          goto LABEL_120;
        }
        if ( *((_BYTE *)*v45 + 20) )
        {
          v62 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  (__int64)&v86,
                                                  v44);
          v63 = SystemEffectChainDescriptor::Resolve(*v62, (struct SystemEffectDescriptor *)v34);
          if ( v63 < 0 )
            break;
        }
        v44 = (unsigned int)(v44 + 1);
        v45 += 2;
        if ( (int)v44 >= (int)v36 )
          goto LABEL_67;
      }
      v60 = (unsigned int)v63;
      v61 = 508LL;
LABEL_114:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v61,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v60);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v86);
      if ( v34 != (char *)-56LL )
LABEL_76:
        LeaveCriticalSection((LPCRITICAL_SECTION)(v34 + 56));
    }
  }
  LODWORD(v7) = v92;
  v9 = v97;
  v46 = (char *)v97 + 16 * v92 + 72;
  v10 = v100;
  v6 = v101;
  v8 = v93;
LABEL_78:
  v47 = 0;
  v48 = *((_DWORD *)v46 + 2);
  if ( v48 <= 0 )
    goto LABEL_84;
  v49 = *(_QWORD *)v46;
  while ( 1 )
  {
    v50 = *(_QWORD *)(v49 + 16LL * v47) - *(_QWORD *)&v102.Data1;
    if ( !v50 )
      v50 = *(_QWORD *)(v49 + 16LL * v47 + 8) - *(_QWORD *)v102.Data4;
    if ( !v50 )
      break;
    if ( ++v47 >= v48 )
      goto LABEL_84;
  }
  if ( v47 == -1 )
  {
LABEL_84:
    *v10 = 0;
    return 0LL;
  }
  *v10 = 1;
  if ( !a5 )
    return 0LL;
  if ( *((int *)v9 + 4 * (int)v7 + 392) <= 0 )
    return 0LL;
  v107 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( !(unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(v9, (unsigned int)v7, &v107) )
    return 0LL;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v64 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v9 + 2) + 40LL))(*((_QWORD *)v9 + 2), &pv);
  v65 = v64;
  if ( v64 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v64);
    goto LABEL_163;
  }
  v88 = 0LL;
  v66 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          pv,
          &v88);
  v65 = v66;
  if ( v66 < 0 )
  {
    v67 = (unsigned int)v66;
    v68 = 676LL;
    goto LABEL_160;
  }
  v80 = 0;
  v81[0] = 0;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v88 + 112LL))(v88, &lpCriticalSection);
  memset(v89, 0, sizeof(v89));
  v69 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v88 + 80LL))(v88, v89);
  v65 = v69;
  if ( v69 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v69);
    v70 = *(_QWORD *)v89;
    if ( *(_QWORD *)v89 )
    {
      v71 = *(_QWORD *)&v89[8];
      if ( *(_QWORD *)v89 != *(_QWORD *)&v89[8] )
      {
        do
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v70);
          v70 += 8LL;
        }
        while ( v70 != v71 );
        v70 = *(_QWORD *)v89;
      }
      std::_Deallocate<16,0>(v70, 8 * ((*(_QWORD *)&v89[16] - v70) >> 3));
      memset(v89, 0, sizeof(v89));
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_161;
  }
  pvar[0] = &v80;
  pvar[1] = v6;
  v96 = v81;
  v110 = *(_OWORD *)pvar;
  v111 = v81;
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_fc3605736e56826b7aec399cc400cd0b___(
    v112,
    *(_QWORD *)v89,
    *(_QWORD *)&v89[8],
    &v110);
  v73 = *(_QWORD *)v89;
  if ( *(_QWORD *)v89 )
  {
    v74 = *(_QWORD *)&v89[8];
    if ( *(_QWORD *)v89 != *(_QWORD *)&v89[8] )
    {
      do
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v73);
        v73 += 8LL;
      }
      while ( v73 != v74 );
      v73 = *(_QWORD *)v89;
    }
    std::_Deallocate<16,0>(v73, 8 * ((*(_QWORD *)&v89[16] - v73) >> 3));
    memset(v89, 0, sizeof(v89));
    v9 = v97;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v81[0] )
  {
LABEL_153:
    if ( v88 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
    if ( pv )
      CoTaskMemFree(pv);
    return 0LL;
  }
  AvailableConnectorCount = CEndpointCharacteristics::GetAvailableConnectorCount(v9, v72, &v82);
  v65 = AvailableConnectorCount;
  if ( AvailableConnectorCount >= 0 )
  {
    v76 = *v6;
    v108 = *v6;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)v9 + 2 * (int)v7 + 195,
                         &v108) == -1 )
    {
      if ( !v80 && v82 <= 1 )
      {
        v65 = -2004287478;
        v67 = 2290679818LL;
        v68 = 723LL;
        goto LABEL_160;
      }
    }
    else
    {
      v77 = v82;
      if ( v80 )
        v77 = ++v82;
      if ( v77 <= 1
        || (v109 = v76,
            v78 = pv,
            v79 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v9 + 56LL))(v9),
            !(unsigned int)AreResourcesAvailableForStream(v78, v79, &v109, (unsigned int)v7, v8, 0)) )
      {
        *v10 = 0;
      }
    }
    goto LABEL_153;
  }
  v67 = (unsigned int)AvailableConnectorCount;
  v68 = 696LL;
LABEL_160:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v68,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v67);
LABEL_161:
  if ( v88 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
LABEL_163:
  if ( pv )
    CoTaskMemFree(pv);
  return v65;
}
