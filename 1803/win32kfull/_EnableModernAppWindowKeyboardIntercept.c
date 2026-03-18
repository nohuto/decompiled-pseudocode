/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C01F9350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01A3200 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01A32A8 (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  if ( *(_QWORD *)(v6 + 416) != CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) != 0x10
    && !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
  {
    v8 = 5LL;
LABEL_12:
    UserSetLastError(v8, v5);
    return v7;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v12) < 0 || !v12 )
  {
    v8 = 12LL;
    goto LABEL_12;
  }
  if ( a2 )
    return (int)RegisterModernAppThreadForRawKeyboard(v6);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v6);
}
