/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001E3AC
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C350 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001F6CC (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18001F7D8 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001FABC (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x1800200C0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020EE4 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180021240 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18002C1D0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000BAF4 (WPP_SF_S.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x180010218 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180010CF0 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct CApplication **a5,
        int a6,
        int *a7)
{
  const WCHAR *v7; // r12
  int *v9; // r13
  int v10; // edi
  struct CApplication *v11; // r14
  struct _RTL_CRITICAL_SECTION *v12; // r15
  _QWORD *v13; // rsi
  struct CApplication **v14; // rbx
  struct CApplication *v15; // rcx
  int v16; // r14d
  struct CApplication *v17; // rbx
  __int64 result; // rax
  __int64 *v19; // rax
  __int64 v20; // rcx
  ATL::CAtlException *v21; // rbx
  struct CApplication *v22; // [rsp+30h] [rbp-2F8h] BYREF
  int v23; // [rsp+38h] [rbp-2F0h]
  unsigned int v24; // [rsp+3Ch] [rbp-2ECh]
  int v25; // [rsp+40h] [rbp-2E8h]
  struct CApplication **v26; // [rsp+48h] [rbp-2E0h]
  UINT32 packageRelativeApplicationIdLength; // [rsp+50h] [rbp-2D8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+54h] [rbp-2D4h] BYREF
  UINT32 v29; // [rsp+58h] [rbp-2D0h] BYREF
  UINT32 v30; // [rsp+5Ch] [rbp-2CCh] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-2C8h]
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+68h] [rbp-2C0h]
  int *v33; // [rsp+70h] [rbp-2B8h]
  const unsigned __int16 *v34; // [rsp+78h] [rbp-2B0h]
  struct CApplication **v35; // [rsp+80h] [rbp-2A8h]
  __int64 v36; // [rsp+88h] [rbp-2A0h]
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+90h] [rbp-298h]
  ATL::CAtlException *v38; // [rsp+98h] [rbp-290h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+A0h] [rbp-288h] BYREF
  WCHAR v40[72]; // [rsp+130h] [rbp-1F8h] BYREF
  WCHAR v41[72]; // [rsp+1C0h] [rbp-168h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+250h] [rbp-D8h] BYREF

  v36 = -2LL;
  v24 = a4;
  v31 = a3;
  v7 = a2;
  v34 = a2;
  v26 = a5;
  v35 = a5;
  v9 = a7;
  v33 = a7;
  v10 = -2147023728;
  v11 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v25 = 0;
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v32 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v37 = v12;
  memset_0(packageFamilyName, 0, 0x82uLL);
  memset_0(packageRelativeApplicationId, 0, 0x84uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a5 = 0LL;
  ParseApplicationUserModelId(
    v7,
    &packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  v13 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v13 )
  {
    v11 = (struct CApplication *)v13[2];
    v13 = (_QWORD *)*v13;
    v22 = v11;
    memset_0(v40, 0, 0x82uLL);
    memset_0(v41, 0, 0x84uLL);
    v30 = 65;
    v29 = 66;
    ParseApplicationUserModelId(*((PCWSTR *)v11 + 3), &v30, v40, &v29, v41);
    if ( *((_QWORD *)v11 + 79) == v31 && *((_DWORD *)v11 + 53) == v24 )
    {
      v10 = 0;
      goto LABEL_16;
    }
    if ( !(unsigned int)_o__wcsicmp(v40, packageFamilyName)
      && (!(unsigned int)_o__wcsicmp(v41, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
      && *((_DWORD *)v11 + 53) == v24 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v7);
      }
      v10 = 0;
LABEL_16:
      v14 = v26;
LABEL_17:
      *v14 = v11;
      v15 = 0LL;
      v22 = 0LL;
      v16 = v23;
      goto LABEL_18;
    }
  }
  if ( !a6 )
    goto LABEL_16;
  v10 = CApplication::CreateInstance(v7, v31, v24, &v22);
  if ( v10 < 0 )
  {
    v15 = v22;
    v16 = 0;
    goto LABEL_18;
  }
  try
  {
    v10 = 0;
    v19 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
            (__int64)this + 72,
            (__int64 *)&v22,
            0LL,
            *((_QWORD *)this + 9));
    v20 = *((_QWORD *)this + 9);
    if ( v20 )
      *(_QWORD *)(v20 + 8) = v19;
    else
      *((_QWORD *)this + 10) = v19;
    *((_QWORD *)this + 9) = v19;
    v14 = v26;
  }
  catch ( ATL::CAtlException *v38 )
  {
    v21 = v38;
    if ( *(_DWORD *)v38 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v21;
    v10 = v23;
    v12 = v32;
    v9 = v33;
    if ( v23 >= 0 )
    {
      v7 = v34;
      v14 = v35;
      goto LABEL_41;
    }
    v15 = v22;
    v16 = v25;
LABEL_18:
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v17 = v22;
      (*(void (__fastcall **)(struct CApplication *))(*(_QWORD *)v22 + 16LL))(v22);
      (*(void (__fastcall **)(struct CApplication *, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1LL);
    }
    if ( v9 )
      *v9 = v16;
    if ( v10 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v10);
      }
      AudPolicyLogError("CApplicationManager::GetApplication", 1520, v10);
    }
    if ( v12 )
      LeaveCriticalSection(v12);
    result = (unsigned int)v10;
  }
LABEL_41:
  v23 = 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v7);
  }
  v11 = v22;
  goto LABEL_17;
}
