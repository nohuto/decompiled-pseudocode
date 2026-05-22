/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000C7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CC40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Initialize@GameInputConfig@@SAXXZ @ 0x180029B44 (-Initialize@GameInputConfig@@SAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18002F2AC (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180035918 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CAX_NW4ReportingKi.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800565B0 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall MPCInputRouter::HitTest(
        MPCInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  struct _InputHitTestResult *v3; // r12
  struct _InputHitTestRequest *v4; // rdi
  MPCInputRouter *v5; // r14
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // r12d
  int v10; // r13d
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r14
  int v18; // eax
  int v19; // ebx
  char v20; // r13
  __int64 v21; // rax
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v23; // rsi
  __int64 v24; // r14
  int v25; // ebx
  _BYTE *v26; // rax
  int v27; // esi
  __int64 (__fastcall *v29)(_QWORD, GUID *, __int64 *); // rax
  int v30; // eax
  struct _InputHitTestResult ***v31; // r13
  struct _InputHitTestResult *v32; // rax
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rax
  int (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v38)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v39; // rax
  int v40; // eax
  int v41; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall *v42)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  struct _InputHitTestResult *v47; // [rsp+50h] [rbp-B0h]
  MPCInputRouter *v48; // [rsp+58h] [rbp-A8h] BYREF
  struct _InputHitTestRequest *v49; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-98h]
  void **pExceptionObject; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+78h] [rbp-88h]
  void **v53; // [rsp+88h] [rbp-78h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  int v56; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+B4h] [rbp-4Ch]
  int v58; // [rsp+BCh] [rbp-44h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  __int64 v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+E0h] [rbp-20h]
  __int128 v64; // [rsp+E4h] [rbp-1Ch]
  __int128 v65; // [rsp+F4h] [rbp-Ch]
  __int128 v66; // [rsp+104h] [rbp+4h]
  __int128 v67; // [rsp+114h] [rbp+14h]
  __int64 v68; // [rsp+124h] [rbp+24h]
  int v69; // [rsp+12Ch] [rbp+2Ch]
  int v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+134h] [rbp+34h]
  int v72; // [rsp+13Ch] [rbp+3Ch]
  char v73[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v74; // [rsp+148h] [rbp+48h] BYREF
  __int64 *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+160h] [rbp+60h]
  __int128 v77; // [rsp+168h] [rbp+68h]
  __int128 v78; // [rsp+178h] [rbp+78h]
  __int128 v79; // [rsp+188h] [rbp+88h]
  __int128 v80; // [rsp+198h] [rbp+98h]
  __int64 v81; // [rsp+1A8h] [rbp+A8h]
  char v82; // [rsp+1B0h] [rbp+B0h]
  int v83; // [rsp+1B4h] [rbp+B4h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v55 = -2LL;
  v3 = a3;
  v47 = a3;
  v4 = a2;
  v49 = a2;
  v5 = this;
  v48 = this;
  LODWORD(v45) = 0;
  v57 = 0LL;
  v58 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v68 = 0LL;
  v72 = 0;
  v56 = *(_DWORD *)a2;
  v59 = *((_QWORD *)a2 + 2);
  v69 = *((_DWORD *)a2 + 22);
  v70 = *((_DWORD *)a2 + 23);
  v71 = *((_QWORD *)a2 + 12);
  v64 = *(_OWORD *)((char *)a2 + 24);
  v65 = *(_OWORD *)((char *)a2 + 40);
  v66 = *(_OWORD *)((char *)a2 + 56);
  v67 = *(_OWORD *)((char *)a2 + 72);
  HitTestHelper::HitTestRequestWithRetry(v73, &v56, *((_QWORD *)this + 29));
  if ( v73[0] )
  {
    *(_QWORD *)v3 = *((_QWORD *)v4 + 2);
    *((_QWORD *)v3 + 1) = v81;
    v6 = v76;
    v76 = 0LL;
    *((_QWORD *)v3 + 2) = v6;
    *(_OWORD *)((char *)v3 + 24) = v77;
    *(_OWORD *)((char *)v3 + 40) = v78;
    *(_OWORD *)((char *)v3 + 56) = v79;
    *(_OWORD *)((char *)v3 + 72) = v80;
    *((_DWORD *)v3 + 22) = v83;
    v7 = 0;
    InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v46, &v74);
    v8 = v46;
    if ( v46 )
    {
      v34 = v46 + 32;
      if ( !*(_BYTE *)(v46 + 384) )
      {
        v52 = 0uLL;
        pExceptionObject = &std::bad_optional_access::`vftable';
        throw (std::bad_optional_access *)&pExceptionObject;
      }
      if ( !*(_BYTE *)(v46 + 44) )
      {
        v44 = 0;
        NtQueryCompositionInputSinkViewId(*(_QWORD *)v34, &v44);
        LODWORD(v42) = v44;
        BYTE4(v42) = 1;
        *(_QWORD *)(v34 + 8) = v42;
        v8 = v46;
        if ( !*(_BYTE *)(v34 + 12) )
        {
          v54 = 0uLL;
          v53 = &std::bad_optional_access::`vftable';
          throw (std::bad_optional_access *)&v53;
        }
      }
      v7 = *(_DWORD *)(v34 + 8);
    }
    if ( v8 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    *((_QWORD *)v3 + 12) = v7;
    v9 = 0;
    v10 = 0;
    v11 = v74;
    v12 = v74;
    v13 = v75;
    if ( v74 == v75 )
      goto LABEL_12;
    while ( 1 )
    {
      v14 = *v12;
      v15 = 0LL;
      v43 = 0LL;
      v16 = *(_QWORD *)(v14 + 392);
      v17 = *(_QWORD *)(v14 + 400);
      if ( v16 != v17 )
      {
        while ( 1 )
        {
          v50 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v16 + 8);
          v29 = **v50;
          v42 = v29;
          if ( v15 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            v30 = v42(v50, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v43);
          }
          else
          {
            v30 = v29(v50, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v43);
          }
          if ( v30 >= 0 )
            break;
          v16 += 16LL;
          if ( v16 == v17 )
            break;
          v15 = v43;
        }
        v15 = v43;
      }
      if ( v15 )
      {
        if ( !v9 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
          v15 = v43;
        }
        if ( !v10 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
          v15 = v43;
        }
        if ( v9 && v10 )
          break;
      }
      if ( v15 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( ++v12 == v13 )
        goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v43);
LABEL_11:
    if ( !v9 )
LABEL_12:
      v9 = 1;
    if ( !v10 )
      v10 = 2;
    if ( v9 == 2 )
    {
      v18 = 1;
    }
    else
    {
      v18 = 0;
      if ( v9 == 3 )
        v18 = 2;
    }
    if ( v10 == 1 )
      v18 |= 4u;
    v3 = v47;
    *((_DWORD *)v47 + 26) = v18;
    v19 = 0;
    v20 = 0;
    for ( LOBYTE(v41) = 0; v11 != v13; ++v11 )
    {
      v21 = *v11;
      v22 = 0LL;
      v42 = 0LL;
      v23 = *(_QWORD *)(v21 + 392);
      v24 = *(_QWORD *)(v21 + 400);
      if ( v23 != v24 )
      {
        while ( 1 )
        {
          v31 = *(struct _InputHitTestResult ****)(v23 + 8);
          v32 = **v31;
          v47 = v32;
          if ( v22 )
          {
            v42 = 0LL;
            (*(void (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v22 + 16LL))(v22);
            v33 = ((__int64 (__fastcall *)(struct _InputHitTestResult ***, GUID *, _QWORD))v47)(
                    v31,
                    &GUID_a2b10cd0_a7ef_282c_6ac9_8093bcdca953,
                    &v42);
          }
          else
          {
            v33 = ((__int64 (__fastcall *)(struct _InputHitTestResult ***, GUID *, _QWORD))v32)(
                    v31,
                    &GUID_a2b10cd0_a7ef_282c_6ac9_8093bcdca953,
                    &v42);
          }
          if ( v33 >= 0 )
            break;
          v23 += 16LL;
          if ( v23 == v24 )
            break;
          v22 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v42;
        }
        v22 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v42;
        v20 = v41;
      }
      if ( v22 )
      {
        v19 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v22 + 24LL))(v22);
        v20 = 1;
        LOBYTE(v41) = 1;
        v22 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v42;
      }
      if ( v22 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    *((_DWORD *)v3 + 28) = v19;
    v4 = v49;
    if ( v82 && (*(_DWORD *)v49 != 4 || (*((_BYTE *)v49 + 88) & 1) != 0) )
    {
      v25 = 3;
    }
    else
    {
      v25 = 0;
      if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
        __fastfail(7u);
      if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
      {
        wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::ReportUsageToService();
        if ( *(_DWORD *)v4 == 4 )
        {
          v26 = GameInputConfig::s_gameInputConfig;
          if ( !GameInputConfig::s_gameInputConfig )
          {
            GameInputConfig::Initialize();
            v26 = GameInputConfig::s_gameInputConfig;
          }
          if ( v26[8] )
            v25 = 1;
        }
      }
      else
      {
        v25 = 2 - (v20 != 0);
      }
    }
    *((_DWORD *)v3 + 27) = v25;
    v27 = v45;
    v5 = v48;
  }
  else
  {
    v27 = -2147467259;
  }
  if ( (unsigned __int64)(v76 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v76);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v74);
  if ( *((_BYTE *)v5 + 904)
    && *((_DWORD *)v4 + 23)
    && (v27 < 0 || !*((_QWORD *)v3 + 1) && !*((_QWORD *)v3 + 2))
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) )
  {
    v35 = *((_QWORD *)v5 + 104);
    if ( v35 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 112LL))(v35) )
      {
        v36 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 104) + 112LL))(*((_QWORD *)v5 + 104));
        v37 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v36;
        v48 = (MPCInputRouter *)v36;
        if ( v36 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
        v45 = 0LL;
        v38 = **v37;
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v45);
        if ( v38(v37, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v45) >= 0 )
        {
          v39 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 104) + 120LL))(*((_QWORD *)v5 + 104));
          if ( v39 )
          {
            v40 = NtDuplicateCompositionInputSink(v39);
            if ( v40 < 0 )
            {
              wil::details::in1diag3::_FailFast_NtStatus(
                retaddr,
                (void *)0xD5,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
                (const char *)(unsigned int)v40,
                v41);
              __debugbreak();
            }
          }
          *((_DWORD *)v3 + 27) = 1;
          *((_QWORD *)v3 + 1) = (*(int (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 104) + 56LL))(*((_QWORD *)v5 + 104));
          v27 = 0;
        }
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v45);
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease((__int64 *)&v48);
      }
    }
  }
  return (unsigned int)v27;
}
