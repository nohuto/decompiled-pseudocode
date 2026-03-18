/*
 * XREFs of DxgkCbReportDiagnostic @ 0x1C0048FD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCbReportDiagnostic(__int64 a1, unsigned int *a2, __int64 a3)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DxgAdapter; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax

  if ( KeGetCurrentIrql() > 2u )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v4[3] = 275LL;
    v4[4] = 20LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
    return 3221225485LL;
  }
  v5 = 0;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = 1LL;
LABEL_5:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  DxgAdapter = DpiGetDxgAdapter(a1, (__int64)a2, a3);
  if ( !DxgAdapter )
  {
    v6 = WdLogNewEntry5_WdError(v8, v7, 0LL);
    *(_QWORD *)(v6 + 24) = 2LL;
    goto LABEL_5;
  }
  v10 = *a2;
  if ( !(_DWORD)v10 )
  {
    v6 = WdLogNewEntry5_WdError(v10, v7, DxgAdapter);
    *(_QWORD *)(v6 + 24) = 3LL;
    goto LABEL_5;
  }
  if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
  {
    v6 = WdLogNewEntry5_WdError(v10, v7, DxgAdapter);
    *(_QWORD *)(v6 + 24) = *a2;
    *(_QWORD *)(v6 + 32) = 4LL;
    goto LABEL_5;
  }
  v11 = a2[1];
  if ( !(_DWORD)v11 )
  {
    v6 = WdLogNewEntry5_WdError(v10, v11, DxgAdapter);
    *(_QWORD *)(v6 + 24) = 6LL;
    goto LABEL_5;
  }
  if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
  {
    v6 = WdLogNewEntry5_WdError(v10, v11, DxgAdapter);
    *(_QWORD *)(v6 + 24) = a2[1];
    *(_QWORD *)(v6 + 32) = 7LL;
    goto LABEL_5;
  }
  do
  {
    if ( _bittest((const int *)&v10, v5) )
      break;
    ++v5;
  }
  while ( v5 < 2 );
  if ( v5 >= 2 )
  {
    v6 = WdLogNewEntry5_WdError(v10, v11, DxgAdapter);
    *(_QWORD *)(v6 + 24) = *a2;
    *(_QWORD *)(v6 + 32) = 5LL;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(DxgAdapter + 4LL * v5 + 4272) & *(_DWORD *)(DxgAdapter + 4LL * v5 + 4280) & (unsigned int)v11) == 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v11, DxgAdapter);
    v12[3] = *a2;
    v12[4] = a2[1];
    v12[5] = 8LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  return ((__int64 (__fastcall *)(unsigned int *))(&DiagnosticCategoryHandler)[v5])(a2);
}
