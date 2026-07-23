/*
 * XREFs of RtlRaiseException @ 0x18006A4F0
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlGetActiveActivationContext @ 0x18002D830 (RtlGetActiveActivationContext.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 *     TpCheckTerminateWorker @ 0x18006D560 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x18006EB00 (RtlDeactivateActivationContext.c)
 *     sub_18006EC08 @ 0x18006EC08 (sub_18006EC08.c)
 *     sub_180071068 @ 0x180071068 (sub_180071068.c)
 *     sub_180084E98 @ 0x180084E98 (sub_180084E98.c)
 *     sub_180094CC0 @ 0x180094CC0 (sub_180094CC0.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A0500 (KiRaiseUserExceptionDispatcher.c)
 *     sub_1800E6C88 @ 0x1800E6C88 (sub_1800E6C88.c)
 *     sub_1800F2E64 @ 0x1800F2E64 (sub_1800F2E64.c)
 *     sub_1800F9050 @ 0x1800F9050 (sub_1800F9050.c)
 *     sub_18010EF18 @ 0x18010EF18 (sub_18010EF18.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 *     PssNtValidateDescriptor @ 0x180110D60 (PssNtValidateDescriptor.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x18001ECD0 (RtlGetExtendedContextLength2.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x18009F2D0 (ZwRaiseException.c)
 *     sub_1800A07F0 @ 0x1800A07F0 (sub_1800A07F0.c)
 *     sub_1800A0960 @ 0x1800A0960 (sub_1800A0960.c)
 *     nullsub_2 @ 0x1800A0E60 (nullsub_2.c)
 *     __chkstk @ 0x1800A1730 (__chkstk.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
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
  sub_1800A07F0(&ContextLength);
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
  ExceptionRecord->ExceptionAddress = (PVOID)HistoryTable.Entry[11].ImageBase;
  nullsub_2(HistoryTable.Entry[11].ImageBase);
  v11 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v12 = 1;
LABEL_13:
    v8 = ZwRaiseException(v11, (PCONTEXT)&ContextLength, v12);
    goto LABEL_14;
  }
  if ( !(unsigned __int8)sub_18006A670(ExceptionRecord, &ContextLength) )
  {
    v12 = 0;
    v11 = ExceptionRecord;
    goto LABEL_13;
  }
  sub_1800A0960(&ContextLength, ExceptionRecord);
}
