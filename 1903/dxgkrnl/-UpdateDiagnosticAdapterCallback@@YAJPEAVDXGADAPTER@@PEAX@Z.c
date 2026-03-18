/*
 * XREFs of ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C028C310
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01EF704 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

__int64 __fastcall UpdateDiagnosticAdapterCallback(struct DXGADAPTER *this, UINT *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v13[64]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v14[72]; // [rsp+68h] [rbp-60h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((__int64)v12, 0xFFFFFFFFLL, v4);
  v9 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741130 )
    {
      v11 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v11 + 24) = this;
      *(_QWORD *)(v11 + 32) = v9;
      WdLogEvent5_WdWarning(v11);
      goto LABEL_4;
    }
  }
  else
  {
    DXGADAPTER::UpdateDiagnosticReporting(this, a2);
  }
  LODWORD(v9) = 0;
LABEL_4:
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return (unsigned int)v9;
}
