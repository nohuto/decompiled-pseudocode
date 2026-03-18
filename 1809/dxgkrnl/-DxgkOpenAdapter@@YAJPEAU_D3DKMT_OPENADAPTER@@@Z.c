/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00E2BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00121E4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00DCB84 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00E2D78 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00E3F4C (DpiGetDxgAdapterSafe.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v6; // rax
  unsigned int v7; // ebx
  int DxgAdapterSafe; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  DXGADAPTER *v15; // rbx
  ADAPTER_RENDER *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v25; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+28h] [rbp-28h]
  char v27; // [rsp+30h] [rbp-20h]
  _BYTE v28[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGADAPTER *v29; // [rsp+40h] [rbp-10h]
  char v30; // [rsp+48h] [rbp-8h]
  unsigned int v31; // [rsp+78h] [rbp+28h] BYREF
  DXGADAPTER *v32; // [rsp+80h] [rbp+30h] BYREF
  char v33; // [rsp+88h] [rbp+38h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2001);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2001);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DxgAdapterSafe = DpiGetDxgAdapterSafe(*(_QWORD *)a1, &v32, &v33);
    if ( DxgAdapterSafe < 0 )
    {
      v7 = DxgAdapterSafe;
      goto LABEL_20;
    }
    v12 = v32;
    if ( (*((_DWORD *)v32 + 600) & 4) != 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = v12;
      WdLogEvent5_WdWarning(v13);
      DXGADAPTER::ReleaseReference(v12);
      v7 = -1073741790;
      goto LABEL_20;
    }
    v29 = v32;
    v30 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
    v14 = *((_DWORD *)v12 + 44);
    v15 = v32;
    if ( v14 == 1
      && !*((_BYTE *)v32 + 2429)
      && (v16 = (ADAPTER_RENDER *)*((_QWORD *)v32 + 316)) != 0LL
      && ADAPTER_RENDER::IsProcessGpuAccessBlocked(v16, Current) )
    {
      v19 = WdLogNewEntry5_WdEvent(v18, v17);
      *(_QWORD *)(v19 + 24) = v15;
      *(_QWORD *)(v19 + 32) = Current;
      WdLogEvent5_WdEvent(v19);
      DXGADAPTER::ReleaseReference(v15);
      v20 = -1073741790;
    }
    else
    {
      v20 = DXGADAPTER::CreateHandle(v15, Current, &v31);
      DXGADAPTER::ReleaseReference(v15);
      if ( v20 >= 0 )
      {
        *((_DWORD *)a1 + 2) = v31;
        v21 = *(_QWORD *)((char *)v15 + 276);
        v7 = 0;
        *(_QWORD *)((char *)a1 + 12) = v21;
        goto LABEL_19;
      }
    }
    v7 = v20;
LABEL_19:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
    goto LABEL_20;
  }
  v6 = WdLogNewEntry5_WdError(v4);
  v7 = -1073741811;
  *(_QWORD *)(v6 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v6);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return v7;
}
