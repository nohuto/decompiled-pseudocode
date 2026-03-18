/*
 * XREFs of ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02560C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01C0140 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

__int64 __fastcall UpdateDiagnosticAdapterCallback(struct DXGADAPTER *this, UINT *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11);
  v8 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
    {
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v10 + 24) = this;
      *(_QWORD *)(v10 + 32) = v8;
      WdLogEvent5_WdWarning(v10);
      goto LABEL_4;
    }
  }
  else
  {
    DXGADAPTER::UpdateDiagnosticReporting(this, a2);
  }
  LODWORD(v8) = 0;
LABEL_4:
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  return (unsigned int)v8;
}
