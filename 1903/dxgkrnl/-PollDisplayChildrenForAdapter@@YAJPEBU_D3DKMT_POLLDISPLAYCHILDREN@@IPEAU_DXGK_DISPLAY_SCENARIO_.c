/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200C00
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C0203DE0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00036DC (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00C71E0 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00C721C (MonitorAcquireMonitorPendingEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiPollDisplayChildren @ 0x1C029CDE0 (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02B29E8 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v4; // r12d
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGADAPTER *QuadPart; // rsi
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rbx
  void *v22; // r15
  union _LARGE_INTEGER v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-99h] BYREF
  DXGADAPTER *v55; // [rsp+38h] [rbp-91h] BYREF
  __int64 v56; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v57[64]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v58[72]; // [rsp+98h] [rbp-31h] BYREF

  v4 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v10 = Current;
  if ( !Current )
  {
    v11 = -1073741811;
    v12 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13);
    WdLogEvent5_WdError(v12);
    return v11;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v55,
    a1->hAdapter,
    Current,
    (struct DXGADAPTER **)&Timeout,
    1);
  QuadPart = (DXGADAPTER *)Timeout.QuadPart;
  if ( !Timeout.QuadPart )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v11 = -1073741811;
    v19[3] = -1073741811LL;
    v19[4] = v10;
    v19[5] = a1->hAdapter;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_35;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v56, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
  LODWORD(v21) = COREADAPTERACCESS::AcquireExclusive(&v56, (unsigned int)(v20 + 1), v20);
  if ( (int)v21 >= 0 )
  {
    v22 = (void *)*((_QWORD *)QuadPart + 24);
    v23.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v22);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v24 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout);
      v23 = Timeout;
      v21 = v24;
      if ( v24 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v30 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0);
          v21 = v30;
          if ( v30 < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v32, v31, v33);
            *(_QWORD *)(v34 + 24) = v21;
            WdLogEvent5_WdError(v34);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v56);
        if ( (int)v21 < 0 )
        {
          ObfDereferenceObject(v22);
          if ( v23.QuadPart )
            MonitorReleaseMonitorPendingEvent((PVOID)v23.QuadPart, v35);
          goto LABEL_34;
        }
        LODWORD(v21) = DpiPollDisplayChildren(v22, v4, a3);
        ObfDereferenceObject(v22);
        if ( !v23.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v42 = COREADAPTERACCESS::AcquireExclusive(&v56, 1LL, 0LL);
            v46 = v42;
            if ( v42 < 0 )
            {
              v52 = WdLogNewEntry5_WdError(v44, v43, v45);
              *(_QWORD *)(v52 + 24) = v46;
              WdLogEvent5_WdError(v52);
            }
            else
            {
              v47 = DmmEnableModeResetOnMonitorEvent(QuadPart, 1u);
              v46 = v47;
              if ( v47 < 0 )
              {
                v51 = WdLogNewEntry5_WdError(v49, v48, v50);
                *(_QWORD *)(v51 + 24) = v46;
                WdLogEvent5_WdError(v51);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v56);
            }
            if ( !(_DWORD)v21 )
              LODWORD(v21) = v46;
          }
          goto LABEL_34;
        }
        if ( (int)v21 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v38 = KeWaitForSingleObject((PVOID)(v23.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v21 = v38;
          if ( v38 == 258 )
          {
            v41 = WdLogNewEntry5_WdError(v39, v36, v40);
            *(_QWORD *)(v41 + 24) = 1751LL;
LABEL_24:
            WdLogEvent5_WdError(v41);
            goto LABEL_25;
          }
          if ( v38 < 0 )
          {
            v41 = WdLogNewEntry5_WdError(v39, v36, v40);
            *(_QWORD *)(v41 + 24) = v21;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((PVOID)v23.QuadPart, v36);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v28 = WdLogNewEntry5_WdAssertion(v26, v25);
        *(_QWORD *)(v28 + 24) = 1686LL;
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v29 + 24) = v21;
      WdLogEvent5_WdError(v29);
    }
    if ( (int)v21 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_34:
  v11 = v21;
  COREACCESS::~COREACCESS((COREACCESS *)v58);
  COREACCESS::~COREACCESS((COREACCESS *)v57);
LABEL_35:
  if ( v55 )
    DXGADAPTER::ReleaseReferenceNoTracking(v55);
  return v11;
}
