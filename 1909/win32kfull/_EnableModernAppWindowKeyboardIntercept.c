/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C0239570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D8170 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D8218 (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-18h]
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  if ( *(_QWORD *)(v8 + 416) != CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) != 0x10
    && !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
  {
    v10 = 5LL;
LABEL_12:
    UserSetLastError(v10, v5, v6, v7);
    return v9;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v16) < 0 || !v16 )
  {
    v10 = 12LL;
    goto LABEL_12;
  }
  v15 = *((_QWORD *)&gObjDummyLock + 2);
  v14 = gObjDummyLock;
  if ( v2 )
    return (int)RegisterModernAppThreadForRawKeyboard(v8);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v8);
}
