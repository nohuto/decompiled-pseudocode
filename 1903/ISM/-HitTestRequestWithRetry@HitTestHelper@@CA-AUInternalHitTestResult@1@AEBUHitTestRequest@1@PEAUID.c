/*
 * XREFs of ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CC40
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000C7C0 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C4030 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1800C4520 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z @ 0x1800C46B0 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800C47B0 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1800C5124 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1800C5404 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x180008678 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18000CFF0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180022524 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18002801C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BFE8 (atexit.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180067150 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x1800C7DB0 (--0-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAA@_KAEBV-$allocator@PEAX@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HitTestHelper::HitTestRequestWithRetry(
        __int64 a1,
        __int128 *a2,
        __int64 (__fastcall ***a3)(_QWORD, __int128 *))
{
  const struct _TlgProvider_t *v6; // rcx
  char v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  Microsoft::Bamo::BaseBamoConnection *v10; // rax
  __int64 v11; // rax
  void **InputSiteListFromDITCallbackStruct; // rbx
  void *v13; // rsi
  void *v14; // r15
  void *v15; // r12
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int64 v20; // rdx
  bool v21; // cl
  int v22; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  TraceLoggingHProvider v26; // r10
  DWORD LastError; // ebx
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // r14
  int v32; // eax
  char *v33; // rax
  Microsoft::Bamo::BaseBamoConnection *v34; // rdx
  Microsoft::Bamo::BaseBamoConnection *v35; // rcx
  Microsoft::Bamo::BaseBamoConnection *v36; // rcx
  __int64 *v37; // r15
  __int64 *v38; // r12
  __int64 v39; // rcx
  TraceLoggingHProvider v40; // r10
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  LPVOID Context[2]; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  char v47; // [rsp+68h] [rbp-98h] BYREF
  char v48; // [rsp+70h] [rbp-90h] BYREF
  char v49; // [rsp+390h] [rbp+290h]
  void *v50; // [rsp+398h] [rbp+298h] BYREF
  __int128 v51; // [rsp+3A0h] [rbp+2A0h]
  __int64 v52; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int128 v53; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int128 v54; // [rsp+3C8h] [rbp+2C8h]
  __int128 v55; // [rsp+3D8h] [rbp+2D8h]
  __int128 v56; // [rsp+3E8h] [rbp+2E8h]
  __int64 v57; // [rsp+3F8h] [rbp+2F8h]
  bool v58; // [rsp+400h] [rbp+300h]
  int v59; // [rsp+404h] [rbp+304h]
  __int128 v60; // [rsp+410h] [rbp+310h] BYREF
  __int128 v61; // [rsp+420h] [rbp+320h]
  __int128 v62; // [rsp+430h] [rbp+330h]
  _BYTE v63[80]; // [rsp+440h] [rbp+340h]
  __int128 v64; // [rsp+490h] [rbp+390h]
  LPCWSTR pwsz; // [rsp+4A0h] [rbp+3A0h]
  GUID ActivityId; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int64 v67; // [rsp+4B8h] [rbp+3B8h]
  __int64 v68; // [rsp+4C0h] [rbp+3C0h]
  LPCGUID pRelatedActivityId; // [rsp+4C8h] [rbp+3C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4D0h] [rbp+3D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+4F0h] [rbp+3F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+548h] [rbp+448h]

  v46 = -2LL;
  pwsz = L"ISMHitTest";
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  pRelatedActivityId = 0LL;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, fPending, Context) && fPending[0] )
  {
    Context[0] = qword_1801E14B0;
    qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v6 )
  {
    if ( TlgKeywordOn(v6, 1uLL) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v25 = wil::details::static_lazy<InputTraceLogging>::get(
              v24,
              lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v25 + 8) > 6u )
      {
        if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v25 + 8), 1uLL) )
        {
          TlgCreateWsz(&pDesc, pwsz);
          TlgWrite(v26, &unk_18019D947, &ActivityId, pRelatedActivityId, 3u, &pData);
        }
      }
    }
  }
  v49 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  memset_0(&v53, 0, 0x50uLL);
  v60 = *a2;
  v61 = a2[1];
  v62 = a2[2];
  *(_OWORD *)v63 = a2[3];
  *(_OWORD *)&v63[16] = a2[4];
  *(_OWORD *)&v63[32] = a2[5];
  *(_OWORD *)&v63[48] = a2[6];
  *(_OWORD *)&v63[64] = a2[7];
  v64 = a2[8];
  v44 = 0LL;
  v45 = 0LL;
  *((_QWORD *)&v62 + 1) = &v48;
  *(_DWORD *)v63 = 100;
  v7 = (**a3)(a3, &v60);
  v49 = v7;
  v8 = v62;
  v9 = v52;
  if ( (unsigned __int64)(v52 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    NtCloseCompositionInputSink(v9);
    SetLastError(LastError);
  }
  v52 = v8;
  if ( *(_DWORD *)v63 > 0x64u )
  {
    v28 = std::vector<void *>::vector<void *>(&pData, *(unsigned int *)v63);
    v29 = 0LL;
    if ( &v44 == (__int128 *)v28 )
    {
      v31 = *((_QWORD *)&v44 + 1);
      v30 = v44;
    }
    else
    {
      std::vector<void *>::_Tidy((__int64 *)&v44);
      v29 = *(_QWORD *)v28;
      v30 = *(_QWORD *)v28;
      *(_QWORD *)&v44 = *(_QWORD *)v28;
      v31 = *(_QWORD *)(v28 + 8);
      *((_QWORD *)&v44 + 1) = v31;
      v45 = *(_QWORD *)(v28 + 16);
      *(_QWORD *)v28 = 0LL;
      *(_QWORD *)(v28 + 8) = 0LL;
      *(_QWORD *)(v28 + 16) = 0LL;
    }
    std::vector<void *>::_Tidy((__int64 *)&pData);
    v60 = *a2;
    v61 = a2[1];
    v62 = a2[2];
    *(_OWORD *)v63 = a2[3];
    *(_OWORD *)&v63[16] = a2[4];
    *(_OWORD *)&v63[32] = a2[5];
    *(_OWORD *)&v63[48] = a2[6];
    *(_OWORD *)&v63[64] = a2[7];
    v64 = a2[8];
    *((_QWORD *)&v62 + 1) = v30;
    *(_DWORD *)v63 = (v31 - v29) >> 3;
    v49 = (**a3)(a3, &v60);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
      &v52,
      v62);
    v8 = v52;
    v7 = v49;
  }
  if ( v7 )
  {
    v10 = ISMStatics::s_inputSystemBamoConnection;
    if ( !ISMStatics::s_inputSystemBamoConnection )
    {
      *(_QWORD *)fPending = 0LL;
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(fPending);
      v32 = CoreUICreate(fPending);
      if ( v32 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x32,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
          (const char *)(unsigned int)v32,
          cData);
        __debugbreak();
      }
      v33 = (char *)InputSystemServerConnection::Create((unsigned int)Context);
      v34 = 0LL;
      if ( &v47 != v33 )
      {
        v34 = *(Microsoft::Bamo::BaseBamoConnection **)v33;
        *(_QWORD *)v33 = 0LL;
      }
      v35 = ISMStatics::s_inputSystemBamoConnection;
      ISMStatics::s_inputSystemBamoConnection = v34;
      if ( v35 )
        Microsoft::Bamo::BaseBamoConnection::Release(v35);
      v36 = (Microsoft::Bamo::BaseBamoConnection *)Context[0];
      if ( Context[0] )
      {
        Context[0] = 0LL;
        Microsoft::Bamo::BaseBamoConnection::Release(v36);
      }
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(fPending);
      v10 = ISMStatics::s_inputSystemBamoConnection;
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v10 + 19) + 8LL) + 104LL))(*((_QWORD *)v10 + 19) + 8LL);
    InputSiteListFromDITCallbackStruct = (void **)InputSiteManager::GetInputSiteListFromDITCallbackStruct(
                                                    v11,
                                                    &pData,
                                                    &v60);
    v13 = v50;
    if ( &v50 == InputSiteListFromDITCallbackStruct )
    {
      v15 = (void *)*((_QWORD *)&v51 + 1);
      v14 = (void *)v51;
    }
    else
    {
      if ( v50 )
      {
        v37 = (__int64 *)v50;
        v38 = (__int64 *)v51;
        if ( v50 != (void *)v51 )
        {
          do
          {
            v39 = *v37;
            if ( *v37 )
            {
              *v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            }
            ++v37;
          }
          while ( v37 != v38 );
        }
        std::_Deallocate<16,0>(
          v13,
          (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)&v51 + 1) - (_QWORD)v13) >> 3)));
      }
      v13 = *InputSiteListFromDITCallbackStruct;
      v14 = InputSiteListFromDITCallbackStruct[1];
      v15 = InputSiteListFromDITCallbackStruct[2];
      *InputSiteListFromDITCallbackStruct = 0LL;
      InputSiteListFromDITCallbackStruct[1] = 0LL;
      InputSiteListFromDITCallbackStruct[2] = 0LL;
    }
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&pData);
    v16 = *(_OWORD *)&v63[4];
    v53 = *(_OWORD *)&v63[4];
    v17 = *(_OWORD *)&v63[20];
    v54 = *(_OWORD *)&v63[20];
    v18 = *(_OWORD *)&v63[36];
    v55 = *(_OWORD *)&v63[36];
    v19 = *(_OWORD *)&v63[52];
    v56 = *(_OWORD *)&v63[52];
    v20 = *((_QWORD *)&v61 + 1);
    v57 = *((_QWORD *)&v61 + 1);
    v21 = (v63[72] & 1) != 0;
    v58 = v21;
    v22 = *(_DWORD *)&v63[68];
    v59 = *(_DWORD *)&v63[68];
  }
  else
  {
    v22 = v59;
    v21 = v58;
    v20 = v57;
    v19 = v56;
    v18 = v55;
    v17 = v54;
    v16 = v53;
    v15 = (void *)*((_QWORD *)&v51 + 1);
    v14 = (void *)v51;
    v13 = v50;
  }
  *(_BYTE *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = v15;
  v50 = 0LL;
  v51 = 0LL;
  *(_QWORD *)(a1 + 32) = v8;
  v52 = 0LL;
  *(_OWORD *)(a1 + 40) = v16;
  *(_OWORD *)(a1 + 56) = v17;
  *(_OWORD *)(a1 + 72) = v18;
  *(_OWORD *)(a1 + 88) = v19;
  *(_QWORD *)(a1 + 104) = v20;
  *(_BYTE *)(a1 + 112) = v21;
  *(_DWORD *)(a1 + 116) = v22;
  std::vector<void *>::_Tidy((__int64 *)&v44);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v50);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, fPending, Context) && fPending[0] )
  {
    Context[0] = qword_1801E14B0;
    qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
  }
  if ( **((_DWORD **)Context[0] + 1) > 6u && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 1uLL) )
  {
    TlgCreateWsz(&pDesc, pwsz);
    TlgWrite(v40, &unk_18019D9A7, &ActivityId, pRelatedActivityId, 3u, &pData);
  }
  return a1;
}
