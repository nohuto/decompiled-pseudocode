/*
 * XREFs of ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003D3FC
 * Callers:
 *     ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C003D650 (-VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQ.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C003D6B0 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C003D790 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 *     DxgkSignalEventCB @ 0x1C022AA60 (DxgkSignalEventCB.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C003CBE0 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     McTemplateK0ppq @ 0x1C003DB58 (McTemplateK0ppq.c)
 */

__int64 __fastcall VmBusSendAsyncMessage(
        struct VMBCHANNEL__ *a1,
        struct DXGKVMB_COMMAND_BASE *a2,
        const GUID *a3,
        struct _MDL *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  int v12; // eax
  signed __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  void *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rax
  DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v27; // [rsp+50h] [rbp-28h] BYREF
  __int64 v28; // [rsp+58h] [rbp-20h]
  char v29; // [rsp+60h] [rbp-18h]

  if ( !a1 )
    return 3221226166LL;
  v27 = -1;
  v28 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 2136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2136);
  }
  else
  {
    v29 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v8 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v11 = 0LL;
    }
    v28 = v11;
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 140);
      if ( !v12 )
        *(_DWORD *)(v11 + 144) = 2136;
      *(_DWORD *)(v11 + 140) = v12 + 1;
    }
  }
  v13 = _InterlockedIncrement64(&qword_1C00A4168);
  v14 = bTracingEnabled == 0;
  *(_QWORD *)a2 = v13;
  if ( !v14 )
  {
    v15 = *((_DWORD *)a2 + 3);
    if ( v15 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v16 = &EventVmBusSendCommandGlobalAsync;
LABEL_30:
        McTemplateK0ppq(v13, (_DWORD)v16, (_DWORD)a3, (_DWORD)a1, v13, *((_DWORD *)a2 + 4));
      }
    }
    else if ( v15 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v16 = &EventVmBusSendCommandHostToVmAsync;
        goto LABEL_30;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      v16 = &EventVmBusSendCommandAsync;
      goto LABEL_30;
    }
  }
  v17 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct DXGKVMB_COMMAND_BASE *, __int64))qword_1C00A3C90)(
          a1,
          a2,
          48LL);
  v21 = v17;
  if ( v17 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = v21;
    WdLogEvent5_WdError(v22);
  }
  Global = DXGGLOBAL::GetGlobal(v19, v18);
  DXGGLOBAL::CheckDebugBreak(Global);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v24);
  if ( v29 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v27);
  }
  return (unsigned int)v21;
}
