/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B28C
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191B0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18001C628 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18001C734 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001CA1C (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001D010 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001DE34 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x18001E190 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180028CF0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x1800087C4 (WPP_SF_S.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18000CF78 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18000DAC0 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18003508E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
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
  const WCHAR *v8; // r15
  int *v10; // r13
  int v11; // edi
  struct CApplication *v12; // r14
  struct _RTL_CRITICAL_SECTION *v13; // r12
  _QWORD *i; // rcx
  struct CApplication *v15; // rcx
  int v16; // r14d
  struct CApplication *v17; // rbx
  __int64 result; // rax
  __int64 *v19; // rax
  __int64 v20; // rcx
  ATL::CAtlException *v21; // rbx
  struct CApplication *v22; // [rsp+30h] [rbp-2F8h] BYREF
  int v23; // [rsp+38h] [rbp-2F0h]
  int v24; // [rsp+3Ch] [rbp-2ECh]
  UINT32 packageRelativeApplicationIdLength; // [rsp+40h] [rbp-2E8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+44h] [rbp-2E4h] BYREF
  UINT32 v27; // [rsp+48h] [rbp-2E0h] BYREF
  UINT32 v28; // [rsp+4Ch] [rbp-2DCh] BYREF
  struct CApplication **v29; // [rsp+50h] [rbp-2D8h]
  unsigned __int64 v30; // [rsp+58h] [rbp-2D0h]
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+60h] [rbp-2C8h]
  int *v32; // [rsp+68h] [rbp-2C0h]
  _QWORD *v33; // [rsp+70h] [rbp-2B8h]
  const unsigned __int16 *v34; // [rsp+78h] [rbp-2B0h]
  __int64 v35; // [rsp+80h] [rbp-2A8h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+88h] [rbp-2A0h]
  ATL::CAtlException *v37; // [rsp+90h] [rbp-298h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+A0h] [rbp-288h] BYREF
  WCHAR v39[72]; // [rsp+130h] [rbp-1F8h] BYREF
  WCHAR v40[72]; // [rsp+1C0h] [rbp-168h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+250h] [rbp-D8h] BYREF

  v35 = -2LL;
  v30 = a3;
  v8 = a2;
  v34 = a2;
  v29 = a5;
  v10 = a7;
  v32 = a7;
  v11 = -2147023728;
  v12 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v31 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v36 = v13;
  memset_0(packageFamilyName, 0, 0x82uLL);
  memset_0(packageRelativeApplicationId, 0, 0x84uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a5 = 0LL;
  ParseApplicationUserModelId(
    v8,
    &packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  for ( i = (_QWORD *)*((_QWORD *)this + 9); i; i = v33 )
  {
    v12 = (struct CApplication *)i[2];
    v33 = (_QWORD *)*i;
    v22 = v12;
    memset_0(v39, 0, 0x82uLL);
    memset_0(v40, 0, 0x84uLL);
    v28 = 65;
    v27 = 66;
    ParseApplicationUserModelId(*((PCWSTR *)v12 + 3), &v28, v39, &v27, v40);
    if ( !(unsigned int)_o__wcsicmp(*((_QWORD *)v12 + 3), v8)
      && *((_DWORD *)v12 + 53) == a4
      && *((_QWORD *)v12 + 80) == v30 )
    {
      v11 = 0;
LABEL_13:
      *v29 = v12;
      v15 = 0LL;
      v22 = 0LL;
      v16 = v23;
      goto LABEL_14;
    }
    if ( !(unsigned int)_o__wcsicmp(v39, packageFamilyName)
      && (!(unsigned int)_o__wcsicmp(v40, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
      && *((_DWORD *)v12 + 53) == a4 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v8);
      }
      v11 = 0;
      goto LABEL_13;
    }
  }
  if ( !a6 )
    goto LABEL_13;
  v11 = CApplication::CreateInstance(v8, v30, a4, &v22);
  if ( v11 < 0 )
  {
    v15 = v22;
    v16 = 0;
    goto LABEL_14;
  }
  try
  {
    v11 = 0;
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
  }
  catch ( ATL::CAtlException *v37 )
  {
    v21 = v37;
    if ( *(_DWORD *)v37 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v21;
    v11 = v23;
    v13 = v31;
    v10 = v32;
    if ( v23 >= 0 )
    {
      v8 = v34;
      goto LABEL_42;
    }
    v15 = v22;
    v16 = v24;
LABEL_14:
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v17 = v22;
      (*(void (__fastcall **)(struct CApplication *))(*(_QWORD *)v22 + 16LL))(v22);
      (*(void (__fastcall **)(struct CApplication *, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1LL);
    }
    if ( v10 )
      *v10 = v16;
    if ( v11 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v11);
      }
      AudPolicyLogError("CApplicationManager::GetApplication", 1559, v11);
    }
    if ( v13 )
      LeaveCriticalSection(v13);
    result = (unsigned int)v11;
  }
LABEL_42:
  v23 = 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v8);
  }
  v12 = v22;
  goto LABEL_13;
}
