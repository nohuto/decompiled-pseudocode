/*
 * XREFs of RtlRaiseException @ 0x18006A740
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlGetActiveActivationContext @ 0x18002D830 (RtlGetActiveActivationContext.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180035510 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180053E88 (vDbgPrintExWithPrefixInternal.c)
 *     TpCheckTerminateWorker @ 0x18006D7B0 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x18006ED50 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18006EE58 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x1800712B8 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlpTpImpersonate @ 0x180085538 (RtlpTpImpersonate.c)
 *     RaiseException @ 0x180095360 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A0CB0 (KiRaiseUserExceptionDispatcher.c)
 *     RtlpPossibleDeadlock @ 0x1800E6D78 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F2F44 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x1800F9130 (RtlReportFatalFailure.c)
 *     TppRaiseHandleStatus @ 0x18010F048 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 *     PssNtValidateDescriptor @ 0x180110E90 (PssNtValidateDescriptor.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x18001ECD0 (RtlGetExtendedContextLength2.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x18009FA80 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1800A0FA0 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x1800A1110 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A1610 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A1EE0 (_alloca_probe.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  ULONG64 v1; // rbx
  ULONG v3; // r14d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  void *v7; // rsp
  NTSTATUS v8; // ebx
  ULONG64 v9; // r14
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v10; // rax
  EXCEPTION_RECORD *v11; // rcx
  BOOLEAN v12; // r8
  ULONG ContextLength; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+18h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+20h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0LL;
  v3 = 1048587;
  if ( !NtCurrentPeb()->BeingDebugged )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v3 = 1048651;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        v1 = MEMORY[0x7FFE03D8] | MEMORY[0x7FFE0708] | 0x8000000000000000uLL;
    }
  }
  RtlGetExtendedContextLength2(v3, &ContextLength, v1);
  v4 = ContextLength + 15LL;
  if ( v4 <= ContextLength )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = alloca(v5);
  v7 = alloca(v5);
  v8 = RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v3, &ContextEx, v1);
  RtlpCaptureContext2(&ContextLength);
  v9 = HistoryTable.Entry[11].ImageBase;
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v10 = RtlLookupFunctionEntry(HistoryTable.Entry[11].ImageBase, &ImageBase, &HistoryTable);
  if ( !v10 )
LABEL_14:
    RtlRaiseStatus(v8);
  RtlVirtualUnwind(0, ImageBase, v9, v10, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = (void *)HistoryTable.Entry[11].ImageBase;
  RtlpGuardSynchronizeRestorePc(HistoryTable.Entry[11].ImageBase);
  v11 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v12 = 1;
LABEL_13:
    v8 = ZwRaiseException(v11, (PCONTEXT)&ContextLength, v12);
    goto LABEL_14;
  }
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ContextLength) )
  {
    v12 = 0;
    v11 = ExceptionRecord;
    goto LABEL_13;
  }
  RtlRestoreContext((PCONTEXT)&ContextLength, ExceptionRecord);
}
