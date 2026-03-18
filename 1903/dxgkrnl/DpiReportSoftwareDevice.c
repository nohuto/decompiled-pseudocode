/*
 * XREFs of DpiReportSoftwareDevice @ 0x1C017F9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiReportSoftwareDevice(PDRIVER_OBJECT DriverObject, __int64 a2, __int64 a3)
{
  _DWORD *DriverObjectExtension; // rax
  _DWORD *v5; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // rax

  if ( !DriverObject
    || (DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject),
        (v5 = DriverObjectExtension) == 0LL)
    || DriverObjectExtension[4] != 1953656900
    || DriverObjectExtension[5] != 1 )
  {
    LODWORD(v10) = -1073741811;
    v13 = WdLogNewEntry5_WdError(DriverObject, a2, a3);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    goto LABEL_10;
  }
  v6 = IoReportRootDevice(DriverObject);
  v10 = v6;
  if ( v6 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = v10;
LABEL_10:
    WdLogEvent5_WdError(v13);
    return (unsigned int)v10;
  }
  v11 = WdLogNewEntry5_WdEvent(v8);
  *(_QWORD *)(v11 + 24) = v5;
  WdLogEvent5_WdEvent(v11);
  return (unsigned int)v10;
}
