/*
 * XREFs of ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180090FF8
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180089E30 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18008A720 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z @ 0x18008B600 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18008B700 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18008C0D0 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000C488 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001DB0C (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18001E104 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800818C8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180081A1C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x1800915C8 (--0-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAA@_KAEBV-$allocator@PEAX@1@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HitTestHelper::HitTestRequestWithRetry(
        __int64 a1,
        __int128 *a2,
        __int64 (__fastcall ***a3)(_QWORD, __int128 *))
{
  __int64 v6; // r15
  __int64 v7; // r12
  _QWORD *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rbx
  void *v12; // rcx
  const struct std::nothrow_t *v13; // rdx
  __int128 *v14; // r13
  __int64 v15; // r13
  DWORD LastError; // ebx
  gsl::details *InputSiteManager; // rax
  __int64 *InputSiteListFromDITCallbackStruct; // rbx
  __int64 v19; // r13
  __int64 v20; // rbx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int128 v24; // xmm4
  __int64 v25; // r8
  char v26; // al
  int v27; // r9d
  __int128 v28; // xmm5
  __int128 v29; // xmm6
  __int64 v30; // xmm7_8
  __int64 v31; // rcx
  const struct std::nothrow_t *v32; // rdx
  _QWORD *v34; // [rsp+28h] [rbp-E0h]
  void *v35; // [rsp+28h] [rbp-E0h]
  __int64 v37; // [rsp+30h] [rbp-D8h]
  __int64 v38; // [rsp+38h] [rbp-D0h]
  __int128 v39; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h]
  __int64 v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v43; // [rsp+68h] [rbp-A0h]
  _QWORD v44[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v45; // [rsp+90h] [rbp-78h]
  __int128 v46; // [rsp+A0h] [rbp-68h]
  __int128 v47; // [rsp+B0h] [rbp-58h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  char v49; // [rsp+C8h] [rbp-40h]
  int v50; // [rsp+CCh] [rbp-3Ch]
  __int128 v51; // [rsp+D0h] [rbp-38h]
  __int128 v52; // [rsp+E0h] [rbp-28h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  void *v54[4]; // [rsp+F8h] [rbp-10h] BYREF
  char v55; // [rsp+118h] [rbp+10h] BYREF
  __int128 v56; // [rsp+438h] [rbp+330h] BYREF
  __int128 v57; // [rsp+448h] [rbp+340h]
  __int128 v58; // [rsp+458h] [rbp+350h]
  _BYTE v59[80]; // [rsp+468h] [rbp+360h]
  __int128 v60; // [rsp+4B8h] [rbp+3B0h]
  __int128 v61; // [rsp+4C8h] [rbp+3C0h]
  __int128 v62; // [rsp+4D8h] [rbp+3D0h]
  __int128 v63; // [rsp+4E8h] [rbp+3E0h]
  __int64 v64; // [rsp+4F8h] [rbp+3F0h]
  _BYTE v65[48]; // [rsp+508h] [rbp+400h] BYREF

  v54[3] = (void *)-2LL;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v65, L"ISMHitTest", 0LL);
  LOBYTE(v41) = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44[0] = 0LL;
  memset_0(&v44[1], 0, 0x78uLL);
  v56 = *a2;
  v57 = a2[1];
  v58 = a2[2];
  *(_OWORD *)v59 = a2[3];
  *(_OWORD *)&v59[16] = a2[4];
  *(_OWORD *)&v59[32] = a2[5];
  *(_OWORD *)&v59[48] = a2[6];
  *(_OWORD *)&v59[64] = a2[7];
  v60 = a2[8];
  v61 = a2[9];
  v62 = a2[10];
  v63 = a2[11];
  v64 = *((_QWORD *)a2 + 24);
  v39 = 0LL;
  v6 = 0LL;
  v40 = 0LL;
  *((_QWORD *)&v58 + 1) = &v55;
  *(_DWORD *)v59 = 100;
  LOBYTE(v41) = (**a3)(a3, &v56);
  v7 = v58;
  v44[0] = v58;
  v8 = 0LL;
  v34 = 0LL;
  if ( *(_DWORD *)v59 <= 0x64u )
  {
    v10 = (_QWORD *)v39;
  }
  else
  {
    v9 = std::vector<void *>::vector<void *>(v54, *(unsigned int *)v59);
    v35 = 0LL;
    if ( &v39 == (__int128 *)v9 )
    {
      v11 = *((_QWORD *)&v39 + 1);
      v10 = (_QWORD *)v39;
    }
    else
    {
      v8 = *(_QWORD **)v9;
      v10 = v8;
      *(_QWORD *)&v39 = *(_QWORD *)v9;
      v11 = *(_QWORD *)(v9 + 8);
      *((_QWORD *)&v39 + 1) = v11;
      v6 = *(_QWORD *)(v9 + 16);
      v40 = v6;
      *(_QWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      v35 = v8;
    }
    v12 = v54[0];
    if ( v54[0] )
    {
      v13 = (const struct std::nothrow_t *)(((char *)v54[2] - (char *)v54[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (unsigned __int64)v13 >= 0x1000 )
      {
        v13 = (const struct std::nothrow_t *)((char *)v13 + 39);
        v12 = (void *)*((_QWORD *)v54[0] - 1);
        if ( (unsigned __int64)((char *)v54[0] - (char *)v12 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v12, v13);
          __debugbreak();
        }
      }
      operator delete(v12, v13);
    }
    v56 = *a2;
    v57 = a2[1];
    v58 = a2[2];
    *(_OWORD *)v59 = a2[3];
    *(_OWORD *)&v59[16] = a2[4];
    *(_OWORD *)&v59[32] = a2[5];
    *(_OWORD *)&v59[48] = a2[6];
    *(_OWORD *)&v59[64] = a2[7];
    v14 = a2 + 8;
    v60 = *v14;
    v61 = v14[1];
    v62 = v14[2];
    v63 = v14[3];
    v64 = *((_QWORD *)v14 + 8);
    *((_QWORD *)&v58 + 1) = v10;
    *(_DWORD *)v59 = (v11 - (__int64)v35) >> 3;
    LOBYTE(v41) = (**a3)(a3, &v56);
    v15 = v58;
    if ( v7 && v7 != -1 )
    {
      LastError = GetLastError();
      NtCloseCompositionInputSink(v7);
      SetLastError(LastError);
    }
    v7 = v15;
    v44[0] = v15;
    v34 = v8;
  }
  if ( (_BYTE)v41 )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteListFromDITCallbackStruct = InputSiteManager::GetInputSiteListFromDITCallbackStruct(
                                           InputSiteManager,
                                           v54,
                                           (__int64)&v56);
    if ( &v42 == InputSiteListFromDITCallbackStruct )
    {
      v37 = *((_QWORD *)&v43 + 1);
      v20 = v43;
      v19 = v42;
    }
    else
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v42);
      v19 = *InputSiteListFromDITCallbackStruct;
      v38 = InputSiteListFromDITCallbackStruct[1];
      v37 = InputSiteListFromDITCallbackStruct[2];
      *InputSiteListFromDITCallbackStruct = 0LL;
      InputSiteListFromDITCallbackStruct[1] = 0LL;
      InputSiteListFromDITCallbackStruct[2] = 0LL;
      v8 = v34;
      v7 = v44[0];
      v20 = v38;
    }
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v54);
    v21 = *(_OWORD *)&v59[8];
    *(_OWORD *)&v44[1] = *(_OWORD *)&v59[8];
    v22 = *(_OWORD *)&v59[24];
    v45 = *(_OWORD *)&v59[24];
    v23 = *(_OWORD *)&v59[40];
    v46 = *(_OWORD *)&v59[40];
    v24 = *(_OWORD *)&v59[56];
    v47 = *(_OWORD *)&v59[56];
    v25 = *((_QWORD *)&v57 + 1);
    v48 = *((_QWORD *)&v57 + 1);
    v26 = BYTE8(v62) & 1;
    v49 = BYTE8(v62) & 1;
    v27 = *(_DWORD *)&v59[72];
    v50 = *(_DWORD *)&v59[72];
    v28 = v60;
    v51 = v60;
    v29 = v61;
    v52 = v61;
    v30 = v62;
    v53 = v62;
    v31 = v37;
  }
  else
  {
    v30 = v53;
    v29 = v52;
    v28 = v51;
    v27 = v50;
    v26 = v49;
    v25 = v48;
    v24 = v47;
    v23 = v46;
    v22 = v45;
    v21 = *(_OWORD *)&v44[1];
    v31 = *((_QWORD *)&v43 + 1);
    v20 = v43;
    v19 = v42;
  }
  *(_BYTE *)a1 = v41;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)(a1 + 24) = v31;
  v42 = 0LL;
  v43 = 0LL;
  *(_QWORD *)(a1 + 32) = v7;
  v44[0] = 0LL;
  *(_OWORD *)(a1 + 40) = v21;
  *(_OWORD *)(a1 + 56) = v22;
  *(_OWORD *)(a1 + 72) = v23;
  *(_OWORD *)(a1 + 88) = v24;
  *(_QWORD *)(a1 + 104) = v25;
  *(_BYTE *)(a1 + 112) = v26;
  *(_DWORD *)(a1 + 116) = v27;
  *(_OWORD *)(a1 + 120) = v28;
  *(_OWORD *)(a1 + 136) = v29;
  *(_QWORD *)(a1 + 152) = v30;
  if ( v10 )
  {
    v32 = (const struct std::nothrow_t *)(8 * ((v6 - (__int64)v10) >> 3));
    if ( (unsigned __int64)v32 >= 0x1000 )
    {
      v32 = (const struct std::nothrow_t *)((char *)v32 + 39);
      if ( (unsigned __int64)v8 - *(v10 - 1) - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v31, v32);
        JUMPOUT(0x180091550LL);
      }
      v8 = (_QWORD *)*(v10 - 1);
    }
    operator delete(v8, v32);
  }
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v42);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v65);
  return a1;
}
