/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C02213C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01C4F00 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01C4FD4 (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  if ( *(_QWORD *)(v8 + 424) != CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) != 0x10
    && !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
  {
    v10 = 5LL;
LABEL_12:
    UserSetLastError(v10, v5, v6, v7);
    return v9;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v14) < 0 || !v14 )
  {
    v10 = 12LL;
    goto LABEL_12;
  }
  if ( a2 )
    return (int)RegisterModernAppThreadForRawKeyboard(v8);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v8);
}
