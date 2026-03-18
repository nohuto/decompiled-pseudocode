/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00C571C
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00C5458 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     CreateTokenManagerSessionGlobal @ 0x1C0001340 (CreateTokenManagerSessionGlobal.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C001A2BC (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001B510 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C00C5604 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C00C5EF8 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r14
  CTokenManager **v3; // r15
  HANDLE **v5; // rcx
  OUTPUTDUPL_SESSION_MGR *v6; // rax
  OUTPUTDUPL_SESSION_MGR *v7; // rbx
  char v8; // al
  struct DXGPROCESS *Current; // rax
  _QWORD *v10; // rbx
  __int64 (__fastcall *v11)(_DWORD *); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  char v17; // al
  __int64 (*v18)(void); // rax
  __int64 (*v19)(void); // rax
  struct DXGPROCESS *v20; // rax
  void *CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 ProcessServerSilo; // rax
  bool v25; // al
  DXGSESSIONDATA *result; // rax
  OUTPUTDUPL_SESSION_MGR *v27; // rcx
  __int64 v28; // rax
  __int64 HostSilo; // rax
  __int64 v30; // rdi
  int v31; // ebx
  _DWORD v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  char *v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+48h] [rbp-B8h]
  const wchar_t *v36; // [rsp+50h] [rbp-B0h]
  int *v37; // [rsp+58h] [rbp-A8h]
  int v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+80h] [rbp-80h]
  _BYTE v43[40]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  int v45; // [rsp+B8h] [rbp-48h]
  const wchar_t *v46; // [rsp+C0h] [rbp-40h]
  int *v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  int v52; // [rsp+F0h] [rbp-10h]
  _BYTE v53[40]; // [rsp+F8h] [rbp-8h] BYREF
  int v54; // [rsp+160h] [rbp+60h] BYREF
  char v55; // [rsp+168h] [rbp+68h] BYREF
  int v56; // [rsp+170h] [rbp+70h] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+178h] [rbp+78h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  v3 = (CTokenManager **)((char *)this + 18712);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 12) = 32;
  *((_DWORD *)this + 4622) = 0;
  *((_BYTE *)this + 18493) = 0;
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_DWORD *)this + 4636) = 61;
  *((_DWORD *)this + 4652) = 0;
  *((_QWORD *)this + 2327) = 0LL;
  *((_QWORD *)this + 2330) = 0LL;
  *((_QWORD *)this + 2331) = 0LL;
  *((_QWORD *)this + 2332) = 0LL;
  *((_DWORD *)this + 4666) = 0;
  *((_DWORD *)this + 4667) = 81;
  *((_DWORD *)this + 4668) = 1;
  *((_QWORD *)this + 2335) = 0LL;
  *((_QWORD *)this + 2336) = 0LL;
  *((_QWORD *)this + 2339) = 0LL;
  *((_QWORD *)this + 2340) = 0LL;
  *((_QWORD *)this + 2341) = 0LL;
  *((_QWORD *)this + 2342) = 0LL;
  *((_DWORD *)this + 4686) = 0;
  *((_DWORD *)this + 4687) = -1;
  *((_DWORD *)this + 4688) = 26;
  *((_DWORD *)this + 4690) = 0;
  *((_QWORD *)this + 2346) = 0LL;
  *((_QWORD *)this + 2347) = 0LL;
  *((_WORD *)this + 9392) = 0;
  *((_QWORD *)this + 2349) = 0LL;
  *((_QWORD *)this + 2350) = 0LL;
  *((_DWORD *)this + 4702) = -1;
  v5 = (HANDLE **)((char *)this + 18816);
  *v5 = 0LL;
  DispBrokerClientReference::Assign(v5, 0LL);
  *((_QWORD *)this + 2353) = 0LL;
  *((_QWORD *)this + 2354) = 0LL;
  *((_QWORD *)this + 2355) = 0LL;
  *((_DWORD *)this + 4712) = 0;
  *((_DWORD *)this + 4713) = -1;
  *((_DWORD *)this + 4714) = 32;
  *((_QWORD *)this + 2358) = 0LL;
  *((_QWORD *)this + 2359) = 0LL;
  v6 = (OUTPUTDUPL_SESSION_MGR *)operator new[](0x1B8uLL, 0x674D444Fu, PagedPool);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 1) = 0;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(v6);
    *((_DWORD *)v7 + 12) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 1) = v7;
  if ( v7 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v7) < 0 )
  {
    v27 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v27 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v27);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2320) = (char *)this + 18552;
  *((_QWORD *)this + 2319) = (char *)this + 18552;
  *((_QWORD *)this + 2322) = (char *)this + 18568;
  *((_QWORD *)this + 2321) = (char *)this + 18568;
  *((_QWORD *)this + 2324) = (char *)this + 18584;
  *((_QWORD *)this + 2323) = (char *)this + 18584;
  RtlGetNtProductType(&ProductType);
  RtlGetSuiteMask();
  if ( ProductType != NtProductServer || (v8 = 0, !g_bSkuSupportMultipleUsers) )
    v8 = 1;
  *((_BYTE *)this + 18495) = v8;
  v44 = 0LL;
  v49 = 0LL;
  v46 = L"bEnumerateHWBeforeSW";
  v45 = 292;
  v47 = &v54;
  v48 = 0x4000000;
  v50 = 0;
  v51 = 0LL;
  v52 = 0;
  memset(v53, 0, sizeof(v53));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v44,
              0LL,
              0LL) >= 0 )
    goto LABEL_30;
  v34 = 0LL;
  v35 = 292;
  v36 = L"fUseHardwareGPU";
  v38 = 0x4000000;
  v37 = &v54;
  v39 = 0LL;
  v40 = 0;
  v41 = 0LL;
  v42 = 0;
  memset(v43, 0, sizeof(v43));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v34,
              0LL,
              0LL) >= 0 )
LABEL_30:
    *((_BYTE *)this + 18495) = v54 != 0;
  v55 = 0;
  *((_QWORD *)this + 2312) = 0LL;
  v33 = &v55;
  *((_DWORD *)this + 4626) = 0;
  v32[0] = 3;
  v32[1] = 1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    v10 = (_QWORD *)*((_QWORD *)Current + 12);
  else
    v10 = 0LL;
  if ( v10 && (v11 = (__int64 (__fastcall *)(_DWORD *))v10[44]) != 0LL && (v12 = v11(v32), v16 = v12, v12 < 0) )
  {
    v28 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v28 + 24) = v2;
    *(_QWORD *)(v28 + 32) = v16;
    WdLogEvent5_WdError(v28);
    v17 = 0;
    v55 = 0;
  }
  else
  {
    v17 = v55;
  }
  *((_BYTE *)this + 18488) = v17;
  if ( v10 )
  {
    v18 = (__int64 (*)(void))v10[42];
    if ( v18 )
      *((_QWORD *)this + 2314) = v18();
    v19 = (__int64 (*)(void))v10[48];
    if ( v19 )
      *((_QWORD *)this + 2315) = v19();
  }
  v20 = DXGPROCESS::GetCurrent();
  *((_QWORD *)this + 2329) = v20;
  *((_BYTE *)v20 + 296) = 1;
  CurrentProcess = (void *)PsGetCurrentProcess();
  *((_QWORD *)this + 2328) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v23, v22) + 38000) )
    CreateTokenManagerSessionGlobal(v3);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2328));
  v25 = (unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0;
  *((_BYTE *)this + 18492) = v25;
  if ( v25 )
  {
    v56 = 0;
    v34 = 0LL;
    v36 = L"DisableContainerSessionVersionCheck";
    v35 = 292;
    v37 = &v56;
    v38 = 67108868;
    v39 = 0LL;
    v40 = 0;
    v41 = 0LL;
    v42 = 0;
    memset(v43, 0, sizeof(v43));
    HostSilo = PsGetHostSilo();
    v30 = PsAttachSiloToCurrentThread(HostSilo);
    v31 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v34, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v30);
    if ( v31 < 0 || !v56 )
      *((_BYTE *)this + 18493) = 1;
  }
  *((_DWORD *)this + 4674) = 0;
  result = this;
  *((_QWORD *)this + 2338) = 0LL;
  *((_BYTE *)this + 18494) = 1;
  *((_QWORD *)this + 2347) = this;
  return result;
}
