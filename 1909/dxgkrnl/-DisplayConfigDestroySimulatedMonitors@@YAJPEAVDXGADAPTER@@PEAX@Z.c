/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D2970
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00D1D90 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *this, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v14[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v15[72]; // [rsp+78h] [rbp-70h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v12 + 24) = 2169LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v5 = a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v13, this, 0LL);
  v7 = COREADAPTERACCESS::AcquireExclusive(&v13, (unsigned int)(v6 + 1));
  if ( v7 >= 0 )
  {
    v7 = MonitorDestroyAllSameTypeSimulatedMonitor((PERESOURCE *)this, *(unsigned int *)a2, v5, *((_BYTE *)a2 + 4) != 0);
    goto LABEL_8;
  }
  if ( v7 != -1073741130 )
  {
LABEL_8:
    v2 = v7;
    goto LABEL_6;
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = this;
  v10[4] = *((int *)this + 70);
  v10[5] = *((unsigned int *)this + 69);
LABEL_6:
  COREACCESS::~COREACCESS((COREACCESS *)v15);
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  return v2;
}
