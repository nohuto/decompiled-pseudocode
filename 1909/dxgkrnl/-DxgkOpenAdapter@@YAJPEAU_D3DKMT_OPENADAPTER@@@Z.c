/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0100220
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x1C013EA00 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00FF7CC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1C0100428 (DpiGetDxgAdapterSafe.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGPROCESS *v11; // rsi
  int DxgAdapterSafe; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  volatile signed __int64 *v16; // rdi
  DXGADAPTER *v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  DXGADAPTER *v20; // rbx
  _QWORD *v21; // rcx
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // rcx
  int v26; // ebx
  signed __int64 v27; // rcx
  DXGADAPTER *v28; // rsi
  __int64 v29; // rcx
  const GUID *v30; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  char v38[16]; // [rsp+20h] [rbp-30h] BYREF
  int v39; // [rsp+30h] [rbp-20h] BYREF
  __int64 v40; // [rsp+38h] [rbp-18h]
  char v41; // [rsp+40h] [rbp-10h]
  unsigned int v42; // [rsp+98h] [rbp+48h] BYREF
  DXGADAPTER *v43; // [rsp+A0h] [rbp+50h] BYREF
  char *v44; // [rsp+A8h] [rbp+58h]

  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2001);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2001LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v33 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v33;
    }
  }
  if ( v11 )
  {
    DxgAdapterSafe = DpiGetDxgAdapterSafe(*(_QWORD *)a1, &v43, v38);
    if ( DxgAdapterSafe < 0 )
    {
      v26 = DxgAdapterSafe;
    }
    else
    {
      v16 = (volatile signed __int64 *)v43;
      if ( (*((_DWORD *)v43 + 606) & 4) != 0 )
      {
        v35 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v35 + 24) = v16;
        WdLogEvent5_WdWarning(v35);
        DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v16);
        v26 = -1073741790;
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)v43 + 3);
        KeEnterCriticalRegion();
        v17 = v43;
        v44 = (char *)v43 + 120;
        ExAcquirePushLockSharedEx((char *)v43 + 120, 0LL);
        v19 = *((_DWORD *)v17 + 44);
        v20 = v43;
        if ( v19 != 1 )
          goto LABEL_17;
        if ( *((_BYTE *)v43 + 2465) )
          goto LABEL_17;
        v21 = (_QWORD *)*((_QWORD *)v43 + 320);
        if ( !v21 || *(_BYTE *)(v21[2] + 185LL) )
          goto LABEL_17;
        v22 = *((_QWORD *)v11 + 9);
        v23 = v21[66];
        v24 = v21[65];
        if ( v22 )
          v22 = *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)v24 - 1) + 16);
        if ( !v22 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v21, v18);
          *(_QWORD *)(v36 + 24) = 998LL;
          WdLogEvent5_WdAssertion(v36);
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v24 + 8) + 840LL))(v23, v22) )
        {
          v37 = WdLogNewEntry5_WdEvent(v25);
          *(_QWORD *)(v37 + 24) = v20;
          *(_QWORD *)(v37 + 32) = v11;
          WdLogEvent5_WdEvent(v37);
          DXGADAPTER::ReleaseReferenceNoTracking(v20);
          v26 = -1073741790;
        }
        else
        {
LABEL_17:
          v26 = DXGADAPTER::CreateHandle(v20, v11, &v42);
          v27 = _InterlockedExchangeAdd64(v16 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v28 = v43;
          if ( v27 == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v43 + 2), v43);
          if ( v26 >= 0 )
          {
            v26 = 0;
            *((_DWORD *)a1 + 2) = v42;
            *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v28 + 276);
          }
        }
        ExReleasePushLockSharedEx(v44, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64(v16 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v43 + 2), v43);
      }
    }
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v9, v8, v10);
    v26 = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v13);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v39);
  return (unsigned int)v26;
}
