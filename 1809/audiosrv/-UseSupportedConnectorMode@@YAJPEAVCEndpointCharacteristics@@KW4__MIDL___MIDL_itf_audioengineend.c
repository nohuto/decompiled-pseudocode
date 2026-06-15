/*
 * XREFs of ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x1800376D0
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800161C0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004B290 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18004E2C8 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_fc3605736e56826b7aec399cc400cd0b___ @ 0x1800D8880 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800D8880.c)
 *     ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800D8FDC (-AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180107658 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180108730 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18010A148 (-GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
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
  CEndpointCharacteristics *v8; // rsi
  bool *v9; // r15
  BOOL v10; // ebx
  __int64 v11; // rcx
  char *v12; // r15
  struct _RTL_CRITICAL_SECTION *v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rsi
  struct _RTL_CRITICAL_SECTION *v17; // r12
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rax
  volatile signed __int32 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  volatile signed __int32 **v24; // rdi
  __int64 v25; // rsi
  volatile signed __int32 *v26; // rbx
  struct _RTL_CRITICAL_SECTION *v27; // rcx
  char *v28; // r13
  struct SystemEffectDescriptor *v29; // rdi
  struct _RTL_CRITICAL_SECTION *v30; // rbx
  char *v31; // rsi
  __int64 v32; // r14
  unsigned int v33; // r15d
  unsigned int v34; // r15d
  char *v35; // r15
  int v36; // r13d
  __int64 v37; // r14
  char *v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r14
  char *v43; // rax
  int v44; // edx
  int v45; // r8d
  __int64 v46; // r9
  __int64 v47; // rax
  SystemEffectChainDescriptor **v49; // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  SystemEffectChainDescriptor **v54; // rax
  int v55; // eax
  char *v56; // rdi
  __int64 v57; // r9
  __int64 v58; // rdx
  SystemEffectChainDescriptor **v59; // rax
  int v60; // eax
  int v61; // eax
  unsigned int v62; // ebx
  int v63; // eax
  __int64 v64; // r9
  __int64 v65; // rdx
  int v66; // eax
  __int64 *v67; // rdi
  __int64 *v68; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v69; // edx
  __int64 *v70; // rbx
  __int64 *v71; // rsi
  int AvailableConnectorCount; // eax
  struct _GUID v73; // xmm0
  unsigned int v74; // eax
  int v75; // [rsp+20h] [rbp-E0h]
  char v76; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v77[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v78; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v80; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+48h] [rbp-B8h]
  _QWORD *v82; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+58h] [rbp-A8h]
  __int64 v84; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v85[24]; // [rsp+68h] [rbp-98h] BYREF
  char *v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+88h] [rbp-78h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v88; // [rsp+90h] [rbp-70h]
  int v89; // [rsp+94h] [rbp-6Ch]
  char *v90; // [rsp+98h] [rbp-68h]
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE *v92; // [rsp+B0h] [rbp-50h]
  CEndpointCharacteristics *v93; // [rsp+B8h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v95; // [rsp+C8h] [rbp-38h]
  bool *v96; // [rsp+D0h] [rbp-30h]
  struct _GUID *v97; // [rsp+D8h] [rbp-28h]
  struct _GUID v98; // [rsp+E0h] [rbp-20h]
  __int64 v99; // [rsp+F0h] [rbp-10h]
  char *v100; // [rsp+F8h] [rbp-8h]
  _DWORD *v101; // [rsp+100h] [rbp+0h]
  char *v102; // [rsp+108h] [rbp+8h]
  struct _GUID v103; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v104; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v105; // [rsp+130h] [rbp+30h] BYREF
  __int128 v106; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v107; // [rsp+150h] [rbp+50h]
  char v108[80]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v99 = -2LL;
  v6 = a4;
  v97 = a4;
  v7 = a3;
  v88 = a3;
  v89 = a2;
  v8 = a1;
  v93 = a1;
  v9 = a6;
  v96 = a6;
  v98 = *a4;
  if ( a3 == eHostProcessConnector )
  {
    v10 = 1;
    v11 = *((_QWORD *)a1 + 8);
    if ( v11 )
    {
      pvar[0] = 0LL;
      pvar[1] = 0LL;
      v92 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
             v11,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v10 = LODWORD(pvar[1]) == 0;
      }
      PropVariantClear(pvar);
      if ( !v10 )
      {
        v43 = (char *)v8 + 136;
        goto LABEL_78;
      }
    }
  }
  v90 = (char *)v8 + 96 * v7;
  v12 = v90 + 232;
  if ( !v90[284] )
    goto LABEL_40;
  v13 = (struct _RTL_CRITICAL_SECTION *)(v90 + 288);
  v95 = (struct _RTL_CRITICAL_SECTION *)(v90 + 288);
  EnterCriticalSection((LPCRITICAL_SECTION)(v90 + 288));
  v100 = v90 + 288;
  v14 = 0LL;
  v80 = 0LL;
  v15 = 0LL;
  v81 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( *((int *)v90 + 68) <= 0 )
  {
LABEL_24:
    v16 = 0LL;
    if ( (int)v15 <= 0 )
    {
LABEL_29:
      if ( v14 )
      {
        if ( (int)v15 > 0 )
        {
          v24 = (volatile signed __int32 **)(v14 + 8);
          v25 = (unsigned int)v15;
          do
          {
            v26 = *v24;
            if ( *v24 )
            {
              if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
                if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
              }
            }
            v24 += 2;
            --v25;
          }
          while ( v25 );
          v14 = (__int64)v80;
        }
        free((void *)v14);
      }
      if ( !v13 )
        goto LABEL_40;
    }
    else
    {
      v23 = v14;
      while ( 1 )
      {
        if ( (int)v16 < 0 )
          goto LABEL_117;
        if ( *(_BYTE *)(*(_QWORD *)v23 + 20LL) )
        {
          v49 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v80,
                                                  (unsigned int)v16);
          v50 = SystemEffectChainDescriptor::Resolve(*v49, (struct SystemEffectDescriptor *)v12);
          if ( v50 < 0 )
            break;
        }
        v16 = (unsigned int)(v16 + 1);
        v23 += 16LL;
        if ( (int)v16 >= (int)v15 )
          goto LABEL_29;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v50,
        v75);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v80);
      if ( !v13 )
        goto LABEL_40;
    }
    v27 = v13;
    goto LABEL_39;
  }
  v18 = 0LL;
  while ( 1 )
  {
    if ( v18 < 0 || (int)v17 >= *((_DWORD *)v12 + 10) )
    {
LABEL_117:
      RaiseException(0xC000008C, 1u, 0, 0LL);
      goto LABEL_118;
    }
    v19 = *((_QWORD *)v12 + 4);
    if ( (_DWORD)v15 != (_DWORD)v16 )
      goto LABEL_18;
    if ( (_DWORD)v16 )
    {
      v16 = (unsigned int)(2 * v15);
      if ( (v15 & 0x40000000) != 0 )
        break;
    }
    else
    {
      v16 = 1LL;
    }
    if ( (unsigned __int64)(int)v16 > 0x7FFFFFF )
      break;
    v20 = _o__recalloc(v14, (int)v16, 16LL);
    v14 = v20;
    if ( !v20 )
      break;
    HIDWORD(v81) = v16;
    v80 = (volatile signed __int32 *)v20;
LABEL_18:
    v21 = (volatile signed __int32 *)(v14 + 16LL * (int)v15);
    if ( v21 )
    {
      *(_QWORD *)v21 = 0LL;
      *((_QWORD *)v21 + 1) = 0LL;
      v22 = *(_QWORD *)(v19 + v18 + 8);
      if ( v22 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
        v16 = HIDWORD(v81);
        LODWORD(v15) = v81;
        v14 = (__int64)v80;
      }
      *(_QWORD *)v21 = *(_QWORD *)(v19 + v18);
      *((_QWORD *)v21 + 1) = *(_QWORD *)(v19 + v18 + 8);
    }
    v15 = (unsigned int)(v15 + 1);
    LODWORD(v81) = v15;
    v17 = (struct _RTL_CRITICAL_SECTION *)(unsigned int)((_DWORD)v17 + 1);
    v18 += 16LL;
    if ( (int)v17 >= *((_DWORD *)v12 + 10) )
    {
      v13 = (struct _RTL_CRITICAL_SECTION *)(v12 + 56);
      goto LABEL_24;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F6,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v75);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v80);
  v27 = v95;
  if ( v95 )
LABEL_39:
    LeaveCriticalSection(v27);
LABEL_40:
  v28 = v90;
  v29 = (struct SystemEffectDescriptor *)(v90 + 616);
  if ( !v90[668] )
    goto LABEL_46;
  v30 = (struct _RTL_CRITICAL_SECTION *)(v90 + 672);
  EnterCriticalSection((LPCRITICAL_SECTION)(v90 + 672));
  v101 = (_DWORD *)((char *)v29 + 56);
  v31 = 0LL;
  v86 = 0LL;
  v32 = 0LL;
  v87 = 0LL;
  v33 = 0;
  if ( *((int *)v29 + 10) > 0 )
  {
    while ( 1 )
    {
      v51 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v29 + 32, v33);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v86,
                            v51) )
        break;
      if ( (signed int)++v33 >= *((_DWORD *)v29 + 10) )
      {
        v32 = (unsigned int)v87;
        v31 = v86;
        goto LABEL_42;
      }
    }
    v52 = 2147942414LL;
    v53 = 502LL;
LABEL_100:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v53,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v52,
      v75);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v86);
    if ( v29 != (struct SystemEffectDescriptor *)-56LL )
      goto LABEL_45;
    goto LABEL_46;
  }
LABEL_42:
  v34 = 0;
  if ( (int)v32 > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v86, v34)
                    + 20LL) )
      {
        v54 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                &v86,
                                                v34);
        v55 = SystemEffectChainDescriptor::Resolve(*v54, v29);
        if ( v55 < 0 )
          break;
      }
      if ( (int)++v34 >= (int)v32 )
        goto LABEL_43;
    }
    v52 = (unsigned int)v55;
    v53 = 508LL;
    goto LABEL_100;
  }
LABEL_43:
  if ( v31 )
  {
    if ( (int)v32 > 0 )
    {
      v56 = v31;
      do
      {
        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v56);
        v56 += 16;
        --v32;
      }
      while ( v32 );
    }
    free(v31);
  }
  if ( v30 )
LABEL_45:
    LeaveCriticalSection(v30);
LABEL_46:
  v35 = v28 + 1000;
  if ( v28[1052] )
  {
    v17 = (struct _RTL_CRITICAL_SECTION *)(v28 + 1056);
    EnterCriticalSection((LPCRITICAL_SECTION)(v28 + 1056));
    v102 = v28 + 1056;
    v15 = 0LL;
    v82 = 0LL;
    v14 = 0LL;
    v83 = 0LL;
    v16 = 0LL;
    v36 = 0;
    if ( *((int *)v35 + 10) > 0 )
    {
      v37 = 0LL;
      do
      {
        if ( v37 < 0 || v36 >= *((_DWORD *)v35 + 10) )
          goto LABEL_117;
        v38 = (char *)(v37 + *((_QWORD *)v35 + 4));
        v90 = v38;
        if ( (_DWORD)v14 == (_DWORD)v16 )
        {
          if ( (_DWORD)v16 )
          {
            v16 = (unsigned int)(2 * v14);
            if ( (v14 & 0x40000000) != 0 )
              goto LABEL_111;
          }
          else
          {
            v16 = 1LL;
          }
          if ( (unsigned __int64)(int)v16 > 0x7FFFFFF || (v39 = _o__recalloc(v15, (int)v16, 16LL), (v15 = v39) == 0) )
          {
LABEL_111:
            v57 = 2147942414LL;
            v58 = 502LL;
            goto LABEL_113;
          }
          HIDWORD(v83) = v16;
          v82 = (_QWORD *)v39;
          v38 = v90;
        }
        v40 = (_QWORD *)(v15 + 16LL * (int)v14);
        if ( v40 )
        {
          *v40 = 0LL;
          v40[1] = 0LL;
          v41 = *((_QWORD *)v38 + 1);
          if ( v41 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
            v16 = HIDWORD(v83);
            LODWORD(v14) = v83;
            v15 = (__int64)v82;
          }
          *v40 = *(_QWORD *)v38;
          v40[1] = *((_QWORD *)v38 + 1);
        }
        v14 = (unsigned int)(v14 + 1);
        LODWORD(v83) = v14;
        ++v36;
        v37 += 16LL;
      }
      while ( v36 < *((_DWORD *)v35 + 10) );
    }
    v16 = 0LL;
    if ( (int)v14 <= 0 )
    {
LABEL_67:
      if ( v15 )
      {
        if ( (int)v14 > 0 )
        {
          v15 += 8LL;
          v16 = (unsigned int)v14;
          do
          {
            v14 = *(_QWORD *)v15;
            if ( *(_QWORD *)v15 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
            {
LABEL_118:
              (**(void (__fastcall ***)(volatile signed __int32 *))v14)((volatile signed __int32 *)v14);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
            }
            v15 += 16LL;
            --v16;
          }
          while ( v16 );
          v15 = (__int64)v82;
        }
        free((void *)v15);
      }
      if ( v17 )
        goto LABEL_76;
    }
    else
    {
      v42 = v15;
      while ( 1 )
      {
        if ( (int)v16 < 0 )
          goto LABEL_117;
        if ( *(_BYTE *)(*(_QWORD *)v42 + 20LL) )
        {
          v59 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v82,
                                                  (unsigned int)v16);
          v60 = SystemEffectChainDescriptor::Resolve(*v59, (struct SystemEffectDescriptor *)v35);
          if ( v60 < 0 )
            break;
        }
        v16 = (unsigned int)(v16 + 1);
        v42 += 16LL;
        if ( (int)v16 >= (int)v14 )
          goto LABEL_67;
      }
      v57 = (unsigned int)v60;
      v58 = 508LL;
LABEL_113:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v58,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v57,
        v75);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v82);
      if ( v35 != (char *)-56LL )
LABEL_76:
        LeaveCriticalSection(v17);
    }
  }
  LODWORD(v7) = v88;
  v8 = v93;
  v43 = (char *)v93 + 16 * v88 + 72;
  v9 = v96;
  v6 = v97;
LABEL_78:
  v44 = 0;
  v45 = *((_DWORD *)v43 + 2);
  if ( v45 <= 0 )
    goto LABEL_84;
  v46 = *(_QWORD *)v43;
  while ( 1 )
  {
    v47 = *(_QWORD *)(v46 + 16LL * v44) - *(_QWORD *)&v98.Data1;
    if ( !v47 )
      v47 = *(_QWORD *)(v46 + 16LL * v44 + 8) - *(_QWORD *)v98.Data4;
    if ( !v47 )
      break;
    if ( ++v44 >= v45 )
      goto LABEL_84;
  }
  if ( v44 == -1 )
  {
LABEL_84:
    *v9 = 0;
    return 0LL;
  }
  *v9 = 1;
  if ( !a5 )
    return 0LL;
  if ( *((int *)v8 + 4 * (int)v7 + 392) <= 0 )
    return 0LL;
  v103 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( !CEndpointCharacteristics::IsConnectorModeSupported(v8, (unsigned int)v7, &v103) )
    return 0LL;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v61 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v8 + 2) + 40LL))(*((_QWORD *)v8 + 2), &pv);
  v62 = v61;
  if ( v61 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v61,
      v75);
    goto LABEL_162;
  }
  v84 = 0LL;
  v63 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          pv,
          &v84);
  v62 = v63;
  if ( v63 < 0 )
  {
    v64 = (unsigned int)v63;
    v65 = 691LL;
    goto LABEL_159;
  }
  v76 = 0;
  v77[0] = 0;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v84 + 112LL))(v84, &lpCriticalSection);
  memset(v85, 0, sizeof(v85));
  v66 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v84 + 80LL))(v84, v85);
  v62 = v66;
  if ( v66 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v66,
      v75);
    v67 = *(__int64 **)v85;
    if ( *(_QWORD *)v85 )
    {
      v68 = *(__int64 **)&v85[8];
      if ( *(_QWORD *)v85 != *(_QWORD *)&v85[8] )
      {
        do
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v67++);
        while ( v67 != v68 );
        v67 = *(__int64 **)v85;
      }
      std::_Deallocate<16,0>(
        v67,
        (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)&v85[16] - (_QWORD)v67) >> 3)));
      memset(v85, 0, sizeof(v85));
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_160;
  }
  pvar[0] = &v76;
  pvar[1] = v6;
  v92 = v77;
  v106 = *(_OWORD *)pvar;
  v107 = v77;
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_fc3605736e56826b7aec399cc400cd0b___(
    v108,
    *(_QWORD *)v85,
    *(_QWORD *)&v85[8],
    &v106);
  v70 = *(__int64 **)v85;
  if ( *(_QWORD *)v85 )
  {
    v71 = *(__int64 **)&v85[8];
    if ( *(_QWORD *)v85 != *(_QWORD *)&v85[8] )
    {
      do
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v70++);
      while ( v70 != v71 );
      v70 = *(__int64 **)v85;
    }
    std::_Deallocate<16,0>(
      v70,
      (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)&v85[16] - (_QWORD)v70) >> 3)));
    memset(v85, 0, sizeof(v85));
    v8 = v93;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v77[0] )
  {
LABEL_152:
    if ( v84 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
    if ( pv )
      CoTaskMemFree(pv);
    return 0LL;
  }
  AvailableConnectorCount = CEndpointCharacteristics::GetAvailableConnectorCount(v8, v69, &v78);
  v62 = AvailableConnectorCount;
  if ( AvailableConnectorCount >= 0 )
  {
    v73 = *v6;
    v104 = *v6;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)v8 + 2 * (int)v7 + 195,
                         &v104) == -1 )
    {
      if ( !v76 && v78 <= 1 )
      {
        v62 = -2004287478;
        v64 = 2290679818LL;
        v65 = 738LL;
        goto LABEL_159;
      }
    }
    else
    {
      v74 = v78;
      if ( v76 )
        v74 = ++v78;
      if ( v74 <= 1
        || (v105 = v73,
            !(unsigned int)AreResourcesAvailableForStream(pv, *((unsigned int *)v8 + 39), &v105, (unsigned int)v7)) )
      {
        *v9 = 0;
      }
    }
    goto LABEL_152;
  }
  v64 = (unsigned int)AvailableConnectorCount;
  v65 = 711LL;
LABEL_159:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v65,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v64,
    v75);
LABEL_160:
  if ( v84 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
LABEL_162:
  if ( pv )
    CoTaskMemFree(pv);
  return v62;
}
