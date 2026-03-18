/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138C60
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C0138B60 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C0206210 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C001AB40 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00CA358 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C015A258 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01F0C38 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C01F4B5C (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct _KEVENT **a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r13
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v8; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const GUID *v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int PairingAdapters; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdi
  volatile signed __int64 *v35; // rdi
  volatile signed __int64 *v36; // rsi
  signed __int64 v37; // rcx
  DXGADAPTER *v38; // rdi
  struct DXGADAPTER *v39; // rcx
  __int64 v40; // rcx
  const GUID *v41; // r8
  DXGADAPTER *v42; // r12
  DXGADAPTER *v43; // r13
  ADAPTER_DISPLAY **v44; // r8
  ADAPTER_DISPLAY *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  char *v49; // r12
  char v50; // si
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  char v54; // r13
  ADAPTER_DISPLAY *v55; // rcx
  __int64 v56; // rax
  union _LARGE_INTEGER v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  DXGADAPTER *v60; // rsi
  DXGGLOBAL **v61; // rcx
  DXGGLOBAL **v62; // rcx
  int v64; // r9d
  REMOTE_VSYNC *v65; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // r9
  int v74; // edx
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // rax
  DXGSESSIONMGR *v80; // rdi
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  DXGADAPTER *v85; // rsi
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  unsigned int v97; // eax
  _QWORD *v98; // rax
  int v99; // eax
  char v100; // [rsp+40h] [rbp-C0h]
  int v101; // [rsp+44h] [rbp-BCh]
  unsigned int v102; // [rsp+44h] [rbp-BCh]
  DXGADAPTER *v104; // [rsp+50h] [rbp-B0h] BYREF
  DXGADAPTER *v105; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v106; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v107; // [rsp+68h] [rbp-98h]
  unsigned int v108; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE *v109; // [rsp+78h] [rbp-88h] BYREF
  ADAPTER_DISPLAY **v110; // [rsp+80h] [rbp-80h]
  char *v111; // [rsp+88h] [rbp-78h]
  char v112[8]; // [rsp+90h] [rbp-70h] BYREF
  DXGADAPTER *v113; // [rsp+98h] [rbp-68h]
  char v114; // [rsp+A0h] [rbp-60h]
  char v115[8]; // [rsp+A8h] [rbp-58h] BYREF
  DXGADAPTER *v116; // [rsp+B0h] [rbp-50h]
  char v117; // [rsp+B8h] [rbp-48h]
  struct _KEVENT **v118; // [rsp+C0h] [rbp-40h]
  union _LARGE_INTEGER Timeout; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v120; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v121; // [rsp+D8h] [rbp-28h] BYREF
  char v122[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v123[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v124; // [rsp+F0h] [rbp-10h]
  struct DXGADAPTER *v125; // [rsp+F8h] [rbp-8h]
  char v126; // [rsp+100h] [rbp+0h]
  int v127; // [rsp+104h] [rbp+4h]
  __int64 v128; // [rsp+108h] [rbp+8h]
  char v129[8]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v130; // [rsp+130h] [rbp+30h]
  struct DXGADAPTER *v131; // [rsp+138h] [rbp+38h]
  char v132; // [rsp+140h] [rbp+40h]
  int v133; // [rsp+144h] [rbp+44h]
  __int64 v134; // [rsp+148h] [rbp+48h]

  v5 = a4;
  v6 = (unsigned int)a2;
  SessionDataForSpecifiedSession = 0LL;
  v108 = a4;
  v101 = a2;
  v118 = a5;
  v106 = 0LL;
  v8 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v67 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v14 = *v67;
    }
    v5 = v108;
  }
  if ( !v14 )
  {
    v68 = WdLogNewEntry5_WdError(v12, v11, v13);
    LODWORD(v34) = -1073741811;
    *(_QWORD *)(v68 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    return (unsigned int)v34;
  }
  if ( !v5 || *(_BYTE *)(v14 + 298) || g_OSTestSigningEnabled && *(char *)(v14 + 299) < 0 )
  {
    KeEnterCriticalRegion();
    if ( !(_DWORD)v8 && DXGPROCESS::IsRemoteConnection((DXGPROCESS *)v14) )
    {
      Global = DXGGLOBAL::GetGlobal(v16, v15);
      LODWORD(v34) = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 632));
LABEL_95:
      KeLeaveCriticalRegion();
      return (unsigned int)v34;
    }
    if ( v14 != -184 && *(struct _KTHREAD **)(v14 + 192) == KeGetCurrentThread() )
    {
      v71 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v71 + 24) = 1449LL;
      WdLogEvent5_WdAssertion(v71);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v64 = *(_DWORD *)(v14 + 200);
        if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v17, &EventBlockThread, v18, v64);
      }
      ExAcquirePushLockSharedEx(v14 + 184, 0LL);
    }
    v19 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (*(_BYTE *)(v14 + 299) & 8) == 0 )
    {
      if ( v19 < *(_DWORD *)(v14 + 224) )
      {
        v20 = *(_QWORD *)(v14 + 208);
        v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
        if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60)
          && (v21 & 0x2000) == 0
          && (v21 & 0x1F) != 0 )
        {
          v22 = v21 & 0x1F;
          if ( (_BYTE)v22 == 1 )
          {
            v23 = *(_QWORD *)(v20 + 16LL * v19);
            goto LABEL_19;
          }
          v24 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v22, 2LL * v19);
          *(_QWORD *)(v24 + 24) = 267LL;
          WdLogEvent5_WdError(v24);
        }
      }
      v23 = 0LL;
LABEL_19:
      if ( v23 )
        _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
      ExReleasePushLockSharedEx(v14 + 184, 0LL);
      KeLeaveCriticalRegion();
      if ( !v23 )
      {
        v77 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        LODWORD(v34) = -1073741811;
        *(_QWORD *)(v77 + 24) = v8;
        *(_QWORD *)(v77 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v77);
        goto LABEL_95;
      }
      if ( (_DWORD)v6 )
      {
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v109, v6, (struct _KTHREAD **)v14, &v106);
        if ( !v106 )
        {
          v79 = WdLogNewEntry5_WdWarning(v26, v25, v78);
          *(_QWORD *)(v79 + 24) = v23;
          *(_QWORD *)(v79 + 32) = v6;
          WdLogEvent5_WdWarning(v79);
          if ( v109 && _InterlockedExchangeAdd64((volatile signed __int64 *)v109 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v109 + 2), v109);
          LODWORD(v34) = -1073741811;
          goto LABEL_93;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v106 + 8);
        if ( v109 )
        {
          v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v109 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v26 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v109 + 2), v109);
        }
      }
      v28 = *(_QWORD *)(v14 + 96);
      if ( v28 && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v28 + 224))(0LL, 0LL, 0LL) )
      {
        if ( !*(_BYTE *)(v23 + 185) )
          goto LABEL_105;
        v80 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v26, v25) + 74);
        if ( v80 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v26, v25);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v80,
                                             CurrentProcessSessionId);
        }
        if ( *((_DWORD *)SessionDataForSpecifiedSession + 4690) )
          v65 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v26, v25) + 696);
        else
LABEL_105:
          v65 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v26, v25) + 632);
        LODWORD(v34) = REMOTE_VSYNC::WaitForVSync(v65);
        goto LABEL_92;
      }
      PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v23, a3, &v104, &v120, &v105, &v121, 0);
      v34 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v82 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33);
        v82[3] = v23;
        v82[4] = a3;
        v82[5] = v34;
        WdLogEvent5_WdError(v82);
LABEL_92:
        if ( v106 && _InterlockedExchangeAdd64((volatile signed __int64 *)v106 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v106 + 2), v106);
LABEL_93:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
        goto LABEL_95;
      }
      v35 = (volatile signed __int64 *)v104;
      v36 = (volatile signed __int64 *)v105;
      if ( !v104 || !v105 )
      {
        v83 = WdLogNewEntry5_WdAssertion(v32, v31);
        *(_QWORD *)(v83 + 24) = 6511LL;
        WdLogEvent5_WdAssertion(v83);
      }
      if ( v106
        && (v35 != *(volatile signed __int64 **)(*((_QWORD *)v106 + 2) + 16LL)
         || v36 != *((volatile signed __int64 **)v106 + 216)) )
      {
        v84 = WdLogNewEntry5_WdWarning(v106, v31, v33);
        *(_QWORD *)(v84 + 24) = v23;
        *(_QWORD *)(v84 + 32) = v6;
        WdLogEvent5_WdWarning(v84);
        LODWORD(v34) = -1073741811;
        goto LABEL_92;
      }
      v125 = (struct DXGADAPTER *)v35;
      v126 = 0;
      v127 = -1;
      v128 = 0LL;
      if ( v35 )
      {
        _InterlockedIncrement64(v35 + 3);
        v36 = (volatile signed __int64 *)v105;
        v35 = (volatile signed __int64 *)v104;
        v124 = -1LL;
      }
      if ( !v36 )
        v36 = v35;
      v131 = (struct DXGADAPTER *)v36;
      v132 = 0;
      v133 = -1;
      v134 = 0LL;
      if ( v36 )
      {
        _InterlockedIncrement64(v36 + 3);
        v35 = (volatile signed __int64 *)v104;
        v130 = -1LL;
      }
      if ( _InterlockedExchangeAdd64(v35 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v104 + 2), v104);
      v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v38 = v105;
      if ( v37 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v105 + 2), v105);
      if ( *((_DWORD *)v38 + 34) != 1 )
      {
LABEL_42:
        if ( v126 )
        {
          v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v31);
          v89[5] = v123;
          v89[3] = 275LL;
          v89[4] = 4LL;
          v89[6] = 0LL;
          v89[7] = 0LL;
          WdLogEvent5_WdCriticalError(v89);
        }
        v39 = v125;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v125 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v125 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v40, &EventBlockThread, v41, 72);
            KeWaitForSingleObject((char *)v125 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared((__int64)v125, 0xFFFFFFFF, 0LL);
          v39 = v125;
        }
        v127 = -1;
        v128 = 0LL;
        v126 = 1;
        if ( *((_DWORD *)v39 + 44) != 1 )
          goto LABEL_167;
        if ( v125 != v131 )
        {
          COREACCESS::AcquireShared((__int64)v129, 0xFFFFFFFF, 0LL);
          v39 = (struct DXGADAPTER *)*((unsigned int *)v131 + 44);
          if ( (_DWORD)v39 != 1 )
          {
            COREACCESS::Release((COREACCESS *)v129);
LABEL_167:
            COREACCESS::Release((COREACCESS *)v123);
LABEL_168:
            LODWORD(v34) = -1073741130;
            goto LABEL_82;
          }
        }
        v42 = v104;
        LODWORD(v34) = 0;
        v111 = (char *)v104 + 2560;
        if ( !*((_QWORD *)v104 + 320) )
        {
          v90 = WdLogNewEntry5_WdAssertion(v39, v31);
          *(_QWORD *)(v90 + 24) = 6570LL;
          WdLogEvent5_WdAssertion(v90);
        }
        v43 = v105;
        v44 = (ADAPTER_DISPLAY **)((char *)v105 + 2552);
        v110 = (ADAPTER_DISPLAY **)((char *)v105 + 2552);
        if ( !*((_QWORD *)v105 + 319) )
        {
          v91 = WdLogNewEntry5_WdAssertion(v39, v31);
          *(_QWORD *)(v91 + 24) = 6571LL;
          WdLogEvent5_WdAssertion(v91);
          v44 = v110;
        }
        if ( v101 )
        {
          v39 = (struct DXGADAPTER *)*((unsigned int *)v106 + 116);
          if ( (_DWORD)v39 != 1 )
            goto LABEL_168;
          v43 = v105;
          v42 = v104;
        }
        v45 = *v44;
        v100 = 0;
        v102 = 0;
        if ( *v44
          || (v92 = WdLogNewEntry5_WdAssertion(v39, v31),
              *(_QWORD *)(v92 + 24) = 9139LL,
              WdLogEvent5_WdAssertion(v92),
              v44 = v110,
              (v45 = *v110) != 0LL) )
        {
          v46 = a3;
          if ( a3 >= *((_DWORD *)v45 + 20) )
          {
            v93 = WdLogNewEntry5_WdAssertion(v39, a3);
            *(_QWORD *)(v93 + 24) = 5823LL;
            WdLogEvent5_WdAssertion(v93);
            v44 = v110;
            v46 = a3;
          }
          v47 = 3968LL * (unsigned int)v46;
          v48 = *((_QWORD *)v45 + 14);
          v107 = v47;
          if ( *(_BYTE *)(v48 + v47 + 720) )
          {
            if ( !*((_QWORD *)v43 + 320) )
            {
              ADAPTER_DISPLAY::ControlVSyncAdapter(*v44, v46);
              v49 = v111;
              v50 = 0;
LABEL_62:
              v54 = 0;
              goto LABEL_63;
            }
            if ( v43 != v42 )
            {
              v94 = WdLogNewEntry5_WdAssertion(v47, v46);
              *(_QWORD *)(v94 + 24) = 6593LL;
              WdLogEvent5_WdAssertion(v94);
            }
            _InterlockedIncrement((volatile signed __int32 *)v42 + 646);
            v49 = v111;
            v50 = 1;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v111 + 520LL)
                                                                               + 8LL)
                                                                   + 544LL))(
                   *(_QWORD *)(*(_QWORD *)v111 + 528LL),
                   a3) )
            {
              goto LABEL_62;
            }
            LOBYTE(v53) = 1;
            v95 = *(_QWORD *)v49;
            if ( !v106 )
            {
              if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v95 + 520) + 8LL) + 552LL))(
                     *(_QWORD *)(v95 + 528),
                     1LL,
                     v53) < 0 )
              {
                DXGADAPTER::DecrementVSyncWaiter(v104, v51);
                LODWORD(v34) = -1071775738;
                goto LABEL_82;
              }
              v100 = 1;
              goto LABEL_62;
            }
            if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v95 + 520) + 8LL) + 560LL))(
                   *((_QWORD *)v106 + 82),
                   0LL,
                   v53) >= 0 )
            {
              v54 = 1;
LABEL_63:
              if ( v125 != v131 )
                COREACCESS::Release((COREACCESS *)v129);
              if ( !v126 )
              {
                v96 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51);
                v96[5] = v123;
                v96[3] = 275LL;
                v96[4] = 4LL;
                v96[6] = 0LL;
                v96[7] = 0LL;
                WdLogEvent5_WdCriticalError(v96);
              }
              v126 = 0;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v125 + 20) )
                DXGADAPTER::ReleaseCoreResource((__int64)v125, v127, v128);
              v128 = 0LL;
              v127 = -1;
              v55 = *v110;
              if ( v108 )
              {
                v97 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(v55, a3, 1, v108, v118);
                LODWORD(v34) = v97;
                if ( v97 > 0x3E )
                {
                  v59 = 0LL;
                }
                else
                {
                  v59 = v97;
                  v102 = v97;
                }
              }
              else
              {
                v56 = *((_QWORD *)v55 + 2);
                if ( *(_QWORD *)(v56 + 2552) && *(_QWORD *)(v56 + 560) )
                  v57.QuadPart = -1000000LL;
                else
                  v57.QuadPart = -5000000LL;
                Timeout = v57;
                KeWaitForSingleObject((PVOID)(*((_QWORD *)v55 + 14) + v107 + 912), UserRequest, 0, 0, &Timeout);
                v59 = 0LL;
              }
              if ( v50 )
              {
                v60 = v104;
                if ( _InterlockedDecrement((volatile signed __int32 *)v104 + 646) < 0 )
                {
                  v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v59, v58);
                  v98[5] = v104;
                  v98[3] = 275LL;
                  v98[4] = 37LL;
                  v98[6] = *((unsigned int *)v60 + 646);
                  v98[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v98);
                  LODWORD(v59) = v102;
                }
              }
              if ( v100 )
              {
                LODWORD(v34) = COREADAPTERACCESS::AcquireShared((__int64)v122, 0xFFFFFFFFLL, 0LL);
                if ( (int)v34 < 0 )
                  goto LABEL_82;
                v99 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49 + 520LL)
                                                                                     + 8LL)
                                                                         + 552LL))(
                        *(_QWORD *)(*(_QWORD *)v49 + 528LL),
                        1LL,
                        0LL);
              }
              else
              {
                if ( !v54 )
                {
LABEL_79:
                  if ( (int)v34 >= 0 && (_DWORD)v59 )
                    LODWORD(v34) = v59;
                  goto LABEL_82;
                }
                LODWORD(v34) = COREADAPTERACCESS::AcquireShared((__int64)v122, 0xFFFFFFFFLL, 0LL);
                if ( (int)v34 < 0 )
                  goto LABEL_82;
                if ( *((_DWORD *)v106 + 116) != 1 )
                {
LABEL_191:
                  LODWORD(v59) = v102;
                  goto LABEL_79;
                }
                v99 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49 + 520LL)
                                                                                    + 8LL)
                                                                        + 560LL))(
                        *((_QWORD *)v106 + 82),
                        0LL,
                        0LL);
              }
              LODWORD(v34) = v99;
              goto LABEL_191;
            }
            DXGADAPTER::DecrementVSyncWaiter(v104, v51);
          }
        }
        LODWORD(v34) = -1071775738;
LABEL_82:
        if ( v131 )
        {
          if ( v132 )
            COREACCESS::Release((COREACCESS *)v129);
          v61 = (DXGGLOBAL **)v131;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v131 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v61[2], (struct DXGADAPTER *)v61);
        }
        if ( v125 )
        {
          if ( v126 )
            COREACCESS::Release((COREACCESS *)v123);
          v62 = (DXGGLOBAL **)v125;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v125 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v62[2], (struct DXGADAPTER *)v62);
        }
        goto LABEL_92;
      }
      v85 = v104;
      v116 = v104;
      v117 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v115);
      v113 = v38;
      v114 = 0;
      if ( v38 != v85 )
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
      if ( *((_DWORD *)v85 + 44) == 1 && *((_DWORD *)v105 + 44) == 1 )
      {
        if ( a3 < *(_DWORD *)(*((_QWORD *)v105 + 319) + 80LL) )
        {
          if ( DXGADAPTER::IsVSyncAvailable(v105, a3) )
          {
            if ( v114 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
            if ( v117 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v115);
            goto LABEL_42;
          }
          LODWORD(v34) = -1071775738;
        }
        else
        {
          v88 = WdLogNewEntry5_WdWarning(v105, v86, v87);
          LODWORD(v34) = -1073741811;
          *(_QWORD *)(v88 + 24) = a3;
          *(_QWORD *)(v88 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v88);
        }
      }
      else
      {
        LODWORD(v34) = -1073741130;
      }
      if ( v114 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v112);
      if ( v117 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v115);
      goto LABEL_82;
    }
    v72 = *(_QWORD *)(v14 + 432);
    v111 = (char *)(v72 + 184);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v72 + 184));
    if ( v19 < *(_DWORD *)(v72 + 224) )
    {
      v73 = *(_QWORD *)(v72 + 208);
      v74 = *(_DWORD *)(v73 + 16LL * v19 + 8);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v73 + 16LL * v19 + 8) & 0x60)
        && (v74 & 0x2000) == 0
        && (v74 & 0x1F) != 0 )
      {
        v75 = v74 & 0x1F;
        if ( (_BYTE)v75 == 1 )
        {
          v23 = *(_QWORD *)(v73 + 16LL * v19);
          goto LABEL_124;
        }
        v76 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v75, 2LL * v19);
        *(_QWORD *)(v76 + 24) = 267LL;
        WdLogEvent5_WdError(v76);
      }
    }
    v23 = 0LL;
LABEL_124:
    ExReleasePushLockSharedEx(v111, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  v69 = WdLogNewEntry5_WdWarning(v12, v11, v13);
  *(_QWORD *)(v69 + 24) = -1073741790LL;
  WdLogEvent5_WdWarning(v69);
  return 3221225506LL;
}
