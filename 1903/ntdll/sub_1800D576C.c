/*
 * XREFs of sub_1800D576C @ 0x1800D576C
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18002DD30 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x180077240 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x18006B200 (RtlReportSilentProcessExit.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA340 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 __fastcall sub_1800D576C(_DWORD **a1)
{
  struct _TEB *v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rsi
  int InformationProcess; // eax
  void (__fastcall *v6)(_DWORD **); // rsi
  int v8; // [rsp+40h] [rbp+8h]

  v2 = NtCurrentTeb();
  if ( **a1 == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit(-1LL, -1073741571);
  }
  else
  {
    v3 = dword_180166018;
    v4 = qword_180165350;
    if ( !dword_180166018 )
    {
      InformationProcess = ZwQueryInformationProcess();
      if ( InformationProcess < 0 )
        RtlRaiseStatus((unsigned int)InformationProcess);
      v3 = v8;
      dword_180166018 = v8;
    }
    v6 = (void (__fastcall *)(_DWORD **))(v3 ^ __ROR8__(v4, 64 - (v3 & 0x3F)));
    if ( v6 )
      v6(a1);
    else
      RtlUnhandledExceptionFilter2(a1, &unk_18011D492);
  }
  ZwTerminateProcess();
  return 0LL;
}
