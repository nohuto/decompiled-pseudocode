/*
 * XREFs of DxgkCheckSharedResourceAccess @ 0x1C0208520
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006FC4 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007628 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z @ 0x1C0019F60 (--0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C37C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkCheckSharedResourceAccess(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 *v20; // rsi
  __int64 *i; // rdi
  HANDLE CurrentProcessId; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  const GUID *v25; // r8
  _BYTE v26[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v27[16]; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+40h] [rbp-28h] BYREF
  __int64 v29; // [rsp+48h] [rbp-20h]
  char v30; // [rsp+50h] [rbp-18h]
  __int64 v31; // [rsp+78h] [rbp+10h]

  v3 = (__int64 *)a1;
  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2059);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2059LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v31 = *v3;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v26);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  Global = DXGGLOBAL::GetGlobal(v5, v4);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v31, 2);
  if ( ObjectA )
  {
    v16 = *(_QWORD *)(ObjectA + 144);
    if ( v16 )
    {
      DXGPROCESSACCESSLISTMUTEX::DXGPROCESSACCESSLISTMUTEX(
        (DXGPROCESSACCESSLISTMUTEX *)v27,
        *(struct DXGSHAREDRESOURCEACCESS **)(ObjectA + 144));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
      v20 = (__int64 *)(v16 + 48);
      for ( i = *(__int64 **)(v16 + 48); i != v20; i = (__int64 *)*i )
      {
        if ( *((_BYTE *)i + 16) )
          CurrentProcessId = PsGetCurrentProcessId();
        else
          CurrentProcessId = PsGetProcessId((PEPROCESS)i[3]);
        if ( CurrentProcessId == (HANDLE)HIDWORD(v31) )
        {
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v27);
          goto LABEL_13;
        }
      }
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v27);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v23);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, v28);
      return 3221225506LL;
    }
    else
    {
LABEL_13:
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v17);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v18, &EventProfilerExit, v19, v28);
      return 0LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = (unsigned int)v31;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v12);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v28);
    }
    return 3221225485LL;
  }
}
