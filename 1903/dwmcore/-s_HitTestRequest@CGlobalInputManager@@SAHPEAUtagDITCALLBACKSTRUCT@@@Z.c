/*
 * XREFs of ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180086130
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180085F10 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?ConfigureInput@CComposition@@QEAA_NXZ @ 0x180085F2C (-ConfigureInput@CComposition@@QEAA_NXZ.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x180085F48 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x180086028 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180086418 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18008699C (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180086A34 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CA72C (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x180177520 (-FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z.c)
 *     McTemplateU0xqq @ 0x1801A9D58 (McTemplateU0xqq.c)
 *     McTemplateU0pqqpxffffffffffffffff @ 0x180237724 (McTemplateU0pqqpxffffffffffffffff.c)
 */

_BOOL8 __fastcall CGlobalInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1)
{
  int v2; // edx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ebx
  struct CGlobalInputManager *v6; // rsi
  CComposition *v7; // rbx
  RTL_SRWLOCK *v8; // rbx
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  unsigned int v10; // ecx
  CVisualTree *v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rax
  struct CVisualTree *v18[2]; // [rsp+C0h] [rbp-80h] BYREF
  int v19; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-68h]
  int v21; // [rsp+E0h] [rbp-60h]
  __int64 v22; // [rsp+E8h] [rbp-58h]
  __int64 v23; // [rsp+F0h] [rbp-50h]
  __int64 v24; // [rsp+F8h] [rbp-48h]
  __int128 v25; // [rsp+100h] [rbp-40h]
  __int128 v26; // [rsp+110h] [rbp-30h]
  __int128 v27; // [rsp+120h] [rbp-20h]
  __int128 v28; // [rsp+130h] [rbp-10h]
  int v29; // [rsp+140h] [rbp+0h]
  int v30; // [rsp+144h] [rbp+4h]
  char v31; // [rsp+148h] [rbp+8h]
  _QWORD v32[2]; // [rsp+150h] [rbp+10h] BYREF
  int v33; // [rsp+160h] [rbp+20h]
  int v34; // [rsp+164h] [rbp+24h]
  __int64 v35; // [rsp+168h] [rbp+28h]
  int v36; // [rsp+170h] [rbp+30h]
  _BYTE v37[48]; // [rsp+178h] [rbp+38h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v37, L"HitTest", 0LL);
  v3 = *((_DWORD *)a1 + 12);
  v4 = 0LL;
  v29 = 0;
  v5 = 1;
  v30 = 0;
  v21 = 0;
  v22 = 0LL;
  v6 = CGlobalInputManager::s_pInputManager;
  v19 = v3;
  v20 = *((_QWORD *)a1 + 5);
  v23 = 0LL;
  v24 = 0LL;
  v31 = 0;
  v25 = _xmm;
  v26 = _xmm;
  v27 = _xmm;
  v28 = _xmm;
  LOWORD(v29) = 32085;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xqq(
      0,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 1),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
    v4 = v23;
  }
  if ( !v6 )
    goto LABEL_11;
  v7 = (CComposition *)*((_QWORD *)v6 + 2);
  v18[0] = 0LL;
  if ( !CComposition::ConfigureInput(v7)
    || *((_DWORD *)a1 + 32)
    || (Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v18),
        CComposition::FindTreeFromMITLuid(v7, *(struct _LUID *)((char *)a1 + 132), v18),
        (v11 = v18[0]) == 0LL) )
  {
    v8 = (RTL_SRWLOCK *)*((_QWORD *)v6 + 2);
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v18);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              v8,
                                              *((HMONITOR *)a1 + 1),
                                              *((_DWORD *)a1 + 32),
                                              v18);
    v5 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        v10,
        &dword_1802C02F0,
        1u,
        TreeWithWorkspaceOrMonitorAssociation,
        0x76u,
        0LL);
LABEL_21:
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v18);
      goto LABEL_13;
    }
    v11 = v18[0];
  }
  v32[1] = *((_QWORD *)a1 + 2);
  v33 = *(_DWORD *)a1;
  v34 = *((_DWORD *)a1 + 31);
  v35 = *((_QWORD *)a1 + 1);
  v36 = *((_DWORD *)a1 + 32);
  v32[0] = v11;
  v12 = CVisualTree::PreComputeAndLockForRead(v11);
  v5 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802C02F0, 1u, v12, 0x82u, 0LL);
    goto LABEL_21;
  }
  v14 = CHitTestContext::HitTestPoint(
          (struct CGlobalInputManager *)((char *)v6 + 24),
          (const struct CHitTestContext::HitTestPointRequest *)v32,
          (struct CHitTestContext::HitTestPointResult *)&v19);
  v5 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_1802C02F0, 1u, v14, 0x86u, 0LL);
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v18[0] + 2) + 568LL));
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(v18);
  v4 = v23;
LABEL_11:
  v16 = v22;
  *((_DWORD *)a1 + 30) &= ~1u;
  *((_QWORD *)a1 + 3) = v16;
  *((_DWORD *)a1 + 29) = v30;
  LODWORD(v16) = v31 & 1;
  *((_QWORD *)a1 + 4) = v4;
  *((_DWORD *)a1 + 30) |= v16;
  *((_DWORD *)a1 + 12) = v21;
  if ( v4 )
  {
    *(_OWORD *)((char *)a1 + 52) = v25;
    *(_OWORD *)((char *)a1 + 68) = v26;
    *(_OWORD *)((char *)a1 + 84) = v27;
    *(_OWORD *)((char *)a1 + 100) = v28;
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0pqqpxffffffffffffffff(
      v24,
      v2,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      *((_QWORD *)a1 + 4),
      v24,
      v25,
      SBYTE4(v25),
      SBYTE8(v25),
      SBYTE12(v25),
      v26,
      SBYTE4(v26),
      SBYTE8(v26),
      SBYTE12(v26),
      v27,
      SBYTE4(v27),
      SBYTE8(v27),
      SBYTE12(v27),
      v28,
      SBYTE4(v28),
      SBYTE8(v28),
      SBYTE12(v28));
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v37);
  return v5 >= 0;
}
