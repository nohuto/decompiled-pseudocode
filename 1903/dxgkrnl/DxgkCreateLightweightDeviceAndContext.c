/*
 * XREFs of DxgkCreateLightweightDeviceAndContext @ 0x1C0201D6C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00036DC (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00037B4 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00040EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000C914 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0678 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2644 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C011F6CC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreateLightweightDeviceAndContext(struct _LUID *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  struct DXGADAPTER *v18; // r14
  char *v19; // rsi
  struct DXGADAPTER **v20; // rax
  struct DXGADAPTER *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGADAPTER *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  struct DXGADAPTER *v27; // rbx
  struct DXGADAPTER *v28; // rdx
  struct DXGADAPTER **v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  struct DXGDEVICE *v39; // r14
  int Device; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  struct DXGADAPTER *v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 CurrentProcess; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD *v53; // rax
  struct DXGADAPTER *v54; // rdi
  struct _D3DDDI_CREATECONTEXTFLAGS v55; // ebx
  unsigned int v56; // r8d
  const GUID *v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r9
  char v62; // al
  unsigned int v63; // r8d
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  _QWORD *v67; // rax
  struct DXGADAPTER *v68; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v70; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v71; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v72; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v73[2]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGCONTEXT *v74; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v75; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v76[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v77; // [rsp+A8h] [rbp-58h] BYREF
  int v78; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v79; // [rsp+DCh] [rbp-24h]
  unsigned int v80; // [rsp+E0h] [rbp-20h]
  _BYTE v81[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v82[64]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v83[72]; // [rsp+138h] [rbp+38h] BYREF

  v75 = a3;
  *a2 = 0;
  *a3 = 0;
  v70 = 0LL;
  v74 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v8);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v76[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v76, a1);
  v14 = v76[0];
  if ( v76[0] )
  {
    if ( (*((_DWORD *)v76[0] + 77) & 0x100) != 0 )
    {
      v18 = 0LL;
      v19 = (char *)Current + 160;
      while ( 1 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v19, 0LL);
        *((_QWORD *)v19 + 1) = KeGetCurrentThread();
        v68 = 0LL;
        v20 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v68);
        v21 = v76[0];
        LODWORD(v17) = DxgkpGetPairingAdapters(v76[0], 0LL, v20, &v69, 0LL, 0LL, 0);
        if ( (int)v17 < 0 )
          goto LABEL_23;
        v24 = v68;
        if ( !v68 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v23, v22);
          *(_QWORD *)(v25 + 24) = 11095LL;
          WdLogEvent5_WdAssertion(v25);
          v24 = v68;
        }
        if ( v18 == v24 )
        {
          LODWORD(v17) = -1073741275;
          v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(v23, v22);
          v67[3] = v68;
          v67[4] = v21;
          v67[5] = -1073741275LL;
          WdLogEvent5_WdAssertion(v67);
          DXGADAPTER_REFERENCE::Assign(&v68, 0LL);
          *((_QWORD *)v19 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v19, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_46;
        }
        v26 = *((_QWORD *)v24 + 320);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v26 + 24, 0LL);
        v27 = v76[0];
        *(_QWORD *)(v26 + 32) = KeGetCurrentThread();
        v28 = v68;
        if ( v68 == v27 )
          goto LABEL_18;
        v71 = 0LL;
        v29 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v71);
        LODWORD(v17) = DxgkpGetPairingAdapters(v27, 0LL, v29, &v72, 0LL, 0LL, 0);
        if ( (int)v17 < 0 )
        {
          DXGADAPTER_REFERENCE::Assign(&v71, 0LL);
          goto LABEL_22;
        }
        v18 = v68;
        if ( v68 == v71 )
          break;
        v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v33 + 24) = v68;
        WdLogEvent5_WdWarning(v33);
        DXGADAPTER_REFERENCE::Assign(&v71, 0LL);
        *(_QWORD *)(v26 + 32) = 0LL;
        ExReleasePushLockExclusiveEx(v26 + 24, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign(&v68, 0LL);
        *((_QWORD *)v19 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v19, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGADAPTER_REFERENCE::Assign(&v71, 0LL);
      v28 = v68;
LABEL_18:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, v28, v27);
      v34 = COREADAPTERACCESS::AcquireShared((__int64)v81, 0xFFFFFFFFLL, 0LL);
      v17 = v34;
      if ( v34 < 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
        v38[3] = v68;
        v38[4] = v27;
        v38[5] = v17;
        WdLogEvent5_WdWarning(v38);
        goto LABEL_20;
      }
      Device = ADAPTER_RENDER::CreateDevice(*((_QWORD *)v68 + 320), (__int64 *)&v70, 0, 1, v27, 0, 0, 0LL, 0LL);
      v17 = Device;
      if ( Device < 0 )
      {
        v44 = WdLogNewEntry5_WdError(v42, v41, v43);
        v45 = v68;
        v46 = v44;
        *(_QWORD *)(v44 + 24) = v68;
        CurrentProcess = PsGetCurrentProcess(v45, v47);
        *(_QWORD *)(v46 + 40) = v17;
        *(_QWORD *)(v46 + 32) = CurrentProcess;
        WdLogEvent5_WdError(v46);
LABEL_20:
        COREACCESS::~COREACCESS((COREACCESS *)v83);
        COREACCESS::~COREACCESS((COREACCESS *)v82);
LABEL_22:
        *(_QWORD *)(v26 + 32) = 0LL;
        ExReleasePushLockExclusiveEx(v26 + 24, 0LL);
        KeLeaveCriticalRegion();
LABEL_23:
        DXGADAPTER_REFERENCE::Assign(&v68, 0LL);
        *((_QWORD *)v19 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v19, 0LL);
        KeLeaveCriticalRegion();
        v39 = v70;
        goto LABEL_24;
      }
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v81);
      v39 = v70;
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73, v70);
      v49 = COREADAPTERACCESS::AcquireShared((__int64)v81, 0xFFFFFFFFLL, 0LL);
      v17 = v49;
      if ( v49 >= 0 )
      {
        v54 = v68;
        v78 = 0;
        v55.0 = 0;
        v56 = *((_DWORD *)v68 + 644);
        v79 = v56;
        v80 = 1;
        if ( (*((_DWORD *)v68 + 77) & 0x10) != 0 )
        {
          memset(&v77, 0, sizeof(v77));
          v77.Type = DXGKQAITYPE_PREFERREDGPUNODE;
          v77.pOutputData = &v78;
          v77.OutputDataSize = 12;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v68, &v77, v57) < 0 )
          {
            v60 = WdLogNewEntry5_WdAssertion(v59, v58);
            *(_QWORD *)(v60 + 24) = 11217LL;
            WdLogEvent5_WdAssertion(v60);
          }
          v56 = v79;
          v54 = v68;
        }
        v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v54 + 320) + 16LL) + 2440LL) + 24LL);
        if ( v61 && (*(_BYTE *)(74LL * v56 + v61 + 68) & 1) != 0 )
          v55.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
        v62 = ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)v54 + 320), 0, v56);
        v64 = DXGDEVICE::CreateContext(v39, &v74, v63, v80, v55, 0LL, 0, D3DKMT_CLIENTHINT_DX10, v62);
        v17 = v64;
        if ( v64 < 0 )
        {
          v66 = WdLogNewEntry5_WdEvent(v65);
          *(_QWORD *)(v66 + 24) = v68;
          *(_QWORD *)(v66 + 32) = v17;
          WdLogEvent5_WdEvent(v66);
        }
      }
      else
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52);
        v53[3] = v68;
        v53[4] = v27;
        v53[5] = v17;
        WdLogEvent5_WdWarning(v53);
      }
      if ( v73[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
      COREACCESS::~COREACCESS((COREACCESS *)v83);
      COREACCESS::~COREACCESS((COREACCESS *)v82);
      *(_QWORD *)(v26 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v26 + 24, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign(&v68, 0LL);
      *((_QWORD *)v19 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
      KeLeaveCriticalRegion();
LABEL_24:
      if ( (int)v17 < 0 )
      {
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
        }
      }
      else
      {
        *a2 = *((_DWORD *)v39 + 83);
        *v75 = *((_DWORD *)v74 + 6);
      }
      goto LABEL_46;
    }
    v16 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = v14;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v15[3] = a1->HighPart;
    v15[4] = a1->LowPart;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
  }
  LODWORD(v17) = -1073741585;
LABEL_46:
  DXGADAPTER_REFERENCE::Assign(v76, 0LL);
  return (unsigned int)v17;
}
