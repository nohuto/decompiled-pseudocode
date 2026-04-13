/*
 * XREFs of ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800AB53C
 * Callers:
 *     _lambda_4da519507bbb1c7cbbe275d8da092dac_::operator() @ 0x1800AC01C (_lambda_4da519507bbb1c7cbbe275d8da092dac_--operator().c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800AC2AC (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002DF1C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800AB4BC (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_880c7e649d9a78c463fea33c30caf4e7___ @ 0x1800AC558 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_880c7e649d9a78c463fea33c30caf4.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 *a6)
{
  __int64 v6; // rbx
  volatile signed __int32 *v11; // rbx
  _QWORD *v13; // rax
  HRESULT v14; // eax
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  wil::details::in1diag3 *v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  int v21; // eax
  HRESULT v22; // eax
  __int64 *v23; // rcx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  int v30; // eax
  int v31; // eax
  __int64 *v32; // rdi
  __int64 (__fastcall *v33)(__int64 *, __int64, __int64 *); // r14
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rcx
  int v39; // eax
  HRESULT v40; // eax
  __int64 *v41; // rcx
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  wil::details::in1diag3 *v46; // rcx
  int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // rcx
  int v50; // eax
  __int64 *v51; // rdi
  __int64 (__fastcall *v52)(__int64 *, __int64, __int64 *); // rsi
  __int64 v53; // rcx
  int v54; // eax
  wil::details::in1diag3 *v55; // rcx
  int v56; // eax
  __int64 v57; // rdi
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  volatile signed __int32 *v62; // rbx
  __int64 v63; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v64; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v66; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v67; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-98h]
  __int64 *v70; // [rsp+78h] [rbp-90h] BYREF
  __int64 v71; // [rsp+80h] [rbp-88h] BYREF
  __int64 v72; // [rsp+88h] [rbp-80h] BYREF
  __int64 v73; // [rsp+90h] [rbp-78h] BYREF
  __int64 v74; // [rsp+98h] [rbp-70h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-68h] BYREF
  PCWSTR StringRawBuffer; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v77[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v78; // [rsp+D0h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING string; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING_HEADER v81; // [rsp+100h] [rbp-8h] BYREF
  HSTRING v82; // [rsp+118h] [rbp+10h] BYREF
  HSTRING_HEADER v83; // [rsp+120h] [rbp+18h] BYREF
  HSTRING v84; // [rsp+138h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v77[2] = -2LL;
  v77[3] = a6;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  LOBYTE(v63) = 0;
  v77[0] = &v63;
  v77[1] = &StringRawBuffer;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_880c7e649d9a78c463fea33c30caf4e7___(v77);
  if ( (_BYTE)v63 )
  {
    if ( (unsigned int)(a5 - 1) > 1 )
    {
      v11 = (volatile signed __int32 *)a6[1];
      if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      return 0;
    }
    if ( a5 == 1 )
    {
      v13 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v78,
              a6);
      CreativeFramework::CommonHelper::UnregisterTask((__int64)a1, (__int64)v13);
    }
  }
  v64 = 0LL;
  string = 0LL;
  v14 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.BackgroundTaskBuilder",
          0x39u,
          &hstringHeader,
          &string);
  if ( v14 < 0 )
    goto LABEL_84;
  v15 = v64;
  v64 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
  v64 = 0LL;
  LODWORD(v6) = RoActivateInstance(string, &v70);
  if ( (int)v6 >= 0 )
  {
    if ( *(_QWORD *)&GUID_0351550e_3e64_4572_a93a_84075a37c917.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_0351550e_3e64_4572_a93a_84075a37c917.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v16 = v70;
      v64 = v70;
      goto LABEL_19;
    }
    LODWORD(v6) = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))*v70)(
                    v70,
                    &GUID_0351550e_3e64_4572_a93a_84075a37c917,
                    &v64);
    (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
  }
  v16 = v64;
LABEL_19:
  v17 = retaddr;
  if ( (int)v6 < 0 )
  {
LABEL_85:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6);
LABEL_86:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(__int64 *, HSTRING))(*v16 + 80))(v16, a1);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_86;
  v20 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v64 + 48))(v64, a2);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  v21 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v64 + 64))(v64, a3);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_89;
  }
  v66 = 0LL;
  v82 = 0LL;
  v22 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.SystemCondition", 0x33u, &v81, &v82);
  if ( v22 < 0 )
  {
LABEL_89:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
LABEL_90:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_91;
  }
  v23 = v66;
  v66 = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  ActivationFactory = RoGetActivationFactory(v82, &GUID_d269d1f1_05a7_49ae_87d7_16b2b8b9a553, &v66);
  v25 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_90;
  v65 = 0LL;
  v6 = 0LL;
  v69 = 0LL;
  if ( (a4 & 9) == 0 )
    goto LABEL_34;
  v26 = *v66;
  if ( (a4 & 4) != 0 || (v27 = 7LL, (a4 & 1) != 0) )
    v27 = 3LL;
  v65 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v26 + 48))(v66, v27, &v65);
  v29 = retaddr;
  if ( v28 < 0 )
  {
LABEL_91:
    wil::details::in1diag3::Throw_Hr(
      v29,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v65)(
          v65,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v75);
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v30);
    __debugbreak();
  }
  v6 = v75;
  v69 = v75;
  v31 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v64 + 72))(v64, v75);
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v31);
    __debugbreak();
  }
LABEL_34:
  if ( (a4 & 2) != 0 )
  {
    v32 = v66;
    v33 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(*v66 + 48);
    v34 = v65;
    v65 = 0LL;
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    v35 = v33(v32, 5LL, &v65);
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v35);
      __debugbreak();
    }
    v36 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v65)(
            v65,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            &v71);
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x152D,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v36);
      __debugbreak();
    }
    v37 = v71;
    v71 = 0LL;
    v38 = v6;
    v6 = v37;
    v69 = v37;
    if ( v38 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      if ( v71 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
    }
    v39 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v64 + 72))(v64, v37);
    if ( v39 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v39);
LABEL_97:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v40);
LABEL_98:
      wil::details::in1diag3::Throw_Hr(
        v43,
        (void *)0xA7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v42);
LABEL_99:
      wil::details::in1diag3::Throw_Hr(
        v46,
        (void *)0xAD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v45);
      __debugbreak();
    }
  }
  if ( (a4 & 0x10) == 0 )
    goto LABEL_58;
  v67 = 0LL;
  v84 = 0LL;
  v40 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.CSystemCondition", 0x34u, &v83, &v84);
  if ( v40 < 0 )
    goto LABEL_97;
  v41 = v67;
  v67 = 0LL;
  if ( v41 )
    (*(void (__fastcall **)(__int64 *))(*v41 + 16))(v41);
  v42 = RoGetActivationFactory(v84, &GUID_6f989a99_770e_4539_840b_ec97284926d5, &v67);
  v43 = retaddr;
  if ( v42 < 0 )
    goto LABEL_98;
  v68 = 0LL;
  v44 = *v67;
  v68 = 0LL;
  v45 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *))(v44 + 48))(v67, 7LL, 0LL, &v68);
  v46 = retaddr;
  if ( v45 < 0 )
    goto LABEL_99;
  v47 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v68)(
          v68,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v72);
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v47);
    __debugbreak();
  }
  v48 = v72;
  v72 = 0LL;
  v49 = v6;
  v6 = v48;
  v69 = v48;
  if ( v49 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
  }
  v50 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v64 + 72))(v64, v48);
  if ( v50 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v50);
    goto LABEL_102;
  }
  if ( v68 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
  if ( v67 )
    (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
LABEL_58:
  if ( (a4 & 0x20) != 0 )
    goto LABEL_67;
  v51 = v66;
  v52 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(*v66 + 48);
  v53 = v65;
  v65 = 0LL;
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  v54 = v52(v51, 8LL, &v65);
  v55 = retaddr;
  if ( v54 < 0 )
  {
LABEL_102:
    wil::details::in1diag3::Throw_Hr(
      v55,
      (void *)0xB7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v54);
    __debugbreak();
  }
  v56 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v65)(
          v65,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v73);
  if ( v56 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v56);
    __debugbreak();
  }
  v57 = v73;
  v73 = 0LL;
  v58 = v6;
  v6 = v57;
  v69 = v57;
  if ( v58 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v73 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
  }
  v59 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v64 + 72))(v64, v57);
  if ( v59 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v59);
    JUMPOUT(0x1800ABE30LL);
  }
LABEL_67:
  v74 = 0LL;
  v60 = *v64;
  v74 = 0LL;
  v61 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v60 + 96))(v64, &v74);
  if ( v61 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v61);
LABEL_84:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    goto LABEL_85;
  }
  if ( v74 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v65 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
  if ( v66 )
    (*(void (__fastcall **)(__int64 *))(*v66 + 16))(v66);
  if ( v64 )
    (*(void (__fastcall **)(__int64 *))(*v64 + 16))(v64);
  v62 = (volatile signed __int32 *)a6[1];
  if ( v62 )
  {
    if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v62)(v62);
      if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
    }
  }
  return 1;
}
