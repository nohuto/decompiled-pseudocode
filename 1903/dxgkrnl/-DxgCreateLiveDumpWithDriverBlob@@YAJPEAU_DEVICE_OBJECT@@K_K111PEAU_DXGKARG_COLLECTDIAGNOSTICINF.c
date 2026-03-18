/*
 * XREFs of ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02002C4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 * Callees:
 *     ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C023C508 (-DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLL.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithDriverBlob(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a7)
{
  struct _WD_DEBUG_REPORT *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _WD_DEBUG_REPORT *v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // rax

  v8 = (struct _WD_DEBUG_REPORT *)WdDbgReportCreate(0LL, 432LL);
  v12 = v8;
  if ( v8 )
  {
    v17 = DxgkAddDiagnosticInfoIntoReport(v8, a1, a7);
    if ( v17 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v16, v15, v18);
      *(_QWORD *)(v19 + 24) = 10240LL;
      WdLogEvent5_WdError(v19);
      v17 = -1073741823;
    }
    WdDbgReportComplete(v12);
    return (unsigned int)v17;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = 10228LL;
    WdLogEvent5_WdError(v13);
    return 3221225473LL;
  }
}
