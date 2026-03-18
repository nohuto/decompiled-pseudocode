/*
 * XREFs of ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BCCC
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002BAB0 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800294B4 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ConfigureInput@CComposition@@QEAA_NXZ @ 0x18002BACC (-ConfigureInput@CComposition@@QEAA_NXZ.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18002BAE8 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x18002BBC8 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18002BF04 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18002BFA4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x18002C198 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DA48 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x18014B400 (-FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z.c)
 *     McTemplateU0xqq @ 0x18015BBB4 (McTemplateU0xqq.c)
 *     McTemplateU0xqqxxffffffffffffffff @ 0x1801E98E4 (McTemplateU0xqqxxffffffffffffffff.c)
 */

_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // r12d
  struct CInputManager *v6; // r15
  char v7; // r13
  int v8; // edi
  int v9; // r14d
  CComposition *v10; // rcx
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  unsigned int v12; // ecx
  struct CVisualTree *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  _BYTE v19[8]; // [rsp+C8h] [rbp-80h] BYREF
  struct CVisualTree *v20; // [rsp+D0h] [rbp-78h] BYREF
  int v21; // [rsp+D8h] [rbp-70h] BYREF
  int v22; // [rsp+DCh] [rbp-6Ch]
  __int64 v23; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-58h] BYREF
  int v26; // [rsp+F8h] [rbp-50h] BYREF
  int v27; // [rsp+FCh] [rbp-4Ch]
  int v28; // [rsp+100h] [rbp-48h]
  int v29; // [rsp+104h] [rbp-44h]
  int v30; // [rsp+108h] [rbp-40h]
  int v31; // [rsp+10Ch] [rbp-3Ch]
  int v32; // [rsp+110h] [rbp-38h]
  int v33; // [rsp+114h] [rbp-34h]
  int v34; // [rsp+118h] [rbp-30h]
  int v35; // [rsp+11Ch] [rbp-2Ch]
  int v36; // [rsp+120h] [rbp-28h]
  int v37; // [rsp+124h] [rbp-24h]
  int v38; // [rsp+128h] [rbp-20h]
  int v39; // [rsp+12Ch] [rbp-1Ch]
  int v40; // [rsp+130h] [rbp-18h]
  int v41; // [rsp+134h] [rbp-14h]
  int v42; // [rsp+138h] [rbp-10h]
  _BYTE v43[48]; // [rsp+148h] [rbp+0h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v43, L"HitTest", 0LL);
  v2 = *((_DWORD *)a1 + 12);
  v3 = 0LL;
  v42 = 0;
  v4 = 0LL;
  *((_DWORD *)a1 + 12) = 0;
  v5 = 0;
  v6 = CInputManager::s_pInputManager;
  v7 = 0;
  v8 = 0;
  v23 = 0LL;
  v9 = 1;
  v25 = 0LL;
  v21 = 0;
  v19[0] = 0;
  v24 = 0LL;
  v22 = v2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xqq(
      0,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 1),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
    v3 = v23;
  }
  if ( !v6 )
    goto LABEL_11;
  v10 = (CComposition *)*((_QWORD *)v6 + 2);
  v20 = 0LL;
  if ( !CComposition::ConfigureInput(v10)
    || *((_DWORD *)a1 + 46)
    || (Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v20),
        CComposition::FindTreeFromMITLuid(*((CComposition **)v6 + 2), *(struct _LUID *)((char *)a1 + 188), &v20),
        (v13 = v20) == 0LL) )
  {
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v20);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              *((CComposition **)v6 + 2),
                                              *((HMONITOR *)a1 + 1),
                                              *((_DWORD *)a1 + 46),
                                              &v20);
    v9 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802925E8, 1u, TreeWithWorkspaceOrMonitorAssociation, 0x72u);
LABEL_21:
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v20);
      goto LABEL_13;
    }
    v13 = v20;
  }
  v14 = CVisualTree::PreComputeAndLockForRead(v13);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_1802925E8, 1u, v14, 0x76u);
    goto LABEL_21;
  }
  v16 = CHitTestContext::HitTestPoint(
          (char *)v6 + 24,
          v13,
          *((unsigned int *)a1 + 4),
          *((unsigned int *)a1 + 5),
          *(_DWORD *)a1,
          *((_DWORD *)a1 + 43),
          *((_QWORD *)a1 + 1),
          *((_DWORD *)a1 + 46),
          *((_QWORD *)a1 + 5),
          v22,
          (char *)a1 + 48,
          &v25,
          &v23,
          &v24,
          &v26,
          &v21,
          v19);
  v9 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802925E8, 1u, v16, 0x89u);
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v13 + 2) + 552LL));
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v20);
  v3 = v23;
  v4 = v25;
  v5 = v21;
  v7 = v19[0];
  v8 = v24;
LABEL_11:
  *((_DWORD *)a1 + 42) &= ~1u;
  *((_QWORD *)a1 + 3) = v4;
  *((_DWORD *)a1 + 42) |= v7 & 1;
  *((_QWORD *)a1 + 4) = v3;
  *((_DWORD *)a1 + 30) = v5;
  if ( v3 )
    CInputManager::CopyTransform((const struct CMILMatrix *)&v26, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 56));
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0xqqxxffffffffffffffff(
      v8,
      v2,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      *((_QWORD *)a1 + 4),
      v8,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v43);
  return v9 >= 0;
}
