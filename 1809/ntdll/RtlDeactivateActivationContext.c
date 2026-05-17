/*
 * XREFs of RtlDeactivateActivationContext @ 0x1800766F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     RtlpFreeActivationContextStackFrame @ 0x1800767F8 (RtlpFreeActivationContextStackFrame.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 */

void __fastcall RtlDeactivateActivationContext(int a1, unsigned __int64 a2)
{
  struct _TEB *v3; // r9
  unsigned __int64 *ActivationContextStackPointer; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(51, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", a1);
    RtlRaiseStatus(3221225485LL);
  }
  if ( a2 )
  {
    if ( a2 >> 60 != 1 )
    {
      DbgPrintEx(51, 0, "SXS: %s() called with invalid cookie type 0x%08Ix\n", "RtlDeactivateActivationContext", a2);
      RtlRaiseStatus(3221225485LL);
    }
    v3 = NtCurrentTeb();
    if ( ((HIDWORD(a2) ^ v3->ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        a2,
        v3->ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(3221225485LL);
    }
    ActivationContextStackPointer = (unsigned __int64 *)v3->ActivationContextStackPointer;
    v5 = *ActivationContextStackPointer;
    if ( *ActivationContextStackPointer )
    {
      if ( (*(_DWORD *)(v5 + 16) & 8) != 0
        && *(_QWORD *)((v5 & -(__int64)((*(_DWORD *)(v5 + 16) & 8) != 0)) + 0x18) == a2 )
      {
        v6 = *ActivationContextStackPointer;
      }
      else
      {
        v6 = *(_QWORD *)v5;
        v10 = 0;
        if ( *(_QWORD *)v5 )
          v11 = v6 & -(__int64)((*(_DWORD *)(v6 + 16) & 8) != 0);
        else
          v11 = 0LL;
        if ( !v6 )
          goto LABEL_32;
        do
        {
          if ( v11 && *(_QWORD *)(v11 + 24) == a2 )
            break;
          v6 = *(_QWORD *)v6;
          ++v10;
          v11 = v6 ? v6 & -(__int64)((*(_DWORD *)(v6 + 16) & 8) != 0) : 0LL;
        }
        while ( v6 );
        if ( !v6 )
LABEL_32:
          RtlRaiseStatus(3222601744LL);
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = v10;
        ExceptionRecord.NumberParameters = 3;
        ExceptionRecord.ExceptionInformation[1] = v6;
        ExceptionRecord.ExceptionInformation[2] = v5;
        ExceptionRecord.ExceptionCode = -1072365553;
        RtlRaiseException(&ExceptionRecord);
      }
      v7 = *(_QWORD *)v6;
      do
      {
        v8 = *(_DWORD *)(v5 + 16);
        v9 = *(_QWORD *)v5;
        if ( (v8 & 1) != 0 )
        {
          RtlReleaseActivationContext(*(volatile signed __int32 **)(v5 + 8));
          v8 = *(_DWORD *)(v5 + 16);
        }
        if ( (v8 & 8) != 0 )
          RtlpFreeActivationContextStackFrame(ActivationContextStackPointer, v5);
        v5 = v9;
      }
      while ( v9 != v7 );
      *ActivationContextStackPointer = v7;
    }
  }
}
