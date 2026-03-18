/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D39B8
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C01D5F70 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01220DC (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C0122118 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C02632B4 (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C027A660 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGADAPTER *QuadPart; // r14
  _QWORD *v17; // rax
  int v18; // r8d
  __int64 v19; // rbx
  void *v20; // r15
  union _LARGE_INTEGER v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  DXGADAPTER *v49; // [rsp+38h] [rbp-29h] BYREF
  __int64 v50; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v51[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v52[40]; // [rsp+70h] [rbp+Fh] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+7Fh] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( !Current )
  {
    v9 = -1073741811;
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
    return v9;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v49,
    a1->hAdapter,
    Current,
    (struct DXGADAPTER **)&Timeout,
    1);
  QuadPart = (DXGADAPTER *)Timeout.QuadPart;
  if ( !Timeout.QuadPart )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v9 = -1073741811;
    v17[3] = -1073741811LL;
    v17[4] = v8;
    v17[5] = a1->hAdapter;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_35;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v50, (struct DXGADAPTER *const)Timeout.QuadPart, 0LL);
  LODWORD(v19) = COREADAPTERACCESS::AcquireExclusive(&v50, (unsigned int)(v18 + 1));
  if ( (int)v19 >= 0 )
  {
    v20 = (void *)*((_QWORD *)QuadPart + 24);
    v21.QuadPart = 0LL;
    Timeout.QuadPart = 0LL;
    ObfReferenceObject(v20);
    if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
    {
      v24 = MonitorAcquireMonitorPendingEvent(QuadPart, &Timeout, v22, v23);
      v21 = Timeout;
      v19 = v24;
      if ( v24 >= 0 )
      {
LABEL_12:
        if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
        {
          v28 = DmmEnableModeResetOnMonitorEvent(QuadPart, 0);
          v19 = v28;
          if ( v28 < 0 )
          {
            v30 = WdLogNewEntry5_WdError(v29);
            *(_QWORD *)(v30 + 24) = v19;
            WdLogEvent5_WdError(v30);
          }
        }
LABEL_15:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v50);
        if ( (int)v19 < 0 )
        {
          ObfDereferenceObject(v20);
          if ( v21.QuadPart )
            MonitorReleaseMonitorPendingEvent((PVOID)v21.QuadPart, v31, v32, v33);
          goto LABEL_34;
        }
        LODWORD(v19) = DpiPollDisplayChildren(v20, a2, a3);
        ObfDereferenceObject(v20);
        if ( !v21.QuadPart )
        {
LABEL_26:
          if ( (*((_DWORD *)a1 + 1) & 4) != 0 )
          {
            v41 = COREADAPTERACCESS::AcquireExclusive(&v50, 1LL);
            v43 = v41;
            if ( v41 < 0 )
            {
              v47 = WdLogNewEntry5_WdError(v42);
              *(_QWORD *)(v47 + 24) = v43;
              WdLogEvent5_WdError(v47);
            }
            else
            {
              v44 = DmmEnableModeResetOnMonitorEvent(QuadPart, 1u);
              v43 = v44;
              if ( v44 < 0 )
              {
                v46 = WdLogNewEntry5_WdError(v45);
                *(_QWORD *)(v46 + 24) = v43;
                WdLogEvent5_WdError(v46);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v50);
            }
            if ( !(_DWORD)v19 )
              LODWORD(v19) = v43;
          }
          goto LABEL_34;
        }
        if ( (int)v19 >= 0 )
        {
          Timeout.QuadPart = -10000000LL;
          PreviousMode = ExGetPreviousMode();
          v38 = KeWaitForSingleObject((PVOID)(v21.QuadPart + 24), UserRequest, PreviousMode, 0, &Timeout);
          v19 = v38;
          if ( v38 == 258 )
          {
            v40 = WdLogNewEntry5_WdError(v39);
            *(_QWORD *)(v40 + 24) = 1434LL;
LABEL_24:
            WdLogEvent5_WdError(v40);
            goto LABEL_25;
          }
          if ( v38 < 0 )
          {
            v40 = WdLogNewEntry5_WdError(v39);
            *(_QWORD *)(v40 + 24) = v19;
            goto LABEL_24;
          }
        }
LABEL_25:
        MonitorReleaseMonitorPendingEvent((PVOID)v21.QuadPart, v34, v35, v36);
        goto LABEL_26;
      }
      if ( Timeout.QuadPart )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v26 + 24) = 1369LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v27 + 24) = v19;
      WdLogEvent5_WdError(v27);
    }
    if ( (int)v19 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_34:
  v9 = v19;
  COREACCESS::~COREACCESS((COREACCESS *)v52);
  COREACCESS::~COREACCESS((COREACCESS *)v51);
LABEL_35:
  if ( v49 )
    DXGADAPTER::ReleaseReference(v49);
  return v9;
}
