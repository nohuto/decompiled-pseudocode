/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C013BFBC
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C013BE70 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C0018AAC (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     CreateTokenManagerSessionGlobal @ 0x1C001A778 (CreateTokenManagerSessionGlobal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C013C3E8 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C013C500 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v3; // r14
  CTokenManager **v4; // r15
  OUTPUTDUPL_SESSION_MGR *v5; // rax
  OUTPUTDUPL_SESSION_MGR *v6; // rbx
  __int16 SuiteMask; // ax
  char v8; // al
  struct DXGPROCESS *Current; // rax
  _QWORD *v10; // rbx
  __int64 (__fastcall *v11)(_QWORD *); // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  char v15; // al
  __int64 (*v16)(void); // rax
  __int64 (*v17)(void); // rax
  struct DXGPROCESS *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *CurrentProcess; // rax
  __int64 v22; // rcx
  __int64 ProcessServerSilo; // rax
  bool v24; // al
  DXGSESSIONDATA *result; // rax
  OUTPUTDUPL_SESSION_MGR *v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  __int64 HostSilo; // rax
  __int64 v30; // rdi
  int v31; // ebx
  _QWORD v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h]
  const wchar_t *v35; // [rsp+50h] [rbp-B0h]
  int *v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-80h]
  _BYTE v42[40]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h] BYREF
  int v44; // [rsp+B8h] [rbp-48h]
  const wchar_t *v45; // [rsp+C0h] [rbp-40h]
  int *v46; // [rsp+C8h] [rbp-38h]
  int v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  int v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+F0h] [rbp-10h]
  _BYTE v52[40]; // [rsp+F8h] [rbp-8h] BYREF
  int v53; // [rsp+160h] [rbp+60h] BYREF
  char v54; // [rsp+168h] [rbp+68h] BYREF
  int v55; // [rsp+170h] [rbp+70h] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+178h] [rbp+78h] BYREF

  v3 = a2;
  *(_DWORD *)this = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 10) = 0;
  v4 = (CTokenManager **)((char *)this + 18712);
  *((_DWORD *)this + 11) = -1;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 12) = 32;
  *((_BYTE *)this + 18488) = 0;
  *((_BYTE *)this + 18490) = 0;
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2316) = 0LL;
  *((_DWORD *)this + 4636) = 61;
  *((_DWORD *)this + 4652) = 0;
  *((_QWORD *)this + 2327) = 0LL;
  *((_QWORD *)this + 2330) = 0LL;
  *((_QWORD *)this + 2331) = 0LL;
  *((_DWORD *)this + 4666) = 0;
  *((_DWORD *)this + 4667) = 81;
  *((_DWORD *)this + 4668) = 1;
  *((_QWORD *)this + 2332) = 0LL;
  *((_QWORD *)this + 2335) = 0LL;
  *((_QWORD *)this + 2336) = 0LL;
  *((_QWORD *)this + 2339) = 0LL;
  *((_QWORD *)this + 2340) = 0LL;
  *((_QWORD *)this + 2341) = 0LL;
  *((_DWORD *)this + 4686) = 0;
  *((_DWORD *)this + 4687) = -1;
  *((_DWORD *)this + 4688) = 26;
  *((_QWORD *)this + 2342) = 0LL;
  *((_DWORD *)this + 4690) = 0;
  *((_QWORD *)this + 2346) = 0LL;
  *((_DWORD *)this + 4702) = 32;
  *((_QWORD *)this + 2347) = 0LL;
  *((_QWORD *)this + 2348) = 0LL;
  *((_DWORD *)this + 4700) = 0;
  *((_DWORD *)this + 4701) = 84;
  *((_QWORD *)this + 2349) = 0LL;
  *((_QWORD *)this + 2352) = 0LL;
  *((_QWORD *)this + 2353) = 0LL;
  v5 = (OUTPUTDUPL_SESSION_MGR *)operator new(0x1B8uLL, 0x674D444Fu, PagedPool);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 1) = 0;
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(v5);
    *((_DWORD *)v6 + 12) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 1) = v6;
  if ( v6 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v6) < 0 )
  {
    v26 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v26 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v26);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2320) = (char *)this + 18552;
  *((_QWORD *)this + 2319) = (char *)this + 18552;
  *((_QWORD *)this + 2322) = (char *)this + 18568;
  *((_QWORD *)this + 2321) = (char *)this + 18568;
  *((_QWORD *)this + 2324) = (char *)this + 18584;
  *((_QWORD *)this + 2323) = (char *)this + 18584;
  RtlGetNtProductType(&ProductType);
  SuiteMask = RtlGetSuiteMask();
  if ( ProductType != NtProductServer || (v27 = (SuiteMask & 0x110) == 16, v8 = 0, !v27) )
    v8 = 1;
  *((_BYTE *)this + 18492) = v8;
  v43 = 0LL;
  v48 = 0LL;
  v45 = L"bEnumerateHWBeforeSW";
  v44 = 292;
  v46 = &v53;
  v47 = 0x4000000;
  v49 = 0;
  v50 = 0LL;
  v51 = 0;
  memset(v52, 0, sizeof(v52));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v43,
              0LL,
              0LL) >= 0 )
    goto LABEL_30;
  v33 = 0LL;
  v34 = 292;
  v35 = L"fUseHardwareGPU";
  v37 = 0x4000000;
  v36 = &v53;
  v38 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 0;
  memset(v42, 0, sizeof(v42));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v33,
              0LL,
              0LL) >= 0 )
LABEL_30:
    *((_BYTE *)this + 18492) = v53 != 0;
  v54 = 0;
  *((_QWORD *)this + 2312) = 0LL;
  v32[1] = &v54;
  *((_DWORD *)this + 4626) = 0;
  v32[0] = 0x100000003LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    v10 = (_QWORD *)*((_QWORD *)Current + 13);
  else
    v10 = 0LL;
  if ( v10 && (v11 = (__int64 (__fastcall *)(_QWORD *))v10[45]) != 0LL && (v12 = v11(v32), v14 = v12, v12 < 0) )
  {
    v28 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v28 + 24) = v3;
    *(_QWORD *)(v28 + 32) = v14;
    WdLogEvent5_WdError(v28);
    v15 = 0;
    v54 = 0;
  }
  else
  {
    v15 = v54;
  }
  *((_BYTE *)this + 18488) = v15;
  if ( v10 )
  {
    v16 = (__int64 (*)(void))v10[43];
    if ( v16 )
      *((_QWORD *)this + 2314) = v16();
    v17 = (__int64 (*)(void))v10[49];
    if ( v17 )
      *((_QWORD *)this + 2315) = v17();
  }
  v18 = DXGPROCESS::GetCurrent();
  *((_QWORD *)this + 2329) = v18;
  *((_BYTE *)v18 + 320) = 1;
  CurrentProcess = (void *)PsGetCurrentProcess(v20, v19);
  *((_QWORD *)this + 2328) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v22) + 2541) )
    CreateTokenManagerSessionGlobal(v4);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2328));
  v24 = (unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0;
  *((_BYTE *)this + 18489) = v24;
  if ( v24 )
  {
    v55 = 0;
    v33 = 0LL;
    v35 = L"DisableContainerSessionVersionCheck";
    v34 = 292;
    v36 = &v55;
    v37 = 67108868;
    v38 = 0LL;
    v39 = 0;
    v40 = 0LL;
    v41 = 0;
    memset(v42, 0, sizeof(v42));
    HostSilo = PsGetHostSilo();
    v30 = PsAttachSiloToCurrentThread(HostSilo);
    v31 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v33, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v30);
    if ( v31 < 0 || !v55 )
      *((_BYTE *)this + 18490) = 1;
  }
  *((_DWORD *)this + 4674) = 0;
  result = this;
  *((_QWORD *)this + 2338) = 0LL;
  *((_BYTE *)this + 18491) = 1;
  return result;
}
