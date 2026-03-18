/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0137790
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00017CC (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0107000 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01F05C8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(
        struct DXGADAPTER *this,
        unsigned int a2,
        const GUID *a3,
        PVOID *a4,
        char *a5)
{
  __int64 v6; // r14
  int PairingAdapters; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  volatile signed __int64 *v12; // rdi
  struct DXGADAPTER *v13; // rcx
  __int64 v14; // rcx
  const GUID *v15; // r8
  DXGADAPTER *v16; // rsi
  __int64 v17; // rdi
  char v18; // r12
  char v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  ULONG v26; // ecx
  __int64 v27; // r8
  PVOID *v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // r14d
  DXGADAPTER *v31; // rdi
  DXGGLOBAL **v32; // rcx
  DXGGLOBAL **v33; // rcx
  __int64 v34; // rcx
  const GUID *v35; // r8
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  _BYTE *v40; // rcx
  char v41; // al
  _BYTE *v42; // rax
  _BYTE *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  DXGADAPTER *v65; // [rsp+48h] [rbp-C0h] BYREF
  ULONG v66; // [rsp+50h] [rbp-B8h]
  _QWORD v67[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+70h] [rbp-98h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+78h] [rbp-90h]
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v71; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v72[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v73[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-60h]
  struct DXGADAPTER *v75; // [rsp+B0h] [rbp-58h]
  char v76; // [rsp+B8h] [rbp-50h]
  int v77; // [rsp+BCh] [rbp-4Ch]
  _BYTE *v78; // [rsp+C0h] [rbp-48h]
  _BYTE v79[24]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v80[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v82; // [rsp+F0h] [rbp-18h]
  char v83; // [rsp+F8h] [rbp-10h]
  int v84; // [rsp+FCh] [rbp-Ch]
  __int64 v85; // [rsp+100h] [rbp-8h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+128h] [rbp+20h] BYREF

  Object = a4;
  v66 = (unsigned int)a3;
  v6 = a2;
  LODWORD(v67[0]) = -1;
  v67[1] = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    LOBYTE(v68) = 1;
    LODWORD(v67[0]) = 3015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 3015);
  }
  else
  {
    LOBYTE(v68) = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v67, 3015LL);
  PairingAdapters = DxgkpGetPairingAdapters(this, (unsigned int)v6, 0LL, 0LL, &v65, &v71, 0);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v37[3] = this;
    v37[4] = v6;
    v37[5] = v11;
    WdLogEvent5_WdError(v37);
    v30 = -1073740759;
    goto LABEL_54;
  }
  v12 = (volatile signed __int64 *)v65;
  if ( !v65 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v38 + 24) = 2455LL;
    WdLogEvent5_WdAssertion(v38);
  }
  v75 = (struct DXGADAPTER *)v12;
  v76 = 0;
  v77 = -1;
  v78 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement64(v12 + 3);
    v12 = (volatile signed __int64 *)v65;
    v74 = -1LL;
  }
  v82 = (struct DXGADAPTER *)v12;
  v83 = 0;
  v84 = -1;
  v85 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement64(v12 + 3);
    v12 = (volatile signed __int64 *)v65;
    v81 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v65 + 2), v65);
  if ( v76 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v39[5] = v73;
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  v13 = v75;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v75 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v75 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, &EventBlockThread, v15, 72);
      KeWaitForSingleObject((char *)v75 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared((__int64)v75, 0xBC7u, (__int64)a5);
    v13 = v75;
  }
  v77 = 3015;
  v78 = 0LL;
  if ( a5 )
  {
    v8 = 17LL;
    v40 = v79;
    do
    {
      if ( v8 == -2147483629 )
        break;
      v41 = v40[a5 - v79];
      if ( !v41 )
        break;
      *v40++ = v41;
      --v8;
    }
    while ( v8 );
    v42 = v40 - 1;
    if ( v8 )
      v42 = v40;
    *v42 = 0;
    v43 = v79;
    if ( !v8 )
      v43 = v78;
    v13 = v75;
    v78 = v43;
  }
  v76 = 1;
  if ( *((_DWORD *)v13 + 44) != 1 )
    goto LABEL_74;
  if ( v75 == v82
    || (COREACCESS::AcquireShared((__int64)v80, 0xFFFFFFFF, 0LL),
        v13 = (struct DXGADAPTER *)*((unsigned int *)v82 + 44),
        (_DWORD)v13 == 1) )
  {
    v16 = v65;
    v17 = *((_QWORD *)v65 + 319);
    if ( !v17 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v13, v8);
      *(_QWORD *)(v44 + 24) = 2469LL;
      WdLogEvent5_WdAssertion(v44);
      v17 = *((_QWORD *)v16 + 319);
    }
    v18 = 0;
    v19 = 0;
    if ( v17
      || (v45 = WdLogNewEntry5_WdAssertion(v13, v8),
          *(_QWORD *)(v45 + 24) = 9139LL,
          WdLogEvent5_WdAssertion(v45),
          (v17 = *((_QWORD *)v16 + 319)) != 0) )
    {
      if ( (unsigned int)v6 >= *(_DWORD *)(v17 + 80) )
      {
        v46 = WdLogNewEntry5_WdAssertion(v13, v8);
        *(_QWORD *)(v46 + 24) = 5823LL;
        WdLogEvent5_WdAssertion(v46);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v17 + 112) + 3968 * v6 + 720) )
      {
        if ( !*((_QWORD *)v16 + 320) )
        {
          ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v16 + 319), v6);
          goto LABEL_28;
        }
        _InterlockedIncrement((volatile signed __int32 *)v16 + 646);
        v18 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 320) + 520LL)
                                                                           + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*((_QWORD *)v16 + 320) + 528LL),
               (unsigned int)v6) )
        {
LABEL_28:
          if ( v75 != v82 )
            COREACCESS::Release((COREACCESS *)v80);
          if ( !v76 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
            v51[5] = v73;
            v51[3] = 275LL;
            v51[4] = 4LL;
            v51[6] = 0LL;
            v51[7] = 0LL;
            WdLogEvent5_WdCriticalError(v51);
          }
          v76 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v75 + 20) )
            DXGADAPTER::ReleaseCoreResource((__int64)v75, v77, (__int64)v78);
          v78 = 0LL;
          v77 = -1;
          v23 = *((_QWORD *)v16 + 319);
          v24 = *(_QWORD *)(v23 + 16);
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v24 + 160)
            || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v24 + 144)) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v24, v20);
            *(_QWORD *)(v52 + 24) = 6996LL;
            WdLogEvent5_WdAssertion(v52);
          }
          v26 = v66;
          if ( v66 - 1 > 8 )
          {
            v53 = WdLogNewEntry5_WdError(v66, v20, v25);
            v30 = -1073741811;
            *(_QWORD *)(v53 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v53);
          }
          else
          {
            v27 = *(_QWORD *)(v23 + 112) + 912LL;
            Timeout.QuadPart = -800000LL;
            v28 = Object;
            *Object = (PVOID)(3968 * v6 + v27);
            v30 = KeWaitForMultipleObjects(v26, v28, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
          }
          if ( v18 )
          {
            if ( !*((_QWORD *)v16 + 320) )
            {
              v54 = WdLogNewEntry5_WdAssertion(v29, v8);
              *(_QWORD *)(v54 + 24) = 2544LL;
              WdLogEvent5_WdAssertion(v54);
            }
            v31 = v65;
            if ( _InterlockedDecrement((volatile signed __int32 *)v65 + 646) < 0 )
            {
              v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v8);
              v55[5] = v65;
              v55[3] = 275LL;
              v55[4] = 37LL;
              v55[6] = *((unsigned int *)v31 + 646);
              v55[7] = 0LL;
              WdLogEvent5_WdCriticalError(v55);
            }
          }
          if ( v19 )
          {
            if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v72, 0xFFFFFFFFLL, 0LL) < 0 )
            {
              v64 = WdLogNewEntry5_WdWarning(v57, v56, v58);
              *(_QWORD *)(v64 + 24) = 2570LL;
              WdLogEvent5_WdWarning(v64);
            }
            else
            {
              v59 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 320) + 520LL)
                                                                           + 8LL)
                                                               + 552LL))(
                      *(_QWORD *)(*((_QWORD *)v16 + 320) + 528LL),
                      1LL);
              v62 = v59;
              if ( v59 < 0 )
              {
                v63 = WdLogNewEntry5_WdWarning(v60, v8, v61);
                *(_QWORD *)(v63 + 24) = v62;
                WdLogEvent5_WdWarning(v63);
              }
            }
          }
          goto LABEL_44;
        }
        LOBYTE(v22) = 1;
        if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 320) + 520LL)
                                                                         + 8LL)
                                                             + 552LL))(
               *(_QWORD *)(*((_QWORD *)v16 + 320) + 528LL),
               1LL,
               v22) >= 0 )
        {
          v19 = 1;
          goto LABEL_28;
        }
        DXGADAPTER::DecrementVSyncWaiter(v65);
        v50 = WdLogNewEntry5_WdError(v48, v47, v49);
        *(_QWORD *)(v50 + 24) = 2511LL;
        WdLogEvent5_WdError(v50);
      }
    }
    v30 = -1073740759;
    goto LABEL_44;
  }
  COREACCESS::Release((COREACCESS *)v80);
LABEL_74:
  COREACCESS::Release((COREACCESS *)v73);
  v30 = -1073741130;
LABEL_44:
  if ( v82 )
  {
    if ( v83 )
      COREACCESS::Release((COREACCESS *)v80);
    v32 = (DXGGLOBAL **)v82;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v32[2], (struct DXGADAPTER *)v32);
  }
  if ( v75 )
  {
    if ( v76 )
      COREACCESS::Release((COREACCESS *)v73);
    v33 = (DXGGLOBAL **)v75;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v33[2], (struct DXGADAPTER *)v33);
  }
LABEL_54:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v67, v8);
  if ( (_BYTE)v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v67[0]);
  return v30;
}
