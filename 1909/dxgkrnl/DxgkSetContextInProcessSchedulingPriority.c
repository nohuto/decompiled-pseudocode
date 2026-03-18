/*
 * XREFs of DxgkSetContextInProcessSchedulingPriority @ 0x1C01266E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, const GUID *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGCONTEXT *v12; // rdi
  struct DXGDEVICE *v13; // rdx
  __int64 v14; // r9
  int v15; // r14d
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v35; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-F0h]
  char v37; // [rsp+40h] [rbp-E8h]
  unsigned int v38[2]; // [rsp+48h] [rbp-E0h]
  struct DXGCONTEXT *v39[2]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v40[16]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v41[160]; // [rsp+70h] [rbp-B8h] BYREF

  v3 = (_QWORD *)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v37 = 1;
    v35 = 2084;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2084);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2084LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v38 = *v3;
    if ( v38[1] > 1 )
    {
      v28 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, Current);
      *(_QWORD *)(v28 + 24) = (int)v38[1];
      WdLogEvent5_WdWarning(v28);
    }
    else
    {
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40, v38[0], Current, v39, 0);
      v12 = v39[0];
      if ( v39[0] )
      {
        v13 = (struct DXGDEVICE *)*((_QWORD *)v39[0] + 2);
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 185LL) )
        {
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v29);
          if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v30, &EventProfilerExit, v31, v35);
          return 0LL;
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39, v13);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, *((_QWORD *)v12 + 2), 0, v14, 0);
          v15 = COREDEVICEACCESS::AcquireShared((__int64)v41, 0xFFFFFFFF, 0LL);
          if ( v15 < 0 )
          {
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
            if ( v39[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v32);
            if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v33, &EventProfilerExit, v34, v35);
            return (unsigned int)v15;
          }
          else
          {
            v16 = *((_QWORD *)v12 + 2);
            if ( (*((_DWORD *)v12 + 103) & 0x10) != 0 )
              v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 520LL)
                                                                          + 8LL)
                                                              + 352LL))(
                      *((_QWORD *)v12 + 37),
                      v38[1]);
            else
              v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 520LL)
                                                                          + 8LL)
                                                              + 344LL))(
                      *((_QWORD *)v12 + 34),
                      v38[1]);
            v18 = v17;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
            if ( v39[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v19);
            if ( v37 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v20, &EventProfilerExit, v21, v35);
            }
            return v18;
          }
        }
      }
      v25 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v25 + 24) = v38[0];
      *(_QWORD *)(v25 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40);
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v7, v6, 0LL);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v24);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v35);
  return 3221225485LL;
}
