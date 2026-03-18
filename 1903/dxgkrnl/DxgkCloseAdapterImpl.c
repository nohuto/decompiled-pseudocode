/*
 * XREFs of DxgkCloseAdapterImpl @ 0x1C01304B0
 * Callers:
 *     DxgkCloseAdapterInternal @ 0x1C0130474 (DxgkCloseAdapterInternal.c)
 *     DxgkCloseAdapter @ 0x1C0130490 (DxgkCloseAdapter.c)
 *     DxgkOpenAdapterFromDeviceName @ 0x1C013B0F0 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01305C0 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkCloseAdapterImpl(__int64 a1, char a2, const GUID *a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  const GUID *v16; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v19; // rdi
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]
  unsigned int v24; // [rsp+58h] [rbp+10h]

  v4 = (unsigned int *)a1;
  v21 = -1;
  v22 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v23 = 1;
    v21 = 2002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2002);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2002LL);
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v24 = *v4;
  }
  else
  {
    v24 = *v4;
  }
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v19 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v19;
    }
  }
  if ( v12 )
  {
    v14 = DXGADAPTER::DestroyHandle(v12, v24);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v10, v9, v11);
    v14 = -1073741811;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v13);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v21);
  return v14;
}
