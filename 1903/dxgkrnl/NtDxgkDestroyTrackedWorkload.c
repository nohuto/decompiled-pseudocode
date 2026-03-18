/*
 * XREFs of NtDxgkDestroyTrackedWorkload @ 0x1C0297CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0049DE8 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0296C14 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 */

__int64 __fastcall NtDxgkDestroyTrackedWorkload(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rdx
  struct _KTHREAD **Current; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  const GUID *v11; // r8
  PVOID P; // [rsp+20h] [rbp-48h] BYREF
  PVOID v14; // [rsp+28h] [rbp-40h] BYREF
  int v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  char v17; // [rsp+40h] [rbp-28h]
  struct DXGDEVICE *v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h]
  struct DXGDEVICE *v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  v4 = 0;
  v15 = -1;
  v16 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v17 = 1;
    v15 = 2207;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2207);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2207LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v19 = *v3;
  v20 = 0LL;
  P = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v5);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v18, v19, Current, &v20);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)&v14,
    HIDWORD(v19),
    Current,
    (struct DXGTRACKEDWORKLOAD **)&P);
  if ( v20 && P )
  {
    if ( DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P) != 1 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v9 + 24) = 123LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v14 )
    DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)v14);
  if ( v18 && _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15, v7);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v15);
  return v4;
}
