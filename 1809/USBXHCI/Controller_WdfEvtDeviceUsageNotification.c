/*
 * XREFs of Controller_WdfEvtDeviceUsageNotification @ 0x1C005C850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLD @ 0x1C001249C (WPP_RECORDER_SF_qLD.c)
 */

PVOID __fastcall Controller_WdfEvtDeviceUsageNotification(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  int v10; // ecx
  PVOID result; // rax
  int v12; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  WPP_RECORDER_SF_qLD(*(_QWORD *)(v5 + 72), v6, v7, v8, v12);
  v9 = 1 << a2;
  v10 = *(_DWORD *)(v5 + 324);
  if ( a3 )
  {
    *(_DWORD *)(v5 + 324) = v9 | v10;
    return MmLockPagableDataSection(Controller_WdfEvtDeviceAdd);
  }
  else
  {
    result = (PVOID)(v10 & (unsigned int)~v9);
    *(_DWORD *)(v5 + 324) = (_DWORD)result;
  }
  return result;
}
