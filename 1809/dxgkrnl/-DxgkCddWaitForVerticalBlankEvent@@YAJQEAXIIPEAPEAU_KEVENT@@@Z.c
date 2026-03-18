/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C0126830
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0014024 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0126AEC (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C1038 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(char *a1, unsigned int a2, const GUID *a3, PVOID *a4)
{
  __int64 v4; // rsi
  ULONG v5; // r13d
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGADAPTER *v9; // rbx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  ADAPTER_DISPLAY **v12; // rbx
  char v13; // r12
  char v14; // r15
  char *v15; // r14
  __int64 v16; // r8
  ADAPTER_DISPLAY *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  PVOID *v20; // rdx
  __int64 v21; // rcx
  struct DXGADAPTER *v22; // rcx
  struct DXGADAPTER *v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rax
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h]
  char v49; // [rsp+60h] [rbp-A0h]
  _BYTE v50[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD **v51[2]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v52; // [rsp+88h] [rbp-78h]
  char v53; // [rsp+90h] [rbp-70h]
  struct _KTHREAD **v54[2]; // [rsp+98h] [rbp-68h] BYREF
  struct DXGADAPTER *v55; // [rsp+A8h] [rbp-58h]
  char v56; // [rsp+B0h] [rbp-50h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+C0h] [rbp-40h]
  union _LARGE_INTEGER Timeout; // [rsp+C8h] [rbp-38h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-30h] BYREF

  Object = a4;
  v4 = a2;
  v5 = (unsigned int)a3;
  v47 = -1;
  v48 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v49 = 1;
    v47 = 3015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3015);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 3015);
  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v27 + 24) = 7156LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v8 = *((_QWORD *)a1 + 315);
  if ( !v8 )
  {
    v29 = -1073741637LL;
    goto LABEL_59;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(v8 + 80) )
  {
    v28 = WdLogNewEntry5_WdError(v7);
    v29 = -1073741811LL;
    *(_QWORD *)(v28 + 24) = v4;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
LABEL_59:
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v46[3] = a1;
    v46[4] = v4;
    v46[5] = v29;
    WdLogEvent5_WdError(v46);
    v11 = -1073740759;
    goto LABEL_42;
  }
  _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
  v9 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v30 + 24) = 2489LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v52 = (struct DXGADAPTER *)a1;
  v53 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v9 = (struct DXGADAPTER *)a1;
    v51[1] = (struct _KTHREAD **)-1LL;
  }
  v55 = v9;
  v56 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v54[1] = (struct _KTHREAD **)-1LL;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)a1 + 2), (struct DXGADAPTER *)a1);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50);
  if ( v11 < 0 )
    goto LABEL_32;
  v12 = (ADAPTER_DISPLAY **)(a1 + 2520);
  if ( !*((_QWORD *)a1 + 315) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v31 + 24) = 2503LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v13 = 0;
  v14 = 0;
  if ( DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)a1, v4) )
  {
    v15 = a1 + 2528;
    if ( *((_QWORD *)a1 + 316) )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1 + 638);
      v13 = 1;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 520LL) + 8LL)
                                                              + 544LL))(
              *(_QWORD *)(*(_QWORD *)v15 + 528LL),
              (unsigned int)v4) )
      {
        LOBYTE(v16) = 1;
        if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 520LL) + 8LL)
                                                             + 552LL))(
               *(_QWORD *)(*(_QWORD *)v15 + 528LL),
               1LL,
               v16) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a1);
          v33 = WdLogNewEntry5_WdError(v32);
          *(_QWORD *)(v33 + 24) = 2545LL;
          WdLogEvent5_WdError(v33);
          v11 = -1073740759;
          goto LABEL_32;
        }
        v14 = 1;
      }
    }
    else
    {
      ADAPTER_DISPLAY::ControlVSyncAdapter(*v12, v4);
    }
    if ( v52 != v55 )
      COREACCESS::Release(v54);
    COREACCESS::Release(v51);
    v17 = *v12;
    if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v17 + 2)) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v34 + 24) = 6725LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( v5 - 1 > 8 )
    {
      v35 = WdLogNewEntry5_WdError(v18);
      v11 = -1073741811;
      *(_QWORD *)(v35 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v35);
    }
    else
    {
      v19 = *((_QWORD *)v17 + 14) + 912LL;
      Timeout.QuadPart = -800000LL;
      v20 = Object;
      *Object = (PVOID)(v19 + 3760 * v4);
      v11 = KeWaitForMultipleObjects(v5, v20, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
    }
    if ( v13 )
    {
      if ( !*(_QWORD *)v15 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v36 + 24) = 2578LL;
        WdLogEvent5_WdAssertion(v36);
      }
      DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a1);
    }
    if ( !v14 )
      goto LABEL_32;
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50) < 0 )
    {
      v45 = WdLogNewEntry5_WdWarning(v38, v37, v39);
      *(_QWORD *)(v45 + 24) = 2604LL;
      goto LABEL_57;
    }
    v40 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 520LL) + 8LL) + 552LL))(
            *(_QWORD *)(*(_QWORD *)v15 + 528LL),
            1LL);
    v44 = v40;
    if ( v40 < 0 )
    {
      v45 = WdLogNewEntry5_WdWarning(v42, v41, v43);
      *(_QWORD *)(v45 + 24) = v44;
LABEL_57:
      WdLogEvent5_WdWarning(v45);
    }
  }
  else
  {
    v11 = -1073740759;
  }
LABEL_32:
  v22 = v55;
  if ( v55 )
  {
    if ( v56 )
    {
      COREACCESS::Release(v54);
      v22 = v55;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v22 + 2), v22);
  }
  v23 = v52;
  if ( v52 )
  {
    if ( v53 )
    {
      COREACCESS::Release(v51);
      v23 = v52;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v23 + 2), v23);
  }
LABEL_42:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v47);
  return (unsigned int)v11;
}
