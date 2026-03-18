/*
 * XREFs of DxgkOpenNtHandleFromName @ 0x1C0253140
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkOpenNtHandleFromName(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // r8
  ULONG64 v5; // rax
  ULONG64 v6; // rdx
  int v7; // ebx
  _QWORD *v8; // r8
  __int64 v9; // rcx
  const GUID *v10; // r8
  int v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  char v14; // [rsp+50h] [rbp-28h]
  __int128 v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-10h]
  __int64 v17; // [rsp+88h] [rbp+10h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v14 = 1;
    v12 = 2075;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2075);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2075LL);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v15 = *(_OWORD *)v5;
  v16 = *(_QWORD *)(v5 + 16);
  LOBYTE(v4) = 1;
  v7 = ObOpenObjectByName(*((_QWORD *)&v15 + 1), g_pDxgkSharedAllocationObjectType, v4, 0LL, v15, 0LL, &v17);
  if ( v7 >= 0 )
  {
    v8 = (_QWORD *)(a1 + 16);
    v6 = MmUserProbeAddress;
    if ( a1 + 16 >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = v17;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12, v6);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v12);
  return (unsigned int)v7;
}
