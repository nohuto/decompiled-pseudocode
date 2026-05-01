/*
 * XREFs of ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1800467D8
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B724 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x180045294 (-StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall CApplicationManager::s_LoadQuirksForApp(const unsigned __int16 *a1, struct PER_APPLICATION_DATA *a2)
{
  bool *v4; // rsi
  int IsEnabledForPackage4; // eax
  unsigned int v6; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  void **v9; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+60h] [rbp-A0h]
  LPVOID *v12; // [rsp+68h] [rbp-98h]
  int *v13; // [rsp+70h] [rbp-90h]
  int v14; // [rsp+78h] [rbp-88h] BYREF
  char v15; // [rsp+7Ch] [rbp-84h]
  _BYTE v16[32]; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v17[3]; // [rsp+A0h] [rbp-60h] BYREF
  char v18; // [rsp+B8h] [rbp-48h]
  __int64 v19; // [rsp+C0h] [rbp-40h]
  _BYTE v20[144]; // [rsp+C8h] [rbp-38h] BYREF
  LPVOID v21[3]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v22; // [rsp+170h] [rbp+70h] BYREF
  int v23; // [rsp+180h] [rbp+80h] BYREF
  char *v24; // [rsp+188h] [rbp+88h]
  int v25; // [rsp+190h] [rbp+90h]
  char *v26; // [rsp+198h] [rbp+98h]
  int v27; // [rsp+1A0h] [rbp+A0h]
  char *v28; // [rsp+1A8h] [rbp+A8h]
  int v29; // [rsp+1B0h] [rbp+B0h]
  char *v30; // [rsp+1B8h] [rbp+B8h]
  int v31; // [rsp+1C0h] [rbp+C0h]
  char *v32; // [rsp+1C8h] [rbp+C8h]
  int v33; // [rsp+1D0h] [rbp+D0h]
  char *v34; // [rsp+1D8h] [rbp+D8h]
  int v35; // [rsp+1E0h] [rbp+E0h]
  char *v36; // [rsp+1E8h] [rbp+E8h]
  int v37; // [rsp+1F0h] [rbp+F0h]
  char *v38; // [rsp+1F8h] [rbp+F8h]
  int v39; // [rsp+200h] [rbp+100h]
  char *v40; // [rsp+208h] [rbp+108h]
  int v41; // [rsp+210h] [rbp+110h]
  char *v42; // [rsp+218h] [rbp+118h]
  int v43; // [rsp+220h] [rbp+120h]
  char *v44; // [rsp+228h] [rbp+128h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v19 = 1LL;
  v10[0] = 0LL;
  v10[1] = &v9;
  v10[2] = 0LL;
  v12 = v17;
  v11 = 0;
  v13 = &v14;
  v14 = 0;
  v17[1] = "LoadQuirksForPackage";
  v15 = 0;
  v18 = 0;
  LODWORD(v17[0]) = 0;
  v17[2] = 0LL;
  v21[0] = 0LL;
  memset_0(v20, 0, sizeof(v20));
  v22 = 0LL;
  v21[1] = 0LL;
  v21[2] = 0LL;
  v9 = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  CAppManagerTelemetry::LoadQuirksForPackage::StartActivity((CAppManagerTelemetry::LoadQuirksForPackage *)&v9, a1);
  v23 = 589824;
  v26 = (char *)a2 + 27;
  v4 = (bool *)a2 + 28;
  v24 = (char *)a2 + 28;
  v28 = (char *)a2 + 29;
  v25 = 589825;
  v30 = (char *)a2 + 30;
  v27 = 589826;
  v32 = (char *)a2 + 31;
  v29 = 327684;
  v34 = (char *)a2 + 32;
  v31 = 589830;
  v36 = (char *)a2 + 33;
  v38 = (char *)a2 + 34;
  v40 = (char *)a2 + 35;
  v42 = (char *)a2 + 36;
  v44 = (char *)a2 + 37;
  v33 = 589829;
  v35 = 589827;
  v37 = 589828;
  v39 = 589832;
  v41 = 589840;
  v43 = 589841;
  IsEnabledForPackage4 = QuirkIsEnabledForPackage4(0LL, a1, 0LL, &v23);
  v6 = IsEnabledForPackage4;
  if ( IsEnabledForPackage4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1FBB,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)IsEnabledForPackage4,
      11);
  if ( byte_18050E7B8 )
  {
    fPending = 0;
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
           L"DisableWin8AppCompatBehavior",
           (unsigned int *)&fPending) < 0 )
      byte_18050E7B8 = 0;
    else
      *v4 = fPending != 0;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v9, v6);
  v9 = &CAppManagerTelemetry::LoadQuirksForPackage::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v9);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v22);
  wil::details::shared_buffer::reset(v21);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v17);
  if ( v14 == 1 )
  {
    v14 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v16);
  }
  v14 = 3;
  if ( v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
}
