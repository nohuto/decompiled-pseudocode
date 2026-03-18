/*
 * XREFs of ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003702C
 * Callers:
 *     ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@@Z @ 0x1C00371D0 (-VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQ.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C0037270 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C0037370 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 *     DxgkSignalEventCB @ 0x1C01FA8F0 (DxgkSignalEventCB.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C00367F8 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     McTemplateK0ppq @ 0x1C0037720 (McTemplateK0ppq.c)
 */

__int64 __fastcall VmBusSendAsyncMessage(
        struct VMBCHANNEL__ *a1,
        struct DXGKVMB_COMMAND_BASE *a2,
        const GUID *a3,
        struct _MDL *a4)
{
  int v7; // r8d
  signed __int64 v8; // rcx
  bool v9; // zf
  int v10; // eax
  void *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  int v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-20h]
  char v21; // [rsp+60h] [rbp-18h]

  if ( !a1 )
    return 3221226166LL;
  v19 = -1;
  v20 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v21 = 1;
    v19 = 2136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2136);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2136);
  v8 = _InterlockedIncrement64(&qword_1C0090108);
  v9 = bTracingEnabled == 0;
  *(_QWORD *)a2 = v8;
  if ( !v9 )
  {
    v10 = *((_DWORD *)a2 + 3);
    if ( v10 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v11 = &EventVmBusSendCommandGlobalAsync;
LABEL_16:
        McTemplateK0ppq(v8, (_DWORD)v11, v7, (_DWORD)a1, v8, *((_DWORD *)a2 + 4));
      }
    }
    else if ( v10 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v11 = &EventVmBusSendCommandHostToVmAsync;
        goto LABEL_16;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      v11 = &EventVmBusSendCommandAsync;
      goto LABEL_16;
    }
  }
  v12 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct DXGKVMB_COMMAND_BASE *, __int64))qword_1C008FC80)(
          a1,
          a2,
          48LL);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
  }
  Global = DXGGLOBAL::GetGlobal(v13);
  DXGGLOBAL::CheckDebugBreak(Global);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v19);
  }
  return (unsigned int)v14;
}
