/*
 * XREFs of TppCallbackCheckThreadAfterCallback @ 0x18001725C
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlSetThreadSubProcessTag @ 0x180015920 (RtlSetThreadSubProcessTag.c)
 *     TppCheckForTransactions @ 0x180015BA4 (TppCheckForTransactions.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall TppCallbackCheckThreadAfterCallback(__int64 a1)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // [rsp+30h] [rbp-69h] BYREF
  __int64 v5; // [rsp+38h] [rbp-61h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-59h] BYREF

  if ( a1 )
  {
    NtCurrentTeb()->ActivityId = *(_GUID *)(a1 + 232);
    v4 = 0LL;
    if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket && (int)NtSetInformationThread(-2LL, 44LL, &v4, 8LL) >= 0 )
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = v4;
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 && (*(_BYTE *)(a1 + 104) & 1) == 0 )
    {
      RtlDeactivateActivationContextUnsafeFast(a1);
      *(_BYTE *)(a1 + 76) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 80) && (*(_BYTE *)(a1 + 104) & 2) == 0 )
    {
      RtlSetThreadSubProcessTag(0LL);
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    v2 = *(_QWORD *)(a1 + 128);
    if ( v2 && (*(_BYTE *)(v2 + 436) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(a1 + 104) & 4) == 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[0] = *(_QWORD *)(a1 + 88);
        ExceptionRecord.ExceptionInformation[1] = *(_QWORD *)(a1 + 96);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
        v5 = 0LL;
        NtSetInformationThread(-2LL, 5LL, &v5, 8LL);
      }
      v3 = *(_DWORD *)(a1 + 104);
      if ( (v3 & 0x10) == 0 && TppCheckForTransactions() )
      {
        DbgPrintEx(
          84LL,
          0LL,
          "ThreadPool: callback %p(%p) returned with a transaction uncleared\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.NumberParameters = 0;
        ExceptionRecord.ExceptionCode = -1073740003;
        RtlRaiseException(&ExceptionRecord);
        v3 = *(_DWORD *)(a1 + 104);
      }
      if ( (v3 & 0x20) == 0 && NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        DbgPrintEx(
          84LL,
          0LL,
          "ThreadPool: callback %p(%p) returned with the loader lock held\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.NumberParameters = 0;
        ExceptionRecord.ExceptionCode = -1073740002;
        RtlRaiseException(&ExceptionRecord);
        v3 = *(_DWORD *)(a1 + 104);
      }
      if ( (v3 & 0x40) == 0 && NtCurrentTeb()->PreferredLanguages )
      {
        DbgPrintEx(
          84LL,
          0LL,
          "ThreadPool: callback %p(%p) returned with preferred languages set\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.NumberParameters = 0;
        ExceptionRecord.ExceptionCode = -1073740001;
        RtlRaiseException(&ExceptionRecord);
        v3 = *(_DWORD *)(a1 + 104);
      }
      if ( (v3 & 0x80u) == 0 )
      {
        if ( NtCurrentTeb()->SavedPriorityState )
        {
          DbgPrintEx(
            84LL,
            0LL,
            "ThreadPool: callback %p(%p) returned with background priorities set\n",
            *(const void **)(a1 + 88),
            *(const void **)(a1 + 96));
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          ExceptionRecord.NumberParameters = 0;
          ExceptionRecord.ExceptionCode = -1073740000;
          RtlRaiseException(&ExceptionRecord);
        }
      }
    }
  }
}
