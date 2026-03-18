/*
 * XREFs of ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F71A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00D0A04 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigDestroySimulatedMonitors(struct DXGADAPTER *this, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v17[40]; // [rsp+48h] [rbp-30h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 2149LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v5 = a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v15, this, 0LL);
  v7 = COREADAPTERACCESS::AcquireExclusive(&v15, (unsigned int)(v6 + 1));
  if ( v7 >= 0 )
  {
    LOBYTE(v11) = *((_BYTE *)a2 + 4) != 0;
    v7 = MonitorDestroyAllSameTypeSimulatedMonitor((PERESOURCE *)this, *(unsigned int *)a2, v5, v11);
    goto LABEL_8;
  }
  if ( v7 != -1073741130 )
  {
LABEL_8:
    v2 = v7;
    goto LABEL_6;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = *((int *)this + 70);
  v12[5] = *((unsigned int *)this + 69);
LABEL_6:
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  return v2;
}
