/*
 * XREFs of NtUserGetKeyboardLayoutName @ 0x1C01305C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutName(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4) + 432);
  v7 = 0;
  if ( v6 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_DWORD *)&String.Length = *(_DWORD *)a1;
    String.Buffer = *(PWSTR *)(a1 + 8);
    ProbeForWrite(String.Buffer, String.MaximumLength, 2u);
    if ( (*(_WORD *)(v6 + 42) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v6 + 40), 0x10u, &String);
    }
    else
    {
      if ( String.MaximumLength < 0x12u
        || RtlIntegerToUnicode(*(_DWORD *)(v6 + 112), 0x10u, 0xFFFFFFF8, String.Buffer) < 0 )
      {
        UserSetLastError(87LL, v8, v9, v10);
        goto LABEL_11;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v7 = 1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
