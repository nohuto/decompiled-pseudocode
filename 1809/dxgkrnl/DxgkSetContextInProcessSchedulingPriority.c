/*
 * XREFs of DxgkSetContextInProcessSchedulingPriority @ 0x1C011D3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGCONTEXT *v10; // rdi
  struct DXGDEVICE *v11; // rdx
  __int64 v12; // r9
  int v13; // r14d
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v27; // rcx
  const GUID *v28; // r8
  int v29; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-A0h]
  char v31; // [rsp+40h] [rbp-98h]
  _QWORD v32[2]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v33[24]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v34[96]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v35; // [rsp+E8h] [rbp+10h]
  struct DXGCONTEXT *v36; // [rsp+F0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 2084;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2084);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2084);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v35 = *v3;
    if ( (unsigned int)HIDWORD(*v3) > 1 )
    {
      v21 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, Current);
      *(_QWORD *)(v21 + 24) = SHIDWORD(v35);
      WdLogEvent5_WdWarning(v21);
    }
    else
    {
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v33, v35, Current, &v36, 0);
      v10 = v36;
      if ( v36 )
      {
        v11 = (struct DXGDEVICE *)*((_QWORD *)v36 + 2);
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 185LL) )
        {
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v33);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
          if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v25, &EventProfilerExit, v26, v29);
          return 0LL;
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32, v11);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, *((_QWORD *)v10 + 2), 0, v12, 0);
          v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34);
          if ( v13 < 0 )
          {
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
            if ( v32[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v33);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
            if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v27, &EventProfilerExit, v28, v29);
            return (unsigned int)v13;
          }
          else
          {
            v14 = *((_QWORD *)v10 + 2);
            if ( (*((_DWORD *)v10 + 99) & 0x10) != 0 )
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 520LL)
                                                                          + 8LL)
                                                              + 352LL))(
                      *((_QWORD *)v10 + 35),
                      HIDWORD(v35));
            else
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 520LL)
                                                                          + 8LL)
                                                              + 344LL))(
                      *((_QWORD *)v10 + 32),
                      HIDWORD(v35));
            v16 = v15;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
            if ( v32[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v33);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
            if ( v31 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v17, &EventProfilerExit, v18, v29);
            }
            return v16;
          }
        }
      }
      v22 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v22 + 24) = (unsigned int)v35;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v33);
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v29);
  return 3221225485LL;
}
