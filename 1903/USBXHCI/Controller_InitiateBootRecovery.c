/*
 * XREFs of Controller_InitiateBootRecovery @ 0x1C000EBE8
 * Callers:
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 */

void __fastcall Controller_InitiateBootRecovery(_QWORD *a1, char a2)
{
  ULONG_PTR v2; // rax

  if ( (a2 & 0x1C) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 264))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *a1);
    KeBugCheckEx(0x144u, 2uLL, v2, 3uLL, 0LL);
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement(&dword_1C0057A48);
    Controller_InternalReset();
    _InterlockedDecrement(&dword_1C0057A48);
  }
  else if ( (a2 & 2) != 0 )
  {
    ((void (__fastcall *)(__int64, _QWORD))qword_1C0057670)(UcxDriverGlobals, a1[1]);
  }
}
