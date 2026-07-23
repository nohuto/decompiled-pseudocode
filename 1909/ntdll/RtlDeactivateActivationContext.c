/*
 * XREFs of RtlDeactivateActivationContext @ 0x18006ED50
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18006EE58 (RtlpFreeActivationContextStackFrame.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __cdecl RtlDeactivateActivationContext(ULONG Flags, ULONG_PTR Cookie)
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

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", Flags);
    RtlRaiseStatus(-1073741811);
  }
  if ( Cookie )
  {
    if ( Cookie >> 60 != 1 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie type 0x%08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie);
      RtlRaiseStatus(-1073741811);
    }
    v3 = NtCurrentTeb();
    if ( ((HIDWORD(Cookie) ^ v3->ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie,
        v3->ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(-1073741811);
    }
    ActivationContextStackPointer = (unsigned __int64 *)v3->ActivationContextStackPointer;
    v5 = *ActivationContextStackPointer;
    if ( *ActivationContextStackPointer )
    {
      if ( (*(_DWORD *)(v5 + 16) & 8) != 0
        && *(_QWORD *)((v5 & -(__int64)((*(_DWORD *)(v5 + 16) & 8) != 0)) + 0x18) == Cookie )
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
          if ( v11 && *(_QWORD *)(v11 + 24) == Cookie )
            break;
          v6 = *(_QWORD *)v6;
          ++v10;
          v11 = v6 ? v6 & -(__int64)((*(_DWORD *)(v6 + 16) & 8) != 0) : 0LL;
        }
        while ( v6 );
        if ( !v6 )
LABEL_32:
          RtlRaiseStatus(-1072365552);
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
          RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(v5 + 8));
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
